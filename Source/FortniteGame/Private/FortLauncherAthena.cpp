#include "FortLauncherAthena.h"
#include "Net/UnrealNetwork.h"

AFortLauncherAthena::AFortLauncherAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->OnLaunchSound3P = NULL;
    this->OnLaunchSound1P = NULL;
    this->bAllowMultipleTriggers = false;
    this->bLaunchPlayersFromVehicles = false;
}


void AFortLauncherAthena::ReTriggerForPawn(AFortPlayerPawnAthena* AthenaPawn) {
}

void AFortLauncherAthena::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortLauncherAthena::OnRepLaunchServerInfo() {
}

void AFortLauncherAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLauncherAthena, ServerLaunchInfo);
}


