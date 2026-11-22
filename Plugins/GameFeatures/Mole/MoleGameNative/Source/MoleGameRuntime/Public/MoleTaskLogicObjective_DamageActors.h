#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "MoleTaskLogicObjective.h"
#include "MoleTaskLogicObjective_DamageActors.generated.h"

class AActor;
class AController;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicObjective_DamageActors : public UMoleTaskLogicObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyCountDamageFromTaskOwner: 1;
    
public:
    UMoleTaskLogicObjective_DamageActors();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingActorDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
};

