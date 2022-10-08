// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace)
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_B8B2925290BC4D19956D51FBD6E239DD
#define AU_COCOA_VIEW_NAME AUCocoaView_B8B2925290BC4D19956D51FBD6E239DD

// --- BUNDLE IDs (MacOS Only)
const char* kAAXBundleID = "karmicfq.aax.Blockdiagram.bundleID";
const char* kAUBundleID = "karmicfq.au.Blockdiagram.bundleID";
const char* kVST3BundleID = "karmicfq.vst3.Blockdiagram.bundleID";

// --- Plugin Names
const char* kPluginName = "Blockdiagram";
const char* kShortPluginName = "Blockdiagram";
const char* kAUBundleName = "Blockdiagram";
const char* kAAXBundleName = "Blockdiagram";
const char* kVSTBundleName = "Blockdiagram";

// --- bundle name helper
inline static const char* getPluginDescBundleName()
{
#ifdef AUPLUGIN
	return kAUBundleName;
#endif

#ifdef AAXPLUGIN
	return kAAXBundleName;
#endif

#ifdef VSTPLUGIN
	return kVSTBundleName;
#endif

	// --- should never get here
	return kPluginName;
}

// --- Plugin Type
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID
const char* kVSTFUID = "{B8B29252-90BC-4D19-956D-51FBD6E239DD}";

// --- 4-char codes
const int32_t kFourCharCode = 'MYi6';
const int32_t kAAXProductID = 'ADvh';
const int32_t kManufacturerID = 'VNDR';

// --- Vendor information
const char* kVendorName = "KarmicFQ";
const char* kVendorURL = "www.yourcompany.com";
const char* kVendorEmail = "";

// --- Plugin Options
const bool kProcessFrames = true;
const uint32_t kBlockSize = DEFAULT_AUDIO_BLOCK_SIZE;
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif


