#include "FortCharacterMovementMutatorComponent.h"
#include "Net/UnrealNetwork.h"

UFortCharacterMovementMutatorComponent::UFortCharacterMovementMutatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterOwner = NULL;
    this->MovementComponent = NULL;
    this->CDOMovementComponent = NULL;
    this->BuffetBubblesFollowActor = NULL;
    this->BuffetFlyingMaxSpeedOverride = -1.00f;
    this->BuffetFlyingMaxSpeedInterpSpeed = 2.00f;
    this->BuffetFlyingVelocityDirectionInterpSpeedOverride = -1.00f;
}

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesIntroTargetTransform(const FTransform& Transform) {
}

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesInitialFollowBoxOffsetPercent(const FVector BoxOffsetPercent) {
}

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesFollowActor(AActor* Actor) {
}

void UFortCharacterMovementMutatorComponent::OverrideBuffetFlyingVelocityDirectionInterpSpeed(const float Value, const bool bAsMultiplier) {
}

void UFortCharacterMovementMutatorComponent::OverrideBuffetFlyingMaxSpeed(const float Value, const bool bAsMultiplier, const float InterpSpeed) {
}

void UFortCharacterMovementMutatorComponent::OnRep_BuffetFlyingRicochetReplicatedData() {
}

void UFortCharacterMovementMutatorComponent::OnRep_BuffetBubblesFollowActor() {
}

void UFortCharacterMovementMutatorComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, uint8 PreviousCustomMode) {
}

void UFortCharacterMovementMutatorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCharacterMovementMutatorComponent, BuffetBubblesFollowActor);
    DOREPLIFETIME(UFortCharacterMovementMutatorComponent, BuffetBubblesInitialFollowBoxOffsetPercent);
    DOREPLIFETIME(UFortCharacterMovementMutatorComponent, BuffetBubblesReplicatedData);
    DOREPLIFETIME(UFortCharacterMovementMutatorComponent, BuffetBubblesIntroTargetTransform);
    DOREPLIFETIME(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxSpeedOverride);
    DOREPLIFETIME(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxSpeedInterpSpeed);
    DOREPLIFETIME(UFortCharacterMovementMutatorComponent, BuffetFlyingVelocityDirectionInterpSpeedOverride);
    DOREPLIFETIME(UFortCharacterMovementMutatorComponent, BuffetFlyingRicochetReplicatedData);
}


