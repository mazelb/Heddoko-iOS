﻿#pragma once
#include <stdint.h>
// UnityEngine.Font
struct Font_t346;
// UnityEngine.GUIStyle
struct GUIStyle_t963;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1080;
// UnityEngine.GUISettings
struct GUISettings_t1078;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t1081;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t1079;
// UnityEngine.GUISkin
struct GUISkin_t70;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// UnityEngine.GUISkin
struct GUISkin_t70  : public ScriptableObject_t1041
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t346 * ___m_Font_1;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t963 * ___m_box_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t963 * ___m_button_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t963 * ___m_toggle_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t963 * ___m_label_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t963 * ___m_textField_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t963 * ___m_textArea_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t963 * ___m_window_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t963 * ___m_horizontalSlider_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t963 * ___m_horizontalSliderThumb_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t963 * ___m_verticalSlider_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t963 * ___m_verticalSliderThumb_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t963 * ___m_horizontalScrollbar_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t963 * ___m_horizontalScrollbarThumb_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t963 * ___m_horizontalScrollbarLeftButton_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t963 * ___m_horizontalScrollbarRightButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t963 * ___m_verticalScrollbar_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t963 * ___m_verticalScrollbarThumb_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t963 * ___m_verticalScrollbarUpButton_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t963 * ___m_verticalScrollbarDownButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t963 * ___m_ScrollView_21;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1080* ___m_CustomStyles_22;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t1078 * ___m_Settings_23;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::styles
	Dictionary_2_t1081 * ___styles_25;
};
struct GUISkin_t70_StaticFields{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t963 * ___ms_Error_24;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t1079 * ___m_SkinChanged_26;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t70 * ___current_27;
};