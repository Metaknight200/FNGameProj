#include "FortCreativePersistenceComponentBase.h"

UFortCreativePersistenceComponentBase::UFortCreativePersistenceComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LogicComponent = NULL;
    this->BasePath = TEXT("devices/");
    this->NonUniquePath = TEXT("/common");
    this->bUniqueForOwner = false;
}

void UFortCreativePersistenceComponentBase::SetUniqueForOwner(bool bInUniqueForOwner) {
}

void UFortCreativePersistenceComponentBase::SaveData(const UObject* Data, const FUniqueNetIdRepl& PlayerID, const FString& SavePath) {
}

void UFortCreativePersistenceComponentBase::LoadData(const FUniqueNetIdRepl& PlayerID, const FString& SavePath, UObject* OutData) {
}

void UFortCreativePersistenceComponentBase::InitializePersistenceComponent(UFortMinigameLogicComponent* InLogicComponent, bool bInUniqueForOwner) {
}

void UFortCreativePersistenceComponentBase::GetPersistencePlayers(TArray<AFortPlayerState*>& PersistencePlayers) const {
}

void UFortCreativePersistenceComponentBase::GenerateNewPersistentIDAndResaveActor() {
}

void UFortCreativePersistenceComponentBase::EnablePersistence(AFortMinigame* FortMinigame) {
}

void UFortCreativePersistenceComponentBase::DisablePersistence(AFortMinigame* FortMinigame) {
}

void UFortCreativePersistenceComponentBase::ClearData(const FUniqueNetIdRepl& PlayerID, const FString& SavePath) {
}


