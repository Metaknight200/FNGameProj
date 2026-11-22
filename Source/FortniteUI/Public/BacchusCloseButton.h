#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "BacchusCloseButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBacchusCloseButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePlatform;
    
public:
    UBacchusCloseButton();

};

