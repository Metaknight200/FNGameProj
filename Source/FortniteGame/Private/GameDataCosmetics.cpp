#include "GameDataCosmetics.h"

UGameDataCosmetics::UGameDataCosmetics() {
    this->STWHeroBackpackItemDefinition = NULL;
    this->STWHeroNoDefaultBackpackItemDefinition = NULL;
    this->DefaultBattleBusSkin = NULL;
    this->DefaultGliderSkin = NULL;
    this->DefaultContrailEffect = NULL;
    this->DefaultMusicPack = NULL;
    this->FilterTagTable = NULL;
    this->CosmeticMarkupTable = NULL;
    this->MetaTagToPreviewActorAsset = NULL;
    this->ItemPreviewLODStreamingTimeout = 3.00f;
    this->CharmConfigAsset = NULL;
    this->PlaceholderItemToShowForDeniedCosmetics = NULL;
    this->CameraPositionTransitionCurve = NULL;
    this->CameraPositionTransitionDuration = 1.00f;
    this->CameraPositionTargetMaxLerpDistance = 200.00f;
    this->MinPanelSizeForFraming = 25.00f;
}

void UGameDataCosmetics::CreateBannerAssets() {
}


