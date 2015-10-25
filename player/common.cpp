bool PlayerFlipped()
{
	return BTST(v_player->status, ObjStatus_Flip);
}

bool PlayerInAir()
{
	return BTST(v_player->status, ObjStatus_Air);
}

bool PlayerUnderwater()
{
	return BTST(v_player->status, ObjStatus_Underwater);
}

bool PlayerDead()
{
	return v_player->routine >= PlayerRoutine_Dead;
}

bool PlayerControllable()
{
	return v_player->routine < PlayerRoutine_Hurt;
}

void SetPlayerHurt()
{
	v_player->routine = PlayerRoutine_Hurt;
}

void SetPlayerDead()
{
	v_player->routine = PlayerRoutine_Dead;
}

void SetPlayerAir()
{
	BSET(v_player->status, ObjStatus_Air);
}

void SetPlayerAnim_Drowning()
{
	v_player->anim = 0x17;
}

//                       a0             a2
void HurtSonic(Object* player, Object* obj)
{
	// If he has no shield..
	if(!v_shield)
	{
		// if he has rings, make the rings spill out
		if(v_rings)
		{
			if(auto ringLoss = FindFreeObj())
			{
				ringLoss->id = ID_RingLoss;
				ringLoss->x = player->x;
				ringLoss->y = player->y;
			}
		}
		else if(!f_debugmode) // otherwise, kill him (if debug mode isn't on)
		{
			KillSonic(player, obj);
			return;
		}
	}

	// Hurt sonic
	v_shield = 0;
	SetPlayerHurt();
	Sonic_ResetOnFloor(player);
	SetPlayerAir();

	// Bounce him away
	if(PlayerUnderwater())
	{
		player->velY = -0x200;
		player->velX = -0x100;
	}
	else
	{
		player->velY = -0x400;
		player->velX = -0x200;
	}

	// Make him bounce right if he's to the right of the object
	if(player->x > obj->x)
		player->velX = -player->velX;

	player->inertia = 0;
	player->anim = Anim::Hurt;
	VAR_W(player, Player_InvincibilityW) = 120; // 2 seconds of invincibility;

	// Bwah
	if(obj->id == ID_Spikes || obj->id == ID_Harpoon)
		PlaySound_Special(SFX_HitSpikes);
	else
		PlaySound_Special(SFX_Death);
}

//                       a0             a2
void KillSonic(Object* player, Object* killer)
{
	if(v_debuguse)
		return;

	// Set him up to do the death bounce
	v_invinc = 0;
	SetPlayerDead();
	Sonic_ResetOnFloor(player);
	SetPlayerAir();
	player->velY = -0x700;
	player->velX = 0;
	player->inertia = 0;
	VAR_W(player, 0x38) = player->y;
	player->anim = Anim::Death;
	BSET(player->gfx, 0x80);

	// Bwah
	if(killer->id == ID_Spikes)
		PlaySound_Special(SFX_HitSpikes);
	else
		PlaySound_Special(SFX_Death);
}