#include "FortUIDataConfiguration.h"

UFortUIDataConfiguration::UFortUIDataConfiguration() {
    this->DefaultUIDataConfigurationPath = TEXT("/Game/UI/Foundation/Config/DefaultUIDataConfiguration.DefaultUIDataConfiguration_C");
    this->DefaultBROnlyUIDataConfigurationPath = TEXT("/Game/UI/Foundation/Config/DefaultBROnlyUIDataConfiguration.DefaultBROnlyUIDataConfiguration_C");
    this->MobileBROnlyUIDataConfigurationPath = TEXT("/Game/UI/Foundation/Config/MobileBROnlyUIDataConfiguration.MobileBROnlyUIDataConfiguration_C");
    this->bEnableSocialFeatures = true;
    this->bEnableChat = true;
    this->bEnablePartyFeatures = true;
    this->SocialPanelClass = NULL;
    this->TeamMemberManageClass = NULL;
    this->ReturnToFrontendBehavior = EFortReturnToFrontendBehavior::NotSpecified;
    this->bLimitedToES2Features = false;
    this->bUseSpecificPinataWeapon = false;
    this->bQuestVOEnabled = false;
    this->ObjClassToTooltipStatsMap = NULL;
    this->ItemShopConfiguration = NULL;
    this->SubscriptionConfiguration = NULL;
    this->AnalogRotateSpeed = 0.00f;
    this->DragRotateSpeed = 0.00f;
    this->TouchSwipeRotateRate = 0.00f;
    this->MouseWheelZoomSpeed = 0.00f;
    this->DragZoomSpeed = 0.00f;
    this->TriggerZoomSpeed = 0.00f;
    this->TouchZoomPinchRate = 0.00f;
    this->ItemViewCompetingAxisInputThreshold = 0.00f;
    this->FrontendItemViewSettingsManager = NULL;
    this->VideoDisplayData = NULL;
    this->SocialDisplayData = NULL;
    this->ChallengeDisplayData = NULL;
    this->SquadStyleData = NULL;
    this->StoreDisplayData = NULL;
    this->ItemPresentationDisplayData = NULL;
    this->PipTest = NULL;
}

UFortMultiSizeBrushAsset* UFortUIDataConfiguration::GetDefenderSubtypeIconMultiSizeBrushByTag(const FGameplayTag DefenderSubtypeTag) {
    return NULL;
}


