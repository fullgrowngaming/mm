#include "z_en_invadepoh.h"

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
extern AnimationHeader D_06004E50;
extern FlexSkeletonHeader D_06004C30[];
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

// func_80B468B4-----------
extern Vec3f D_80B4E934;
extern f32 D_80B4EE88;
extern f32 D_80B4EE8C;
//------------------------

extern s32 D_80B4E940;
extern s8 D_80B4E998;

extern Vec3f D_80B4ED30[];
extern Vec3f D_80B4ED6C[];

extern Vec3s D_801D15BC;

extern s16 D_80B4EDC0[];
extern s16 D_80B4EDC8[];
extern s16 D_80B4ED20[];

UNK_TYPE1 D_80B50348;
UNK_TYPE D_80B503F0;
UNK_TYPE D_80B503F4;
UNK_TYPE D_80B503F8;
UNK_TYPE2 D_80B50404;
Actor* D_80B5040C;
EnInvadepoh* D_80B50320[];
u8 D_80B50340[];

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B439B0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43A24.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43F0C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43F70.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44024.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4407C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B440B8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44234.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B442E4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B443A0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B444BC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B444F4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44514.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44540.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44570.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44620.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44640.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44664.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44690.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B446D0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44700.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B447C0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44A90.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44B78.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44B84.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44C24.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44C80.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44E90.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44EFC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44F58.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B44FEC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45080.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B450C0.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B452EC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B453F4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45460.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B454BC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45518.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45550.asm")

