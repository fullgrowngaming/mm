#include "z_en_invadepoh.h"

#define FLAGS 0x00000010

#define THIS ((EnInvadepoh*)thisx)

void EnInvadepoh_Init(Actor* thisx, GlobalContext* globalCtx);
void EnInvadepoh_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnInvadepoh_Update(Actor* thisx, GlobalContext* globalCtx);

void func_80B4D670(Actor* thisx, GlobalContext* globalCtx);
void func_80B47BAC(Actor* thisx, GlobalContext* globalCtx);
void func_80B47FA8(Actor* thisx, GlobalContext* globalCtx);
void func_80B481C4(Actor* thisx, GlobalContext* globalCtx);
void func_80B48620(Actor* thisx, GlobalContext* globalCtx);
void func_80B48FB0(Actor* thisx, GlobalContext* globalCtx);
void func_80B49F88(Actor* thisx, GlobalContext* globalCtx);
void func_80B4A9C8(Actor* thisx, GlobalContext* globalCtx);
void func_80B4B0C4(Actor* thisx, GlobalContext* globalCtx);
void func_80B4CE54(Actor* thisx, GlobalContext* globalCtx);
void func_80B4B8BC(Actor* thisx, GlobalContext* globalCtx);
void func_80B4C3A0(Actor* thisx, GlobalContext* globalCtx);
void func_80B49B1C(Actor* thisx, GlobalContext* globalCtx);
void func_80B4E3F0(Actor* thisx, GlobalContext* globalCtx);

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

extern EnInvadepohInitFunc D_80B4ECB0[]; // init functions
extern InitChainEntry D_80B4EC24;
extern InitChainEntry D_80B4EC34;
extern InitChainEntry D_80B4EC44;
extern InitChainEntry D_80B4EC54;
extern InitChainEntry D_80B4EC80;
extern InitChainEntry D_80B4EC98;
extern InitChainEntry D_80B4EC68;
extern ColliderCylinderInit D_80B4E8B0[];
extern ColliderCylinderInit D_80B4E8DC[];
extern ColliderCylinderInit D_80B4E908[];

// func_80B468B4-----------
extern Vec3f D_80B4E934;
extern f32 D_80B4EE88;
extern f32 D_80B4EE8C;
//------------------------

extern UNK_TYPE4 D_80B4E940;

UNK_TYPE D_80B503F4;
UNK_TYPE D_80B503F8;
UNK_TYPE D_80B50404;
UNK_TYPE D_80B5040A;

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B439B0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43A24.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43A74.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43A9C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B43AB0.asm")

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4516C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B451A0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B452EC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B453F4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45460.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B454BC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45518.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45550.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4560C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45648.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B456A8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B457A0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B458D8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45980.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B459E8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45A4C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45A94.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45B1C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45BB8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45C04.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45CE0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B45EC8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46118.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46184.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B461DC.asm")

//#ifdef NON_MATCHING
// Matching other than regs, and it's mostly around the loop at the beginning
// of the function. I tried for a full day to get this to match. It's cursed.
void func_80B4627C(EnInvadepoh* this, GlobalContext* globalCtx) {
    s32 i;
    
    this->actor.flags |= 0x20;

    for (i = 1; i < 8; i++) {
        Path* path = globalCtx->setupPathList;
        s32 invadepohType = (this->actor.params >> 8) & (u8)~0x80;
        u8 unk1 = path[invadepohType].unk1;
        if (unk1 == (invadepohType = 0xFF)) {
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
            func_80B47248(this);
        } else if (gSaveContext.entranceIndex == 0x6470) {
            func_80B47248(this);
        } else {
            func_80B471C0(this);
        }
    } else if (D_80B4E940 == 4) {
        func_80B47304(this);
    }
}

//#else
//#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4627C.asm")
//#endif

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

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46BB0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46BC0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46C08.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46C34.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46C50.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46C7C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46C94.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46CC0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46CF4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46D28.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/EnInvadepoh_Destroy.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46DA8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46DC8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46E20.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46E44.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46EC0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46EE8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46F88.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B46FA8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47064.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47084.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B470E0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47108.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B471C0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B471E0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47248.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47268.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47278.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47298.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47304.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47324.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/EnInvadepoh_Update.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47380.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B473E4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47478.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B474DC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47568.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47600.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4770C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B477B4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47830.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B478F4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47938.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B479E8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47BAC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47D30.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B47FA8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48060.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B481C4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4827C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B482D4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48324.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48374.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B483CC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4843C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B484EC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48588.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48610.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48620.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4873C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B487B4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48848.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48948.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48AD4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48DE4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48E4C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B48FB0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B490F0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B491EC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49228.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B492FC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4934C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49404.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49454.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49628.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49670.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B497A4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B497EC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49904.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4994C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B499BC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49A00.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49B1C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49BD0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49C38.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49DA0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49DFC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B49F88.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A168.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A1B8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A2C0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A350.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A570.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A5E4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A614.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A67C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A7C0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A81C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4A9C8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4AB8C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4ABDC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4ACDC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4ACF0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4AD3C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4AD60.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4ADB8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4ADCC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4AEC0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4AEDC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4AF80.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4AF94.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B024.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B048.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B0C4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B218.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B3DC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B430.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B484.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B510.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B564.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B724.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B768.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B820.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B864.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4B8BC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4BA30.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4BA84.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4BBE0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4BC4C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4BFFC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C058.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C1BC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C218.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C3A0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C568.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C5C0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C6C8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4C730.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CAB0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CB0C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CC70.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CCCC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CE54.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4CFFC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D054.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D15C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D290.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D3E4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D480.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D670.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D760.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D7B8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D9B4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D9D8.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4D9F4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4DB14.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E120.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E158.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Invadepoh_0x80B439B0/func_80B4E1B0.asm")

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
