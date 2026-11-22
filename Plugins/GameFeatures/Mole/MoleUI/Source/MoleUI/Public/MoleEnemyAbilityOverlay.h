#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoleAbilityUIData.h"
#include "MoleEnemyAbilityOverlay.generated.h"

class UMoleEnemyAbilityItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleEnemyAbilityOverlay : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoleEnemyAbilityItem* EnemyAbilityItem;
    
public:
    UMoleEnemyAbilityOverlay();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownUpdated(int32 TimeLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownStarted(int32 TimeLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityDataReceived(FMoleAbilityUIData InAbilityUIData);
    
};

