#include "z_en_invadepoh.h"
#include "../ovl_En_Door/z_en_door.h"

#define FLAGS 0x00000010

#define THIS ((EnInvadepoh*)thisx)

void EnInvadepoh_Init(Actor* thisx, GlobalContext* globalCtx);
void EnInvadepoh_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnInvadepoh_Update(Actor* thisx, GlobalContext* globalCtx);

void func_80B46DA8(EnInvadepoh* this);
void func_80B46DC8(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B46E20(EnInvadepoh* this);
void func_80B46E44(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B46EC0(EnInvadepoh* this);
void func_80B46EE8(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B46F88(EnInvadepoh* this);
void func_80B46FA8(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B47064(EnInvadepoh* this);
void func_80B47084(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B470E0(EnInvadepoh* this);
void func_80B47108(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B471C0(EnInvadepoh* this);
void func_80B471E0(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B47248(EnInvadepoh* this);
void func_80B47268(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B47298(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B47304(EnInvadepoh* this);
void func_80B47324(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B473E4(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B474DC(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B47600(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B477B4(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B48324(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4ACF0(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4AD3C(EnInvadepoh* this);
void func_80B4AD60(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4ADB8(EnInvadepoh* this);
void func_80B4ADCC(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4AEC0(EnInvadepoh* this);
void func_80B4AEDC(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4AF80(EnInvadepoh* this);
void func_80B4AF94(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4B024(EnInvadepoh* this);
void func_80B4B048(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4B484(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4B510(EnInvadepoh* this);
void func_80B4B564(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4B724(EnInvadepoh* this);
void func_80B4B768(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4B820(EnInvadepoh* this);
void func_80B4B864(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B48374(EnInvadepoh* this);
void func_80B483CC(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B49A00(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4994C(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B497EC(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B49628(EnInvadepoh* this);
void func_80B49670(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B49454(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4934C(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B491EC(EnInvadepoh* this);
void func_80B49228(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B49C38(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B49DFC(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4A350(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4A5E4(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4A67C(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4A81C(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4BC4C(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4C058(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4C218(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4C730(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4CB0C(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4CCCC(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4D480(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B47568(EnInvadepoh* this);
void func_80B478F4(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B47938(EnInvadepoh* this);
void func_80B479E8(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B4843C(EnInvadepoh* this);
void func_80B484EC(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B48588(EnInvadepoh* this);
void func_80B48610(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B48848(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B47278(EnInvadepoh* this);
void func_80B48AD4(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B48E4C(EnInvadepoh* this, GlobalContext* globalCtx);
void func_80B49404(EnInvadepoh* this);
void func_80B4A570(EnInvadepoh* this);

void func_80B4D670(Actor* thisx, GlobalContext* globalCtx);
void func_80B47BAC(Actor* thisx, GlobalContext* globalCtx);
void func_80B47D30(Actor* thisx, GlobalContext* globalCtx);
void func_80B47FA8(Actor* thisx, GlobalContext* globalCtx);
void func_80B48060(Actor* thisx, GlobalContext* globalCtx);
void func_80B481C4(Actor* thisx, GlobalContext* globalCtx);
void func_80B4827C(Actor* thisx, GlobalContext* globalCtx);
void func_80B48620(Actor* thisx, GlobalContext* globalCtx);
void func_80B48FB0(Actor* thisx, GlobalContext* globalCtx);
void func_80B49F88(Actor* thisx, GlobalContext* globalCtx);
void func_80B4A9C8(Actor* thisx, GlobalContext* globalCtx);
void func_80B4B0C4(Actor* thisx, GlobalContext* globalCtx);
void func_80B4CE54(Actor* thisx, GlobalContext* globalCtx);
void func_80B4B8BC(Actor* thisx, GlobalContext* globalCtx);
void func_80B4C3A0(Actor* thisx, GlobalContext* globalCtx);
void func_80B49B1C(Actor* thisx, GlobalContext* globalCtx);
void func_80B4E158(Actor* thisx, GlobalContext* globalCtx);
void func_80B4E3F0(Actor* thisx, GlobalContext* globalCtx);
void func_80B4D9B4(Actor* thisx, GlobalContext* globalCtx);
void func_80B4E1B0(Actor* thisx, GlobalContext* globalCtx);
void func_80B4E324(Actor* thisx, GlobalContext* globalCtx);
void func_80B4BA84(Actor* thisx, GlobalContext* globalCtx);
void func_80B4E660(Actor* thisx, GlobalContext* globalCtx);
void func_80B4C5C0(Actor* thisx, GlobalContext* globalCtx);
void func_80B4E7BC(Actor* thisx, GlobalContext* globalCtx);
void func_80B4A1B8(Actor* thisx, GlobalContext* globalCtx);
void func_80B4ABDC(Actor* thisx, GlobalContext* globalCtx);
void func_80B4D054(Actor* thisx, GlobalContext* globalCtx);
void func_80B4DB14(Actor* thisx, GlobalContext* globalCtx);
void func_80B4D760(Actor* thisx, GlobalContext* globalCtx);
void func_80B4A168(Actor* thisx, GlobalContext* globalCtx);
void func_80B4873C(Actor* thisx, GlobalContext* globalCtx);
void func_80B490F0(Actor* thisx, GlobalContext* globalCtx);
void func_80B4AB8C(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Invadepoh_InitVars = {
    ACTOR_EN_INVADEPOH,
    ACTORCAT_PROP,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnInvadepoh),
    (ActorFunc)EnInvadepoh_Init,
    (ActorFunc)EnInvadepoh_Destroy,
    (ActorFunc)EnInvadepoh_Update,
    (ActorFunc)NULL,
};
*/

extern EnInvadepohInitFunc D_80B4ECB0[];    // init functions
extern EnInvadepohDestroyFunc D_80B4ECE8[]; // destroy functions
extern InitChainEntry D_80B4EC24;
extern InitChainEntry D_80B4EC34;
extern InitChainEntry D_80B4EC44;
extern InitChainEntry D_80B4EC54;
extern InitChainEntry D_80B4EC80;
extern InitChainEntry D_80B4EC98;
extern InitChainEntry D_80B4EC68;
extern ColliderCylinderInit D_80B4E8B0;
extern ColliderCylinderInit D_80B4E8DC;
extern ColliderCylinderInit D_80B4E908;
extern AnimationHeader D_06004264;
extern FlexSkeletonHeader D_06004010;
extern FlexSkeletonHeader D_06004E50;
extern FlexSkeletonHeader D_06004C30;
extern FlexSkeletonHeader D_06013928;
extern AnimationHeader D_06004E98;
extern AnimationHeader D_06002A8C;
extern AnimationHeader D_060021C8;
extern AnimationHeader D_06001BD8;
extern AnimationHeader D_06000998;
extern AnimationHeader D_06001560;
extern AnimationHeader D_06002A8C;
extern AnimationHeader D_06014088;
extern AnimationHeader D_06009E58;
extern AnimationHeader D_06009E58;
extern AnimationHeader D_06016720;
extern AnimationHeader D_0600A174;
extern AnimationHeader D_06009E58;
extern AnimationHeader D_06001674;
extern AnimationHeader D_06001D80;
extern AnimationHeader D_060006C8;
extern AnimationHeader D_06000608;
extern AnimationHeader D_06007328;
extern Gfx* D_80B4E984[];
extern Gfx* D_80B4E96C[];
extern Gfx* D_80B4E944[];
extern Gfx* D_80B4E958[];
extern AnimatedMaterial D_80B503FC;
extern AnimatedMaterial D_80B50400;

extern Vec3f D_80B4E934;
extern f32 D_80B4EE88;
extern f32 D_80B4EE8C;

extern s32 D_80B4E940;
extern s8 D_80B4E998;

extern Vec3f D_80B4ED30[];
extern Vec3f D_80B4ED6C[];
extern Vec3f D_80B4EDD0[];

extern Vec3s D_801D15BC;

extern s16 D_80B4EDC0[];
extern s16 D_80B4EDC8[];
extern s16 D_80B4ED20[];

extern Gfx D_04023210[];
extern Gfx D_060003B0[];
extern Gfx D_04029CB0[];
extern Gfx D_04029CF0[];

extern Vec3f D_80B4EE24;
extern Vec3f D_80B4EE30;

extern s32 D_80B4EA90[];
extern s32 D_80B4EB00[];

// bss---------------------
MtxF D_80B502A0;
MtxF D_80B502E0;
EnInvadepoh* D_80B50320[0x8]; // not sure if this should be Actor* or EnInvadepoh* array
u8 D_80B50340[0x8];
UNK_TYPE1 D_80B50348;
Actor* D_80B503F0;
Actor* D_80B503F4;
Actor* D_80B503F8;
UNK_TYPE2 D_80B50404[0x4];
Actor* D_80B5040C;

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B439B0.asm")

s32 func_80B43A24(s32 arg0) {
    u32 phi_v1;

    if ((arg0 & 1) == 0) {
        phi_v1 = gSaveContext.roomInf[124][arg0 >> 1] & 0xFFFF;
    } else {
        phi_v1 = (gSaveContext.roomInf[124][arg0 >> 1] & 0xFFFF0000) >> 0x10;
    }
    return phi_v1 + 0x1AAA;
}

void func_80B43A74(s32 arg0) {
    gSaveContext.roomInf[124][4] = (gSaveContext.roomInf[124][4] & ~0xFF) | arg0 & 0xFF;
}

s32 func_80B43A9C(void) {
    return gSaveContext.roomInf[124][4] & 0xFF;
}

s32 func_80B43AB0(void) {
    s32 ret = func_80B43A9C();
    if (ret < 0xC) {
        ret++;
        func_80B43A74(ret);
    }
    return ret;
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43AF0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43B80.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43BC8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43DD4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43E6C.asm")

void func_80B43F0C(EnInvadepoh* this) {
    s32 pad;
    Vec3s* arr = &this->unk30C[this->unk309];
    s32 pad2;
    Vec3f sp28;
    Vec3f sp1C;

    Math_Vec3s_ToVec3f(&sp28, &arr[0]);
    Math_Vec3s_ToVec3f(&sp1C, &arr[1]);
    this->actor.shape.rot.y = Math_Vec3f_Yaw(&sp28, &sp1C);
}

f32 func_80B43F70(EnInvadepoh* this) {
    f32 new_var;
    s32 pad;
    Vec3f sp54;
    Vec3f sp48;
    Vec3s* temp_s0;
    f32 temp_f20;
    s32 i;
    s32 temp_s4;

    temp_s4 = this->unk308 + 1;
    temp_s0 = this->unk30C;
    temp_f20 = 0.0f;
    Math_Vec3s_ToVec3f(&sp48, temp_s0);
    temp_s0++;
    for (i = 1; i < temp_s4; i++) {
        Math_Vec3f_Copy(&sp54, &sp48);
        Math_Vec3s_ToVec3f(&sp48, temp_s0);
        new_var = Math3D_Distance(&sp54, &sp48);
        temp_s0++;
        temp_f20 += new_var;
    }

    return temp_f20;
}

void func_80B44024(EnInvadepoh* this, GlobalContext* globalCtx) {
    Path* path;

    path = &globalCtx->setupPathList[(this->actor.params >> 8) & 0x7F];
    this->unk308 = path->count - 1;
    this->unk30C = Lib_SegmentedToVirtual(path->points);
}

void func_80B4407C(EnInvadepoh* this, s32 arg1) {
    Math_Vec3s_ToVec3f(&this->actor.world.pos, &this->unk30C[arg1]);
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B440B8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44234.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B442E4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B443A0.asm")

void func_80B444BC(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B44024(this, globalCtx);
    this->unk310 = func_80B43F70(this);
    func_80B443A0(this);
}

void func_80B444F4(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B44024(this, globalCtx);
}

void func_80B44514(EnInvadepoh* this) {
    this->unk309++;
    if (this->unk309 >= this->unk308) {
        this->unk309 = 0;
    }
}

void func_80B44540(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B44024(this, globalCtx);
    this->unk310 = func_80B43F70(this);
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44570.asm")

void func_80B44620(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B44024(this, globalCtx);
}

void func_80B44640(EnInvadepoh* this) {
    if (this->unk309 < this->unk308) {
        this->unk309++;
    }
}

void func_80B44664(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B44024(this, globalCtx);
    this->unk30A = 1;
}

void func_80B44690(EnInvadepoh* this) {
    this->unk309 += this->unk30A;
    if (this->unk309 >= this->unk308) {
        this->unk309 = 0;
    } else if (this->unk309 < 0) {
        this->unk309 = this->unk308 - 1;
    }
}

void func_80B446D0(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B44024(this, globalCtx);
    this->unk310 = func_80B43F70(this);
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44700.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B447C0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44A90.asm")

void func_80B44B78(EnInvadepoh* this) {
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44B84.asm")
s32 func_80B44B84(EnInvadepoh* this, GlobalContext* globalCtx, f32 arg2, f32 arg3);

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44C24.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44C80.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44E90.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44EFC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44F58.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44FEC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45080.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B450C0.asm")
s32 func_80B450C0(f32* arg0, f32* arg1, f32 arg2, f32 arg3, f32 arg4);

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
s32 func_80B4516C(EnInvadepoh* this) {
    if (this->actor.floorHeight > -31999.0f) {
        this->actor.world.pos.y = this->actor.floorHeight;
        return true;
    }
    return false;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4516C.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B451A0.asm")

#ifdef NON_MATCHING
// regs
void func_80B452EC(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 phi_s2;
    s32 i;

    phi_s2 = (this->actor.params >> 8) & 0x7F;

    for (i = 0; i < this->unk379; i++) {
        D_80B50320[i] =
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x200, this->actor.world.pos.x, this->actor.world.pos.y,
                        this->actor.world.pos.z, 0, 0, 0, (phi_s2 & 7) | ((phi_s2 << 8) & 0x7F00) | 0x10);
        if (1) {}
        if (phi_s2 != 0xFF) {
            Path* path = &globalCtx->setupPathList[phi_s2];
            phi_s2 = path->unk1;
        }
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B452EC.asm")
#endif

void func_80B453F4(EnInvadepoh* this, GlobalContext* globalCtx, s32 arg2) {
    Actor_SpawnWithParent(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_INVADEPOH, this->actor.home.pos.x,
                          this->actor.home.pos.y, this->actor.home.pos.z, 0, 0, 0, (arg2 & 7) | 0x20);
}

void func_80B45460(EnInvadepoh* this, GlobalContext* globalCtx) {
    Actor_SpawnWithParent(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_INVADEPOH, this->actor.home.pos.x,
                          this->actor.home.pos.y, this->actor.home.pos.z, 0, 0, 0, 0x40);
}

void func_80B454BC(EnInvadepoh* this, GlobalContext* globalCtx) {
    D_80B503F0 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 512, this->actor.world.pos.x, this->actor.world.pos.y,
                             this->actor.world.pos.z, 0, 0, 0, 0x60);
}

void func_80B45518(Vec3f* vec) {
    MtxF* sysMatrix = SysMatrix_GetCurrentState();

    sysMatrix->wx = vec->x;
    sysMatrix->wy = vec->y;
    sysMatrix->wz = vec->z;
}

s32 func_80B45550(EnInvadepoh* this, GlobalContext* globalCtx, f32 arg2, s32 arg3) {
    s32 pad;
    Actor* actorIterator = globalCtx->actorCtx.actorList[ACTORCAT_DOOR].first;
    s32 retVal = false;

    while (actorIterator) {
        if ((actorIterator->id == ACTOR_EN_DOOR) && (actorIterator->update != NULL) &&
            (actorIterator->room == this->actor.room) &&
            Math3D_DistanceSquared(&actorIterator->world.pos, &this->actor.world.pos) < arg2) {
            ((EnDoor*)actorIterator)->unk1A7 = arg3;
            retVal = true;
            break;
        }
        actorIterator = actorIterator->next;
    }
    return retVal;
}

void func_80B4560C(EnInvadepoh* this, GlobalContext* globalCtx, u16 arg2) {
    this->unk376 = arg2;
    func_801518B0(globalCtx, arg2 & 0xFFFF, &this->actor);
}

void func_80B45648(EnInvadepoh* this) {
    s32 i;
    s16 cs = this->actor.cutscene;

    for (i = 0; i < 3; i++) {
        D_80B50404[i] = cs;
        cs = ActorCutscene_GetAdditionalCutscene(cs);
    }
}

// cursed
#ifdef NON_MATCHING
s32 func_80B456A8(GlobalContext* globalCtx, Vec3f* vec) {
    Vec3f multDest;
    f32 wDest;
    int new_var;
    func_800B4EDC(globalCtx, vec, &multDest, &wDest);
    if (((multDest.z > 1.0f) && (fabsf(multDest.x * wDest) < 1.0f)) && (fabsf(multDest.y * wDest) < 1.0f)) {
        f32 wX = ((multDest.x * wDest) * 160.0f) + 160.0f;
        f32 wY = ((multDest.y * wDest) * (-120.0f)) + 120.0f;
        f32 wZ = ((multDest.z * ((0, wDest))) * 16352.0f) + 16352.0f;
        new_var = wZ;
        new_var = new_var < func_80178A94(wX, wY);
        if (new_var) {
            return 1;
        }
    }

    return 0;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B456A8.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B457A0(EnInvadepoh* this) {
    f32 distanceSquared;
    f32 phi_f20;
    s32 i;
    s32 phi_s5;

    phi_f20 = FLT_MAX;
    phi_s5 = -1;

    for (i = 0; i < this->unk379; i++) {
        if ((D_80B50320[i] != NULL) && (D_80B50320[i]->unk38B != 0)) {
            distanceSquared = Math3D_DistanceSquared(&D_80B50320[i]->actor.world.pos, &this->actor.world.pos);
            if (distanceSquared < phi_f20) {
                phi_f20 = distanceSquared;
                phi_s5 = i;
            }
        }
        D_80B50340[i] &= ~2;
    }

    D_80B50348 = 0;
    if (phi_f20 <= SQ(340.0f)) {
        D_80B50340[phi_s5] |= 2;
        if (phi_f20 <= SQ(2000.0f)) {
            D_80B50348 = 1;
        }
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B457A0.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B458D8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45980.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B459E8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45A4C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45A94.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45B1C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45BB8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45C04.asm")
void func_80B45C04(EnInvadePohStructUnk324* substruct, s32* arg1, s32 arg2, s32* arg3, s32 arg4, Vec3s* arg5, s16 arg6,
                   f32 arg7, f32 arg8, f32 arg9);

void func_80B45CE0(EnInvadePohStructUnk324* substruct) {
    Vec3f sp3C;
    Vec3s sp34;
    s16 step;

    sp34.x = substruct->unk26.x - substruct->unk20.x;
    sp34.y = substruct->unk26.y - substruct->unk20.y;
    sp34.z = substruct->unk26.z - substruct->unk20.z;
    Math_Vec3s_ToVec3f(&sp3C, &sp34);
    Math_Vec3f_Scale(&sp3C, substruct->unk30);
    Math_Vec3f_ToVec3s(&sp34, &sp3C);
    sp34.x = ABS(sp34.x);
    sp34.y = ABS(sp34.y);
    sp34.z = ABS(sp34.z);
    sp34.x = CLAMP_MAX(sp34.x, substruct->unk2C);
    sp34.y = CLAMP_MAX(sp34.y, substruct->unk2C);
    sp34.z = CLAMP_MAX(sp34.z, substruct->unk2C);
    Math_ScaledStepToS(&substruct->unk20.x, substruct->unk26.x, sp34.x);
    Math_ScaledStepToS(&substruct->unk20.y, substruct->unk26.y, sp34.y);
    Math_ScaledStepToS(&substruct->unk20.z, substruct->unk26.z, sp34.z);
    Math_StepToF(&substruct->unk34, substruct->unk38, substruct->unk3C);

    if (substruct->unk40 != substruct->unk42) {
        step = substruct->unk42 - substruct->unk40;
        step *= substruct->unk44;
        step = ABS(step);
        step = CLAMP(step, 0x64, substruct->unk48);
        Math_ScaledStepToS(&substruct->unk40, substruct->unk42, step);
    }
    func_80B45BB8(&substruct->unk0);
    func_80B45BB8(&substruct->unk10);
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45EC8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46118.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46184.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B461DC.asm")

void func_80B4627C(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 invadepohType;
    s32 i;

    this->actor.flags |= 0x20;
    invadepohType = (this->actor.params >> 8) & 0x7F;

    for (i = 1; i < 8; i++) {
        Path* path = &globalCtx->setupPathList[invadepohType];
        invadepohType = path->unk1;
        if (invadepohType == 0xFF) {
            break;
        }
    }

    this->unk379 = i;
    func_80B451A0(this, globalCtx);
    func_80B45648(this);
    func_800BC154(globalCtx, &globalCtx->actorCtx, &this->actor, ACTORCAT_SWITCH);

    if (D_80B4E940 == 1) {
        func_80B46DA8(this);
    } else if (D_80B4E940 == 2) {
        if (gSaveContext.time < 0x1AD8) {
            func_80B46DA8(this);
        } else {
            func_80B454BC(this, globalCtx);
            func_80B452EC(this, globalCtx);
            func_801A89A8(0x800D);
            func_80B46F88(this);
        }
    } else if (D_80B4E940 == 3) {
        if (gSaveContext.entranceIndex == 0x6460) {
            func_80B471C0(this);

        } else if (gSaveContext.entranceIndex == 0x6470) {
            func_80B47248(this);
        } else {
            func_80B47248(this);
        }
    } else if (D_80B4E940 == 4) {
        func_80B47304(this);
    }
}

void func_80B46414(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;

    Actor_ProcessInitChain(&this->actor, &D_80B4EC24);
    Collider_InitCylinder(globalCtx, &this->collider);
    ActorShape_Init(&this->actor.shape, 6800.0f, func_800B4088, 150.0f);
    this->actor.shape.shadowAlpha = 0x8C;
    this->actor.flags = 0x80001010;
    if (((this->actor.params >> 4) & 0xF) == 13) {
        this->actor.update = func_80B4D670;
        this->actor.world.pos.y = this->actor.home.pos.y + 150.0f;
    } else {
        this->actor.update = func_80B47BAC;
        Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &D_80B4E8B0);
        this->actor.colChkInfo.mass = 0x28;
    }
    this->unk2F4 = Object_GetIndex(&globalCtx->objectCtx, OBJECT_UCH);
    if (this->unk2F4 < 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80B46520(EnInvadepoh* this, GlobalContext* globalCtx) {
    Actor_ProcessInitChain(&this->actor, &D_80B4EC34);
    this->actor.update = func_80B47FA8;
    Actor_SpawnWithParent(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_INVADEPOH, 0.0f, 0.0f, 0.0f, 0, 0, 0,
                          0x30);
    this->unk2F4 = Object_GetIndex(&globalCtx->objectCtx, OBJECT_COW);
    if (this->unk2F4 < 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80B465CC(EnInvadepoh* this, GlobalContext* globalCtx) {
    Actor_ProcessInitChain(&this->actor, &D_80B4EC44);
    this->actor.update = func_80B481C4;
    this->unk2F4 = Object_GetIndex(&globalCtx->objectCtx, OBJECT_COW);
    if (this->unk2F4 < 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80B46644(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;
    s32 temp;

    temp = (this->actor.params >> 4) & 0xF;

    Actor_ProcessInitChain(&this->actor, &D_80B4EC54);

    this->actor.targetMode = (temp == 7 || temp == 0xC) ? 3 : 6;

    func_800BC154(globalCtx, &globalCtx->actorCtx, &this->actor, ACTORCAT_NPC);
    Collider_InitCylinder(globalCtx, &this->collider);
    if (temp != 4) {
        ActorShape_Init(&this->actor.shape, 0, func_800B3FC0, 18.0f);
        Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &D_80B4E8DC);
        this->actor.colChkInfo.mass = 0xFF;
    }
    if (temp == 4) {
        this->actor.update = func_80B48620;
    } else if (temp == 5) {
        this->actor.update = func_80B48FB0;
        this->actor.flags = 0x19;
    } else if (temp == 7) {
        this->actor.update = func_80B49F88;
    } else if (temp == 8) {
        this->actor.update = func_80B4A9C8;
    } else if (temp == 9) {
        this->actor.update = func_80B4B0C4;
    } else {
        this->actor.update = func_80B4CE54;
    }

    this->unk2F4 = Object_GetIndex(&globalCtx->objectCtx, OBJECT_MA1);
    if (this->unk2F4 < 0) {
        Actor_MarkForDeath(&this->actor);
    }
    if (temp == 5) {
        if (gSaveContext.weekEventReg[0x16] & 0x1) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
    } else if (temp == 7) {
        if (gSaveContext.time < 0x4000 && gSaveContext.time >= 0x1800) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
    } else if (temp != 8) {
        if (temp == 9) {
            if (gSaveContext.entranceIndex != 0x6460) {
                Actor_MarkForDeath(&this->actor);
                return;
            }
        } else if (temp == 0xC) {
            if (!(gSaveContext.weekEventReg[0x16] & 0x1)) {
                Actor_MarkForDeath(&this->actor);
            }
            D_80B503F4 = &this->actor;
        }
    }
}

void func_80B468B4(EnInvadepoh* this, GlobalContext* globalCtx) {
    Actor_ProcessInitChain(&this->actor, &D_80B4EC68);
    this->actor.update = func_80B49B1C;
    this->actor.draw = func_80B4E3F0;
    func_800BC154(globalCtx, &globalCtx->actorCtx, &this->actor, ACTORCAT_NPC);
    if (D_80B4E940 == 1 || gSaveContext.time < 0x1AD8) {
        this->actor.world.pos.x += D_80B4E934.x;
        this->actor.world.pos.y += D_80B4E934.y + D_80B4EE88;
        this->actor.world.pos.z += D_80B4E934.z;
        func_80B491EC(this);
        return;
    }
    if (D_80B4E940 == 2) {
        this->actor.world.pos.y += D_80B4EE8C;
        func_80B49628(this);
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void func_80B469C4(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;

    Actor_ProcessInitChain(&this->actor, &D_80B4EC80);
    this->actor.update = func_80B4B8BC;
    Collider_InitCylinder(globalCtx, &this->collider);
    Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &D_80B4E908);
    this->actor.colChkInfo.mass = 0x50;
    ActorShape_Init(&this->actor.shape, 0, func_800B3FC0, 24.0f);
    this->unk2F4 = Object_GetIndex(&globalCtx->objectCtx, OBJECT_DOG);
    if (this->unk2F4 < 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80B46A80(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;

    Actor_ProcessInitChain(&this->actor, &D_80B4EC98);
    this->actor.update = func_80B4C3A0;
    func_800BC154(globalCtx, &globalCtx->actorCtx, &this->actor, ACTORCAT_NPC);
    Collider_InitCylinder(globalCtx, &this->collider);
    Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &D_80B4E8DC);
    this->actor.colChkInfo.mass = 0xFE;
    ActorShape_Init(&this->actor.shape, 0, func_800B3FC0, 18.0f);
    this->unk2F4 = Object_GetIndex(&globalCtx->objectCtx, OBJECT_MA2);
    if (this->unk2F4 < 0) {
        Actor_MarkForDeath(&this->actor);
    }
    if (!(gSaveContext.weekEventReg[0x16] & 1)) {
        Actor_MarkForDeath(&this->actor);
    }
    D_80B503F8 = &this->actor;
}

void EnInvadepoh_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    D_80B4ECB0[this->actor.params >> 4 & 0xF](this, globalCtx);
}

void func_80B46BB0(EnInvadepoh* this, GlobalContext* globalCtx) {
}

void func_80B46BC0(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;
    s32 invadepohType = this->actor.params & 7;

    Collider_DestroyCylinder(globalCtx, &this->collider);
    D_80B50320[invadepohType] = 0;
}

void func_80B46C08(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (this->actor.parent != NULL) {
        this->actor.parent->child = NULL;
    }

    if (this->actor.child != NULL) {
        this->actor.child->parent = NULL;
    }
}

void func_80B46C34(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (this->actor.parent != NULL) {
        this->actor.parent->child = NULL;
    }
}

void func_80B46C50(EnInvadepoh* this, GlobalContext* globalCtx) {
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_80B46C7C(EnInvadepoh* this, GlobalContext* globalCtx) {
    D_80B503F0 = 0;
}

void func_80B46C94(EnInvadepoh* this, GlobalContext* globalCtx) {
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_80B46CC0(EnInvadepoh* this, GlobalContext* globalCtx) {
    Collider_DestroyCylinder(globalCtx, &this->collider);
    D_80B503F8 = 0;
}

void func_80B46CF4(EnInvadepoh* this, GlobalContext* globalCtx) {
    Collider_DestroyCylinder(globalCtx, &this->collider);
    D_80B503F4 = 0;
}

void func_80B46D28(EnInvadepoh* this, GlobalContext* globalCtx) {
    Collider_DestroyCylinder(globalCtx, &this->collider);
    if (!this) {} // required to match?
    if (this->actor.child != NULL) {
        this->actor.child->parent = NULL;
    }
}

void EnInvadepoh_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    D_80B4ECE8[this->actor.params >> 4 & 0xF](this, globalCtx);
}

void func_80B46DA8(EnInvadepoh* this) {
    D_80B4E940 = 1;
    this->actionFunc = func_80B46DC8;
}

void func_80B46DC8(EnInvadepoh* this, GlobalContext* globalCtx) {
    if ((gSaveContext.time < 0x4000) && (gSaveContext.time >= 0x1AAA)) {
        func_80B454BC(this, globalCtx);
        func_80B452EC(this, globalCtx);
        func_80B46E20(this);
    }
}

void func_80B46E20(EnInvadepoh* this) {
    D_80B4E940 = 2;
    this->unk2F0 = 2;
    this->actionFunc = func_80B46E44;
}

void func_80B46E44(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (this->unk2F0 > 0) {
        this->unk2F0--;
        return;
    }

    if (ActorCutscene_GetCanPlayNext(D_80B50404[0])) {
        ActorCutscene_StartAndSetUnkLinkFields(D_80B50404[0], &this->actor);
        func_80B46EC0(this);
    } else {
        ActorCutscene_SetIntentToPlay(D_80B50404[0]);
    }
}

void func_80B46EC0(EnInvadepoh* this) {
    D_80B4E940 = 2;
    this->unk2F0 = 0xA0;
    this->actionFunc = func_80B46EE8;
}

void func_80B46EE8(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 i;

    for (i = 0; i < 8; i++) {
        if (this->unk2F0 == D_80B4ED20[i]) {
            D_80B50340[i] |= 1;
        }
    }

    this->unk2F0--;
    if (this->unk2F0 <= 0) {
        ActorCutscene_Stop(D_80B50404[0]);
        func_801A89A8(0x800D);
        func_80B46F88(this);
    }
}

void func_80B46F88(EnInvadepoh* this) {
    D_80B4E940 = 2;
    this->actionFunc = func_80B46FA8;
}

void func_80B46FA8(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 i;

    if ((gSaveContext.time < 0x4000) && (gSaveContext.time >= 0x3800)) {
        gSaveContext.weekEventReg[22] |= 1;
        func_80B47064(this);
    } else {
        func_80B457A0(this);
        for (i = 0; i < this->unk379; i++) {
            if ((D_80B50320[i] != NULL) && (D_80B50320[i]->unk38A != 0)) {
                func_80B47278(this);
                break;
            }
        }
    }
}

void func_80B47064(EnInvadepoh* this) {
    D_80B4E940 = 3;
    this->actionFunc = func_80B47084;
}

void func_80B47084(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (ActorCutscene_GetCanPlayNext(D_80B50404[1])) {
        ActorCutscene_StartAndSetUnkLinkFields(D_80B50404[1], &this->actor);
        func_80B470E0(this);
    } else {
        ActorCutscene_SetIntentToPlay(D_80B50404[1]);
    }
}

void func_80B470E0(EnInvadepoh* this) {
    D_80B4E940 = 3;
    this->unk2F0 = 0x6E;
    this->actionFunc = func_80B47108;
}

void func_80B47108(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (this->unk2F0 == 0x64) {
        func_801A3098(0x19);
    }
    this->unk2F0--;
    if (this->unk2F0 <= 0) {
        globalCtx->nextEntranceIndex = 0x6460;
        gSaveContext.unk_3F4A = 0;
        globalCtx->unk18875 = 0x14;
        globalCtx->unk1887F = 0x49;
        gSaveContext.nextTransition = 0x48;
        D_801BDAA0 = 1;
        D_801BDA9C = 0;
        func_80B47248(this);
    }
}

void func_80B471C0(EnInvadepoh* this) {
    D_80B4E940 = 3;
    this->actionFunc = func_80B471E0;
}

void func_80B471E0(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (D_80B4E998) {
        globalCtx->nextEntranceIndex = 0x6470;
        gSaveContext.unk_3F4A = 0;
        globalCtx->unk18875 = 0x14;
        globalCtx->unk1887F = 0x48;
        gSaveContext.nextTransition = 0x48;
        func_80B47248(this);
    }
}

void func_80B47248(EnInvadepoh* this) {
    D_80B4E940 = 3;
    this->actionFunc = func_80B47268;
}

void func_80B47268(EnInvadepoh* this, GlobalContext* globalCtx) {
}

void func_80B47278(EnInvadepoh* this) {
    D_80B4E940 = 4;
    this->actionFunc = func_80B47298;
}

void func_80B47298(EnInvadepoh* this, GlobalContext* globalCtx) {
    globalCtx->nextEntranceIndex = 0x6400;
    gSaveContext.unk_3F4A = 0xFFF3;
    globalCtx->unk18875 = 0x14;
    globalCtx->unk1887F = 0x48;
    gSaveContext.nextTransition = 0x48;
    gSaveContext.weekEventReg[89] |= 0x10;
    func_80B47304(this);
}

void func_80B47304(EnInvadepoh* this) {
    D_80B4E940 = 4;
    this->actionFunc = func_80B47324;
}

void func_80B47324(EnInvadepoh* this, GlobalContext* globalCtx) {
}

void EnInvadepoh_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    this->actionFunc(this, globalCtx);
    if (func_80B461DC()) {
        this->actor.draw = func_80B4D9B4;
    } else {
        this->actor.draw = NULL;
    }
}

void func_80B47380(EnInvadepoh* this) {
    this->collider.base.atFlags &= ~1;
    this->collider.base.acFlags &= ~1;
    this->collider.base.ocFlags1 &= ~1;
    this->actor.flags &= 0x7FFFFFFF;
    this->unk389 = 0;
    this->actor.draw = NULL;
    this->unk38B = 0;
    this->unk38C = 0;
    this->unk38D = 0;
    this->actionFunc = func_80B473E4;
}

void func_80B473E4(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B442E4(this);
    func_80B447C0(this, globalCtx);
    func_80B43DD4(this, 800, 0);
    if (D_80B50340[this->actor.params & 7] & 1) {
        Actor_SetScale(&this->actor, 0.01f);
        func_80B4516C(this);
        func_80B46118(&this->actor.world.pos);
        func_80B47568(this);
    }
}

void func_80B47478(EnInvadepoh* this) {
    this->collider.base.atFlags &= ~1;
    this->collider.base.acFlags &= ~1;
    this->collider.base.ocFlags1 &= ~1;
    this->actor.flags &= 0x7FFFFFFF;
    this->unk389 = 0;
    this->actor.draw = 0;
    this->unk38B = 0;
    this->unk38C = 0;
    this->unk38D = 0;
    this->actionFunc = func_80B474DC;
}

void func_80B474DC(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B442E4(this);
    func_80B447C0(this, globalCtx);
    func_80B43DD4(&this->actor, 800, 0);
    if (this->unk320 > 0.0f) {
        Actor_SetScale(&this->actor, 0.01f);
        func_80B4516C(this);
        func_80B46118(&this->actor.world.pos);
        func_80B47568(this);
    }
}

void func_80B47568(EnInvadepoh* this) {
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06001D80, -6.0f);
    this->collider.base.atFlags &= ~0x1;
    this->collider.base.acFlags &= ~0x1;
    this->collider.base.ocFlags1 &= ~0x1;
    this->unk389 = 0;
    this->actor.draw = func_80B4DB14;
    this->unk38B = 1;
    this->unk38C = 0;
    this->unk38D = 0;
    this->actor.flags |= 0x80000000;
    this->actionFunc = func_80B47600;
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B47600(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B442E4(this);
    func_80B447C0(this, globalCtx);
    func_80B43DD4(this, 800, 0);
    func_800B9010(this, NA_SE_EN_FOLLOWERS_BEAM_PRE - SFX_FLAG);
    if (0.9999f <= this->unk320) {
        this->unk38A = 1;
    }
    if (this->unk389 >= 0xF9) {
        this->unk389 = 0xFF;
    } else {
        this->unk389 += 6;
    }
    if (this->unk389 >= 0x81) {
        this->collider.base.atFlags |= 1;
        this->collider.base.acFlags |= 1;
        this->collider.base.ocFlags1 |= 1;
    }
    if (this->unk389 == 0xFF) {
        if (this->unk38D >= 0xF5) {
            this->unk38D = 0xFF;
            func_80B4770C(this);
        } else {
            this->unk38D += 10;
        }
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47600.asm")
#endif

void func_80B4770C(EnInvadepoh* this) {
    if (this->skelAnime.animCurrentSeg != &D_06001D80) {
        SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06001D80, -6.0f);
    }
    this->collider.base.atFlags |= 1;
    this->collider.base.acFlags |= 1;
    this->collider.base.ocFlags1 |= 1;
    this->unk389 = 0xFF;
    this->actor.draw = func_80B4DB14;
    this->unk38B = 1;
    this->unk38C = 0;
    this->unk38D = 0xFF;
    this->actor.flags |= 0x80000000;
    this->actionFunc = func_80B477B4;
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B477B4(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B442E4(this);
    func_80B447C0(this, globalCtx);
    func_80B43DD4(this, 0x320, 0);
    func_800B9010(&this->actor, NA_SE_EN_FOLLOWERS_BEAM_PRE - SFX_FLAG);
    if (0.9999f <= this->unk320) {
        this->unk38A = 1;
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B477B4.asm")
#endif

void func_80B47830(EnInvadepoh* this) {
    this->collider.base.atFlags &= ~1;
    this->collider.base.acFlags &= ~1;
    this->collider.base.ocFlags1 |= 1;
    SkelAnime_ChangeAnimDefaultRepeat(&this->skelAnime, &D_060006C8);
    func_800BCB70(&this->actor, 0x4000, 0xFF, 0, 0x10);
    this->unk389 = 0xFF;
    this->actor.draw = func_80B4DB14;
    this->unk38B = 1;
    this->unk38C = 0;
    this->unk38D = 0;
    this->unk2F0 = 8;
    this->unk2F2 = 0;
    this->actor.flags |= 0x80000000;
    this->actionFunc = func_80B478F4;
}

void func_80B478F4(EnInvadepoh* this, GlobalContext* globalCtx) {
    func_80B44A90(this, globalCtx);
    this->unk2F0--;
    if (this->unk2F0 <= 0) {
        func_80B47938(this);
    }
}

void func_80B47938(EnInvadepoh* this) {
    this->collider.base.atFlags &= ~1;
    this->collider.base.acFlags &= ~1;
    this->collider.base.ocFlags1 &= ~1;
    SkelAnime_ChangeAnimDefaultRepeat(&this->skelAnime, &D_06000608);
    this->actor.flags &= ~1;
    this->unk2F0 = 0xA;
    this->unk389 = 0xFF;
    this->actor.draw = func_80B4DB14;
    this->unk38B = 1;
    this->unk38C = 0;
    this->unk38D = 0xFF;
    this->actor.flags |= 0x80000000;
    this->actionFunc = func_80B479E8;
}

void func_80B479E8(EnInvadepoh* this, GlobalContext* globalCtx) {
    s16 unk2F2;
    u32 index;
    func_80B44B78(this);
    if (this->unk2F2 < 5) {
        if (D_80B4ED30[this->unk2F2].x > 0.0f) {
            this->unk38B = 1;
            this->unk38D = 0xFF;
            Math_Vec3f_Copy(&this->actor.scale, &D_80B4ED30[this->unk2F2]);
        } else {
            this->unk38B = 0;
            this->unk38D = 0;
        }

    } else {
        this->unk38B = 0;
        this->unk38D = 0;
    }

    unk2F2 = this->unk2F2;
    if ((unk2F2 >= 2) && (unk2F2 < 9)) {
        index = unk2F2 - 2;
        if (D_80B4ED6C[index].x > 0.0f) {
            this->unk38C = 1;
            Math_Vec3f_Copy(&this->unk390, &D_80B4ED6C[index]);
        } else {
            this->unk38C = 0;
        }

    } else {
        this->unk38C = 0;
    }

    this->unk2F2++;
    if (this->unk2F0 == 8) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_CLEAR_TAG, this->actor.world.pos.x,
                    this->actor.world.pos.y - 10.0f, this->actor.world.pos.z, 0, 0, 3, 200);
    }

    if (this->unk2F0 == 8) {
        func_800BBA88(globalCtx, &this->actor);
    }

    this->unk2F0--;
    if (this->unk2F0 <= 0) {
        func_80B43AF0(this->actor.params & 7);
        func_80B43AB0();
        Item_DropCollectible(globalCtx, &this->actor.world.pos, 8);
        func_80B47478(this);
    }
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B47BAC(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk2F4)) {
        this->actor.objBankIndex = this->unk2F4;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        func_80B45080();
        this->actor.update = func_80B47D30;
        SkelAnime_InitSV(globalCtx, &this->skelAnime, D_06004E50, D_06001D80, this->limbDrawTable,
                         this->transitionDrawTable, 14);
        this->skelAnime.animCurrentFrame = (this->actor.params & 7) * this->skelAnime.animFrameCount * 0.125f;
        func_80B444BC(this, globalCtx);
        func_80B442E4(this);
        func_80B447C0(this, globalCtx);
        func_80B43F0C(this);
        func_80B4516C(this);
        if (D_80B4E940 == 1 || gSaveContext.time < 0x1AD8) {
            func_80B47380(this);
        } else if (D_80B4E940 == 2) {
            if (this->unk320 >= 0.0001f) {
                func_80B4770C(this);
            } else {
                func_80B47568(this);
            }
        } else {
            Actor_MarkForDeath(&this->actor);
        }
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47BAC.asm")
#endif

void func_80B47D30(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;
    s32 pad;

    if (D_80B4E940 == 3) {
        if ((this->actionFunc == func_80B477B4) || (this->actionFunc == func_80B47600)) {
            thisx->speedXZ = 0.0f;
            thisx->velocity.y = 0.0f;
            thisx->gravity = 0.0f;
            func_80B47830(this);
        } else if ((this->actionFunc == func_80B474DC) || (this->actionFunc == func_80B473E4)) {
            Actor_MarkForDeath(&this->actor);
            return;
        }

    } else if (this->collider.base.acFlags & 2) {
        Actor* acAttached = this->collider.base.ac;

        thisx->speedXZ = acAttached->speedXZ * 0.5f;
        thisx->speedXZ = CLAMP(thisx->speedXZ, -60.0f, 60.0f);
        thisx->world.rot.y = acAttached->world.rot.y;
        thisx->gravity = 0.0f;
        thisx->velocity.y = acAttached->velocity.y * 0.5f;
        thisx->velocity.y = CLAMP(thisx->velocity.y, -30.0f, 30.0f);
        func_800F0568(globalCtx, &thisx->world.pos, 50, 0x3A09);
        func_80B47830(this);
    }

    this->actionFunc(this, globalCtx);
    if (thisx->draw != NULL) {
        this->unk29C = SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    }

    Collider_UpdateCylinder(&this->actor, &this->collider);
    if (this->collider.base.atFlags & AT_ON) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colCheckCtx, &this->collider.base);
    } else {
        this->collider.base.atFlags &= ~AT_HIT;
    }

    if (this->collider.base.acFlags & AC_ON) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colCheckCtx, &this->collider.base);
    } else {
        this->collider.base.acFlags &= ~AC_HIT;
    }

    if (this->collider.base.ocFlags1 & OC1_ON) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colCheckCtx, &this->collider.base);
    } else {
        this->collider.base.ocFlags1 &= ~OC1_HIT;
    }
}

void func_80B47FA8(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;
    s32 pad;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk2F4)) {
        this->actor.objBankIndex = this->unk2F4;
        Actor_SetObjectSegment(globalCtx, thisx);
        this->actor.update = func_80B48060;
        this->actor.draw = func_80B4E158;
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06004010, NULL, this->limbDrawTable, this->transitionDrawTable,
                         6);
        SkelAnime_ChangeAnimDefaultRepeat(&this->skelAnime, &D_06004264);
    }
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B48060(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;
    s32 pad;
    s32 temp;
    s32 pad2;
    MtxF unkMtx;

    if (D_80B503F0 == NULL || this->actor.parent == NULL) {
        Actor_MarkForDeath(&this->actor);
        return;
    }

    temp = this->actor.params & 7;
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    Math_ScaledStepToS(&this->actor.shape.rot, D_80B4EDC0[temp], 50);
    if (this->actor.child != NULL) {
        Matrix_Push();
        SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y,
                                                 this->actor.world.pos.z, &this->actor.shape.rot);
        SysMatrix_InsertTranslation(0, 57.0f, -36.0f, MTXMODE_APPLY);
        SysMatrix_InsertXRotation_s(this->actor.shape.rot.x * -0.7f, MTXMODE_APPLY);
        SysMatrix_InsertZRotation_s(this->actor.shape.rot.z * -0.7f, MTXMODE_APPLY);
        SysMatrix_GetStateTranslation(&this->actor.child->world.pos);
        SysMatrix_CopyCurrentState(&unkMtx);
        func_8018219C(&unkMtx, &this->actor.child->shape.rot, 0);
        Matrix_Pop();
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48060.asm")
#endif

void func_80B481C4(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;
    s32 pad;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk2F4)) {
        this->actor.objBankIndex = this->unk2F4;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        this->actor.update = func_80B4827C;
        this->actor.draw = func_80B4E1B0;
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06004C30, NULL, this->limbDrawTable, this->transitionDrawTable,
                         6);
        SkelAnime_ChangeAnimDefaultRepeat(&this->skelAnime, &D_06004E98);
    }
}

void func_80B4827C(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    if (D_80B503F0 == NULL || this->actor.parent == NULL) {
        Actor_MarkForDeath(&this->actor);
        return;
    }

    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
}

void func_80B482D4(EnInvadepoh* this) {
    this->unk2F0 = 0x28;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06002A8C, -10.0f);
    this->actor.draw = NULL;
    this->actionFunc = func_80B48324;
}

void func_80B48324(EnInvadepoh* this, GlobalContext* globalCtx) {
    this->unk2F0--;
    if (this->unk2F0 <= 0) {
        func_80B4560C(this, globalCtx, 0x332F);
        this->actor.draw = func_80B4E324;
        func_80B48374(this);
    }
}

void func_80B48374(EnInvadepoh* this) {
    this->unk2F0 = 60;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06002A8C, -10.0f);
    this->actor.draw = func_80B4E324;
    this->actionFunc = func_80B483CC;
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B483CC(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (this->unk2F0 == 20) {
        f32 unkFloat = 0.1f; // required to match

        this->unk34A = 2000;
        this->EnInvadePohStructUnk324.unk26.y = 0;
        this->unk34E = 0;
        this->unk354 = unkFloat;
        this->unk350 = 1000;
    }

    this->unk2F0--;
    if (this->unk2F0 <= 0) {
        func_80B4843C(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B483CC.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4843C(EnInvadepoh* this) {
    this->EnInvadePohStructUnk324.unk26.x = 3000;
    this->EnInvadePohStructUnk324.unk26.y = 0;
    this->EnInvadePohStructUnk324.unk26.z = 0;
    this->EnInvadePohStructUnk324.unk30 = 0.24f;
    this->EnInvadePohStructUnk324.unk2C = 3000;
    this->EnInvadePohStructUnk324.unk42 = 15000;
    this->EnInvadePohStructUnk324.unk44 = 0.1f;
    this->EnInvadePohStructUnk324.unk48 = 2000;
    this->unk2F0 = 50;
    SkelAnime_ChangeAnim(&this->skelAnime, &D_06007328, 2.0f, 0.0f, 0.0f, 0, -5.0f);
    this->actor.draw = func_80B4E324;
    this->actionFunc = func_80B484EC;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4843C.asm")
#endif

void func_80B484EC(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (this->unk2F0 == 40) {
        this->EnInvadePohStructUnk324.unk26.y = 7000;
    } else if (this->unk2F0 == 30) {
        this->EnInvadePohStructUnk324.unk26.y = -7000;
    } else if (this->unk2F0 == 20) {
        this->EnInvadePohStructUnk324.unk26.y = 7000;
    } else if (this->unk2F0 == 10) {
        this->EnInvadePohStructUnk324.unk26.y = 0;
    }
    this->unk2F0--;
    if (this->unk2F0 <= 0) {
        func_80B48588(this);
    }
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B48588(EnInvadepoh* this) {
    this->unk34A = 0;
    this->unk34C = 0;
    this->unk34E = 0;
    this->unk354 = 0.24f;
    this->unk350 = 5000;
    this->unk366 = 0;
    this->unk368 = 0.28f;
    this->unk36C = 7000;
    SkelAnime_ChangeAnimTransitionStop(&this->skelAnime, &D_06009E58, -10.0f);
    this->actor.draw = func_80B4E324;
    this->actionFunc = func_80B48610;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48588.asm")
#endif

void func_80B48610(EnInvadepoh* this, GlobalContext* globalCtx) {
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B48620(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad[2];
    EnInvadepoh* this = THIS;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk2F4)) {
        this->actor.objBankIndex = this->unk2F4;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        func_80B44F58();
        this->actor.update = func_80B4873C;
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06013928, &D_06009E58, this->limbDrawTable,
                         this->transitionDrawTable, 23);
        func_80B45C04(&this->EnInvadePohStructUnk324, &D_80B4EA90, 6, &D_80B4EB00, 2, &D_801D15BC, 0x1388, 0.05f, 0.3f,
                      0.12f);
        SkelAnime_ChangeAnimDefaultRepeat(&this->skelAnime, &D_06009E58);
        func_80B482D4(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48620.asm")
#endif

void func_80B4873C(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;
    s32 pad;
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    if (this->actor.parent == NULL) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    func_80B45CE0(substruct);
    if (substruct->unk40 != 0) {
        this->actor.shape.rot.x = -substruct->unk40;
    }
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B487B4(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;
    u32 new_var;

    this->unk2F0 = Rand_S16Offset(150, 250);
    new_var = Rand_Next();
    substruct->unk26.x = D_80B4EDC8[new_var >> 0x1E];
    substruct->unk26.y = 0;
    substruct->unk26.z = 0;
    substruct->unk30 = 0.1f;
    substruct->unk2C = 800;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06014088, -10.0f);
    this->actionFunc = func_80B48848;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B487B4.asm")
#endif

void func_80B48848(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;
    Math_StepToF(&this->actor.speedXZ, 1.6f, 0.1f);
    if (func_80B44B84(this, globalCtx, this->actor.speedXZ, 50.0f)) {
        func_80B44514(this);
        this->EnInvadePohStructUnk324.unk4C = 0xC8;
        this->actor.speedXZ *= 0.25f;
    } else {
        Math_StepToS(&this->EnInvadePohStructUnk324.unk4C, 0x7D0, 0x46);
    }
    func_80B43E6C(this, 6, this->EnInvadePohStructUnk324.unk4C, 0x46);
    if ((this->actor.flags & 0x40) == 0x40) {
        if ((func_801378B8(&this->skelAnime, 0.0f)) || (func_801378B8(&this->skelAnime, 7.0f))) {
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_ROMANI_WALK);
        }
    }
    if (this->unk2F0 > 0) {
        this->unk2F0--;
        return;
    }
    func_80B48948(this);
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B48948(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;
    f32 rand = Rand_ZeroOne();

    this->unk2F0 = Rand_S16Offset(150, 150);
    if (rand < 0.5f) {
        this->unk374 = 0;
        Math_Vec3s_Copy(&substruct->unk26, &D_801D15BC);
        substruct->unk30 = 0.1f;
        substruct->unk2C = 1000;
    } else if (rand < 0.75f) {
        this->unk374 = 1;
        substruct->unk26.x = Rand_S16Offset(0, 2000);
        substruct->unk26.y = 0;
        substruct->unk26.z = 0;
        substruct->unk30 = 0.06f;
        substruct->unk2C = 1000;
    } else if (rand < 0.8f) {
        this->unk374 = 2;
        substruct->unk26.x = Rand_S16Offset(-2000, 2000);
        substruct->unk26.y = 0;
        substruct->unk26.z = 0;
        substruct->unk30 = 0.05f;
        substruct->unk2C = 1000;
    } else {
        this->unk374 = 3;
        substruct->unk26.x = 0;
        substruct->unk26.y = 0;
        substruct->unk26.z = Rand_S16Offset(-2500, 5000);
        substruct->unk30 = 0.04f;
        substruct->unk2C = 1000;
    }

    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, -10.0f);
    this->actionFunc = func_80B48AD4;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48948.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
// kinda cursed though still
#ifdef NON_MATCHING
void func_80B48AD4(EnInvadepoh* this, GlobalContext* globalCtx) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;
    ActorPlayer* player;
    s16 new_var3;
    s16 temp_v1;
    s32 temp_v1_3;

    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.2f);
    if (func_80B44B84(this, globalCtx, this->actor.speedXZ, 50.0f)) {
        func_80B44514(this);
    }

    if (this->unk374 == 0) {
        if ((this->actor.xzDistToPlayer < 350.0f) && ((globalCtx->gameplayFrames & 0x60) != 0)) {
            player = PLAYER;
            temp_v1 = Math_Vec3f_Pitch(&this->actor.focus, &player->base.focus) * 0.85f;
            temp_v1 -= this->actor.shape.rot.x;
            substruct->unk26.x = CLAMP(temp_v1, -0x9C4, 0x9C4);
            new_var3 = (this->actor.yawTowardsPlayer - this->actor.shape.rot.y); // this has to be a separate temp
            temp_v1 = new_var3 * 0.7f;
            substruct->unk26.y = CLAMP(temp_v1, -0x1F40, 0x1F40);
        }

    dummy_label_558449:; // fake match? Required as it is currently

    } else {
        substruct->unk26.x = 0;
        substruct->unk26.y = 0;
    }

    if (this->unk2F0 > 0) {
        temp_v1_3 = this->unk2F0 & 0x1F;
        if ((temp_v1_3 == 0) && (Rand_ZeroOne() < 0.3f)) {
            temp_v1_3 = Rand_Next();
            temp_v1_3 = temp_v1_3 % 4;
            if (temp_v1_3 != this->unk374) {
                this->unk374 = temp_v1_3;
                if (this->unk374 == 0) {
                    Math_Vec3s_Copy(&substruct->unk26, &D_801D15BC);
                    substruct->unk30 = 0.07f;
                } else if (this->unk374 == 1) {
                    substruct->unk26.x = Rand_S16Offset(0x3E8, 0x3E8);
                    substruct->unk26.y = Rand_S16Offset(-0x3E8, 0x7D0);
                    substruct->unk26.z = Rand_S16Offset(-0x320, 0x640);
                    substruct->unk30 = 0.06f;
                } else if (this->unk374 == 2) {
                    substruct->unk26.x = Rand_S16Offset(-0x7D0, 0x3E8);
                    substruct->unk26.y = Rand_S16Offset(-0x3E8, 0x7D0);
                    substruct->unk26.z = Rand_S16Offset(-0x320, 0x640);
                    substruct->unk30 = 0.05f;
                } else {
                    substruct->unk26.x = Rand_S16Offset(-0x3E8, 0x7D0);
                    substruct->unk26.y = Rand_S16Offset(-0x7D0, 0xFA0);
                    substruct->unk26.z = Rand_S16Offset(-0x7D0, 0xFA0);
                    substruct->unk30 = 0.04f;
                }
            }
        }

        this->unk2F0--;
    } else {
        func_80B487B4(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48AD4.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B48DE4(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    this->actor.speedXZ = 0.0f;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, -10.0f);
    this->EnInvadePohStructUnk324.unk4C = 0;
    substruct->unk30 = 0.05f;
    substruct->unk2C = 1200;
    this->actionFunc = func_80B48E4C;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48DE4.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B48E4C(EnInvadepoh* this, GlobalContext* globalCtx) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;
    ActorPlayer* player = PLAYER;
    s16 temp_v1;
    s16 new_var;

    Math_StepToS(&this->EnInvadePohStructUnk324.unk4C, 0x7D0, 0x32);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 6, this->EnInvadePohStructUnk324.unk4C,
                       0x23);
    temp_v1 = Math_Vec3f_Pitch(&this->actor.focus, &player->base.focus);
    temp_v1 *= 0.85f;
    temp_v1 -= this->actor.shape.rot.x;
    substruct->unk26.x = CLAMP(temp_v1, -0xBB8, 0xBB8);
    temp_v1 = (this->actor.yawTowardsPlayer - this->actor.shape.rot.y);
    temp_v1 = new_var * 0.7f;
    substruct->unk26.y = CLAMP(temp_v1, -0x1F40, 0x1F40);
    if (func_800B867C(this, globalCtx)) {
        func_80B48948(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48E4C.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B48FB0(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk2F4)) {
        this->actor.objBankIndex = this->unk2F4;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        func_80B44F58();
        this->actor.update = func_80B490F0;
        this->actor.draw = func_80B4E324;
        this->actor.textId = 0x3330;
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06013928, &D_06009E58, this->limbDrawTable,
                         this->transitionDrawTable, 23);
        func_80B45C04(&this->EnInvadePohStructUnk324, &D_80B4EA90, 6, &D_80B4EB00, 2, &D_801D15BC, 0x64, 0.03f, 0.3f,
                      0.03f);
        func_80B444F4(this, globalCtx);
        func_80B4407C(this, 0);
        func_800B4AEC(globalCtx, &this->actor, 50.0f);
        func_80B4516C(this);
        func_80B487B4(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48FB0.asm")
#endif

void func_80B490F0(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnInvadepoh* this = THIS;
    s32 sp2C;
    s32 isTalking;

    sp2C = (this->actor.flags & 0x40) == 0x40;
    isTalking = func_800B84D0(&this->actor, globalCtx);

    if (isTalking) {
        func_80151BB4(globalCtx, 5);
        func_80B48DE4(this);
    }
    this->actionFunc(this, globalCtx);
    if (sp2C) {
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        func_80B45CE0(&this->EnInvadePohStructUnk324);
        if (this->actionFunc != func_80B48E4C) {
            if (!isTalking) {
                if (this->actor.isTargeted) {
                    func_800B8614(&this->actor, globalCtx, 100.0f);
                }
            }
        }
        Collider_UpdateCylinder(&this->actor, &this->collider);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colCheckCtx, &this->collider.base);
    }
}

void func_80B491EC(EnInvadepoh* this) {
    this->unk39C = 0.0f;
    this->unk3A4 = 0.0f;
    this->unk3AA = 0;
    this->actor.gravity = -15.0f;
    this->unk3A0 = 1.0f;
    this->actionFunc = func_80B49228;
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49228(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;
    f32 temp_f0;

    Actor_SetVelocityYRotationAndGravity(&this->actor);
    this->actor.velocity.y *= 0.97f;
    temp_f0 = Math_SmoothStepToF(&this->actor.world.pos.y, this->actor.home.pos.y + D_80B4E934.y + 300.0f, 0.7f,
                                 fabsf(this->actor.velocity.y), 1.0f);
    func_800B9010(&this->actor, NA_SE_EV_UFO_APPEAR - SFX_FLAG);
    if (fabsf(temp_f0) < 1.0f) {
        func_80B45EC8(this, globalCtx, 0x32);
        func_80B492FC(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49228.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B492FC(EnInvadepoh* this) {
    this->actor.velocity.y *= 0.1f;
    this->unk2F0 = 20;
    this->unk3A0 = 0.3f;
    this->unk3A4 = 0.03f;
    this->unk3AA = 3000;
    this->actionFunc = func_80B4934C;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B492FC.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4934C(EnInvadepoh* this, GlobalContext* globalCtx) {
    f32 temp = this->actor.home.pos.y + D_80B4E934.y + 300.0f;

    if (this->actor.world.pos.y < temp) {
        this->actor.gravity = 3.0f;
    } else {
        this->actor.gravity = -2.0f;
    }
    this->actor.velocity.y *= 0.96f;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_800B9010(&this->actor, NA_SE_EV_UFO_APPEAR - SFX_FLAG);
    this->unk2F0--;
    if (this->unk2F0 <= 0) {
        func_80B49404(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4934C.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49404(EnInvadepoh* this) {
    this->unk2F0 = 120;
    this->unk3A0 = 0.2f;
    this->unk3A4 = 0.01f;
    this->unk3AA = 3000;
    this->unk3AC = 0;
    this->unk2F2 = 0;
    this->actor.gravity = 33.0f;
    this->actionFunc = func_80B49454;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49404.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49454(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;
    Vec3f sp30;
    s32 pad2;

    if (this->unk2F2 < 0x19) {
        this->unk2F2++;
    } else {
        this->unk2F2 = 0;
        this->unk3AC++;
        this->unk3AC = CLAMP_MAX(this->unk3AC, 4);
        this->actor.gravity = 33.0f;
        func_80B45EC8(this, globalCtx, 0x14);
    }

    Math_Vec3f_Sum(&D_80B4EDD0[this->unk3AC], &this->actor.home, &sp30);
    if (Math3D_DistanceSquared(&this->actor.world, &sp30) < SQ(400.0f)) {
        this->actor.speedXZ *= 0.8f;
    } else {
        Math_StepToF(&this->actor.speedXZ, 170.0f, 21.0f);
        this->actor.speedXZ *= 0.98f;
    }
    if (func_80B450C0(&this->actor.world.pos.x, &this->actor.world.pos.z, sp30.x, sp30.z, this->actor.speedXZ)) {
        this->actor.speedXZ = 0.0f;
    }
    if (sp30.y < this->actor.world.pos.y) {
        Math_StepToF(&this->actor.gravity, -12.0f, 7.0f);
    } else {
        Math_StepToF(&this->actor.gravity, 5.0f, 4.0f);
    }
    this->actor.velocity.y += this->actor.gravity;
    this->actor.velocity.y *= 0.97f;
    this->actor.world.pos.y += this->actor.velocity.y;
    func_800B9010(&this->actor, NA_SE_EV_UFO_APPEAR - SFX_FLAG);
    if (this->unk2F0 > 0) {
        this->unk2F0--;
    } else {
        func_80B49628(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49454.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49628(EnInvadepoh* this) {
    this->unk3A0 = 0.2f;
    this->unk3A4 = 0.01f;
    this->unk3AA = 3000;
    this->actor.velocity.y *= 0.8f;
    this->actionFunc = func_80B49670;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49628.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49670(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;
    Vec3f sp30;

    sp30.x = this->actor.home.pos.x;
    sp30.y = this->actor.home.pos.y + 1500.0f;
    sp30.z = this->actor.home.pos.z;
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&this->actor.world, &sp30), 0xA, 0xBB8, 0x64);
    if ((globalCtx->gameplayFrames & 0x3F) < 0xE) {
        Math_StepToF(&this->actor.speedXZ, 5.0f, 1.0f);
    } else {
        this->actor.speedXZ *= 0.97f;
    }
    if (sp30.y < this->actor.world.pos.y) {
        this->actor.gravity = -0.5f;
    } else {
        this->actor.gravity = 2.0f;
    }
    this->actor.velocity.y *= 0.97f;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if (D_80B4E940 == 3) {
        func_80B499BC(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49670.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B497A4(EnInvadepoh* this) {
    this->unk3A0 = 0.2f;
    this->unk3A4 = 0.01f;
    this->unk3AA = 3000;
    this->unk2F0 = 35;
    this->actor.gravity = -1.5f;
    this->actionFunc = func_80B497EC;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B497A4.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B497EC(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;
    Vec3f sp30;

    sp30.x = this->actor.home.pos.x + D_80B4E934.x;
    sp30.y = this->actor.home.pos.y + D_80B4E934.y + 400.0f;
    sp30.z = this->actor.home.pos.z + D_80B4E934.z;
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&this->actor.world, &sp30), 4, 0x1F40, 0x64);
    Math_StepToF(&this->actor.speedXZ, 70.0f, 3.0f);
    if (sp30.y < this->actor.world.pos.y) {
        this->actor.gravity = -2.0f;
    } else {
        this->actor.gravity = 2.0f;
    }
    this->actor.velocity.y *= 0.97f;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if (this->unk2F0 > 0) {
        this->unk2F0--;
        return;
    }
    func_80B49904(this);
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B497EC.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49904(EnInvadepoh* this) {
    this->unk3A0 = 0.2f;
    this->unk3A4 = 0.01f;
    this->unk3AA = 3000;
    this->unk2F0 = 60;
    this->actor.gravity = 1.0f;
    this->actionFunc = func_80B4994C;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49904.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4994C(EnInvadepoh* this, GlobalContext* globalCtx) {
    Math_StepToF(&this->actor.speedXZ, 150.0f, 4.0f);
    this->actor.velocity.y *= 0.95f;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if (this->unk2F0 > 0) {
        this->unk2F0--;
    } else {
        Actor_MarkForDeath(&this->actor);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4994C.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B499BC(EnInvadepoh* this) {
    this->unk2F0 = 40;
    this->unk3A0 = 0.2f;
    this->unk3A4 = 0.01f;
    this->unk3AA = 3000;
    this->actor.speedXZ = 0.0f;
    this->actionFunc = func_80B49A00;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B499BC.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49A00(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;
    Vec3f sp30;

    sp30.x = this->actor.home.pos.x;
    sp30.y = this->actor.home.pos.y + 800.0f;
    sp30.z = this->actor.home.pos.z;
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&this->actor.world, &sp30), 4, 0x1F40, 0x64);
    Math_StepToF(&this->actor.speedXZ, 30.0f, 3.0f);
    this->actor.velocity.y *= 0.98f;
    if (sp30.y < this->actor.world.pos.y) {
        this->actor.gravity = -0.5f;
    } else {
        this->actor.gravity = 2.0f;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_800B78B8(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4);
    if (this->unk2F0 > 0) {
        this->unk2F0--;
    } else {
        func_80B497A4(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49A00.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49B1C(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;
    f32 temp;

    this->actionFunc(this, globalCtx);
    this->unk3A8 += this->unk3AA;
    Math_StepToF(&this->unk39C, this->unk3A0, this->unk3A4);
    temp = Math_SinS(this->unk3A8) * this->unk39C + 1.0f; // required
    Actor_SetScale(&this->actor, 0.27f * temp);
    Math_StepToS(&this->unk306, 0x258, 8);
    this->actor.world.rot.y += this->unk306;
    this->unk304 += 0x258;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49B1C.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49BD0(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06014088, -10.0f);
    substruct->unk26.x = 0;
    substruct->unk26.y = 0;
    substruct->unk26.z = 0;
    substruct->unk30 = 0.1f;
    substruct->unk2C = 800;
    this->actionFunc = func_80B49C38;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49BD0.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49C38(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;
    s32 temp_v0_2;

    func_80B44570(this);
    func_80B44C24(this, globalCtx);
    func_80B43E6C(this, 6, 0x7D0, 0x64);
    if (1) {} // required to match
    if (this->unk309 == 0 || this->unk309 + 1 == this->unk308) {
        if (this->unk378 == 0) {
            temp_v0_2 = func_800FE620(globalCtx);
            if (temp_v0_2 > 0) {
                temp_v0_2 = (REG(15) * -16.0f / temp_v0_2) - 0.5f;
                this->unk378 = func_80B45550(this, globalCtx, 6400.0f, temp_v0_2);
            }
        }
        this->actor.flags &= -0xA;
    } else {
        this->unk378 = 0;
        this->actor.flags |= 9;
    }

    if ((this->actor.flags & 0x40) == 0x40) {
        if (func_801378B8(&this->skelAnime, 0.0f) || func_801378B8(&this->skelAnime, 7.0f)) {
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_ROMANI_WALK);
        }
    }
    if (0.9999f <= this->unk320) {
        Actor_MarkForDeath(&this->actor);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49C38.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49DA0(EnInvadepoh* this) {
    this->unk354 = 0.08f;
    this->unk350 = 2000;
    this->EnInvadePohStructUnk324.unk4C = 0;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, -10.0f);
    this->actionFunc = func_80B49DFC;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49DA0.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
// all temps and separate operations are required
#ifdef NON_MATCHING
void func_80B49DFC(EnInvadepoh* this, GlobalContext* globalCtx) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;
    ActorPlayer* player = PLAYER;
    s16 temp_v1;
    s16 diff;

    Math_StepToS(&this->EnInvadePohStructUnk324.unk4C, 0x7D0, 0x1F4);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, this->EnInvadePohStructUnk324.unk4C,
                       0x28);
    temp_v1 = (Math_Vec3f_Pitch(&this->actor.focus, &player->base.focus) * 0.85f);
    temp_v1 -= this->actor.shape.rot.x;
    substruct->unk26.x = CLAMP(temp_v1, -0xBB8, 0xBB8);
    diff = (s16)(this->actor.yawTowardsPlayer - this->actor.shape.rot.y);
    temp_v1 = diff;
    temp_v1 *= 0.7f;
    substruct->unk26.y = CLAMP(temp_v1, -0x1F40, 0x1F40);
    if (func_800B867C(&this->actor, globalCtx)) {
        if (this->actor.textId == 0x332D) {
            gSaveContext.weekEventReg[54] |= 0x10;
            this->actor.textId = 0x332E;
        }
        func_80B49BD0(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49DFC.asm")
#endif

#ifdef NON_MATCHING
// almost
void func_80B49F88(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad[2];
    EnInvadepoh* this = THIS;
    s32 sp38;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk2F4)) {
        sp38 = gSaveContext.time;
        this->actor.objBankIndex = this->unk2F4;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        func_80B44F58();
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06013928, &D_06014088, this->limbDrawTable,
                         this->transitionDrawTable, 23);
        func_80B45C04(&this->EnInvadePohStructUnk324, &D_80B4EA90, 1, &D_80B4EB00, 1, &D_801D15BC, 0x64, 0.03, 0.3,
                      0.03);
        func_80B44540(this, globalCtx);
        func_80B44570(this);
        func_80B44C24(this, globalCtx);
        func_80B43F0C(this);
        func_80B4516C(this);
        if (0x20 & gSaveContext.weekEventReg[21]) {
            if (gSaveContext.weekEventReg[54] & 0x10) {
                this->actor.textId = 0x332E;
            } else {
                this->actor.textId = 0x332D;
            }

        } else {
            this->actor.textId = 0x332C;
        }

        if (sp38 < 0xC000) {
            this->actor.update = func_80B4A168;
            if (sp38 < 0x1555) {
                this->actor.draw = 0;
            } else if (((sp38 < 0x4000) && (sp38 >= 0x1555)) && (sp38 < 0x1800)) {
                this->actor.update = func_80B4A1B8;
                this->actor.draw = func_80B4E324;
                func_80B49BD0(this);
            } else {
                Actor_MarkForDeath(&this->actor);
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49F88.asm")
#endif

void func_80B4A168(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    if ((gSaveContext.time < 0x4000) && (gSaveContext.time >= 0x1555)) {
        this->actor.update = func_80B4A1B8;
        this->actor.draw = func_80B4E324;
        func_80B49BD0(this);
    }
}

void func_80B4A1B8(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnInvadepoh* this = THIS;
    s32 sp2C;
    s32 temp_v0;

    sp2C = (this->actor.flags & 0x40) == 0x40;
    temp_v0 = func_800B84D0(&this->actor, globalCtx);

    if (temp_v0) {
        func_80151BB4(globalCtx, 5);
        func_80B49DA0(this);
    }
    this->actionFunc(this, globalCtx);
    if (sp2C != 0) {
        if (this->actor.update != NULL) {
            SkelAnime_FrameUpdateMatrix(&this->skelAnime);
            func_80B45CE0(&this->EnInvadePohStructUnk324);
            if (this->actionFunc != func_80B49DFC) {
                if (!temp_v0) {
                    if (this->actor.isTargeted) {
                        func_800B8614(&this->actor, globalCtx, 350.0f);
                    }
                }
            }
            Collider_UpdateCylinder(&this->actor, &this->collider);
            CollisionCheck_SetOC(globalCtx, &globalCtx->colCheckCtx, &this->collider.base);
        }
    }
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4A2C0(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, -10.0f);
    substruct->unk26.x = 0;
    substruct->unk26.y = 0;
    substruct->unk26.z = 0;
    substruct->unk30 = 0.1f;
    substruct->unk2C = 1500;
    this->unk2F0 = Rand_S16Offset(200, 200);
    this->unk304 = this->actor.shape.rot.y;
    this->actor.flags |= 9;
    this->actionFunc = func_80B4A350;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A2C0.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4A350(EnInvadepoh* this, GlobalContext* globalCtx) {
    Vec3f sp44;
    s16 sp42;
    ActorPlayer* player;
    EnInvadePohStructUnk324* substruct;
    s16 temp_v0;
    s16 temp_v1_2;
    s32 temp_f18;
    s16 diff;

    if ((globalCtx->gameplayFrames & 0xFF) == 0) {
        Math_Vec3s_ToVec3f(&sp44, this->unk30C);
        sp42 = Math_Vec3f_Yaw(&this->actor.world, &sp44);
        temp_v0 = Rand_S16Offset(-0x1F40, 0x3E80);
        this->EnInvadePohStructUnk324.unk4C = 0;
        this->unk304 = temp_v0 + sp42;
    }
    Math_StepToS(&this->EnInvadePohStructUnk324.unk4C, 0x7D0, 0x28);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk304, 6, this->EnInvadePohStructUnk324.unk4C, 0x28);
    substruct = &this->EnInvadePohStructUnk324;
    if (this->actor.xzDistToPlayer < 300.0f) {
        player = PLAYER;

        temp_v1_2 = Math_Vec3f_Pitch(&this->actor.focus.pos, &player->base.focus);
        temp_v1_2 *= 0.85f;
        temp_v1_2 -= this->actor.shape.rot.x;
        substruct->unk26.x = CLAMP(temp_v1_2, -0x9C4, 0x9C4);
        diff = (s16)(this->actor.yawTowardsPlayer - this->actor.shape.rot.y);
        temp_v1_2 = diff;
        temp_v1_2 *= 0.7f;
        substruct->unk26.y = CLAMP(temp_v1_2, -0x1F40, 0x1F40);
        if ((player->unk840 & 0xFF) == 0) {
            substruct->unk26.z = Rand_S16Offset(-0x5DC, 0xBB8);
        }
    } else {
        substruct->unk26.x = 0;
        substruct->unk26.y = 0;
        substruct->unk26.z = 0;
    }
    if (this->unk2F0 > 0) {
        this->unk2F0--;
    } else {
        func_80B4A570(this);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A350.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4A570(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    SkelAnime_ChangeAnimTransitionStop(&this->skelAnime, &D_06002A8C, -10.0f);
    substruct->unk26.x = 0;
    substruct->unk26.y = 0;
    substruct->unk26.z = 0;
    substruct->unk30 = 0.1f;
    substruct->unk2C = 800;
    this->actor.flags |= 9;
    this->actionFunc = func_80B4A5E4;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A570.asm")
#endif

void func_80B4A5E4(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (this->unk29C != 0) {
        func_80B4A2C0(this);
    }
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4A614(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06014088, 0.0f);
    substruct->unk26.x = 0;
    substruct->unk26.y = 0;
    substruct->unk26.z = 0;
    substruct->unk30 = 0.1f;
    substruct->unk2C = 800;
    this->actionFunc = func_80B4A67C;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A614.asm")
#endif

void func_80B4A67C(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;

    Math_StepToF(&this->actor.speedXZ, 5.0f, 1.0f);
    if (func_80B44B84(this, globalCtx, this->actor.speedXZ, 50.0f)) {
        func_80B44640(this);
        this->EnInvadePohStructUnk324.unk4C = 0x5DC;
        this->actor.speedXZ *= 0.5f;
    } else {
        Math_StepToS(&this->EnInvadePohStructUnk324.unk4C, 0x190, 0x32);
    }
    func_80B43E6C(this, 6, this->EnInvadePohStructUnk324.unk4C, 0x32);
    if (this->unk309 == 0) {
        if (this->unk378 == 0) {
            this->unk378 = func_80B45550(this, globalCtx, 6400.0f, -0xF);
        }
        this->actor.flags &= -0xA;
    } else {
        this->unk378 = 0;
        this->actor.flags |= 9;
    }
    if ((this->actor.flags & 0x40) == 0x40) {
        if (func_801378B8(&this->skelAnime, 0.0f) || func_801378B8(&this->skelAnime, 7.0f)) {
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_ROMANI_WALK);
        }
    }
    if (this->unk309 == this->unk308) {
        func_80B4A2C0(this);
    }
}

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4A7C0(EnInvadepoh* this) {
    this->unk354 = 0.08f;
    this->unk350 = 2000;
    this->EnInvadePohStructUnk324.unk4C = 0;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, 0.0f);
    this->actionFunc = func_80B4A81C;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A7C0.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4A81C(EnInvadepoh* this, GlobalContext* globalCtx) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;
    ActorPlayer* player = PLAYER;
    s16 temp_v1;
    s16 diff;

    Math_StepToS(&this->EnInvadePohStructUnk324.unk4C, 0x7D0, 0x1F4);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, this->EnInvadePohStructUnk324.unk4C,
                       0x28);
    temp_v1 = (Math_Vec3f_Pitch(&this->actor.focus, &player->base.focus) * 0.85f);
    temp_v1 -= this->actor.shape.rot.x;
    substruct->unk26.x = CLAMP(temp_v1, -0xBB8, 0xBB8);
    diff = (s16)(this->actor.yawTowardsPlayer - this->actor.shape.rot.y);
    temp_v1 = diff;
    temp_v1 *= 0.7f;
    substruct->unk26.y = CLAMP(temp_v1, -0x1F40, 0x1F40);

    if (func_800B867C(this, globalCtx)) {
        if (this->actor.textId == 0x332D) {
            gSaveContext.weekEventReg[54] |= 0x10;
            this->actor.textId = 0x332E;
        }
        if (this->unk308 == this->unk309) {
            func_80B4A2C0(this);
        } else {
            func_80B4A614(this);
        }
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A81C.asm")
#endif

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4A9C8(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;
    s32 pad[2];
    s32 sp38;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk2F4)) {
        sp38 = gSaveContext.time;
        this->actor.objBankIndex = this->unk2F4;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        func_80B44F58();
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06013928, &D_06014088, this->limbDrawTable,
                         this->transitionDrawTable, 23);
        func_80B45C04(&this->EnInvadePohStructUnk324, &D_80B4EA90, 1, &D_80B4EB00, 1, &D_801D15BC, 0x64, 0.03f, 0.3f,
                      0.03f);
        func_80B44620(this, globalCtx);
        if ((sp38 < 0x1800) || (sp38 >= 0x4000)) {
            this->unk309 = 0;
            this->actor.update = func_80B4AB8C;
        } else {
            this->unk309 = this->unk308;
            this->actor.update = func_80B4ABDC;
            this->actor.draw = func_80B4E324;
            func_80B4A2C0(this);
        }

        func_80B4407C(this, this->unk309);
        func_80B43F0C(this);
        func_800B4AEC(globalCtx, &this->actor, 50.0f);
        func_80B4516C(this);
        if (gSaveContext.weekEventReg[21] & 0x20) {
            if (gSaveContext.weekEventReg[54] & 0x10) {
                this->actor.textId = 0x332E;
            } else {
                this->actor.textId = 0x332D;
            }

        } else {
            this->actor.textId = 0x332C;
        }
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A9C8.asm")
#endif

void func_80B4AB8C(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    if ((gSaveContext.time < 0x4000) && (gSaveContext.time >= 0x1800)) {
        this->actor.update = func_80B4ABDC;
        this->actor.draw = func_80B4E324;
        func_80B4A614(this);
    }
}

void func_80B4ABDC(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnInvadepoh* this = THIS;
    s32 sp2C;
    s32 temp_v0;

    sp2C = (thisx->flags & 0x40) == 0x40;
    temp_v0 = func_800B84D0(&this->actor, globalCtx);
    if (temp_v0 != 0) {
        func_80151BB4(globalCtx, 5);
        func_80B4A7C0(&this->actor);
    }
    this->actionFunc(this, globalCtx);
    if (sp2C != 0) {
        this->unk29C = SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        func_80B45CE0(&this->EnInvadePohStructUnk324);
        if (this->actionFunc != func_80B4A81C) {
            if (temp_v0 == 0) {
                if (this->actor.isTargeted) {
                    func_800B8614(&this->actor, globalCtx, 100.0f);
                }
            }
        }
        Collider_UpdateCylinder(&this->actor, &this->collider);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colCheckCtx, &this->collider.base);
    }
}

void func_80B4ACDC(EnInvadepoh* this) {
    this->actionFunc = func_80B4ACF0;
}

void func_80B4ACF0(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (gSaveContext.weekEventReg[22] & 1) {
        this->actor.draw = func_80B4E324;
        this->actor.flags |= 9;
        func_80B4AD3C(this);
    }
}

void func_80B4AD3C(EnInvadepoh* this) {
    this->actor.flags |= 0x10000;
    this->actionFunc = func_80B4AD60;
}

void func_80B4AD60(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (func_800B84D0(&this->actor, globalCtx)) {
        func_80B4560C(this, globalCtx, 0x3331);
        func_80B4ADB8(this);
    } else {
        func_800B8614(&this->actor, globalCtx, 2000.0f);
    }
}

void func_80B4ADB8(EnInvadepoh* this) {
    this->actionFunc = func_80B4ADCC;
}

void func_80B4ADCC(EnInvadepoh* this, GlobalContext* globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && func_80147624(globalCtx)) {
        if (this->unk376 == 0x3331) {
            if (gSaveContext.weekEventReg[22] & 2) {
                func_80B4560C(this, globalCtx, 0x3334);
                func_80151BB4(globalCtx, 0x1D);
                func_80151BB4(globalCtx, 5);
                return;
            }
            func_80B4560C(this, globalCtx, 0x3333);
            return;
        }
        if (this->unk376 == 0x3333) {
            func_80B4AEC0(this);
            return;
        }
        if (this->unk376 == 0x3334) {
            func_801477B4(globalCtx);
            func_80B4B024(this);
        }
    }
}

void func_80B4AEC0(EnInvadepoh* this) {
    this->unk2F0 = 2;
    this->actionFunc = func_80B4AEDC;
}

void func_80B4AEDC(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (this->unk2F0 > 0) {
        this->unk2F0--;
        if (this->unk2F0 == 0) {
            func_801477B4(globalCtx);
        }
    }
    if (Actor_HasParent(&this->actor, globalCtx)) {
        this->actor.parent = NULL;
        gSaveContext.weekEventReg[22] |= 2;
        func_80B4AF80(this);
    } else {
        func_800B8A1C(&this->actor, globalCtx, 0x60, 2000.0f, 2000.0f);
    }
}

void func_80B4AF80(EnInvadepoh* this) {
    this->actionFunc = func_80B4AF94;
}

void func_80B4AF94(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (func_800B84D0(&this->actor, globalCtx)) {
        func_80B4560C(this, globalCtx, 0x3334);
        func_80151BB4(globalCtx, 0x1E);
        func_80151BB4(globalCtx, 0x1D);
        func_80151BB4(globalCtx, 5);
        func_80B4ADB8(this);
    } else {
        func_800B85E0(&this->actor, globalCtx, 2000.0f, -1);
    }
}

void func_80B4B024(EnInvadepoh* this) {
    this->actor.flags &= ~9;
    this->actionFunc = func_80B4B048;
}

void func_80B4B048(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (globalCtx->msgCtx.unk120B1 == 0) {
        if (globalCtx->msgCtx.unk11F22 == 0) {
            D_80B4E998 = 1;
        } else if ((func_80152498(&globalCtx->msgCtx) == 6) || (func_80152498(&globalCtx->msgCtx) == 5)) {
            D_80B4E998 = 1;
        }
    }
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B0C4.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4B218(Actor* thisx, GlobalContext* globalCtx) {
    s16 diff;
    EnInvadepoh* this = THIS;
    s16 temp_v1;
    s32 sp38;
    ActorPlayer* player;
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    sp38 = (this->actor.flags & 0x40) == 0x40;
    this->actionFunc(this, globalCtx);
    if (sp38 != 0 && this->actor.update != NULL) {
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        player = PLAYER;
        Math_StepToS(&this->EnInvadePohStructUnk324.unk4C, 0x7D0, 0x28);
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 6,
                           this->EnInvadePohStructUnk324.unk4C, 0x28);
        temp_v1 = (Math_Vec3f_Pitch(&this->actor.focus.pos, &player->base.focus.pos) * 0.9f);
        temp_v1 -= this->actor.shape.rot.x;
        substruct->unk26.x = CLAMP(temp_v1, -0xBB8, 0xBB8);
        diff = (s16)(this->actor.yawTowardsPlayer - this->actor.shape.rot.y);
        temp_v1 = diff;
        temp_v1 *= 0.7f;
        substruct->unk26.y = CLAMP(temp_v1, -0x1F40, 0x1F40);
        func_80B45CE0(substruct);
        Collider_UpdateCylinder(&this->actor, &this->collider);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colCheckCtx, &this->collider.base);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B218.asm")
#endif

void func_80B4B3DC(EnInvadepoh* this) {
    s32 pad;

    if (func_801378B8(&this->skelAnime, 1.0f) || func_801378B8(&this->skelAnime, 7.0f)) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EV_MONKEY_WALK);
    }
}

void func_80B4B430(EnInvadepoh* this) {
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_060021C8, -6.0f);
    this->unk2F0 = Rand_S16Offset(50, 80);
    this->actionFunc = func_80B4B484;
}

void func_80B4B484(EnInvadepoh* this, GlobalContext* globalCtx) {
    Math_StepToF(&this->actor.speedXZ, 1.1f, 0.5f);
    if (func_80B44C80(this, globalCtx)) {
        func_80B44690(this);
    }
    func_80B4B3DC(this);
    if (this->unk3BC >= 0) {
        this->unk2F0 = 0;
    }

    if (this->unk2F0 > 0) {
        this->unk2F0--;
    } else {
        func_80B4B510(this);
    }
}

void func_80B4B510(EnInvadepoh* this) {
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06001BD8, -6.0f);
    this->unk2F0 = Rand_S16Offset(50, 200);
    this->actionFunc = func_80B4B564;
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B564.asm")

void func_80B4B724(EnInvadepoh* this) {
    SkelAnime_ChangeAnimTransitionStop(&this->skelAnime, &D_06000998, -6.0f);
    this->actionFunc = func_80B4B768;
}

void func_80B4B768(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad;

    Math_StepToF(&this->actor.speedXZ, 0.0f, 1.0f);
    Math_SmoothStepToS(&this->actor.world.rot.y, Actor_YawBetweenActors(&this->actor, D_80B5040C), 5, 5000, 100);
    func_80B44E90(this, globalCtx);
    if (func_801378B8(&this->skelAnime, 13.0f) || func_801378B8(&this->skelAnime, 19.0f)) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EV_SMALL_DOG_ANG_BARK);
    }
    if (this->unk29C != 0) {
        func_80B4B510(this);
    }
}

void func_80B4B820(EnInvadepoh* this) {
    SkelAnime_ChangeAnimTransitionStop(&this->skelAnime, &D_06001560, -6.0f);
    this->actionFunc = func_80B4B864;
}

void func_80B4B864(EnInvadepoh* this, GlobalContext* globalCtx) {
    Math_StepToF(&this->actor.speedXZ, 0.5f, 1.0f);
    func_80B44E90(this, globalCtx);
    if (this->unk29C != 0) {
        func_80B4B510(this);
    }
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B8BC.asm")

void func_80B4BA30(EnInvadepoh* this, GlobalContext* globalCtx) {
    if (D_80B4E940 == 2) {
        this->actor.update = func_80B4BA84;
        this->actor.draw = func_80B4E660;
        this->actor.flags |= 1;
        func_80B4B430(this);
    }
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4BA84.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4BBE0(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06016720, -6.0f);
    substruct->unk26.x = 0;
    substruct->unk26.y = 0;
    substruct->unk26.z = 0;
    substruct->unk30 = 0.1f;
    substruct->unk2C = 800;

    this->EnInvadePohStructUnk324.unk4C = 0;
    this->actionFunc = func_80B4BC4C;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4BBE0.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4BC4C.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4BFFC(EnInvadepoh* this) {
    this->unk354 = 0.08f;
    this->unk350 = 2000;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_0600A174, -6.0f);
    this->EnInvadePohStructUnk324.unk4C = 0;
    this->actionFunc = func_80B4C058;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4BFFC.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C058.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4C1BC(EnInvadepoh* this) {
    this->unk354 = 0.08f;
    this->unk350 = 2000;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_0600A174, -6.0f);
    this->EnInvadePohStructUnk324.unk4C = 0;
    this->actionFunc = func_80B4C218;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C1BC.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C218.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C3A0.asm")

void func_80B4C568(EnInvadepoh* this, GlobalContext* globalCtx) {
    if ((gSaveContext.time >= 0xD573) && (gSaveContext.time < 0xD800)) {
        this->actor.update = func_80B4C5C0;
        this->actor.draw = func_80B4E7BC;
        func_80B4BBE0(this);
    }
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C5C0.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4C6C8(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06014088, -10.0f);
    substruct->unk26.x = 0;
    substruct->unk26.y = 0;
    substruct->unk26.z = 0;
    substruct->unk30 = 0.1f;
    substruct->unk2C = 0x320;
    this->actionFunc = func_80B4C730;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C6C8.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C730.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4CAB0(EnInvadepoh* this) {
    this->unk354 = 0.08f;
    this->unk350 = 4000;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, -10.0f);
    this->EnInvadePohStructUnk324.unk4C = 0;
    this->actionFunc = func_80B4CB0C;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CAB0.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CB0C.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4CC70(EnInvadepoh* this) {
    this->unk354 = 0.08f;
    this->unk350 = 2000;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, -10.0f);
    this->EnInvadePohStructUnk324.unk4C = 0;
    this->actionFunc = func_80B4CCCC;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CC70.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CCCC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CE54.asm")

void func_80B4CFFC(EnInvadepoh* this, GlobalContext* globalCtx) {
    if ((gSaveContext.time >= 0xD555) && (gSaveContext.time < 0xD7E1)) {
        this->actor.update = func_80B4D054;
        this->actor.draw = func_80B4E324;
        func_80B4C6C8(this);
    }
}

void func_80B4D054(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnInvadepoh* this = THIS;
    s32 sp2C;
    s32 temp_v0;

    sp2C = (this->actor.flags & 0x40) == 0x40;
    temp_v0 = func_800B84D0(thisx, globalCtx);
    if (temp_v0) {
        func_80151BB4(globalCtx, 5);
        func_80B4CAB0(this);
    }
    this->actionFunc(this, globalCtx);
    if (sp2C != 0) {
        if (this->actor.update != NULL) {
            SkelAnime_FrameUpdateMatrix(&this->skelAnime);
            func_80B45CE0(&this->EnInvadePohStructUnk324);
            if (this->actionFunc != func_80B4CB0C) {
                if (!temp_v0) {
                    if (this->actor.isTargeted) {
                        func_800B8614(thisx, globalCtx, 350.0f);
                    }
                }
            }
            Collider_UpdateCylinder(&this->actor, &this->collider);
            CollisionCheck_SetOC(globalCtx, &globalCtx->colCheckCtx, &this->collider.base);
        }
    }
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D15C.asm")

// ISMATCHING: Move rodata once all funcs match
//JANK - fix later 
#ifdef NON_MATCHING
void func_80B4D290(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = (EnInvadepoh*)thisx;
    f32 sp28;
    f32 temp_f10;
    Actor* temp_v1;
    if (D_80B503F0 == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }

    Math_StepToF(&this->actor.velocity.y, 15.0f, this->unk300);
    sp28 = Math_SmoothStepToF(&this->actor.world.pos.y, this->actor.home.pos.y + 850.0f, 0.2f, this->actor.velocity.y,
                              0.01f);
    this->unk304 += 0x2BC;
    this->actor.world.pos.x = (Math_SinS(this->unk304) * 80.0f) + this->actor.home.pos.x;
    temp_f10 = Math_CosS(this->unk304) * 80.0f;
    this->EnInvadePohStructUnk324.unk4C += this->EnInvadePohStructUnk324.unk4E;
    temp_v1 = this->actor.child;
    this->actor.shape.rot.y += this->EnInvadePohStructUnk324.unk4C;
    this->actor.world.pos.z = this->actor.home.pos.z + ((0, temp_f10));
    if (this->actor.child != 0) {
        this->actor.child->world.pos.x = this->actor.world.pos.x;
        temp_v1->world.pos.y = this->actor.world.pos.y - 38.0f;
        temp_v1->world.pos.z = this->actor.world.pos.z;
        temp_v1->shape.rot.y = this->actor.shape.rot.y;
    }

    if (sp28 < 5.0f) {
        Actor_MarkForDeath(&this->actor);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D290.asm")
#endif

void func_80B4D3E4(EnInvadepoh* this) {
    SkelAnime_ChangeAnimDefaultRepeat(&this->skelAnime, &D_06001674);
    this->skelAnime.animCurrentFrame = (this->actor.params & 7) * this->skelAnime.animFrameCount * 0.25f;
    this->unk389 = 0xFF;
    this->actor.draw = 0;
    this->unk38B = 1;
    this->unk38C = 0;
    this->unk38D = 0xFF;
    this->unk306 = 400;
    this->unk304 = 0;
    this->unk2F0 = 200;
    this->actor.velocity.y = 0.0f;
    this->actionFunc = func_80B4D480;
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D480.asm")

void func_80B4D670(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnInvadepoh* this = THIS;
    s32 invadepohType;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk2F4)) {
        invadepohType = this->actor.params & 7;
        this->actor.objBankIndex = this->unk2F4;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        func_80B45080();
        this->actor.update = func_80B4D760;
        SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06004E50, &D_06001674, this->limbDrawTable,
                         this->transitionDrawTable, 14);
        if (invadepohType < 3) {
            func_80B453F4(this, globalCtx, invadepohType);
            func_80B4D15C(this);
        } else {
            func_80B45460(this, globalCtx);
            func_80B4D3E4(this);
        }
    }
}

void func_80B4D760(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    this->actionFunc(this, globalCtx);
    if (this->actor.update != NULL) {
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        func_800B9010(&this->actor, NA_SE_EN_FOLLOWERS_BEAM_PRE - SFX_FLAG);
    }
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D7B8.asm")

void func_80B4D9B4(Actor* thisx, GlobalContext* globalCtx) {
    func_80B4D7B8(globalCtx);
}

s32 func_80B4D9D8(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, Actor* thisx,
                  Gfx** gfx) {
    return 0;
}

void func_80B4D9F4(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx, Gfx** gfx) {
    EnInvadepoh* this = THIS;

    if ((limbIndex == 12) && (this->unk38D != 0)) {
        Matrix_Push();
        SysMatrix_InsertZRotation_s(-0x53ED, MTXMODE_APPLY);
        Matrix_RotateY(-0x3830, MTXMODE_APPLY);
        Matrix_Scale(1.0f, 1.0f, 1.5f, MTXMODE_APPLY);
        SysMatrix_CopyCurrentState(&D_80B502A0);
        Matrix_Pop();
    } else if ((limbIndex == 13) && (this->unk38D != 0)) {
        Matrix_Push();
        SysMatrix_InsertZRotation_s(-0x53ED, MTXMODE_APPLY);
        Matrix_RotateY(-0x47D0, MTXMODE_APPLY);
        Matrix_Scale(1.0f, 1.0f, 1.5f, MTXMODE_APPLY);
        SysMatrix_CopyCurrentState(&D_80B502E0);
        Matrix_Pop();
    }
    if (limbIndex == 11) {
        SysMatrix_MultiplyVector3fByState(&D_80B4EE24, &this->actor.focus.pos);
    }
}

// cursed
#ifdef NON_MATCHING
void func_80B4DB14(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;
    Vec3f sp80;
    Vec3f sp74;

    OPEN_DISPS(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    Matrix_Push();
    if (this->unk38B != 0) {
        if (this->unk389 == 0xFF) {
            func_8012C28C(globalCtx->state.gfxCtx);
            AnimatedMat_Draw(globalCtx, &D_80B50400);
            Scene_SetRenderModeXlu(globalCtx, 0, 1);
            gDPSetEnvColor(POLY_OPA_DISP++, 0x00, 0x00, 0x00, 0xFF);
            POLY_OPA_DISP = SkelAnime_DrawSV2(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl,
                                              this->skelAnime.dListCount, func_80B4D9D8, func_80B4D9F4, &this->actor,
                                              POLY_OPA_DISP);
        } else {
            AnimatedMat_Draw(globalCtx, &D_80B50400);
            Scene_SetRenderModeXlu(globalCtx, 1, 2);
            gDPSetEnvColor(POLY_XLU_DISP++, 0x00, 0x00, 0x00, this->unk389);
            POLY_XLU_DISP = SkelAnime_DrawSV2(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl,
                                              this->skelAnime.dListCount, func_80B4D9D8, func_80B4D9F4, &this->actor,
                                              POLY_XLU_DISP);
        }
        if (this->unk38D != 0) {
            AnimatedMat_Draw(globalCtx, &D_80B503FC);
            gDPPipeSync(POLY_XLU_DISP++);
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 255, 240, 180, 100, 60);
            gDPSetEnvColor(POLY_XLU_DISP++, 0, 0, 0,
                           0x69); // 0x69 placeholder for this->unk38D * 0.5882353f & 0xFF | ~0xFF
            SysMatrix_InsertMatrix(&D_80B502A0, MTXMODE_NEW);
            gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx),
                      G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
            gSPDisplayList(POLY_XLU_DISP++, 0x06000080);
            SysMatrix_InsertMatrix(&D_80B502E0, MTXMODE_NEW);
            gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx),
                      G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
            gSPDisplayList(POLY_XLU_DISP++, 0x06000080);
        }
    }
    if (this->unk38C != 0) {
        SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y + 68.0f,
                                                 this->actor.world.pos.z, &this->actor.shape);
        Matrix_Scale(this->unk390.x, this->unk390.y, this->unk390.z, MTXMODE_APPLY);
        gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_XLU_DISP, 0x06000720);
    }
    if (this->unk38B != 0) {
        Gfx* dl = func_8012C868(POLY_XLU_DISP);
        gSPSetOtherMode(dl++, G_SETOTHERMODE_H, 4, 4, 0x00000080);
        gDPSetCombineLERP(POLY_XLU_DISP++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0,
                          PRIMITIVE, 0);
        SysMatrix_InsertMatrix(&globalCtx->unk187FC, MTXMODE_NEW);
        SysMatrix_GetStateTranslationAndScaledZ(60.0f, &sp80);
        sp74.x = thisx->world.pos.x + sp80.x;
        sp74.y = thisx->world.pos.y + sp80.y + 68.0f;
        sp74.z = thisx->world.pos.z + sp80.z;
        SysMatrix_InsertTranslation(sp74.x, sp74.y, sp74.z, MTXMODE_NEW);
        Matrix_Scale(0.25f, 0.25f, 0.25f, MTXMODE_APPLY);

        gSPDisplayList(POLY_XLU_DISP++, &D_04029CB0);

        gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 255, 255, 255, 3); // 3 is placeholder, look at asm for more info

        gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_XLU_DISP++, &D_04029CF0);

        if ((this->unk389 >= 0x81) && func_80B456A8(globalCtx, &sp74)) {
            func_800F9824(globalCtx, &globalCtx->kankyoContext, &globalCtx->view, globalCtx->state.gfxCtx, sp74, 10.0f,
                          9.0f, 0, 0);
        }
    }
    Matrix_Pop();
    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4DB14.asm")
#endif

s32 func_80B4E120(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, Actor* thisx) {
    if (limbIndex == 5) {
        EnInvadepoh* this = THIS;
        rot->x -= this->actor.shape.rot.x;
    }
    return 0;
}

void func_80B4E158(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, this->skelAnime.dListCount,
                     func_80B4E120, NULL, &this->actor);
}

void func_80B4E1B0(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, this->skelAnime.dListCount, NULL,
                     NULL, &this->actor);
}

s32 func_80B4E200(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, Actor* thisx) {
    if (limbIndex == 14) {
        EnInvadepoh* this = THIS; // both of these needed to match
        rot->x += this->EnInvadePohStructUnk324.unk20.y;
        rot->y += this->EnInvadePohStructUnk324.unk20.z;
        rot->z += this->EnInvadePohStructUnk324.unk20.x;
    } else if (limbIndex == 13) {
        EnInvadepoh* this = THIS; // both of these needed to match
        rot->x += (s16)(this->EnInvadePohStructUnk324.unk34 * this->EnInvadePohStructUnk324.unk20.y);
        rot->z += this->EnInvadePohStructUnk324.unk40;
    }
    return 0;
}

void func_80B4E2AC(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnInvadepoh* this = THIS;

    if (limbIndex == 19) {
        OPEN_DISPS(globalCtx->state.gfxCtx);
        gSPDisplayList(POLY_OPA_DISP++, D_060003B0);
        CLOSE_DISPS(globalCtx->state.gfxCtx);
    } else if (limbIndex == 14) {
        SysMatrix_MultiplyVector3fByState(&D_80B4EE30, &this->actor.focus.pos);
    }
}

void func_80B4E324(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    OPEN_DISPS(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x09, D_80B4E958[this->EnInvadePohStructUnk324.unk10.unkF]);
    gSPSegment(POLY_OPA_DISP++, 0x08, D_80B4E944[this->EnInvadePohStructUnk324.unk0.unkF]);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, this->skelAnime.dListCount,
                     func_80B4E200, func_80B4E2AC, &this->actor);
    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void func_80B4E3F0(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad[2];
    Vec3f sp5C;

    Matrix_Push();
    SysMatrix_InsertMatrix(&globalCtx->unk187FC, MTXMODE_NEW);
    SysMatrix_GetStateTranslationAndScaledZ(200.0f, &sp5C);
    Matrix_Pop();
    if (0) {}
    sp5C.x += thisx->world.pos.x;
    sp5C.y += thisx->world.pos.y;
    sp5C.z += thisx->world.pos.z;
    func_80B45518(&sp5C);
    SysMatrix_NormalizeXYZ(&globalCtx->unk187FC);
    SysMatrix_InsertZRotation_s(((EnInvadepoh*)thisx)->unk304, MTXMODE_APPLY);
    OPEN_DISPS(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx), (0x00 | 0x02) | 0x00);
    gDPSetPrimColor(POLY_XLU_DISP++, 0xFF, 0x80, 0xFF, 0xFF, 0x00, 0xB4);
    gDPSetEnvColor(POLY_XLU_DISP++, 0xFF, 0x32, 0x00, 0x00);
    gSPDisplayList(POLY_XLU_DISP++, D_04023210);
    if (func_80B456A8(globalCtx, &sp5C)) {
        func_800F9824(globalCtx, &globalCtx->kankyoContext, &globalCtx->view, globalCtx->state.gfxCtx, sp5C, 20.0f,
                      9.0f, 0, 0);
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

s32 func_80B4E5B0(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, Actor* thisx) {
    if ((limbIndex == 5) || (limbIndex == 6) || (limbIndex == 7)) {
        EnInvadepoh* this = THIS;
        rot->x += this->EnInvadePohStructUnk324.unk20.x;
        rot->y += this->EnInvadePohStructUnk324.unk20.y;
        rot->z += this->EnInvadePohStructUnk324.unk20.z;
    }

    return 0;
}

void func_80B4E61C(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    if (limbIndex == 5) {
        SysMatrix_GetStateTranslationAndScaledY(20.0f, &thisx->focus.pos);
    }
}

void func_80B4E660(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    OPEN_DISPS(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 200, 0);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, this->skelAnime.dListCount,
                     func_80B4E5B0, func_80B4E61C, &this->actor);
    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

s32 func_80B4E6E4(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, Actor* thisx) {
    if (limbIndex == 9) {
        EnInvadepoh* this = THIS; // both of these needed to match
        rot->x += this->EnInvadePohStructUnk324.unk20.y;
        rot->y += this->EnInvadePohStructUnk324.unk20.z;
        rot->z += this->EnInvadePohStructUnk324.unk20.x;
    } else if (limbIndex == 2) {
        EnInvadepoh* this = THIS; // both of these needed to match
        rot->x += (s16)(this->EnInvadePohStructUnk324.unk34 * this->EnInvadePohStructUnk324.unk20.y);
    }
    return 0;
}

void func_80B4E784(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    if (limbIndex == 9) {
        SysMatrix_GetStateTranslation(&thisx->focus.pos);
    }
}

void func_80B4E7BC(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    OPEN_DISPS(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x09, D_80B4E984[this->EnInvadePohStructUnk324.unk10.unkF]);
    gSPSegment(POLY_OPA_DISP++, 0x08, D_80B4E96C[this->EnInvadePohStructUnk324.unk0.unkF]);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, this->skelAnime.dListCount,
                     func_80B4E6E4, func_80B4E784, &this->actor);
    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
