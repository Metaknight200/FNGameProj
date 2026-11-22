#include "FortVolumePersistenceOptions.h"
#include "Net/UnrealNetwork.h"

UFortVolumePersistenceOptions::UFortVolumePersistenceOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowPlayerToClearData = false;
    this->PersistenceDevicesCount = 0;
}

void UFortVolumePersistenceOptions::UpdatePersistenceComponent(const UFortCreativePersistenceComponent* FortCreativePersistenceComponent, const FFortCreativePersistenceOptions& FortCreativePersistenceOptions) {
}

void UFortVolumePersistenceOptions::UnregistryFortCreativePersistenceComponent(const UFortCreativePersistenceComponent* FortCreativePersistenceComponent) {
}

void UFortVolumePersistenceOptions::RegistryFortCreativePersistenceComponent(const UFortCreativePersistenceComponent* FortCreativePersistenceComponent, const FFortCreativePersistenceOptions& FortCreativePersistenceOptions) {
}

bool UFortVolumePersistenceOptions::IsTherePersistenceDevices() const {
    return false;
}

bool UFortVolumePersistenceOptions::IsPlayerClearDataOptionAllowed() const {
    return false;
}

UFortCreativePersistenceComponent* UFortVolumePersistenceOptions::GetFirstOrderedPersistenceComponent() const {
    return NULL;
}

void UFortVolumePersistenceOptions::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVolumePersistenceOptions, bAllowPlayerToClearData);
    DOREPLIFETIME(UFortVolumePersistenceOptions, PersistenceDevicesCount);
}


