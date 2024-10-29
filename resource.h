#define PLUG_MFR "michaeldonovan"
#define PLUG_NAME "AutoTalent"

#define PLUG_CLASS_NAME AutoTalent

#define BUNDLE_MFR "michaeldonovan"
#define BUNDLE_NAME "AutoTalent"

#define PLUG_ENTRY AutoTalent_Entry
#define PLUG_FACTORY AutoTalent_Factory
#define PLUG_VIEW_ENTRY AutoTalent_ViewEntry

#define PLUG_ENTRY_STR "AutoTalent_Entry"
#define PLUG_VIEW_ENTRY_STR "AutoTalent_ViewEntry"

#define VIEW_CLASS AutoTalent_View
#define VIEW_CLASS_STR "AutoTalent_View"

// Format        0xMAJR.MN.BG - in HEX! so version 10.1.5 would be 0x000A0105
#define PLUG_VER 0x00010000
#define VST3_VER_STR "1.0.0"

#define PLUG_COPYRIGHT  "Copyright 2017 Acme Inc"

// http://service.steinberg.de/databases/plugin.nsf/plugIn?openForm
// 4 chars, single quotes. At least one capital letter
#define PLUG_UNIQUE_ID 'Ipef'
// make sure this is not the same as BUNDLE_MFR
#define PLUG_MFR_ID 'Acme'

// ProTools stuff

#if (defined(AAX_API) || defined(RTAS_API)) && !defined(_PIDS_)
  #define _PIDS_
  const int PLUG_TYPE_IDS[2] = {'EFN1', 'EFN2'};
  const int PLUG_TYPE_IDS_AS[2] = {'EFA1', 'EFA2'}; // AudioSuite
#endif

#define PLUG_MFR_PT "michaeldonovan\nmichaeldonovan\nAcme"
#define PLUG_NAME_PT "AutoTalent\nIPEF"
#define PLUG_TYPE_PT "Effect"
#define PLUG_DOES_AUDIOSUITE 1

/* PLUG_TYPE_PT can be "None", "EQ", "Dynamics", "PitchShift", "Reverb", "Delay", "Modulation", 
"Harmonic" "NoiseReduction" "Dither" "SoundField" "Effect" 
instrument determined by PLUG _IS _INST
*/

#define PLUG_CHANNEL_IO "1-1 2-2"

#define PLUG_LATENCY 0
#define PLUG_IS_INST 0

// if this is 0 RTAS can't get tempo info
#define PLUG_DOES_MIDI 0

#define PLUG_DOES_STATE_CHUNKS 0

// Unique IDs for each image resource.
#define BACKGROUND_ID 101
#define KNOB_ID 102
#define INFO_ID 103
#define KEYC_ID 104
#define KEYD_ID 105
#define KEYE_ID 106
#define KEYF_ID 107
#define KEYG_ID 108
#define KEYA_ID 109
#define KEYB_ID 110
#define KEYBLACK_ID 111

// Image resource locations for this plug.
#define BACKGROUND_FN "resources/img/Background.png"
#define KNOB_FN "resources/img/Knob.png"
#define INFO_FN "resources/img/Info.png"
#define KEYC_FN "resources/img/Keyboard_01.png"
#define KEYD_FN "resources/img/Keyboard_02.png"
#define KEYE_FN "resources/img/Keyboard_03.png"
#define KEYF_FN "resources/img/Keyboard_04.png"
#define KEYG_FN "resources/img/Keyboard_05.png"
#define KEYA_FN "resources/img/Keyboard_06.png"
#define KEYB_FN "resources/img/Keyboard_07.png"
#define KEYBLACK_FN "resources/img/BlackKey.png"

// GUI default dimensions
#define GUI_WIDTH 420
#define GUI_HEIGHT 360


// on MSVC, you must define SA_API in the resource editor preprocessor macros as well as the c++ ones
#if defined(SA_API)
#include "app_wrapper/app_resource.h"
#endif

// vst3 stuff
#define MFR_URL "www.olilarkin.co.uk"
#define MFR_EMAIL "spam@me.com"
#define EFFECT_TYPE_VST3 "Fx"

/* "Fx|Analyzer"", "Fx|Delay", "Fx|Distortion", "Fx|Dynamics", "Fx|EQ", "Fx|Filter",
"Fx", "Fx|Instrument", "Fx|InstrumentExternal", "Fx|Spatial", "Fx|Generator",
"Fx|Mastering", "Fx|Modulation", "Fx|PitchShift", "Fx|Restoration", "Fx|Reverb",
"Fx|Surround", "Fx|Tools", "Instrument", "Instrument|Drum", "Instrument|Sampler",
"Instrument|Synth", "Instrument|Synth|Sampler", "Instrument|External", "Spatial",
"Spatial|Fx", "OnlyRT", "OnlyOfflineProcess", "Mono", "Stereo",
"Surround"
*/
