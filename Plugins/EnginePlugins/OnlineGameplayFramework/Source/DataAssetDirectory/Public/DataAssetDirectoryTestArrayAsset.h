#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DataAssetDirectoryTestSimpleStruct.h"
#include "DataAssetDirectoryTestArrayAsset.generated.h"

UCLASS(Blueprintable)
class DATAASSETDIRECTORY_API UDataAssetDirectoryTestArrayAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IntArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataAssetDirectoryTestSimpleStruct> SimpleStructArray;
    
    UDataAssetDirectoryTestArrayAsset();

};

