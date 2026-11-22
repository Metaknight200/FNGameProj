#pragma once
#include "CoreMinimal.h"
#include "VkMetaDataFlags.generated.h"

USTRUCT(BlueprintType)
struct VKENGINETYPES_API FVkMetaDataFlags {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> _validation_flags;
    
public:
    FVkMetaDataFlags();
};

