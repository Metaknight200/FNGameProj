#pragma once
#include "CoreMinimal.h"
#include "CommonInputActionHandlerData.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CommonInputReflectorLegacy.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUILEGACY_API UCommonInputReflectorLegacy : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonLegacy> ButtonType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonButtonLegacy*> ActiveButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonButtonLegacy*> InactiveButtons;
    
public:
    UCommonInputReflectorLegacy();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonAdded(UCommonButtonLegacy* AddedButton, const FCommonInputActionHandlerData& Data);
    
};

