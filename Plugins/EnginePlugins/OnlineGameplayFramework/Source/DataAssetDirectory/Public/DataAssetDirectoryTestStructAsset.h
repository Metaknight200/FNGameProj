#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DataAssetDirectoryTestPODStruct.h"
#include "DataAssetDirectoryTestStructAsset.generated.h"

UCLASS(Blueprintable)
class DATAASSETDIRECTORY_API UDataAssetDirectoryTestStructAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataAssetDirectoryTestPODStruct TestStruct;
    
    UDataAssetDirectoryTestStructAsset();

};

