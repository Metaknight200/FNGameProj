#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "FortAthenaViewQuestsButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaViewQuestsButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UFortAthenaViewQuestsButton();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnseenQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUnseenQuestsChanged(bool bHasUnseenQuests);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleToggleFullscreenMap(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void HandleOwningPanelActivated();
    
};

