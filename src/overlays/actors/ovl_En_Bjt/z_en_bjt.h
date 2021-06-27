#ifndef Z_EN_BJT_H
#define Z_EN_BJT_H

#include <global.h>

struct EnBjt;

typedef void (*EnBjtActionFunc)(struct EnBjt*, GlobalContext*);

typedef struct EnBjt {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime skelAnime;
    /* 0x188 */ EnBjtActionFunc actionFunc;
    /* 0x18C */ ColliderCylinder collider;
    /* 0x1D8 */ u8 unk1D8;
    /* 0x1D9 */ char unk1DC[0x7];
    /* 0x1E0 */ Vec3s limbDrawTbl[7];
    /* 0x20A */ Vec3s transitionDrawTbl[7];
    /* 0x234 */ u16 unk234;
    /* 0x236 */ char unk236[0x1A];
    /* 0x250 */ s32 unk250;
    /* 0x254 */ char unk254[0x8];
} EnBjt; // size = 0x25C

extern const ActorInit En_Bjt_InitVars;

#endif // Z_EN_BJT_H
