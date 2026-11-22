#pragma once
#include "CoreMinimal.h"
#include "FortConfirmationButtonInfo.generated.h"

class UCommonButtonLegacy;

USTRUCT(BlueprintType)
struct FFortConfirmationButtonInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button;
    
    FORTNITEUI_API FFortConfirmationButtonInfo();
};

