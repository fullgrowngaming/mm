#include "z_en_bjt.h"

#define FLAGS 0x00000009

#define THIS ((EnBjt*)thisx)

void EnBjt_Init(Actor* thisx, GlobalContext* globalCtx);
void EnBjt_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnBjt_Update(Actor* thisx, GlobalContext* globalCtx);
void EnBjt_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80BFDAE8(EnBjt* this, GlobalContext* globalCtx);

/*
const ActorInit En_Bjt_InitVars = {
    ACTOR_EN_BJT,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_BJT,
    sizeof(EnBjt),
    (ActorFunc)EnBjt_Init,
    (ActorFunc)EnBjt_Destroy,
    (ActorFunc)EnBjt_Update,
    (ActorFunc)EnBjt_Draw,
};
*/

extern FlexSkeletonHeader D_06002390;
extern ColliderCylinderInit D_80BFDF48[];
extern CollisionCheckInfoInit2 D_80BFDF74;

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFD2E0.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFD30C.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFD3A4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFD434.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFD4FC.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFD5E4.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFD6BC.asm")

void func_80BFD8F0(EnBjt* this, GlobalContext* globalCtx) {
    ?32 sp1C;
    Actor* temp_a0;
    u16* temp_a0_2;

    temp_a0 = arg0;
    if ((arg0->unk234 & 7) != 0) {
        sp1C = 0;
        arg0 = arg0;
        if (func_800B84D0(temp_a0, arg1) != 0) {
            temp_a0_2 = arg0 + 0x234;
            arg0->unk234 = (u16) (arg0->unk234 | 8);
            arg0 = arg0;
            func_8013AED4(temp_a0_2, (u16)0U, (u16)7U);
            arg0->unk24C = &func_80BFD6BC;
            arg0->unk240 = (u16)0;
            arg0->unk188 = &func_80BFDA48;
        }
    }
}


#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFD984.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFDA48.asm")

#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Bjt_0x80BFD2E0/func_80BFDAE8.asm")

void EnBjt_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnBjt* this = THIS;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06002390, NULL, this->limbDrawTbl, this->transitionDrawTbl, 7);
    this->unk250 = -1;
    func_80BFD30C(this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, D_80BFDF48);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80BFDF74);
    this->actor.flags |= 0x8000000;
    Actor_SetScale(&this->actor, 0.0f);
    this->unk1D8 = 0;
    this->unk234 = 0;
    this->actionFunc = func_80BFDAE8;
}


void EnBjt_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}


void EnBjt_Update(Actor *thisx, GlobalContext* globalCtx) {
    EnBjt* this = THIS;

    func_80BFD8F0(this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80BFD984(this, globalCtx);
    if (this->unk1D8 != 0) {
        func_80BFD2E0(this);
        func_8013C964(&this->actor, globalCtx, 60.0f, 10.0f, 0, this->unk234 & 7);
        Actor_SetHeight(&this->actor, 26.0f);
        func_80BFD3A4(this, globalCtx);
    }
}


void EnBjt_Draw(Actor *thisx, GlobalContext* globalCtx) {
    EnBjt* this = THIS;

    if (this->unk1D8 != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, this->skelAnime.dListCount, NULL, NULL, &this->actor);
    }
}

