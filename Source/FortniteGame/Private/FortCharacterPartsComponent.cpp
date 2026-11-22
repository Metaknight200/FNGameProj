#include "FortCharacterPartsComponent.h"
#include "Net/UnrealNetwork.h"

UFortCharacterPartsComponent::UFortCharacterPartsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomizationAssetLoader = NULL;
}

bool UFortCharacterPartsComponent::RestoreParts() {
    return false;
}

bool UFortCharacterPartsComponent::RemovePartByGameplayTag(FGameplayTag PartTag) {
    return false;
}

bool UFortCharacterPartsComponent::RemovePart(TEnumAsByte<EFortCustomPartType::Type> PartType) {
    return false;
}

void UFortCharacterPartsComponent::RemoveAllParts() {
}

void UFortCharacterPartsComponent::OnRep_CharacterParts(TArray<UCustomCharacterPart*> PreviousParts) {
}

USkeletalMeshComponent* UFortCharacterPartsComponent::GetSkeletalMeshForPartType(TEnumAsByte<EFortCustomPartType::Type> PartType) {
    return NULL;
}

USkeletalMeshComponent* UFortCharacterPartsComponent::GetSkeletalMeshForPartTag(FGameplayTag PartTag) {
    return NULL;
}

TArray<USkeletalMeshComponent*> UFortCharacterPartsComponent::GetSkeletalMeshesForAllParts() {
    return TArray<USkeletalMeshComponent*>();
}

bool UFortCharacterPartsComponent::ApplyParts(const TArray<UCustomCharacterPart*>& Parts) {
    return false;
}

void UFortCharacterPartsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCharacterPartsComponent, CharacterPartList);
}


