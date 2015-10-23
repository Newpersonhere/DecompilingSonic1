// =====================================================================================================================
// Palette Types and Data
// =====================================================================================================================

namespace Palette
{
	enum
	{
		SegaBG,     // 0x00
		Title,      // 0x01
		LevelSel,   // 0x02
		Sonic,      // 0x03
		GHZ,        // 0x04
		LZ,         // 0x05
		MZ,         // 0x06
		SLZ,        // 0x07
		SYZ,        // 0x08
		SBZ1,       // 0x09
		Special,    // 0x0A
		LZWater,    // 0x0B
		SBZ3,       // 0x0C
		SBZ3Water,  // 0x0D
		SBZ2,       // 0x0E
		LZSonWater, // 0x0F
		SBZ3SonWat, // 0x10
		SSResult,   // 0x11
		Continue,   // 0x12
		Ending,     // 0x13
	};
};

namespace Colors
{
	enum
	{
		Black =   0x000,
		White =   0xEEE,
		Blue =    0xE00,
		Green =   0x0E0,
		Red =     0x00E,
		Yellow =  Green + Red,
		Aqua =    Green + Blue,
		Magenta = Blue + Red,
	};
};

const ushort Pal_SegaBG[0x40] =
{
	0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,
	0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,
	0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,
	0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,0x0EEE,
};

const ushort Pal_Title[0x40] =
{
	0x0A20,0x0600,0x0C00,0x0E44,0x0E66,0x0E88,0x0EEE,0x00AE,0x006A,0x0026,0x00EE,0x0EAA,0x000C,0x0006,0x0002,0x0000,
	0x0000,0x0C00,0x0E22,0x0E44,0x0E66,0x0E88,0x0EEE,0x0AAA,0x0888,0x0666,0x0444,0x0248,0x08AE,0x068C,0x0000,0x000E,
	0x0800,0x0002,0x0EEE,0x0026,0x0048,0x006C,0x008E,0x00CE,0x0C42,0x0E86,0x0ECA,0x0EEC,0x0040,0x0060,0x00A4,0x00E8,
	0x0C82,0x0A02,0x0C42,0x0E86,0x0ECA,0x0EEC,0x0EEE,0x0EAC,0x0E8A,0x0E68,0x00E8,0x00A4,0x0002,0x0026,0x006C,0x00CE,
};

