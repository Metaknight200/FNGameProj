#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "SeasonPassLevelPanel.generated.h"

class UFortSeasonPassLevelInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USeasonPassLevelPanel : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSeasonPassLevelInfo* LevelInfo;
    
public:
    USeasonPassLevelPanel();

    UFUNCTION(BlueprintCallable)
    void Setup(UFortSeasonPassLevelInfo* Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortSeasonPassLevelInfo* GetLevelInfo() const;
    
};

