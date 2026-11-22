#pragma once
#include "CoreMinimal.h"
#include "FortEntitlementNameAndTag.generated.h"

USTRUCT(BlueprintType)
struct FFortEntitlementNameAndTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
    FORTNITEGAME_API FFortEntitlementNameAndTag();
};

