#pragma once
#include "CoreMinimal.h"
#include "EFortEntitlementState.h"
#include "FortEntitlementState.generated.h"

USTRUCT(BlueprintType)
struct FFortEntitlementState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortEntitlementState State;
    
    FORTNITEGAME_API FFortEntitlementState();
};

