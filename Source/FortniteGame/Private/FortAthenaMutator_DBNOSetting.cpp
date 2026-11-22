#include "FortAthenaMutator_DBNOSetting.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_DBNOSetting::AFortAthenaMutator_DBNOSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
}

void AFortAthenaMutator_DBNOSetting::UnsetDBNOSettings(const AActor* ActorRemovingSettings) {
}

void AFortAthenaMutator_DBNOSetting::SetDBNOSettingsAndOverride(FDBNOCustomSettings InDBNOSettings, AActor* ActorApplyingSettings) {
}

AFortAthenaMutator_DBNOSetting* AFortAthenaMutator_DBNOSetting::GetDBNOSettingsMutator(const AFortMinigame* Minigame) {
    return NULL;
}

void AFortAthenaMutator_DBNOSetting::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_DBNOSetting, SettingsByActor);
}


