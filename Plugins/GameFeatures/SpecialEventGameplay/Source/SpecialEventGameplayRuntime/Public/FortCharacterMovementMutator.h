#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "FortCharacterMovementMutator.generated.h"

class AFortPawn;
class UFortCharacterMovementMutatorComponent;

UCLASS(Blueprintable)
class AFortCharacterMovementMutator : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCharacterMovementMutatorComponent> MovementMutatorComponentClass;
    
public:
    AFortCharacterMovementMutator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnFortPawnChanged(AFortPawn* NewPawn);
    
};

