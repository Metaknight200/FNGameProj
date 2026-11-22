#pragma once
#include "CoreMinimal.h"
#include "EFortRichColorConflictResolutionRules.h"
#include "FortCosmeticVariant.h"
#include "RichColorVariantDef.h"
#include "FortCosmeticRichColorVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortCosmeticRichColorVariant : public UFortCosmeticVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AntiConflictChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRichColorConflictResolutionRules AntiConflictRules;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichColorVariantDef InlineVariant;
    
public:
    UFortCosmeticRichColorVariant();

};

