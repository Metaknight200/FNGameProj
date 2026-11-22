#pragma once
#include "CoreMinimal.h"
#include "DynamicHUDUnallowed.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FDynamicHUDUnallowed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeAll;
    
    DYNAMICHUD_API FDynamicHUDUnallowed();
};

