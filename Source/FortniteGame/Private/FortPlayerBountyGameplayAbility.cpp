#include "FortPlayerBountyGameplayAbility.h"

UFortPlayerBountyGameplayAbility::UFortPlayerBountyGameplayAbility() {
}

void UFortPlayerBountyGameplayAbility::SpectatorShowUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData) {
}

void UFortPlayerBountyGameplayAbility::SpectatorFailUrgentQuest(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& FailedEventTag) {
}

void UFortPlayerBountyGameplayAbility::SpectatorCompleteUrgentQuest(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& CompletedEventTag) {
}

AFortPlayerStateAthena* UFortPlayerBountyGameplayAbility::GetTrackedProtectorBountyTarget() const {
    return NULL;
}

AFortPlayerStateAthena* UFortPlayerBountyGameplayAbility::GetTrackedPrimaryHunter() const {
    return NULL;
}

AFortPlayerStateAthena* UFortPlayerBountyGameplayAbility::GetTrackedHunterBountyTarget() const {
    return NULL;
}

TArray<AFortPlayerStateAthena*> UFortPlayerBountyGameplayAbility::GetTrackedBountyHunters() const {
    return TArray<AFortPlayerStateAthena*>();
}

bool UFortPlayerBountyGameplayAbility::GetIsPrimaryHunter() const {
    return false;
}

void UFortPlayerBountyGameplayAbility::CleanupBountyTarget() const {
}

void UFortPlayerBountyGameplayAbility::CleanupBountyProtector() const {
}

void UFortPlayerBountyGameplayAbility::CleanupBountyHunter() const {
}

void UFortPlayerBountyGameplayAbility::BountyPoached() {
}


