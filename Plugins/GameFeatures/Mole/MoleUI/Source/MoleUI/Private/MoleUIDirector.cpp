#include "MoleUIDirector.h"

AMoleUIDirector::AMoleUIDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllyScene = NULL;
    this->EnemyScene = NULL;
    this->GhostScene = NULL;
    this->VotingSummaryPresentationManagerClass = NULL;
    this->VotingSummaryPresentationManager = NULL;
    this->EnemyAbilitiesMenuClass = NULL;
    this->EnemyAbilityUIDataTable = NULL;
    this->LocationDataTable = NULL;
    this->PlayerUIInfoDataTable = NULL;
    this->RoleScene = NULL;
    this->EnemyAbilityMenuComponent = NULL;
}

bool AMoleUIDirector::GetMolePlayerUIData(APlayerState* PlayerState, int32& OutPlayerNUmber, FMolePlayerUIData& OutPlayerUIData) {
    return false;
}

bool AMoleUIDirector::GetMoleLocationData(const UObject* WorldContextObject, const FGameplayTag& LocationTag, FMoleLocationData& OutLocationData) {
    return false;
}

bool AMoleUIDirector::GetMoleEnemyAbilityUIData(const UObject* WorldContextObject, const FGameplayTag& SabotageTag, FMoleAbilityUIData& OutEnemyAbilityUIData) {
    return false;
}


