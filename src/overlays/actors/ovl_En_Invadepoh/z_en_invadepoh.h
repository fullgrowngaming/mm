#ifndef Z_EN_INVADEPOH_H
#define Z_EN_INVADEPOH_H

#include <global.h>

struct EnInvadepoh;

typedef void (*EnInvadepohInitFunc)(struct EnInvadepoh*, GlobalContext*);
typedef void (*EnInvadepohDestroyFunc)(struct EnInvadepoh*, GlobalContext*);
typedef void (*EnInvadepohActionFunc)(struct EnInvadepoh*, GlobalContext*);

typedef struct EnInvadePohStructUnk324 {
    /* 0x000 */ char unk0[0x26];
    /* 0x026 */ u16 unk26;
    /* 0x028 */ u16 unk28;
    /* 0x02A */ u16 unk2A;
    /* 0x02C */ u16 unk2C;
    /* 0x02E */ u16 unk2E;
    /* 0x030 */ f32 unk30;
    /* 0x034 */ char unk34[0x1C];
} EnInvadePohStructUnk324; // size = 0x50

typedef struct EnInvadepoh {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime skelAnime;
    /* 0x188 */ Vec3s limbDrawTable[14];
    /* 0x1DC */ char unk1AC[0x36];
    /* 0x212 */ Vec3s transitionDrawTable[14];
    /* 0x266 */ char unk266[0x36];
    /* 0x29C */ s8 unk29C;
    /* 0x29D */ char unk29D[0x3];
    /* 0x2A0 */ ColliderCylinder collider;
    /* 0x2EC */ EnInvadepohActionFunc actionFunc;
    /* 0x2F0 */ s16 unk2F0;
    /* 0x2F2 */ s16 unk2F2;
    /* 0x2F4 */ s8 unk2F4;
    /* 0x2F5 */ char unk2F5[0xF];
    /* 0x304 */ s16 unk304;
    /* 0x306 */ char unk306[0x2];
    /* 0x308 */ s8 unk308;
    /* 0x309 */ char unk309[0x3];
    /* 0x30C */ s32 unk30C;
    /* 0x310 */ char unk310[0x10];
    /* 0x320 */ f32 unk320;
    /* 0x324 */ EnInvadePohStructUnk324* EnInvadePohStructUnk324; // not sure if pointer
    /* 0x328 */ char unk328[0x28];
    /* 0x350 */ u16 unk350;
    /* 0x352 */ char unk352[0x2];
    /* 0x354 */ f32 unk354;
    /* 0x358 */ char unk358[0x18];
    /* 0x370 */ u16 unk370;
    /* 0x372 */ char unk372[0x2]; 
    /* 0x374 */ s16 unk374;
    /* 0x376 */ s16 unk376;
    /* 0x378 */ s8 unk378;
    /* 0x379 */ s8 unk379;
    /* 0x37A */ char unk37A[0xF];
    /* 0x389 */ u8 unk389;
    /* 0x38A */ u8 unk38A;
    /* 0x38B */ u8 unk38B;
    /* 0x38C */ u8 unk38C;
    /* 0x38D */ u8 unk38D;
    /* 0x38E */ char unk38E[0xE];
    /* 0x39C */ f32 unk39C;
    /* 0x3A0 */ f32 unk3A0;
    /* 0x3A4 */ f32 unk3A4;
    /* 0x3A8 */ char unk3A8[0x2];
    /* 0x3AA */ u16 unk3AA;
    /* 0x3AC */ s8 unk3AC;
    /* 0x3AD */ char unk3AE[0xF];
    /* 0x3BC */ s8 unk3BC;
    /* 0x3BD */ char unk3BD[0x3];
} EnInvadepoh; // size = 0x3C0

extern const ActorInit En_Invadepoh_InitVars;

#endif // Z_EN_INVADEPOH_H
