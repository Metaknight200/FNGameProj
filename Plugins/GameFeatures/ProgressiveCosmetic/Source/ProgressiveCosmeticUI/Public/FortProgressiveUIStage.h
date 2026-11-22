#pragma once
#include "CoreMinimal.h"
#include "FortProgressiveVariant.h"
#include "FortProgressiveUIStage.generated.h"

USTRUCT(BlueprintType)
struct FFortProgressiveUIStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortProgressiveVariant> Variants;
    
    PROGRESSIVECOSMETICUI_API FFortProgressiveUIStage();
};

