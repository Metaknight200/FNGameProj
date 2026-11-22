#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "MoleAssetLoadData.h"
#include "MoleAssetManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOLEGAMERUNTIME_API UMoleAssetManagerComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoleAssetLoadData> AssetLoadInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BundlesToLoad;
    
public:
    UMoleAssetManagerComponent(const FObjectInitializer& ObjectInitializer);

};

