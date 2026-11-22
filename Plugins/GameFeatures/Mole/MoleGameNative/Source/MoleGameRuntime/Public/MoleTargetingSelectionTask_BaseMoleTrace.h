#pragma once
#include "CoreMinimal.h"
#include "EFortAbilityTargetingSource.h"
#include "TargetingSelectionTask_Trace.h"
#include "MoleTargetingSelectionTask_BaseMoleTrace.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMoleTargetingSelectionTask_BaseMoleTrace : public UTargetingSelectionTask_Trace {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAbilityTargetingSource PawnTargetingSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreKnownSaboteurs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreGhosts: 1;
    
public:
    UMoleTargetingSelectionTask_BaseMoleTrace();

};

