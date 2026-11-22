#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DataAssetDirectorySimpleObject.generated.h"

UCLASS(Blueprintable)
class DATAASSETDIRECTORY_API UDataAssetDirectorySimpleObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntProperty;
    
    UDataAssetDirectorySimpleObject();

};

