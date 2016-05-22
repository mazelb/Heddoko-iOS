﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t246_il2cpp_TypeInfo;
extern TypeInfo EventHandle_t247_il2cpp_TypeInfo;
extern TypeInfo IEventSystemHandler_t478_il2cpp_TypeInfo;
extern TypeInfo IPointerEnterHandler_t288_il2cpp_TypeInfo;
extern TypeInfo IPointerExitHandler_t289_il2cpp_TypeInfo;
extern TypeInfo IPointerDownHandler_t290_il2cpp_TypeInfo;
extern TypeInfo IPointerUpHandler_t291_il2cpp_TypeInfo;
extern TypeInfo IPointerClickHandler_t292_il2cpp_TypeInfo;
extern TypeInfo IBeginDragHandler_t294_il2cpp_TypeInfo;
extern TypeInfo IInitializePotentialDragHandler_t293_il2cpp_TypeInfo;
extern TypeInfo IDragHandler_t295_il2cpp_TypeInfo;
extern TypeInfo IEndDragHandler_t296_il2cpp_TypeInfo;
extern TypeInfo IDropHandler_t297_il2cpp_TypeInfo;
extern TypeInfo IScrollHandler_t298_il2cpp_TypeInfo;
extern TypeInfo IUpdateSelectedHandler_t299_il2cpp_TypeInfo;
extern TypeInfo ISelectHandler_t300_il2cpp_TypeInfo;
extern TypeInfo IDeselectHandler_t301_il2cpp_TypeInfo;
extern TypeInfo IMoveHandler_t302_il2cpp_TypeInfo;
extern TypeInfo ISubmitHandler_t303_il2cpp_TypeInfo;
extern TypeInfo ICancelHandler_t304_il2cpp_TypeInfo;
extern TypeInfo EventSystem_t252_il2cpp_TypeInfo;
extern TypeInfo TriggerEvent_t257_il2cpp_TypeInfo;
extern TypeInfo Entry_t259_il2cpp_TypeInfo;
extern TypeInfo EventTrigger_t261_il2cpp_TypeInfo;
extern TypeInfo EventTriggerType_t263_il2cpp_TypeInfo;
extern TypeInfo EventFunction_1_t264_il2cpp_TypeInfo;
extern TypeInfo ExecuteEvents_t287_il2cpp_TypeInfo;
extern TypeInfo MoveDirection_t307_il2cpp_TypeInfo;
extern TypeInfo RaycasterManager_t309_il2cpp_TypeInfo;
extern TypeInfo RaycastResult_t256_il2cpp_TypeInfo;
extern TypeInfo UIBehaviour_t253_il2cpp_TypeInfo;
extern TypeInfo AxisEventData_t262_il2cpp_TypeInfo;
extern TypeInfo BaseEventData_t250_il2cpp_TypeInfo;
extern TypeInfo InputButton_t311_il2cpp_TypeInfo;
extern TypeInfo FramePressState_t312_il2cpp_TypeInfo;
extern TypeInfo PointerEventData_t254_il2cpp_TypeInfo;
extern TypeInfo BaseInputModule_t249_il2cpp_TypeInfo;
extern TypeInfo ButtonState_t314_il2cpp_TypeInfo;
extern TypeInfo MouseState_t316_il2cpp_TypeInfo;
extern TypeInfo MouseButtonEventData_t313_il2cpp_TypeInfo;
extern TypeInfo PointerInputModule_t318_il2cpp_TypeInfo;
extern TypeInfo InputMode_t320_il2cpp_TypeInfo;
extern TypeInfo StandaloneInputModule_t321_il2cpp_TypeInfo;
extern TypeInfo TouchInputModule_t322_il2cpp_TypeInfo;
extern TypeInfo BaseRaycaster_t310_il2cpp_TypeInfo;
extern TypeInfo Physics2DRaycaster_t323_il2cpp_TypeInfo;
extern TypeInfo PhysicsRaycaster_t324_il2cpp_TypeInfo;
extern TypeInfo ITweenValue_t491_il2cpp_TypeInfo;
extern TypeInfo ColorTweenMode_t326_il2cpp_TypeInfo;
extern TypeInfo ColorTweenCallback_t327_il2cpp_TypeInfo;
extern TypeInfo ColorTween_t329_il2cpp_TypeInfo;
extern TypeInfo U3CStartU3Ec__Iterator0_t331_il2cpp_TypeInfo;
extern TypeInfo TweenRunner_1_t332_il2cpp_TypeInfo;
extern TypeInfo AnimationTriggers_t333_il2cpp_TypeInfo;
extern TypeInfo ButtonClickedEvent_t334_il2cpp_TypeInfo;
extern TypeInfo U3COnFinishSubmitU3Ec__Iterator1_t337_il2cpp_TypeInfo;
extern TypeInfo Button_t336_il2cpp_TypeInfo;
extern TypeInfo CanvasUpdate_t339_il2cpp_TypeInfo;
extern TypeInfo ICanvasElement_t344_il2cpp_TypeInfo;
extern TypeInfo CanvasUpdateRegistry_t340_il2cpp_TypeInfo;
extern TypeInfo ColorBlock_t345_il2cpp_TypeInfo;
extern TypeInfo FontData_t347_il2cpp_TypeInfo;
extern TypeInfo U3CRebuildForFontU3Ec__AnonStorey5_t348_il2cpp_TypeInfo;
extern TypeInfo FontUpdateTracker_t350_il2cpp_TypeInfo;
extern TypeInfo Graphic_t360_il2cpp_TypeInfo;
extern TypeInfo BlockingObjects_t362_il2cpp_TypeInfo;
extern TypeInfo GraphicRaycaster_t365_il2cpp_TypeInfo;
extern TypeInfo GraphicRegistry_t366_il2cpp_TypeInfo;
extern TypeInfo IGraphicEnabledDisabled_t496_il2cpp_TypeInfo;
extern TypeInfo Type_t369_il2cpp_TypeInfo;
extern TypeInfo FillMethod_t370_il2cpp_TypeInfo;
extern TypeInfo OriginHorizontal_t371_il2cpp_TypeInfo;
extern TypeInfo OriginVertical_t372_il2cpp_TypeInfo;
extern TypeInfo Origin90_t373_il2cpp_TypeInfo;
extern TypeInfo Origin180_t374_il2cpp_TypeInfo;
extern TypeInfo Origin360_t375_il2cpp_TypeInfo;
extern TypeInfo Image_t377_il2cpp_TypeInfo;
extern TypeInfo IMask_t506_il2cpp_TypeInfo;
extern TypeInfo IMaskable_t507_il2cpp_TypeInfo;
extern TypeInfo ContentType_t380_il2cpp_TypeInfo;
extern TypeInfo InputType_t381_il2cpp_TypeInfo;
extern TypeInfo CharacterValidation_t382_il2cpp_TypeInfo;
extern TypeInfo LineType_t383_il2cpp_TypeInfo;
extern TypeInfo SubmitEvent_t384_il2cpp_TypeInfo;
extern TypeInfo OnChangeEvent_t386_il2cpp_TypeInfo;
extern TypeInfo EditState_t387_il2cpp_TypeInfo;
extern TypeInfo OnValidateInput_t388_il2cpp_TypeInfo;
extern TypeInfo U3CCaretBlinkU3Ec__Iterator2_t391_il2cpp_TypeInfo;
extern TypeInfo U3CMouseDragOutsideRectU3Ec__Iterator3_t392_il2cpp_TypeInfo;
extern TypeInfo InputField_t390_il2cpp_TypeInfo;
extern TypeInfo MaskableGraphic_t378_il2cpp_TypeInfo;
extern TypeInfo Misc_t399_il2cpp_TypeInfo;
extern TypeInfo Mode_t400_il2cpp_TypeInfo;
extern TypeInfo Navigation_t401_il2cpp_TypeInfo;
extern TypeInfo RawImage_t402_il2cpp_TypeInfo;
extern TypeInfo Direction_t403_il2cpp_TypeInfo;
extern TypeInfo ScrollEvent_t404_il2cpp_TypeInfo;
extern TypeInfo Axis_t406_il2cpp_TypeInfo;
extern TypeInfo U3CClickRepeatU3Ec__Iterator4_t408_il2cpp_TypeInfo;
extern TypeInfo Scrollbar_t407_il2cpp_TypeInfo;
extern TypeInfo MovementType_t410_il2cpp_TypeInfo;
extern TypeInfo ScrollRectEvent_t411_il2cpp_TypeInfo;
extern TypeInfo ScrollRect_t413_il2cpp_TypeInfo;
extern TypeInfo Transition_t414_il2cpp_TypeInfo;
extern TypeInfo SelectionState_t415_il2cpp_TypeInfo;
extern TypeInfo Selectable_t338_il2cpp_TypeInfo;
extern TypeInfo SetPropertyUtility_t419_il2cpp_TypeInfo;
extern TypeInfo Direction_t420_il2cpp_TypeInfo;
extern TypeInfo SliderEvent_t421_il2cpp_TypeInfo;
extern TypeInfo Axis_t422_il2cpp_TypeInfo;
extern TypeInfo Slider_t423_il2cpp_TypeInfo;
extern TypeInfo SpriteState_t418_il2cpp_TypeInfo;
extern TypeInfo MatEntry_t424_il2cpp_TypeInfo;
extern TypeInfo StencilMaterial_t426_il2cpp_TypeInfo;
extern TypeInfo Text_t351_il2cpp_TypeInfo;
extern TypeInfo ToggleTransition_t428_il2cpp_TypeInfo;
extern TypeInfo ToggleEvent_t429_il2cpp_TypeInfo;
extern TypeInfo Toggle_t432_il2cpp_TypeInfo;
extern TypeInfo ToggleGroup_t431_il2cpp_TypeInfo;
extern TypeInfo AspectMode_t437_il2cpp_TypeInfo;
extern TypeInfo AspectRatioFitter_t438_il2cpp_TypeInfo;
extern TypeInfo ScaleMode_t439_il2cpp_TypeInfo;
extern TypeInfo ScreenMatchMode_t440_il2cpp_TypeInfo;
extern TypeInfo Unit_t441_il2cpp_TypeInfo;
extern TypeInfo CanvasScaler_t442_il2cpp_TypeInfo;
extern TypeInfo FitMode_t443_il2cpp_TypeInfo;
extern TypeInfo ContentSizeFitter_t444_il2cpp_TypeInfo;
extern TypeInfo Corner_t445_il2cpp_TypeInfo;
extern TypeInfo Axis_t446_il2cpp_TypeInfo;
extern TypeInfo Constraint_t447_il2cpp_TypeInfo;
extern TypeInfo GridLayoutGroup_t448_il2cpp_TypeInfo;
extern TypeInfo HorizontalLayoutGroup_t450_il2cpp_TypeInfo;
extern TypeInfo HorizontalOrVerticalLayoutGroup_t451_il2cpp_TypeInfo;
extern TypeInfo ILayoutElement_t461_il2cpp_TypeInfo;
extern TypeInfo ILayoutController_t525_il2cpp_TypeInfo;
extern TypeInfo ILayoutGroup_t526_il2cpp_TypeInfo;
extern TypeInfo ILayoutSelfController_t527_il2cpp_TypeInfo;
extern TypeInfo ILayoutIgnorer_t528_il2cpp_TypeInfo;
extern TypeInfo LayoutElement_t452_il2cpp_TypeInfo;
extern TypeInfo LayoutGroup_t449_il2cpp_TypeInfo;
extern TypeInfo LayoutRebuilder_t457_il2cpp_TypeInfo;
extern TypeInfo LayoutUtility_t460_il2cpp_TypeInfo;
extern TypeInfo VerticalLayoutGroup_t462_il2cpp_TypeInfo;
extern TypeInfo IMaterialModifier_t495_il2cpp_TypeInfo;
extern TypeInfo Mask_t463_il2cpp_TypeInfo;
extern TypeInfo IndexedSet_1_t464_il2cpp_TypeInfo;
extern TypeInfo CanvasListPool_t467_il2cpp_TypeInfo;
extern TypeInfo ComponentListPool_t471_il2cpp_TypeInfo;
extern TypeInfo ObjectPool_1_t472_il2cpp_TypeInfo;
extern TypeInfo BaseVertexEffect_t473_il2cpp_TypeInfo;
extern TypeInfo IVertexModifier_t497_il2cpp_TypeInfo;
extern TypeInfo Outline_t474_il2cpp_TypeInfo;
extern TypeInfo PositionAsUV1_t476_il2cpp_TypeInfo;
extern TypeInfo Shadow_t475_il2cpp_TypeInfo;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_UnityEngine_UI_Assembly_Types[155] = 
{
	&U3CModuleU3E_t246_il2cpp_TypeInfo,
	&EventHandle_t247_il2cpp_TypeInfo,
	&IEventSystemHandler_t478_il2cpp_TypeInfo,
	&IPointerEnterHandler_t288_il2cpp_TypeInfo,
	&IPointerExitHandler_t289_il2cpp_TypeInfo,
	&IPointerDownHandler_t290_il2cpp_TypeInfo,
	&IPointerUpHandler_t291_il2cpp_TypeInfo,
	&IPointerClickHandler_t292_il2cpp_TypeInfo,
	&IBeginDragHandler_t294_il2cpp_TypeInfo,
	&IInitializePotentialDragHandler_t293_il2cpp_TypeInfo,
	&IDragHandler_t295_il2cpp_TypeInfo,
	&IEndDragHandler_t296_il2cpp_TypeInfo,
	&IDropHandler_t297_il2cpp_TypeInfo,
	&IScrollHandler_t298_il2cpp_TypeInfo,
	&IUpdateSelectedHandler_t299_il2cpp_TypeInfo,
	&ISelectHandler_t300_il2cpp_TypeInfo,
	&IDeselectHandler_t301_il2cpp_TypeInfo,
	&IMoveHandler_t302_il2cpp_TypeInfo,
	&ISubmitHandler_t303_il2cpp_TypeInfo,
	&ICancelHandler_t304_il2cpp_TypeInfo,
	&EventSystem_t252_il2cpp_TypeInfo,
	&TriggerEvent_t257_il2cpp_TypeInfo,
	&Entry_t259_il2cpp_TypeInfo,
	&EventTrigger_t261_il2cpp_TypeInfo,
	&EventTriggerType_t263_il2cpp_TypeInfo,
	&EventFunction_1_t264_il2cpp_TypeInfo,
	&ExecuteEvents_t287_il2cpp_TypeInfo,
	&MoveDirection_t307_il2cpp_TypeInfo,
	&RaycasterManager_t309_il2cpp_TypeInfo,
	&RaycastResult_t256_il2cpp_TypeInfo,
	&UIBehaviour_t253_il2cpp_TypeInfo,
	&AxisEventData_t262_il2cpp_TypeInfo,
	&BaseEventData_t250_il2cpp_TypeInfo,
	&InputButton_t311_il2cpp_TypeInfo,
	&FramePressState_t312_il2cpp_TypeInfo,
	&PointerEventData_t254_il2cpp_TypeInfo,
	&BaseInputModule_t249_il2cpp_TypeInfo,
	&ButtonState_t314_il2cpp_TypeInfo,
	&MouseState_t316_il2cpp_TypeInfo,
	&MouseButtonEventData_t313_il2cpp_TypeInfo,
	&PointerInputModule_t318_il2cpp_TypeInfo,
	&InputMode_t320_il2cpp_TypeInfo,
	&StandaloneInputModule_t321_il2cpp_TypeInfo,
	&TouchInputModule_t322_il2cpp_TypeInfo,
	&BaseRaycaster_t310_il2cpp_TypeInfo,
	&Physics2DRaycaster_t323_il2cpp_TypeInfo,
	&PhysicsRaycaster_t324_il2cpp_TypeInfo,
	&ITweenValue_t491_il2cpp_TypeInfo,
	&ColorTweenMode_t326_il2cpp_TypeInfo,
	&ColorTweenCallback_t327_il2cpp_TypeInfo,
	&ColorTween_t329_il2cpp_TypeInfo,
	&U3CStartU3Ec__Iterator0_t331_il2cpp_TypeInfo,
	&TweenRunner_1_t332_il2cpp_TypeInfo,
	&AnimationTriggers_t333_il2cpp_TypeInfo,
	&ButtonClickedEvent_t334_il2cpp_TypeInfo,
	&U3COnFinishSubmitU3Ec__Iterator1_t337_il2cpp_TypeInfo,
	&Button_t336_il2cpp_TypeInfo,
	&CanvasUpdate_t339_il2cpp_TypeInfo,
	&ICanvasElement_t344_il2cpp_TypeInfo,
	&CanvasUpdateRegistry_t340_il2cpp_TypeInfo,
	&ColorBlock_t345_il2cpp_TypeInfo,
	&FontData_t347_il2cpp_TypeInfo,
	&U3CRebuildForFontU3Ec__AnonStorey5_t348_il2cpp_TypeInfo,
	&FontUpdateTracker_t350_il2cpp_TypeInfo,
	&Graphic_t360_il2cpp_TypeInfo,
	&BlockingObjects_t362_il2cpp_TypeInfo,
	&GraphicRaycaster_t365_il2cpp_TypeInfo,
	&GraphicRegistry_t366_il2cpp_TypeInfo,
	&IGraphicEnabledDisabled_t496_il2cpp_TypeInfo,
	&Type_t369_il2cpp_TypeInfo,
	&FillMethod_t370_il2cpp_TypeInfo,
	&OriginHorizontal_t371_il2cpp_TypeInfo,
	&OriginVertical_t372_il2cpp_TypeInfo,
	&Origin90_t373_il2cpp_TypeInfo,
	&Origin180_t374_il2cpp_TypeInfo,
	&Origin360_t375_il2cpp_TypeInfo,
	&Image_t377_il2cpp_TypeInfo,
	&IMask_t506_il2cpp_TypeInfo,
	&IMaskable_t507_il2cpp_TypeInfo,
	&ContentType_t380_il2cpp_TypeInfo,
	&InputType_t381_il2cpp_TypeInfo,
	&CharacterValidation_t382_il2cpp_TypeInfo,
	&LineType_t383_il2cpp_TypeInfo,
	&SubmitEvent_t384_il2cpp_TypeInfo,
	&OnChangeEvent_t386_il2cpp_TypeInfo,
	&EditState_t387_il2cpp_TypeInfo,
	&OnValidateInput_t388_il2cpp_TypeInfo,
	&U3CCaretBlinkU3Ec__Iterator2_t391_il2cpp_TypeInfo,
	&U3CMouseDragOutsideRectU3Ec__Iterator3_t392_il2cpp_TypeInfo,
	&InputField_t390_il2cpp_TypeInfo,
	&MaskableGraphic_t378_il2cpp_TypeInfo,
	&Misc_t399_il2cpp_TypeInfo,
	&Mode_t400_il2cpp_TypeInfo,
	&Navigation_t401_il2cpp_TypeInfo,
	&RawImage_t402_il2cpp_TypeInfo,
	&Direction_t403_il2cpp_TypeInfo,
	&ScrollEvent_t404_il2cpp_TypeInfo,
	&Axis_t406_il2cpp_TypeInfo,
	&U3CClickRepeatU3Ec__Iterator4_t408_il2cpp_TypeInfo,
	&Scrollbar_t407_il2cpp_TypeInfo,
	&MovementType_t410_il2cpp_TypeInfo,
	&ScrollRectEvent_t411_il2cpp_TypeInfo,
	&ScrollRect_t413_il2cpp_TypeInfo,
	&Transition_t414_il2cpp_TypeInfo,
	&SelectionState_t415_il2cpp_TypeInfo,
	&Selectable_t338_il2cpp_TypeInfo,
	&SetPropertyUtility_t419_il2cpp_TypeInfo,
	&Direction_t420_il2cpp_TypeInfo,
	&SliderEvent_t421_il2cpp_TypeInfo,
	&Axis_t422_il2cpp_TypeInfo,
	&Slider_t423_il2cpp_TypeInfo,
	&SpriteState_t418_il2cpp_TypeInfo,
	&MatEntry_t424_il2cpp_TypeInfo,
	&StencilMaterial_t426_il2cpp_TypeInfo,
	&Text_t351_il2cpp_TypeInfo,
	&ToggleTransition_t428_il2cpp_TypeInfo,
	&ToggleEvent_t429_il2cpp_TypeInfo,
	&Toggle_t432_il2cpp_TypeInfo,
	&ToggleGroup_t431_il2cpp_TypeInfo,
	&AspectMode_t437_il2cpp_TypeInfo,
	&AspectRatioFitter_t438_il2cpp_TypeInfo,
	&ScaleMode_t439_il2cpp_TypeInfo,
	&ScreenMatchMode_t440_il2cpp_TypeInfo,
	&Unit_t441_il2cpp_TypeInfo,
	&CanvasScaler_t442_il2cpp_TypeInfo,
	&FitMode_t443_il2cpp_TypeInfo,
	&ContentSizeFitter_t444_il2cpp_TypeInfo,
	&Corner_t445_il2cpp_TypeInfo,
	&Axis_t446_il2cpp_TypeInfo,
	&Constraint_t447_il2cpp_TypeInfo,
	&GridLayoutGroup_t448_il2cpp_TypeInfo,
	&HorizontalLayoutGroup_t450_il2cpp_TypeInfo,
	&HorizontalOrVerticalLayoutGroup_t451_il2cpp_TypeInfo,
	&ILayoutElement_t461_il2cpp_TypeInfo,
	&ILayoutController_t525_il2cpp_TypeInfo,
	&ILayoutGroup_t526_il2cpp_TypeInfo,
	&ILayoutSelfController_t527_il2cpp_TypeInfo,
	&ILayoutIgnorer_t528_il2cpp_TypeInfo,
	&LayoutElement_t452_il2cpp_TypeInfo,
	&LayoutGroup_t449_il2cpp_TypeInfo,
	&LayoutRebuilder_t457_il2cpp_TypeInfo,
	&LayoutUtility_t460_il2cpp_TypeInfo,
	&VerticalLayoutGroup_t462_il2cpp_TypeInfo,
	&IMaterialModifier_t495_il2cpp_TypeInfo,
	&Mask_t463_il2cpp_TypeInfo,
	&IndexedSet_1_t464_il2cpp_TypeInfo,
	&CanvasListPool_t467_il2cpp_TypeInfo,
	&ComponentListPool_t471_il2cpp_TypeInfo,
	&ObjectPool_1_t472_il2cpp_TypeInfo,
	&BaseVertexEffect_t473_il2cpp_TypeInfo,
	&IVertexModifier_t497_il2cpp_TypeInfo,
	&Outline_t474_il2cpp_TypeInfo,
	&PositionAsUV1_t476_il2cpp_TypeInfo,
	&Shadow_t475_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache;
Il2CppAssembly g_UnityEngine_UI_Assembly = 
{
	{ "UnityEngine.UI", 0, 0, 0, { 0 }, 32772, 0, 0, 1, 0, 0, 0 },
	&g_UnityEngine_UI_dll_Image,
	&g_UnityEngine_UI_Assembly__CustomAttributeCache,
};
Il2CppImage g_UnityEngine_UI_dll_Image = 
{
	 "UnityEngine.UI.dll" ,
	&g_UnityEngine_UI_Assembly,
	g_UnityEngine_UI_Assembly_Types,
	154,
	NULL,
};
static void s_UnityEngine_UIRegistration()
{
	RegisterAssembly (&g_UnityEngine_UI_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_UnityEngine_UIRegistrationVariable(&s_UnityEngine_UIRegistration, NULL);
