#include "FortAthenaMutator_ContextTutorial.h"

AFortAthenaMutator_ContextTutorial::AFortAthenaMutator_ContextTutorial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bRelevantForNetworkReplays = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->bEnableTutorials = true;
    this->bContextTutorialMinimumLevelOverride = 0;
    this->MessageSound = NULL;
    this->ConcurrentActiveContextualTutorials = 12;
    this->CooldownTimeBetweenContextualTutorialTips = 0.00f;
    this->InCombatGraceTime = 10.00f;
    this->RayCastDistanceForNearbyEnemyCentimeter = 0.00f;
    this->WorldMarkerPadding = 25.00f;
    this->WorldMarkerSockerName = TEXT("ST_Marker");
    this->bEnableWorldMarker = true;
    this->bEnableHighlight = true;
}

void AFortAthenaMutator_ContextTutorial::HandleGamePhaseChanged(EAthenaGamePhase GamePhase) {
}


