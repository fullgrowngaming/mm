#ifndef Z_EN_INVADEPOH_H
#define Z_EN_INVADEPOH_H

#include <global.h>

struct EnInvadepoh;

typedef void (*EnInvadepohInitFunc)(struct EnInvadepoh*, GlobalContext*);
typedef void (*EnInvadepohDestroyFunc)(struct EnInvadepoh*, GlobalContext*);
typedef void (*EnInvadepohActionFunc)(struct EnInvadepoh*, GlobalContext*);

typedef struct EnInvadePohStruct{
    /* 0x000 */ s32 unk0;
    /* 0x004 */ s8 unk4;
    /* 0x005 */ char unk5[0x3];
    /* 0x008 */ s32 unk8;
    /* 0x00C */ s8 unkC;
    /* 0x00D */ s8 unkD;
    /* 0x00E */ s8 unkE;
    /* 0x00F */ s8 unkF;
} EnInvadePohStruct; // size = 0x10;

typedef struct EnInvadePohStructUnk324 {
    /* 0x000 */ EnInvadePohStruct unk0;
    /* 0x010 */ EnInvadePohStruct unk10;
    /* 0x020 */ s16 unk20; //possibly vec3s?
    /* 0x022 */ s16 unk22;
    /* 0x024 */ s16 unk24;
    /* 0x026 */ Vec3s unk26;
    /* 0x02C */ s16 unk2C;
    /* 0x02E */ u16 unk2E;
    /* 0x030 */ f32 unk30;
    /* 0x034 */ f32 unk34;
    /* 0x038 */ f32 unk38;
    /* 0x03C */ f32 unk3C;
    /* 0x040 */ s16 unk40;
    /* 0x042 */ s16 unk42;
    /* 0x044 */ f32 unk44;
    /* 0x048 */ s16 unk48;
    /* 0x04A */ char unk4A[0x6];
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
    /* 0x306 */ s16 unk306;
    /* 0x308 */ s8 unk308;
    /* 0x309 */ s8 unk309;
    /* 0x30A */ s8 unk30A;
    /* 0x30B */ s8 unk30B;
    /* 0x30C */ s32 unk30C;
    /* 0x310 */ char unk310[0x10];
    /* 0x320 */ f32 unk320;
    /* 0x324 */ EnInvadePohStructUnk324* EnInvadePohStructUnk324; // not sure if pointer
    /* 0x328 */ char unk328[0xB];
    /* 0x333 */ s8 unk333;
    /* 0x334 */ char unk334[0xF];
    /* 0x343 */ s8 unk343;
    /* 0x344 */ Vec3s unk344;
    /* 0x34A */ s16 unk34A;
    /* 0x34C */ s16 unk34C;
    /* 0x34E */ s16 unk34E;
    /* 0x350 */ u16 unk350;
    /* 0x352 */ char unk352[0x2];
    /* 0x354 */ f32 unk354;
    /* 0x358 */ f32 unk358;
    /* 0x35C */ char unk35A[0xA];
    /* 0x366 */ s16 unk366;
    /* 0x368 */ f32 unk368;
    /* 0x36C */ s16 unk36C;
    /* 0x36E */ char unk36E[0x2];
    /* 0x370 */ s16 unk370;
    /* 0x372 */ char unk372[0x2]; 
    /* 0x374 */ s8 unk374;
    /* 0x375 */ s8 unk375;
    /* 0x376 */ u16 unk376;
    /* 0x378 */ s8 unk378;
    /* 0x379 */ s8 unk379;
    /* 0x37A */ char unk37A[0xF];
    /* 0x389 */ u8 unk389;
    /* 0x38A */ s8 unk38A;
    /* 0x38B */ s8 unk38B;
    /* 0x38C */ u8 unk38C;
    /* 0x38D */ u8 unk38D;
    /* 0x390 */ Vec3f unk390; // float on boundary
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
