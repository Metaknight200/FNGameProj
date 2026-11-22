#include "GameFeaturesSubsystemSettings.h"

UGameFeaturesSubsystemSettings::UGameFeaturesSubsystemSettings() {
    this->DisabledPlugins.AddDefaulted(1);
    this->AdditionalPluginMetadataKeys.AddDefaulted(4);
    this->BuiltInGameFeaturePluginsFolder = TEXT("E:/other stuff/++Eon+Release-17.50-CL-17388565-Windows/FortniteGame/Plugins/GameFeatures/");
}


