#include "FortMcpCollectableCharacter.h"

UFortMcpCollectableCharacter::UFortMcpCollectableCharacter() {
}

void UFortMcpCollectableCharacter::SavePlayerQuestUpdate(const AFortPlayerController* FPC, const FGameplayTag& Variant, ESavePlayerQuestUpdate Update) {
}

EFortCollectedState UFortMcpCollectableCharacter::AddToPlayerCollection(const AFortPlayerController* FPC, const FGameplayTag& Variant, const FFortMcpCollectedCharacterProperties& Props, const FGameplayTagContainer& ContextTags, ECharacterEncounterType EncounterType) {
    return EFortCollectedState::Unknown;
}


