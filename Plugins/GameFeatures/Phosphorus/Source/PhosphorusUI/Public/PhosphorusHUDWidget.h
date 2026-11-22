#pragma once
#include "CoreMinimal.h"
#include "PhosphorusWidgetBase.h"
#include "PhosphorusHUDWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UPhosphorusHUDWidget : public UPhosphorusWidgetBase {
    GENERATED_BODY()
public:
    UPhosphorusHUDWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhosphorusPlayerEliminated_BP(AFortPlayerStateAthena* PlayerEliminated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhosphorusLocalSquadWiped_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhosphorusEnemySquadWiped_BP();
    
};

