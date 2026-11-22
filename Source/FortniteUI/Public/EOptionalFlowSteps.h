#pragma once
#include "CoreMinimal.h"
#include "EOptionalFlowSteps.generated.h"

UENUM(BlueprintType)
enum class EOptionalFlowSteps : uint8 {
    TryShowMobileGuidedTutorial,
    TryPlayTrailer,
    TryShowMOTDs,
    TryShowNormalBanModal,
    TryShowSocialBanModal,
    TryShowMFAModal,
    TryShowCrossplayDialog,
    TryShowSocialImport,
    TryShowSurveys,
    TryShowFireModeModal,
    TryShowBadMatchPopup,
    TryShowMobileInGameAppRating,
    TryShowSamsungSensorWarning,
    TryShowBattlePassPurchaseScreen,
    TryPushGiftingScreen,
    TryPushMessagingScreen,
    TryGoToBattlePassTab,
};

