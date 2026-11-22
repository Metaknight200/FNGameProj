#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AthenaMapPreloadData.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaMapPreloadData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PackageNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PackageCountToMemLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PackageCountStepSize;
    
public:
    UAthenaMapPreloadData();

};

