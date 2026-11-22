#pragma once
#include "CoreMinimal.h"
#include "FortUIGameFeatureAction.h"
#include "FortProgressiveUIStage.h"
#include "Templates/SubclassOf.h"
#include "ProgressiveCosmeticUIGameFeatureAction.generated.h"

class UFortProgressiveItemScreen;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProgressiveCosmeticUIGameFeatureAction : public UFortUIGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortProgressiveItemScreen> ProgressionScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortProgressiveUIStage> Stages;
    
public:
    UProgressiveCosmeticUIGameFeatureAction();

};

