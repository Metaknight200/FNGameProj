#pragma once
#include "CoreMinimal.h"
#include "ApplyWrapVariantDef.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "FortCosmeticVariantApplyWrap.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortCosmeticVariantApplyWrap : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyWrapVariantDef WrapVariant;
    
public:
    UFortCosmeticVariantApplyWrap();

};

