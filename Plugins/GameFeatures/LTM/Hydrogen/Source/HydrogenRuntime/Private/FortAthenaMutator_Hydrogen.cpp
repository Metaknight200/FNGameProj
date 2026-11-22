#include "FortAthenaMutator_Hydrogen.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Hydrogen::AFortAthenaMutator_Hydrogen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitialized = false;
    this->bWinnerDeclared = false;
    this->WinningTeam = 255;
    this->WinningScore = 0;
    this->MinimapMaterialParameterCollection = NULL;
    this->DefaultRespawnTexture = NULL;
    this->DefaultRespawnDisplayPriority = 1000;
    this->DefaultRespawnCameraActorClass = NULL;
    this->TickHydrogenStormShield_TimeBetweenTicks = 0.00f;
    this->HydrogenCompassIconOverlap = 0.00f;
    this->bStormActive = false;
    this->SecondsTilStormActivation = 0.00f;
    this->HydrogenVictoryPointCheckTime = 10.00f;
    this->HydrogenTotalTimeForOneCapturePoint = 0.00f;
    this->HydrogenMaxCapturePoints = 0;
    this->HydrogenTotalTimeForMaxCapturePoints = 0.00f;
    this->HydrogenVictoryPointCheckTimePassed = 0.00f;
    this->SafeZoneCameraActor = NULL;
    this->HydrogenCapturePointsPathsIndexToUse = -1;
    this->StormHeadingYawReplicated = 0.00f;
}

void AFortAthenaMutator_Hydrogen::UpdateCapturePointsCounted() {
}

bool AFortAthenaMutator_Hydrogen::TickHydrogenStormShield(float DeltaSeconds) {
    return false;
}

void AFortAthenaMutator_Hydrogen::SetupSafeZoneRoute(const FVector StartVector, const FVector EndVector) {
}

void AFortAthenaMutator_Hydrogen::SetCapturePointFillAmount(AHydrogenObjectiveActor* InCapturePointActor, uint8 InPlayerTeam) const {
}

void AFortAthenaMutator_Hydrogen::PositionHydrogenStormShield() {
}

void AFortAthenaMutator_Hydrogen::OwningTeamChange(AHydrogenObjectiveActor* Objective, uint8 NewTeam, uint8 OldTeam) {
}

void AFortAthenaMutator_Hydrogen::OnRep_WinningTeam() {
}

void AFortAthenaMutator_Hydrogen::OnRep_HydrogenTeamPointsChanged() {
}

bool AFortAthenaMutator_Hydrogen::IsInStormShield(FVector TestLocation) const {
    return false;
}

void AFortAthenaMutator_Hydrogen::GotoNextStormShieldNode() {
}

void AFortAthenaMutator_Hydrogen::GiveObjectiveAccolade(AFortPlayerControllerAthena* FortController) {
}

void AFortAthenaMutator_Hydrogen::GiveEOMBonusAccolade() {
}

float AFortAthenaMutator_Hydrogen::GetTimeToNextNode() {
    return 0.0f;
}

float AFortAthenaMutator_Hydrogen::GetStormSpeed() const {
    return 0.0f;
}

void AFortAthenaMutator_Hydrogen::GetSortedActivePointIndices(TArray<int32>& OutSortedIndices) const {
}

int32 AFortAthenaMutator_Hydrogen::GetOwnedCapturePointCount(int32 InIndex) {
    return 0;
}

FVector AFortAthenaMutator_Hydrogen::GetNextActorOnPathLocation(int32 InPathIndex) {
    return FVector{};
}

TArray<AHydrogenObjectiveActor*> AFortAthenaMutator_Hydrogen::GetAllCapturePoints() const {
    return TArray<AHydrogenObjectiveActor*>();
}

FVector AFortAthenaMutator_Hydrogen::GetActorOnPathLocation(int32 InPathIndex) {
    return FVector{};
}

void AFortAthenaMutator_Hydrogen::EndGame(uint8 Winner) {
}

void AFortAthenaMutator_Hydrogen::CheckVictoryPoints(float TimePassed) {
}

bool AFortAthenaMutator_Hydrogen::bHasWinnerBeenDeclared() const {
    return false;
}

bool AFortAthenaMutator_Hydrogen::bHasStormStarted() const {
    return false;
}

void AFortAthenaMutator_Hydrogen::AddBonusVictoryPointsForLockedCapturePoints(uint8 InTeam) {
}

void AFortAthenaMutator_Hydrogen::ActivateTheStormShield() {
}

void AFortAthenaMutator_Hydrogen::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, bInitialized);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, bWinnerDeclared);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, HydrogenTeamPoints);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, WinningTeam);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, CapturePointActors);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, bStormActive);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, SecondsTilStormActivation);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, StormHeadingYawReplicated);
}


