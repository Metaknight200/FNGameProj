#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaGlobalCurrencyWidget.generated.h"

class UCommonNumericTextBlock;
class UFortItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGlobalCurrencyWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* CurrencyTotalText;
    
public:
    UAthenaGlobalCurrencyWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnItemCountChanged(UFortItemDefinition* Definition, int32 Delta);
    
};

