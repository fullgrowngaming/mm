#include "z_obj_y2shutter.h"

#define FLAGS 0x00000010

#define THIS ((ObjY2shutter*)thisx)

void ObjY2shutter_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjY2shutter_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjY2shutter_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjY2shutter_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Y2shutter_InitVars = {
    ACTOR_OBJ_Y2SHUTTER,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_KAIZOKU_OBJ,
    sizeof(ObjY2shutter),
    (ActorFunc)ObjY2shutter_Init,
    (ActorFunc)ObjY2shutter_Destroy,
    (ActorFunc)ObjY2shutter_Update,
    (ActorFunc)ObjY2shutter_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Y2shutter_0x80B9A980/ObjY2shutter_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Y2shutter_0x80B9A980/ObjY2shutter_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Y2shutter_0x80B9A980/func_80B9AA20.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Y2shutter_0x80B9A980/ObjY2shutter_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Y2shutter_0x80B9A980/ObjY2shutter_Draw.asm")
