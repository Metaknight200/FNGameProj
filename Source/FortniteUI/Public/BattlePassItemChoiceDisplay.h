#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "BattlePassItemChoiceDisplay.generated.h"

class UAthenaCosmeticItemDefinition;
class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassItemChoiceDisplay : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SelectAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SelectEgo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SelectBase;
    
public:
    UBattlePassItemChoiceDisplay();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCosmeticItemChanged(const UAthenaCosmeticItemDefinition* CosmeticItem);
    
};

