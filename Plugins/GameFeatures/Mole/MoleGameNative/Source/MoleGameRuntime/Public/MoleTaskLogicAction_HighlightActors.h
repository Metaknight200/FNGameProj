#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoleTaskLogicAction.h"
#include "MoleTaskLogicAction_HighlightActors.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicAction_HighlightActors : public UMoleTaskLogicAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHighlight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowIndicator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequirePermissionForEmphasisFX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowIndicatorInGoalMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IndicatorRelativeLocationOffset;
    
public:
    UMoleTaskLogicAction_HighlightActors();

};

