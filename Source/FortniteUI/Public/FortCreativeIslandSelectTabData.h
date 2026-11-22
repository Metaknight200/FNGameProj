#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortCreativeIslandSelectTabType.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeIslandSelectTabData.generated.h"

class UFortCreativeIslandSelectTab;
class UFortGameActivityProvider;

UCLASS(Blueprintable)
class UFortCreativeIslandSelectTabData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativeIslandSelectTabType TabType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EmptyTabDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCreativeIslandSelectTab> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameActivityProvider> DataProvider;
    
    UFortCreativeIslandSelectTabData();

};

