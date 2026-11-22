#include "CustomItemWrapModifier.h"

ACustomItemWrapModifier::ACustomItemWrapModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ACustomItemWrapModifier::OnSetWrapTarget_Implementation() {
}



TArray<UMeshComponent*> ACustomItemWrapModifier::GetWrappedMeshComponents() const {
    return TArray<UMeshComponent*>();
}

UMeshComponent* ACustomItemWrapModifier::GetWrappedMeshComponent() const {
    return NULL;
}

AFortWeapon* ACustomItemWrapModifier::GetWeapon() const {
    return NULL;
}

AActor* ACustomItemWrapModifier::GetVehicle() const {
    return NULL;
}


