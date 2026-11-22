#pragma once
#include "CoreMinimal.h"
#include "FortTabButton.h"
#include "FortActivityPlayerViewTabButton.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityPlayerViewTabButton : public UFortTabButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Count;
    
public:
    UFortActivityPlayerViewTabButton();

};

