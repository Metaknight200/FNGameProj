#pragma once
#include "CoreMinimal.h"
#include "FortPlayspace.h"
#include "Templates/SubclassOf.h"
#include "MoleGamePlayspace.generated.h"

class UGameplayStateMachine;

UCLASS(Blueprintable, Config=Game)
class AMoleGamePlayspace : public AFortPlayspace {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayStateMachine> MoleStateMachineClass;
    
public:
    AMoleGamePlayspace(const FObjectInitializer& ObjectInitializer);

};

