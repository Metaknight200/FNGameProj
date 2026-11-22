#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "FortBattlePassCheckBoxButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPASSBASE_API UFortBattlePassCheckBoxButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UFortBattlePassCheckBoxButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(const bool bNewIsChecked);
    
};

