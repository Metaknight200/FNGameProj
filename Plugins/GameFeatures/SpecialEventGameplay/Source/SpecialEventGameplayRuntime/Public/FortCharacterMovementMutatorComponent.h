#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "BuffetBubblesReplicatedData.h"
#include "BuffetFlyingRicochetReplicatedData.h"
#include "FortCharacterMovementMutatorComponent.generated.h"

class AActor;
class ACharacter;
class UFortMovementComp_CharacterAthena;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCharacterMovementMutatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMovementComp_CharacterAthena* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMovementComp_CharacterAthena* CDOMovementComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesMoveToBoxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesRelativeVelocityInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesLocationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesMinRelativeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesMaxRelativeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesMinRelativeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesMaxRelativeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesMinRelativeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesMaxRelativeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BuffetBubblesRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesMaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesMaxRelativeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesRelativeDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffetBubblesFollowActor, meta=(AllowPrivateAccess=true))
    AActor* BuffetBubblesFollowActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffetBubblesFollowActor, meta=(AllowPrivateAccess=true))
    FVector BuffetBubblesInitialFollowBoxOffsetPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBuffetBubblesReplicatedData BuffetBubblesReplicatedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetBubblesIntroSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTransform BuffetBubblesIntroTargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetFlyingMaxPitchDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetFlyingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetFlyingVelocityDirectionInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BuffetFlyingRotationRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BuffetFlyingMaxSpeedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BuffetFlyingMaxSpeedInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BuffetFlyingVelocityDirectionInterpSpeedOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetFlyingRicochetSphereSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetFlyingRicochetRotationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BuffetFlyingRicochetControlRotationInterpSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffetFlyingRicochetReplicatedData, meta=(AllowPrivateAccess=true))
    FBuffetFlyingRicochetReplicatedData BuffetFlyingRicochetReplicatedData;
    
public:
    UFortCharacterMovementMutatorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetBuffetBubblesIntroTargetTransform(const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBuffetBubblesInitialFollowBoxOffsetPercent(const FVector BoxOffsetPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetBuffetBubblesFollowActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OverrideBuffetFlyingVelocityDirectionInterpSpeed(const float Value, const bool bAsMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void OverrideBuffetFlyingMaxSpeed(const float Value, const bool bAsMultiplier, const float InterpSpeed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BuffetFlyingRicochetReplicatedData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BuffetBubblesFollowActor();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, uint8 PreviousCustomMode);
    
};

