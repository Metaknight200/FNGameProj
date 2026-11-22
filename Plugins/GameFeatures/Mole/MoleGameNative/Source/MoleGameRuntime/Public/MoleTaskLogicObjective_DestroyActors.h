#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoleObjectiveCriteriaFloat.h"
#include "MoleTaskLogicObjective.h"
#include "MoleTaskLogicObjective_DestroyActors.generated.h"

class AActor;
class AController;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicObjective_DestroyActors : public UMoleTaskLogicObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleObjectiveCriteriaFloat Quantity;
    
public:
    UMoleTaskLogicObjective_DestroyActors();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnGenericActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
};

