#pragma once
#include "CoreMinimal.h"
#include "DataAssetDirectoryTestSimpleStruct.generated.h"

USTRUCT(BlueprintType)
struct FDataAssetDirectoryTestSimpleStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntProperty;
    
    DATAASSETDIRECTORY_API FDataAssetDirectoryTestSimpleStruct();
};

