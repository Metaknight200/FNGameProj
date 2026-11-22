#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FortAnimNotify_RemoveCosmeticSwap.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_RemoveCosmeticSwap : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> SwapIds;
    
    UFortAnimNotify_RemoveCosmeticSwap();

};

