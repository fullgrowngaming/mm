#include "z_en_okarina_effect.h"

#define FLAGS 0x02000010

#define THIS ((EnOkarinaEffect*)thisx)

void EnOkarinaEffect_Init(Actor* thisx, GlobalContext* globalCtx);
void EnOkarinaEffect_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnOkarinaEffect_Update(Actor* thisx, GlobalContext* globalCtx);

void func_8096B104(EnOkarinaEffect* this, GlobalContext* globalCtx);
void func_8096B174(EnOkarinaEffect* this, GlobalContext* globalCtx);

f32 D_8096B2B0 = 501.0f;

/*
const ActorInit En_Okarina_Effect_InitVars = {
    ACTOR_EN_OKARINA_EFFECT,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnOkarinaEffect),
    (ActorFunc)EnOkarinaEffect_Init,
    (ActorFunc)EnOkarinaEffect_Destroy,
    (ActorFunc)EnOkarinaEffect_Update,
    (ActorFunc)NULL
};
*/

//func_8096B0A0
void EnOkarinaEffect_SetupAction(EnOkarinaEffect* this, EnOkarinaEffectActionFunc* actionFunc) {
    this->actionFunc = actionFunc;
}

void EnOkarinaEffect_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}

void EnOkarinaEffect_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnOkarinaEffect* this = THIS;

    if (globalCtx->kankyoContext.unkF3) {
        Actor_MarkForDeath(&this->actor);
    }
    EnOkarinaEffect_SetupAction(&this->actor, func_8096B104);
}

void func_8096B104(EnOkarinaEffect* this, GlobalContext *globalCtx) {
    this->unk144 = 0x50;
    globalCtx->unk170FA = 0x3C;
    D_801F4E70 = D_8096B2B0;
    globalCtx->kankyoContext.unkE3 = 2;
    func_800FD78C(globalCtx);
    EnOkarinaEffect_SetupAction(this, func_8096B174);
}

GLOBAL_ASM("asm/non_matchings/ovl_En_Okarina_Effect_0x8096B0A0/func_8096B174.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okarina_Effect_0x8096B0A0/func_8096B1FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okarina_Effect_0x8096B0A0/EnOkarinaEffect_Update.asm")
