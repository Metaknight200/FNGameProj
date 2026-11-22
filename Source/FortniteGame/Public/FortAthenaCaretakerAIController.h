#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AthenaAIController.h"
#include "FortAthenaCaretakerAIController.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class AFortAthenaCaretakerAIController : public AAthenaAIController {
    GENERATED_BODY()
public:
    AFortAthenaCaretakerAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* CharacterOwner, TEnumAsByte<EMovementMode> PreviousMovementMode, uint8 PreviousCustomMode);
    
};