const ushort Pal_LevelSel[0x40] =
{
	0x0000,0x0000,0x0002,0x0002,0x0224,0x0224,0x0446,0x0446,0x0224,0x0224,0x0446,0x0668,0x0224,0x0002,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0224,0x0224,0x0446,0x0668,0x0224,0x0446,0x0224,0x0002,0x0224,0x0446,0x0224,0x0000,0x0224,
	0x0000,0x00EE,0x0000,0x0000,0x0000,0x0000,0x00EE,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0EEC,0x0000,0x0000,0x0000,0x0000,0x0EEC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const ushort Pal_Sonic[0x10] =
{
	0x0000,0x0000,0x0822,0x0A44,0x0C66,0x0E88,0x0EEE,0x0AAA,0x0888,0x0444,0x08AE,0x046A,0x000E,0x0008,0x0004,0x00EE,
};


const ushort Pal_GHZ[0x30] =
{
	0x0800,0x0000,0x0242,0x0464,0x0686,0x08C8,0x0EEE,0x0AAA,0x0888,0x0444,0x08EA,0x046A,0x00EE,0x0088,0x0044,0x000E,
	0x0E80,0x0002,0x0EEE,0x0026,0x0048,0x006C,0x008E,0x00CE,0x0A86,0x0E86,0x0EA8,0x0ECA,0x0040,0x0060,0x00A4,0x00E8,
	0x0C82,0x0A02,0x0C42,0x0E86,0x0ECA,0x0EEC,0x0EEE,0x0EAC,0x0E8A,0x0E68,0x00E8,0x00A4,0x0002,0x0026,0x006C,0x00CE,
};

const ushort Pal_LZ[0x30] =
{
	0x0800,0x0000,0x0626,0x0A2A,0x0C4C,0x0E8E,0x0EEE,0x0AAA,0x0888,0x0444,0x08E0,0x0260,0x00EE,0x0088,0x0044,0x000E,
	0x0000,0x0026,0x0048,0x006A,0x028C,0x04CE,0x06EE,0x0000,0x0486,0x0080,0x0040,0x0680,0x0CE6,0x0AC4,0x08A2,0x0EEE,
	0x0000,0x0000,0x0002,0x0024,0x0046,0x0822,0x0A66,0x0EAA,0x0428,0x064A,0x0A8E,0x0AAA,0x0666,0x0222,0x0068,0x0EEE,
};

const ushort Pal_MZ[0x30] =
{
	0x0800,0x0000,0x0626,0x0A2A,0x0C4C,0x0E8E,0x0EEE,0x0AAA,0x0888,0x0444,0x08EA,0x046A,0x00EE,0x0088,0x0044,0x000E,
	0x0A00,0x0202,0x0EEE,0x0624,0x0846,0x0A68,0x0C8A,0x0EAC,0x0040,0x0686,0x08A8,0x0ACA,0x0464,0x0062,0x00A4,0x00E8,
	0x0A00,0x0402,0x0EEE,0x0004,0x0008,0x000E,0x008E,0x00EE,0x0820,0x0A60,0x0C80,0x0EA0,0x00A4,0x00E8,0x0EC0,0x0624,
};

const ushort Pal_SLZ[0x30] =
{
	0x0800,0x0000,0x0260,0x06A0,0x08C0,0x0AE0,0x0EEE,0x0AAA,0x0888,0x0444,0x08EA,0x046A,0x00EE,0x0088,0x0044,0x000E,
	0x0000,0x0222,0x0444,0x0666,0x0888,0x0AAA,0x0CCC,0x06A8,0x0486,0x0264,0x0042,0x0EE0,0x0020,0x000E,0x00EE,0x0EEE,
	0x0000,0x0002,0x0224,0x0446,0x0000,0x0000,0x0022,0x0602,0x0400,0x0A22,0x0A44,0x0A66,0x0000,0x0024,0x0044,0x0000,
};

const ushort Pal_SYZ[0x30] =
{
	0x0800,0x0000,0x0626,0x0A2A,0x0C4C,0x0E8E,0x0EEE,0x0AAA,0x0888,0x0444,0x08EA,0x046A,0x00EE,0x0088,0x0044,0x000E,
	0x0626,0x0000,0x0EEE,0x08AE,0x048C,0x024A,0x0028,0x0006,0x0004,0x06C6,0x0282,0x0040,0x0AC8,0x0684,0x0240,0x0000,
	0x0626,0x0000,0x0648,0x066C,0x08AE,0x0AEE,0x0EEE,0x00EE,0x00AA,0x0066,0x0022,0x000E,0x0404,0x0EEE,0x0E48,0x0202,
};

const ushort Pal_SBZ1[0x30] =
{
	0x0800,0x0000,0x0626,0x0A2A,0x0C4C,0x0E8E,0x0EEE,0x0AAA,0x0888,0x0444,0x08E0,0x0260,0x00EE,0x0088,0x0044,0x000E,
	0x0046,0x0000,0x0EEE,0x0220,0x0442,0x0664,0x0886,0x0CCA,0x0044,0x00EE,0x000E,0x000A,0x0CAA,0x0866,0x0422,0x0006,
	0x0046,0x0000,0x0EEE,0x0002,0x0024,0x0068,0x028A,0x000A,0x000E,0x0CE6,0x008A,0x00CE,0x0EAE,0x0E4E,0x0808,0x0EA0,
};

const ushort Pal_Special[0x40] =
{
	0x0400,0x0000,0x0822,0x0A44,0x0C66,0x0E88,0x0EEE,0x0AAA,0x0888,0x0444,0x08AE,0x046A,0x000E,0x0008,0x0004,0x00EE,
	0x0400,0x0000,0x0024,0x0068,0x00AC,0x02EE,0x0EEE,0x0AAA,0x0888,0x0444,0x0AE4,0x06A2,0x00EE,0x0088,0x0044,0x0000,
	0x0400,0x0000,0x0204,0x0628,0x0A4C,0x0C6E,0x0ECE,0x0800,0x0C42,0x0E86,0x0ECA,0x0EEC,0x0000,0x0EE0,0x0AA0,0x0440,
	0x0400,0x0000,0x0060,0x00A0,0x00C6,0x00EA,0x0AEC,0x0EEA,0x0EE0,0x0AA0,0x0880,0x0660,0x0440,0x0EE0,0x0AA0,0x0440,
};

const ushort Pal_LZWater[0x40] =
{
	0x0000,0x0000,0x0220,0x0442,0x0662,0x0884,0x0EEE,0x0AAA,0x0888,0x0444,0x06AA,0x0266,0x0048,0x0024,0x0002,0x00EE,
	0x0800,0x0000,0x0226,0x022A,0x044C,0x088E,0x0EEE,0x0AAA,0x0888,0x0444,0x06C0,0x0240,0x00EA,0x0084,0x0040,0x000E,
	0x0000,0x0000,0x0020,0x0042,0x0064,0x0286,0x04A8,0x0000,0x0264,0x0040,0x0020,0x0680,0x0CE6,0x0AC4,0x08A2,0x0EEE,
	0x0000,0x0000,0x0000,0x0020,0x0242,0x0240,0x0462,0x0684,0x0224,0x0446,0x0668,0x0026,0x0048,0x006A,0x0464,0x0888,
};

const ushort Pal_SBZ3[0x30] =
{
	0x0800,0x0000,0x0626,0x0A2A,0x0C4C,0x0E8E,0x0EEE,0x0AAA,0x0888,0x0444,0x08E0,0x0260,0x00EE,0x0088,0x0044,0x000E,
	0x0000,0x0444,0x0666,0x0888,0x0AAA,0x0CCC,0x0EEE,0x0000,0x0C8C,0x0A6A,0x0848,0x0ECE,0x0E8C,0x0A48,0x0826,0x0EEE,
	0x0000,0x0000,0x0020,0x0240,0x0462,0x0882,0x0CC6,0x0EEA,0x0282,0x04A4,0x08E8,0x0AAA,0x0666,0x0222,0x0684,0x0EEE,
};

const ushort Pal_SBZ3Water[0x40] =
{
	0x0000,0x0000,0x0A26,0x0C48,0x0E6A,0x0E8C,0x0ECE,0x0CAC,0x0868,0x0646,0x0CAE,0x086C,0x060C,0x0426,0x0004,0x00EE,
	0x0800,0x0000,0x0226,0x022A,0x044C,0x088E,0x0EEE,0x0AAA,0x0888,0x0444,0x06C0,0x0240,0x00EA,0x0084,0x0040,0x000E,
	0x0000,0x0202,0x0404,0x0626,0x0848,0x0A6A,0x0C8C,0x0000,0x0848,0x0626,0x0404,0x0ECE,0x0E8C,0x0A48,0x0826,0x0EEE,
	0x0000,0x0000,0x0000,0x0200,0x0402,0x0644,0x0866,0x0A88,0x0264,0x0486,0x06A8,0x0026,0x0048,0x006A,0x0604,0x0AAA,
};

const ushort Pal_SBZ2[0x30] =
{
	0x0800,0x0000,0x0626,0x0A2A,0x0C4C,0x0E8E,0x0EEE,0x0AAA,0x0888,0x0444,0x08E0,0x0260,0x00EE,0x0088,0x0044,0x000E,
	0x0046,0x0000,0x0EEE,0x0220,0x0442,0x0664,0x0886,0x0CCA,0x0044,0x00EE,0x000E,0x000A,0x0CAA,0x0866,0x0422,0x0006,
	0x0046,0x0000,0x08A8,0x0000,0x0000,0x0020,0x0242,0x0464,0x0EA0,0x0048,0x000A,0x0006,0x0EAE,0x0E4E,0x0808,0x0002,
};

const ushort Pal_LZSonWater[0x10] =
{
	0x0000,0x0000,0x0220,0x0442,0x0662,0x0884,0x0EEE,0x0AAA,0x0888,0x0444,0x06AA,0x0266,0x0048,0x0024,0x0002,0x00EE,
};

const ushort Pal_SBZ3SonWat[0x10] =
{
	0x0000,0x0000,0x0A26,0x0C48,0x0E6A,0x0E8C,0x0ECE,0x0CAC,0x0868,0x0646,0x0CAE,0x086C,0x060C,0x0426,0x0004,0x00EE,
};

const ushort Pal_SSResult[0x40] =
{
	0x0EEE,0x0EAA,0x0EAA,0x00EE,0x00EE,0x00EE,0x08A0,0x0AC0,0x0CE0,0x0EAA,0x0024,0x0068,0x00AC,0x02EE,0x0EEE,0x04C0,
	0x0EEE,0x0000,0x0822,0x0A44,0x0C66,0x0E88,0x0EEE,0x0AAA,0x0888,0x0444,0x08AE,0x046A,0x000E,0x0008,0x0004,0x0000,
	0x0EEE,0x0000,0x0204,0x0628,0x0A4C,0x0C6E,0x0ECE,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0EEE,0x0000,0x0060,0x00A0,0x00C6,0x00EA,0x0AEC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const ushort Pal_Continue[0x20] =
{
	0x0000,0x0000,0x0822,0x0A44,0x0C66,0x0E88,0x0EEE,0x0AAA,0x0888,0x0444,0x08AE,0x046A,0x000E,0x0008,0x0004,0x00EE,
	0x0000,0x0000,0x0424,0x0848,0x0A6A,0x0E8E,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x00EE,0x0088,0x0044,0x0000,
};

const ushort Pal_Ending[0x40] =
{
	0x0E80,0x0000,0x0822,0x0A44,0x0C66,0x0E88,0x0EEE,0x0AAA,0x0888,0x0444,0x08AE,0x046A,0x000E,0x0008,0x0004,0x00EE,
	0x0E80,0x0000,0x0608,0x082A,0x0A4C,0x0C6E,0x0EEE,0x0AAE,0x066C,0x022A,0x08EA,0x046A,0x00EE,0x0088,0x0044,0x000E,
	0x0E80,0x0002,0x0EEE,0x0026,0x0048,0x006C,0x008E,0x00CE,0x0A86,0x0E86,0x0EA8,0x0ECA,0x0040,0x0060,0x00A4,0x00E8,
	0x0C82,0x0A02,0x0C42,0x0E86,0x0ECA,0x0EEC,0x0EEE,0x0EAC,0x0E8A,0x0E68,0x00E8,0x00A4,0x0002,0x0026,0x006C,0x00CE,
};

const ushort Pal_Sega1[6] =
{
	0x0EEE,0x0EEA,0x0EE4,0x0EC0,0x0EE4,0x0EEA,
};

const ushort Pal_Sega2[24] =
{
	0x0EEC,0x0EEA,0x0EEA,0x0EEA,0x0EEA,0x0EEA,0x0EEC,0x0EEA,0x0EE4,0x0EC0,0x0EC0,0x0EC0,0x0EEC,0x0EEA,0x0EE4,0x0EC0,
	0x0EA0,0x0E60,0x0EEA,0x0EE4,0x0EC0,0x0EA0,0x0E80,0x0E00,
};

struct PalPointer
{
	ubyte* palAddr;
	ushort vram;
	ushort numColors;
};

const PalPointer PalPointers[] =
{
	{ Pal_SegaBG,     0xFB00, 0x40 }, // 0x00 - Sega logo
	{ Pal_Title,      0xFB00, 0x40 }, // 0x01 - title screen
	{ Pal_LevelSel,   0xFB00, 0x40 }, // 0x02 - level select
	{ Pal_Sonic,      0xFB00, 0x10 }, // 0x03 - Sonic
	{ Pal_GHZ,        0xFB20, 0x30 }, // 0x04 - GHZ
	{ Pal_LZ,         0xFB20, 0x30 }, // 0x05 - LZ
	{ Pal_MZ,         0xFB20, 0x30 }, // 0x06 - MZ
	{ Pal_SLZ,        0xFB20, 0x30 }, // 0x07 - SLZ
	{ Pal_SYZ,        0xFB20, 0x30 }, // 0x08 - SYZ
	{ Pal_SBZ1,       0xFB20, 0x30 }, // 0x09 - SBZ1
	{ Pal_Special,    0xFB00, 0x40 }, // 0x0A (10) - special stage
	{ Pal_LZWater,    0xFB00, 0x40 }, // 0x0B (11) - LZ underwater
	{ Pal_SBZ3,       0xFB20, 0x30 }, // 0x0C (12) - SBZ3
	{ Pal_SBZ3Water,  0xFB00, 0x40 }, // 0x0D (13) - SBZ3 underwater
	{ Pal_SBZ2,       0xFB20, 0x30 }, // 0x0E (14) - SBZ2
	{ Pal_LZSonWater, 0xFB00, 0x10 }, // 0x0F (15) - LZ Sonic underwater
	{ Pal_SBZ3SonWat, 0xFB00, 0x10 }, // 0x10 (16) - SBZ3 Sonic underwater
	{ Pal_SSResult,   0xFB00, 0x40 }, // 0x11 (17) - special stage results
	{ Pal_Continue,   0xFB00, 0x20 }, // 0x12 (18) - special stage results continue
	{ Pal_Ending,     0xFB00, 0x40 }, // 0x13 (19) - ending sequence
};

const ushort Pal_TitleCyc[] =
{
	0x0C42,0x0E86,0x0ECA,0x0EEC,0x0EEC,0x0C42,0x0E86,0x0ECA,0x0ECA,0x0EEC,0x0C42,0x0E86,0x0E86,0x0ECA,0x0EEC,0x0C42,
};

const ushort Pal_GHZCyc[] =
{
	0x0A86,0x0E86,0x0EA8,0x0ECA,0x0ECA,0x0A86,0x0E86,0x0EA8,0x0EA8,0x0ECA,0x0A86,0x0E86,0x0E86,0x0EA8,0x0ECA,0x0A86,
};

const ushort Pal_LZCyc1[] =
{
	0x0680,0x0CE6,0x0AC4,0x08A2,0x0CE6,0x0AC4,0x08A2,0x0680,0x0AC4,0x08A2,0x0680,0x0CE6,0x08A2,0x0680,0x0CE6,0x0AC4,
};

const ushort Pal_LZCyc2[] = { 0x0AAA,0x0666,0x0222,0x0666,0x0222,0x0AAA,0x0222,0x0AAA,0x0666, };
const ushort Pal_LZCyc3[] = { 0x08A8,0x0464,0x0020,0x0464,0x0020,0x08A8,0x0020,0x08A8,0x0464, };

const ushort Pal_SBZ3Cyc1[] =
{
	0x0ECE,0x0E8C,0x0A48,0x0826,0x0E8C,0x0A48,0x0826,0x0ECE,0x0A48,0x0826,0x0ECE,0x0E8C,0x0826,0x0ECE,0x0E8C,0x0A48,
	0x0EEE,0x0008,0x000E,0x004E,0x008E,0x00EE,0x00EE,0x0EEE,0x0008,0x000E,0x004E,0x008E,0x008E,0x00EE,0x0EEE,0x0008,
	0x000E,0x004E,0x004E,0x008E,0x00EE,0x0EEE,0x0008,0x000E,0x000E,0x004E,0x008E,0x00EE,0x0EEE,0x0008,0x0008,0x000E,
	0x004E,0x008E,0x00EE,0x0EEE,
};

const ushort Pal_SLZCyc[] =
{
	0x0EE0,0x0006,0x0066,0x0AA0,0x000A,0x0022,0x0660,0x000E,0x0066,0x0220,0x000A,0x00AA,0x0660,0x0006,0x00EE,0x0AA0,
	0x0002,0x00AA,
};

const ushort Pal_SYZCyc1[] =
{
	0x00EE,0x00AA,0x0066,0x0022,0x00AA,0x0066,0x0022,0x00EE,0x0066,0x0022,0x00EE,0x00AA,0x0022,0x00EE,0x00AA,0x0066,
};

const ushort Pal_SYZCyc2[] =  { 0x000E,0x0EEE,0x066E,0x0E88,0x0EEE,0x0C00,0x066E,0x0E88, };
const ushort Pal_SBZCyc1[] =  { 0x0044,0x0EA0,0x0044,0x0EA0,0x00E8,0x00E8,0x0044,0x0E4E, };
const ushort Pal_SBZCyc2[] =  { 0x00EE,0x008E,0x000E,0x0008,0x0008,0x000E,0x008E,0x00EE, };
const ushort Pal_SBZCyc3[] =  { 0x000A,0x000A,0x0008,0x0006,0x0004,0x0004,0x0006,0x0008, };
const ushort Pal_SBZCyc4[] =  { 0x0CAA,0x0866,0x0422,0x0CAA,0x0866,0x0422, };
const ushort Pal_SBZCyc5[] =  { 0x000E,0x000E,0x000A,0x0008,0x0006,0x0006,0x0008,0x000A, };
const ushort Pal_SBZCyc6[] =  { 0x0CE6,0x0CE6,0x0AC4,0x08A2,0x0680,0x0680,0x08A2,0x0AC4, };
const ushort Pal_SBZCyc7[] =
{
	0x0EA0,0x0E86,0x0E6A,0x0E4E,0x088E,0x04AE,0x02CE,0x00EE,0x00EE,0x02CE,0x04AE,0x088E,0x0E4E,0x0E6A,0x0E86,0x0EA0,
};
const ushort Pal_SBZCyc8[] =  { 0x0EAE,0x0E4E,0x0808,0x0EAE,0x0E4E, };
const ushort Pal_SBZCyc9[] =  { 0x0EA0,0x0EA0,0x0A64,0x064A,0x000E,0x000E,0x064A,0x0A64, };
const ushort Pal_SBZCyc10[] = { 0x0EEC,0x0AA6,0x0660,0x0EEC,0x0AA6,0x0660, };

const ushort Pal_SSCyc1[] =
{
	0x0400,0x0600,0x0620,0x0624,0x0664,0x0666,0x0600,0x0820,0x0A64,0x0A68,0x0AA6,0x0AAA,0x0800,0x0C42,0x0E86,0x0ECA,
	0x0EEC,0x0EEE,0x0400,0x0420,0x0620,0x0620,0x0864,0x0666,0x0420,0x0620,0x0842,0x0842,0x0A86,0x0AAA,0x0620,0x0842,
	0x0A64,0x0C86,0x0EA8,0x0EEE,
};

const ushort Pal_SSCyc2[] =
{
	0x0EEA,0x0EE0,0x0AA0,0x0880,0x0660,0x0440,0x0EE0,0x0AA0,0x0440,0x0AA0,0x0AA0,0x0AA0,0x0860,0x0860,0x0860,0x0640,
	0x0640,0x0640,0x0400,0x0400,0x0400,0x0AEC,0x06EA,0x04C6,0x02A4,0x0082,0x0060,0x06EA,0x04C6,0x0060,0x04C6,0x04C6,
	0x04C6,0x0484,0x0484,0x0484,0x0442,0x0442,0x0442,0x0400,0x0400,0x0400,0x0ECC,0x0E8A,0x0C68,0x0A46,0x0824,0x0602,
	0x0E8A,0x0C68,0x0602,0x0C68,0x0C68,0x0C68,0x0846,0x0846,0x0846,0x0624,0x0624,0x0624,0x0400,0x0400,0x0400,0x0AEC,
	0x08CA,0x06A8,0x0486,0x0264,0x0042,0x08CA,0x06A8,0x0042,0x06A8,0x06A8,0x06A8,0x0684,0x0684,0x0684,0x0442,0x0442,
	0x0442,0x0400,0x0400,0x0400,0x0EEC,0x0CCA,0x0AA8,0x0886,0x0664,0x0442,0x0CCA,0x0AA8,0x0442,0x0AA8,0x0AA8,0x0AA8,
	0x0864,0x0864,0x0864,0x0642,0x0642,0x0642,0x0400,0x0400,0x0400,
};

// =====================================================================================================================
// Palette Loading
// =====================================================================================================================

// Load into duplicate palette
void PalLoad1(ushort palIdx) // d0
{
	auto pal = &PalPointers[palIdx];
	memcpy(0xFFFF0000 | pal->ram + 0x80, pal->palette, pal->numColors * sizeof(uint));
}

// Load into main palette
void PalLoad2(ushort palIdx) // d0
{
	auto pal = &PalPointers[palIdx];
	memcpy(0xFFFF0000 | pal->ram, pal->palette, pal->numColors * sizeof(uint));
}

// Load into water palette
void PalLoad3_Water(ushort palIdx) // d0
{
	auto pal = &PalPointers[palIdx];
	memcpy(0xFFFF0000 | pal->ram - 0x80, pal->palette, pal->numColors * sizeof(uint));
}

// Load into water duplicate palette
void PalLoad4_Water(ushort palIdx) // d0
{
	auto pal = &PalPointers[palIdx];
	memcpy(0xFFFF0000 | pal->ram - 0x100, pal->palette, pal->numColors * sizeof(uint));
}

// =====================================================================================================================
// Palette Cycling
// =====================================================================================================================

void PaletteCycle()
{
	switch(v_zone)
	{
		case Zone::GHZ:
		case Zone::EndZ: PCycle_GHZ(); break;
		case Zone::LZ:   PCycle_LZ();  break;
		case Zone::MZ:   PCycle_MZ();  break;
		case Zone::SLZ:  PCycle_SLZ(); break;
		case Zone::SYZ:  PCycle_SYZ(); break;
		case Zone::SBZ:  PCycle_SBZ(); break;
		default: assert(false);
	}
}

void PCycle_Title()
{
	PCycle_GHZ_Common(Pal_TitleCyc);
}

void PCycle_GHZ()
{
	PCycle_GHZ_Common(Pal_GHZCyc);
}

void PCycle_GHZ_Common(uint* palette)
{
	if(TimerZero(v_pcyc_time))
	{
		v_pcyc_time = 5;
		auto cycle = v_pcyc_num;
		v_pcyc_num = (v_pcyc_num + 1) & 3;
		memcpy(v_pal_dry + 0x50, palette + (cycle * 8), 8);
	}
}

const ubyte PCycLZ_Seq[8] = { 1, 0, 0, 1, 0, 0, 1, 0 };

void PCycle_LZ()
{
	if(TimerZero(v_pcyc_time))
	{
		v_pcyc_time = 2;
		auto cycle = (v_pcyc_num++) & 3;
		cycle *= 8;
		uint* palette = (v_act == 3) ? Pal_SBZ3Cyc1 : Pal_LZCyc1;
		memcpy(v_pal_dry + 0x56, palette + cycle, 8);
		memcpy(v_pal_water + 0x56, palette + cycle, 8);
	}

	// Conveyor belts
	if(PCycLZ_Seq[v_framecount & 7] != 0)
	{
		auto frame = v_pal_buffer & 3;

		if(f_conveyrev)
		{
			if(TimerNeg(frame))
				frame = 2;
		}
		else
		{
			frame++;

			if(frame == 3)
				frame = 0;
		}

		v_pal_buffer = frame;
		frame *= 6;
		memcpy(v_pal_dry + 0x76, Pal_LZCyc2 + frame, 6);
		memcpy(v_pal_water + 0x76, Pal_LZCyc2 + frame, 6);
	}
}

void PCycle_MZ()
{
}

void PalCycle_SLZ()
{
	if(TimerZero(v_pcyc_time))
	{
		v_pcyc_time = 7;
		auto cycle = v_pcyc_num + 1;

		if(cycle >= 6)
			cycle = 0;

		v_pcyc_num = cycle;
		cycle *= 6;
		memcpy(v_pal_dry + 0x56, Pal_SLZCyc + cycle, 6);
	}
}

void PalCycle_SYZ()
{
	if(TimerZero(v_pcyc_time))
	{
		v_pcyc_time = 5;
		auto cycle = ((v_pcyc_num++) & 3) * 4;
		memcpy(v_pal_dry + 0x6E, Pal_SYZCyc1 + (cycle * 2), 8);
		memcpy(v_pal_dry + 0x76, Pal_SYZCyc2 + cycle, 2);
		memcpy(v_pal_dry + 0x7A, Pal_SYZCyc2 + cycle + 2, 2);
	}
}

void PalCycle_SBZ()
{
	// TODO:
		/*lea	(Pal_SBZCycList1).l,a2
		tst.b	(v_act).w
		beq.s	loc_1ADA
		lea	(Pal_SBZCycList2).l,a2

loc_1ADA:
		lea	(v_pal_buffer).w,a1
		move.w	(a2)+,d1

loc_1AE0:
		subq.b	#1,(a1)
		bmi.s	loc_1AEA
		addq.l	#2,a1
		addq.l	#6,a2
		bra.s	loc_1B06
; ===========================================================================

loc_1AEA:				; XREF: PalCycle_SBZ
		move.b	(a2)+,(a1)+
		move.b	(a1),d0
		addq.b	#1,d0
		cmp.b	(a2)+,d0
		bcs.s	loc_1AF6
		moveq	#0,d0

loc_1AF6:
		move.b	d0,(a1)+
		andi.w	#$F,d0
		add.w	d0,d0
		movea.w	(a2)+,a0
		movea.w	(a2)+,a3
		move.w	(a0,d0.w),(a3)

loc_1B06:				; XREF: PalCycle_SBZ
		dbf	d1,loc_1AE0
		subq.w	#1,(v_pcyc_time).w
		bpl.s	locret_1B64
		lea	(Pal_SBZCyc4).l,a0
		move.w	#1,(v_pcyc_time).w
		tst.b	(v_act).w
		beq.s	loc_1B2E
		lea	(Pal_SBZCyc10).l,a0
		move.w	#0,(v_pcyc_time).w

loc_1B2E:
		moveq	#-1,d1
		tst.b	(f_conveyrev).w
		beq.s	loc_1B38
		neg.w	d1

loc_1B38:
		move.w	(v_pcyc_num).w,d0
		andi.w	#3,d0
		add.w	d1,d0
		cmpi.w	#3,d0
		bcs.s	loc_1B52
		move.w	d0,d1
		moveq	#0,d0
		tst.w	d1
		bpl.s	loc_1B52
		moveq	#2,d0

loc_1B52:
		move.w	d0,(v_pcyc_num).w
		add.w	d0,d0
		lea	(v_pal_dry+$58).w,a1
		move.l	(a0,d0.w),(a1)+
		move.w	4(a0,d0.w),(a1)

locret_1B64:
		rts	*/
}

// Returns 1 while still cycling
int PalCycle_Sega()
{
	return 0;

	// TODO:
		/*tst.b	(v_pcyc_time+1).w
		bne.s	loc_206A
		lea	(v_pal_dry+$20).w,a1
		lea	(Pal_Sega1).l,a0
		moveq	#5,d1
		move.w	(v_pcyc_num).w,d0

loc_2020:
		bpl.s	loc_202A
		addq.w	#2,a0
		subq.w	#1,d1
		addq.w	#2,d0
		bra.s	loc_2020
; ===========================================================================

loc_202A:				; XREF: PalCycle_Sega
		move.w	d0,d2
		andi.w	#$1E,d2
		bne.s	loc_2034
		addq.w	#2,d0

loc_2034:
		cmpi.w	#$60,d0
		bhs.s	loc_203E
		move.w	(a0)+,(a1,d0.w)

loc_203E:
		addq.w	#2,d0
		dbf	d1,loc_202A

		move.w	(v_pcyc_num).w,d0
		addq.w	#2,d0
		move.w	d0,d2
		andi.w	#$1E,d2
		bne.s	loc_2054
		addq.w	#2,d0

loc_2054:
		cmpi.w	#$64,d0
		blt.s	loc_2062
		move.w	#$401,(v_pcyc_time).w
		moveq	#-$C,d0

loc_2062:
		move.w	d0,(v_pcyc_num).w
		moveq	#1,d0
		rts
; ===========================================================================

loc_206A:				; XREF: loc_202A
		subq.b	#1,(v_pcyc_time).w
		bpl.s	loc_20BC
		move.b	#4,(v_pcyc_time).w
		move.w	(v_pcyc_num).w,d0
		addi.w	#$C,d0
		cmpi.w	#$30,d0
		blo.s	loc_2088
		moveq	#0,d0
		rts
; ===========================================================================

loc_2088:				; XREF: loc_206A
		move.w	d0,(v_pcyc_num).w
		lea	(Pal_Sega2).l,a0
		lea	(a0,d0.w),a0
		lea	(v_pal_dry+$04).w,a1
		move.l	(a0)+,(a1)+
		move.l	(a0)+,(a1)+
		move.w	(a0)+,(a1)
		lea	(v_pal_dry+$20).w,a1
		moveq	#0,d0
		moveq	#$2C,d1

loc_20A8:
		move.w	d0,d2
		andi.w	#$1E,d2
		bne.s	loc_20B2
		addq.w	#2,d0

loc_20B2:
		move.w	(a0),(a1,d0.w)
		addq.w	#2,d0
		dbf	d1,loc_20A8

loc_20BC:
		moveq	#1,d0*/
}

struct SSPalCycleData
{
	int delay;
	uint planeAIdx;
	uint planeBOffs;
	uint something;
};

const SSPalCycleData SSPalCycleStuff[] =
{
	// Delay, idx into SSPlaneAOffsets, Plane B Nametable offset, palette offset somethingorother
	{  3, 0, 0x8407, 0x92 },
	{  3, 0, 0x8407, 0x90 },
	{  3, 0, 0x8407, 0x8E },
	{  3, 0, 0x8407, 0x8C },
	{  3, 0, 0x8407, 0x8B },
	{  3, 0, 0x8407, 0x80 },
	{  3, 0, 0x8407, 0x82 },
	{  3, 0, 0x8407, 0x84 },
	{  3, 0, 0x8407, 0x86 },
	{  3, 0, 0x8407, 0x88 },
	{  7, 4, 0x8407, 0x00 },
	{  7, 5, 0x8407, 0x0C },
	{ -1, 6, 0x8407, 0x18 },
	{ -1, 6, 0x8407, 0x18 },
	{  7, 5, 0x8407, 0x0C },
	{  7, 4, 0x8407, 0x00 },
	{  3, 0, 0x8406, 0x88 },
	{  3, 0, 0x8406, 0x86 },
	{  3, 0, 0x8406, 0x84 },
	{  3, 0, 0x8406, 0x82 },
	{  3, 0, 0x8406, 0x81 },
	{  3, 0, 0x8406, 0x8A },
	{  3, 0, 0x8406, 0x8C },
	{  3, 0, 0x8406, 0x8E },
	{  3, 0, 0x8406, 0x90 },
	{  3, 0, 0x8406, 0x92 },
	{  7, 1, 0x8406, 0x24 },
	{  7, 2, 0x8406, 0x30 },
	{ -1, 3, 0x8406, 0x3C },
	{ -1, 3, 0x8406, 0x3C },
	{  7, 2, 0x8406, 0x30 },
	{  7, 1, 0x8406, 0x24 },
};

const ushort SSPlaneAOffsets[][] =
{
	// Plane A Nametable offset, scroll y position
	{ 0x8210, 1 },
	{ 0x8218, 0 },
	{ 0x8218, 1 },
	{ 0x8220, 0 },
	{ 0x8220, 1 },
	{ 0x8228, 0 },
	{ 0x8228, 1 },
};

void PalCycle_SS()
{
	if(f_pause)
		return;

	// Update timer
	if(!TimerZero(v_palss_time))
		return;

	auto cycleData = SSPalCycleStuff[v_palss_num & 31];
	v_palss_num++;
	v_palss_time = (cycleData.delay < 0) ? 511 : cycleData.delay;
	v_FFFFF7A0 = cycleData.planeAIdx; // this variable has something to do with the BG animation

	// Handle animating the background tiles (bird/fish transformation)
	auto planeAOffset = SSPlaneAOffsets[cycleData.planeAIdx];
	VDP_COMMAND(planeAOffset[0]);
	v_scrposy_dup = planeAOffset[1];
	VDP_COMMAND(cycleData.planeBOffs);
	VDP_COMMAND(0x40000010);
	VDP_DATA(v_scrposy_dup);

	// Handle animating the palette.... somehow
	auto something = cycleData.something;

	if(something & 0x80)
	{
		memcpy(v_pal_dry + 0x4E, Pal_SSCyc1 + something, 12);
		return;
	}

	auto src = Pal_SSCyc2 + (something < 0x8A ? v_FFFFF79E : v_FFFFF79E + 1) * 0x2A; // NO idea what this variable is
	something &= 0x7E;

	if(something != 0)
		memcpy(v_pal_dry + 0x6E, src, 12);

	src += 12;
	auto dest = v_pal_dry + 0x5A;

	if(something >= 10)
	{
		something -= 10;
		dest = v_pal_dry + 0x7A;
	}

	memcpy(dest, src + (something * 3), 6);
}

// =====================================================================================================================
// Palette Fading (to/from black/white)
// =====================================================================================================================

void PaletteFadeIn()
{
	v_pfade_start = 0;
	v_pfade_size = 64;
	PalFadeIn_Alt();
}

void PalFadeIn_Alt()
{
	auto palette = v_pal_dry + v_pfade_start;

	for(int i = 0; i < v_pfade_size; i++)
		palette[i] = Colors::Black;

	for(int i = 0; i < 16; i++)
	{
		WaitForVBlank(VBlank_PaletteFade);
		FadeIn_FromBlack();
		RunPLC();
	}
}

void FadeIn_FromBlack()
{
	auto cur = v_pal_dry + v_pfade_start;
	auto dest = v_pal_dry_dup + v_pfade_start;

	for(int i = 0; i < v_pfade_size; i++)
		FadeIn_AddColour(cur++, dest++);

	if(v_zone == Zone::LZ)
	{
		auto cur = v_pal_water + v_pfade_start;
		auto dest = v_pal_water_dup + v_pfade_start;

		for(int i = 0; i < v_pfade_size; i++)
			FadeIn_AddColour(cur++, dest++);
	}
}

void FadeIn_AddColour(ushort* cur, ushort* dest)
{
	auto destColor = *dest;
	auto curColor = *cur;

	if(curColor != destColor)
	{
		auto tmpColor = curColor + 0x200; // blue

		if(tmpColor <= destColor)
			*cur = tmpColor;
		else
		{
			tmpColor = curColor + 0x20; // green

			if(tmpColor <= destColor)
				*cur = tmpColor;
			else
				*cur += 2; // red
		}
	}
}

void PaletteFadeOut()
{
	v_pfade_start = 0;
	v_pfade_size = 64;

	for(int i = 0; i < 16; i++)
	{
		WaitForVBlank(VBlank_PaletteFade);
		FadeOut_ToBlack();
		RunPLC();
	}
}

void FadeOut_ToBlack()
{
	auto palette = v_pal_dry + v_pfade_start;

	for(int i = 0; i < v_pfade_size; i++)
		FadeOut_DecColour(palette++);

	palette = v_pal_water + v_pfade_start;

	for(int i = 0; i < v_pfade_size; i++)
		FadeOut_DecColour(palette++);
}

void FadeOut_DecColour(ushort* cur)
{
	auto curColor = *cur;

	if(curColor != 0)
	{
		if(curColor & 0x0E)
			*cur -= 2; // red
		else if(curColor & 0xE0)
			*cur -= 0x20; // green
		else if(curColor & 0xE00)
			*cur -= 0x200; // blue
	}
}

void PaletteWhiteIn()
{
	v_pfade_start = 0;
	v_pfade_size = 64;

	auto palette = v_pal_dry + v_pfade_start;

	for(int i = 0; i < v_pfade_size; i++)
		*palette++ = Colors::White;

	for(int i = 0; i < 16; i++)
	{
		WaitForVBlank(VBlank_PaletteFade);
		WhiteIn_FromWhite();
		RunPLC();
	}
}

void WhiteIn_FromWhite()
{
	auto cur = v_pal_dry + v_pfade_start;
	auto dest = v_pal_dry_dup + v_pfade_start;

	for(int i = 0; i < v_pfade_size; i++)
		WhiteIn_DecColour(cur++, dest++);

	if(v_zone == Zone::LZ)
	{
		auto cur = v_pal_water + v_pfade_start;
		auto dest = v_pal_water_dup + v_pfade_start;

		for(int i = 0; i < v_pfade_size; i++)
			WhiteIn_DecColour(cur++, dest++);
	}
}

void WhiteIn_DecColour(ushort* cur, ushort* dest)
{
	auto destColor = *dest;
	auto curColor = *cur;

	if(curColor != destColor)
	{
		if(curColor & 0xE00 != 0)
		{
			auto tmpColor = curColor - 0x200;

			if(tmpColor >= destColor)
			{
				*cur = tmpColor;
				return;
			}
		}

		if(curColor & 0xE0 != 0)
		{
			auto tmpColor = curColor - 0x20;

			if(tmpColor >= destColor)
			{
				*cur = tmpColor;
				return;
			}
		}

		*cur -= 2;
	}
}

void PaletteWhiteOut()
{
	v_pfade_start = 0;
	v_pfade_size = 64;

	for(int i = 0; i < 16; i++)
	{
		WaitForVBlank(VBlank_PaletteFade);
		WhiteOut_ToWhite();
		RunPLC();
	}
}

void WhiteOut_ToWhite()
{
	auto palette = v_pal_dry + v_pfade_start;

	for(int i = 0; i < v_pfade_size; i++)
		WhiteOut_AddColour(palette++);

	palette = v_pal_water + v_pfade_start;

	for(int i = 0; i < v_pfade_size; i++)
		WhiteOut_AddColour(palette++);
}

void WhiteOut_AddColour(ushort* cur)
{
	auto curColor = *cur;

	if(curColor != Colors::White)
	{
		auto tmpColor = curColor & 0x0E; // red

		if(tmpColor != Colors::Red)
			*cur += 2;
		else
		{
			tmpColor = curColor & 0xE0; // green

			if(tmpColor != Colors::Green)
				*cur += 0x20;
			else
			{
				tmpColor = curColor & 0xE00; // blue

				if(tmpColor != Colors::Blue)
					*cur += 0x200;
			}
		}
	}
}