void func_80B4560C(EnInvadepoh* this, GlobalContext* globalCtx, u16 arg2) {
    this->unk376 = arg2;
    func_801518B0(globalCtx, arg2 & 0xFFFF, &this->actor);
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45648.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B456A8.asm")

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

void func_80B45CE0(EnInvadePohStructUnk324* substruct) {
    Vec3f sp3C;
    Vec3s sp34;
    s16 step;

    sp34.x = substruct->unk26.x - substruct->unk20;
    sp34.y = substruct->unk26.y - substruct->unk22;
    sp34.z = substruct->unk26.z - substruct->unk24;
    Math_Vec3s_ToVec3f(&sp3C, &sp34);
    Math_Vec3f_Scale(&sp3C, substruct->unk30);
    Math_Vec3f_ToVec3s(&sp34, &sp3C);
    if (sp34.x < 0) {
        sp34.x = -sp34.x;
    }
    if (sp34.y < 0) {
        sp34.y = -sp34.y;
    }
    if (sp34.z < 0) {
        sp34.z = -sp34.z;
    }
    if (substruct->unk2C < sp34.x) {
        sp34.x = substruct->unk2C;
    }
    if (substruct->unk2C < sp34.y) {
        sp34.y = substruct->unk2C;
    }
    if (substruct->unk2C < sp34.z) {
        sp34.z = substruct->unk2C;
    }
    Math_ScaledStepToS(&substruct->unk20, substruct->unk26.x, sp34.x);
    Math_ScaledStepToS(&substruct->unk22, substruct->unk26.y, sp34.y);
    Math_ScaledStepToS(&substruct->unk24, substruct->unk26.z, sp34.z);
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

    if (ActorCutscene_GetCanPlayNext(D_80B50404)) {
        ActorCutscene_StartAndSetUnkLinkFields(D_80B50404, &this->actor);
        func_80B46EC0(this);
    } else {
        ActorCutscene_SetIntentToPlay(D_80B50404);
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
        ActorCutscene_Stop(D_80B50404);
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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47084.asm")

void func_80B470E0(EnInvadepoh* this) {
    D_80B4E940 = 3;
    this->unk2F0 = 0x6E;
    this->actionFunc = func_80B47108;
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47108.asm")

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
        func_80B46118(&this->actor.world);
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
        SkelAnime_InitSV(globalCtx, &this->skelAnime, D_06004C30, NULL, this->limbDrawTable, this->transitionDrawTable,
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
        this->unk34C = 0;
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

// cursed
#ifdef NON_MATCHING
void func_80B4843C(EnInvadepoh* this) {
    this->unk34A = 3000;
    this->unk34C = 0;
    this->unk34E = 0;
    this->unk354 = 0.24f;
    this->unk350 = 3000;
    this->unk366 = 15000;
    this->unk368 = 0.1f;
    this->unk36C = 2000;
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
        this->unk34C = 7000;
    } else if (this->unk2F0 == 30) {
        this->unk34C = -7000;
    } else if (this->unk2F0 == 20) {
        this->unk34C = 7000;
    } else if (this->unk2F0 == 10) {
        this->unk34C = 0;
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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48620.asm")

void func_80B4873C(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 pad[2];
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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48848.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48AD4.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B48DE4(EnInvadepoh* this) {
    EnInvadePohStructUnk324* substruct = &this->EnInvadePohStructUnk324;

    this->actor.speedXZ = 0.0f;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, -10.0f);
    this->unk370 = 0;
    substruct->unk30 = 0.05f;
    substruct->unk2C = 1200;
    this->actionFunc = func_80B48E4C;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48DE4.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48E4C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48FB0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B490F0.asm")

void func_80B491EC(EnInvadepoh* this) {
    this->unk39C = 0.0f;
    this->unk3A4 = 0.0f;
    this->unk3AA = 0;
    this->actor.gravity = -15.0f;
    this->unk3A0 = 1.0f;
    this->actionFunc = func_80B49228;
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49228.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4934C.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49454.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49670.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B497EC.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4994C.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49A00.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49B1C.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49C38.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B49DA0(EnInvadepoh* this) {
    this->unk354 = 0.08f;
    this->unk350 = 2000;
    this->unk370 = 0;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, -10.0f);
    this->actionFunc = func_80B49DFC;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49DA0.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49DFC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49F88.asm")

void func_80B4A168(EnInvadepoh* this, GlobalContext* globalCtx) {
    if ((gSaveContext.time < 0x4000) && (gSaveContext.time >= 0x1555)) {
        this->actor.update = func_80B4A1B8;
        this->actor.draw = func_80B4E324;
        func_80B49BD0(this);
    }
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A1B8.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A350.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A67C.asm")

// ISMATCHING: Move rodata once all funcs match
#ifdef NON_MATCHING
void func_80B4A7C0(EnInvadepoh* this) {
    this->unk354 = 0.08f;
    this->unk350 = 2000;
    this->unk370 = 0;
    SkelAnime_ChangeAnimTransitionRepeat(&this->skelAnime, &D_06009E58, 0.0f);
    this->actionFunc = func_80B4A81C;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A7C0.asm")
#endif

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A81C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A9C8.asm")

void func_80B4AB8C(EnInvadepoh* this, GlobalContext* globalCtx) {
    if ((gSaveContext.time < 0x4000) && (gSaveContext.time >= 0x1800)) {
        this->actor.update = func_80B4ABDC;
        this->actor.draw = func_80B4E324;
        func_80B4A614(this);
    }
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4ABDC.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B218.asm")

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

    this->unk370 = 0;
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
    this->unk370 = 0;
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
    this->unk370 = 0;
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
    this->unk370 = 0;
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
    this->unk370 = 0;
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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D054.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D15C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D290.asm")

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

void func_80B4D480(EnInvadepoh* this, GlobalContext* globalCtx) {
    Actor* temp_v1;
    s32 phi_t0 = 0;
    float new_var;
    if (this->unk2F0 > 0) {
        this->unk2F0--;
    }

    if (this->unk2F0 > 0xA0) {
        this->actor.draw = 0;
    } else {
        this->actor.draw = func_80B4DB14;
        if (1) {}

        if ((this->unk2F0 < 0x69) && (this->unk2F0 >= 0x64)) {
            this->actor.gravity = -1.0f;
            Math_SmoothStepToS(&this->actor.shape, 0x2000, 8, 0x320, 0x28);
        } else {
            this->actor.gravity = 0.7f;
            Math_SmoothStepToS(&this->actor.shape, 0, 8, 0x320, 0x28);
        }

        this->actor.velocity.y += this->actor.gravity;
        this->actor.velocity.y *= 0.92f;
        if (this->unk2F0 > 0x50) {
            this->actor.world.pos.y += this->actor.velocity.y;
        } else {
            phi_t0 =
                Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y + 850.0f, fabsf(this->actor.velocity.y));
        }

        this->unk306 = 0.98f * ((new_var = this->unk304 * (-0.06f)) + this->unk306);
        temp_v1 = this->actor.child;
        this->actor.shape.rot.y += this->unk306;
        if (temp_v1 != 0) {
            temp_v1->world.pos.x = this->actor.world.pos.x;
            temp_v1->world.pos.y = this->actor.world.pos.y - 30.0f;
            temp_v1->world.pos.z = this->actor.world.pos.z;
            temp_v1->shape.rot.y = this->actor.shape.rot.y & 0xFFFF;
        }
    }

    if ((this->unk2F0 <= 0) || (phi_t0 != 0)) {
        Actor_MarkForDeath(&this->actor);
    }
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D670.asm")

void func_80B4D760(EnInvadepoh* this, GlobalContext* globalCtx) {
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

s32 func_80B4D9D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return 0;
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D9F4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4DB14.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E120.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E158.asm")

void func_80B4E1B0(Actor* thisx, GlobalContext* globalCtx) {
    EnInvadepoh* this = THIS;

    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, this->skelAnime.dListCount, NULL,
                     NULL, &this->actor);
}

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E200.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E2AC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E324.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E3F0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E5B0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E61C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E660.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E6E4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E784.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E7BC.asm")
