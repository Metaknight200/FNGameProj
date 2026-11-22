#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortValkyrieData.generated.h"

class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortValkyrieData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> Assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> AutoAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> AutoGrayboxes;
    
public:
    UFortValkyrieData();

    UFUNCTION(BlueprintCallable)
    void Repopulate();
    
};

