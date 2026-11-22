#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_CanMove.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_CanMove : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CanMoveKeyName;
    
public:
    UFortAthenaAIBotEvaluator_CanMove();

};

