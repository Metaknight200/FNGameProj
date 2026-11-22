#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortTheaterSelect.generated.h"

class UFortQuestItemDefinition;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTheaterSelect : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayMain;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* DefaultRequiredCompletedQuest;
    
public:
    UFortTheaterSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTheaterRecommendedRatingRange(const FString& UniqueId, int32& Minimum, int32& Maximum) const;
    
};

