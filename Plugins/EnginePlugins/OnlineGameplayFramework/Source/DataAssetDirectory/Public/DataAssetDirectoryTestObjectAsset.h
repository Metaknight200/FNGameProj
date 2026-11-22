#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DataAssetDirectoryTestObjectAsset.generated.h"

class UDataAssetDirectorySimpleObject;

UCLASS(Blueprintable)
class DATAASSETDIRECTORY_API UDataAssetDirectoryTestObjectAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetDirectorySimpleObject* SimpleObject;
    
    UDataAssetDirectoryTestObjectAsset();

};

