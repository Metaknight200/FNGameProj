#pragma once
#include "CoreMinimal.h"
#include "MoleTaskLogicPhase.generated.h"

class UMoleTaskLogicAction;
class UMoleTaskLogicObjective;

USTRUCT(BlueprintType)
struct FMoleTaskLogicPhase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMoleTaskLogicAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMoleTaskLogicObjective*> Objectives;
    
public:
    MOLEGAMERUNTIME_API FMoleTaskLogicPhase();
};

