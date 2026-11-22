#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaChallengeRewardsMultiMarker.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeRewardsMultiMarker : public UUserWidget {
    GENERATED_BODY()
public:
    UAthenaChallengeRewardsMultiMarker();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSetMarkerActive(bool bIsActive);
    
};

