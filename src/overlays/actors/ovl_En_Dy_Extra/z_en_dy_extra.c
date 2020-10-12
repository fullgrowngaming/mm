#include "z_en_dy_extra.h"

#define FLAGS 0x00000030

#define THIS ((EnDyExtra*)thisx)

void EnDyExtra_Init(Actor* thisx, GlobalContext* globalCtx);
void EnDyExtra_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnDyExtra_Update(Actor* thisx, GlobalContext* globalCtx);
void EnDyExtra_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80A61334(EnDyExtra* this, GlobalContext* globalCtx);
void func_80A613C8(EnDyExtra* this, GlobalContext* globalCtx);

const ActorInit En_Dy_Extra_InitVars = {
    ACTOR_EN_DY_EXTRA,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_DY_OBJ,
    sizeof(EnDyExtra),
    (ActorFunc)EnDyExtra_Init,
    (ActorFunc)EnDyExtra_Destroy,
    (ActorFunc)EnDyExtra_Update,
    (ActorFunc)EnDyExtra_Draw
};

extern Vtx D_0600DD40[];
extern Gfx D_0600DEF0[];

void EnDyExtra_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}

void EnDyExtra_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnDyExtra* this = THIS;

    this->type = this->actor.params;
    this->actor.scale.x = 0.025f;
    this->actor.scale.y = 0.039f;
    this->actor.scale.z = 0.025f;
    this->unk160 = this->actor.currPosRot.pos;
    this->actor.gravity = -0.2f;
    this->unk150 = 1.0f;
    this->unk14C = 0x3C;
    this->actionFunc = func_80A61334;
}

void func_80A61334(EnDyExtra* this, GlobalContext* globalCtx) {
    Math_SmoothScaleMaxF(&this->actor.gravity, 0.0f, 0.1f, 0.005f);
    if (this->actor.currPosRot.pos.y < -85.0f) {
        this->actor.velocity.y = 0.0f;
    }
    if (this->unk14C == 0 && this->unk14A != 0) {
        this->unk14C = 0x32;
        this->actionFunc = func_80A613C8;
    }
}

void func_80A613C8(EnDyExtra* this, GlobalContext* globalCtx) {
    Math_SmoothScaleMaxF(&this->actor.gravity, 0.0f, 0.1f, 0.005f);
    if (this->unk14C == 0 || this->unk150 < 0.02f) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk150 -= 0.02f;
    if (this->actor.currPosRot.pos.y < -85.0f) {
        this->actor.velocity.y = 0.0f;
    }
}

void EnDyExtra_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnDyExtra* this = THIS;

    DECR(this->unk14C);
    func_800B8EC8(&this->actor, 0xC4U);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
}

void EnDyExtra_Draw(Actor* thisx, GlobalContext* globalCtx) {
    static ColorRGBA8 D_80A61740[] = { { 255, 255, 170, 255 },
                                       { 255, 170, 255, 255 },
                                       { 255, 255, 170, 255 },
                                       { 170, 255, 255, 255 },
                                       { 255, 255, 170, 255 } };
    static ColorRGBA8 D_80A61754[] = {
        { 255, 100, 0, 255 }, { 255, 0, 100, 255 }, { 100, 255, 0, 255 }, { 0, 100, 255, 255 }, { 255, 230, 0, 255 }
    };
    static u8 D_80A61768[] = { 0x02, 0x01, 0x01, 0x02, 0x00, 0x00, 0x02, 0x01, 0x00, 0x02, 0x01, 0x00, 0x02, 0x01,
                               0x00, 0x02, 0x01, 0x00, 0x02, 0x01, 0x00, 0x02, 0x01, 0x00, 0x01, 0x02, 0x00, 0x00 };
    EnDyExtra* this = THIS;
    s32 pad;
    GraphicsContext* gfxCtx = globalCtx->state.gfxCtx;
    Vtx* vertices = Lib_PtrSegToVirt(D_0600DD40);
    s32 i;
    u8 unk[3];

    unk[0] = 0.0f;
    unk[1] = (s8)(this->unk150 * 240.0f);
    unk[2] = (s8)(this->unk150 * 255.0f);

    for (i = 0; i < 27; i++) {
        if (D_80A61768[i]) {
            vertices[i].v.cn[3] = unk[D_80A61768[i]];
        }
    }

    {
        s32 pad2;
        OPEN_DISPS(gfxCtx);

        func_8012C2DC(globalCtx->state.gfxCtx);
        gSPSegment(oGfxCtx->polyXlu.p++, 0x08,
                   Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, globalCtx->state.frames * 2, 0, 0x20, 0x40, 1,
                                    globalCtx->state.frames, globalCtx->state.frames * -8, 0x10, 0x10));
        gDPPipeSync(oGfxCtx->polyXlu.p++);
        gSPMatrix(oGfxCtx->polyXlu.p++, SysMatrix_AppendStateToPolyOpaDisp(globalCtx->state.gfxCtx),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gDPSetPrimColor(oGfxCtx->polyXlu.p++, 0, 0x80, D_80A61740[this->type].red, D_80A61740[this->type].green,
                        D_80A61740[this->type].blue, 255);
        gDPSetEnvColor(oGfxCtx->polyXlu.p++, D_80A61754[this->type].red, D_80A61754[this->type].green,
                       D_80A61754[this->type].blue, 128);
        gSPDisplayList(oGfxCtx->polyXlu.p++, D_0600DEF0);

        CLOSE_DISPS(gfxCtx);
    }
}
