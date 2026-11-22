#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "ModifyIncomingPawnDamageDefinition.h"
#include "FortAthenaMutator_ModifyIncomingPawnDamage.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_ModifyIncomingPawnDamage : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModifyIncomingPawnDamageDefinition> DamageDefinitions;
    
public:
    AFortAthenaMutator_ModifyIncomingPawnDamage(const FObjectInitializer& ObjectInitializer);

};

