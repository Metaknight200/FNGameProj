#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDContextLayout.generated.h"

class UFortMobileHUDContextModel;

USTRUCT(BlueprintType)
struct FFortMobileHUDContextLayout {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileHUDContextModel* HUDContextModel;
    
public:
    FORTNITEUI_API FFortMobileHUDContextLayout();
};

