#include "EntityActorCollisionComponent.h"
#include "Net/UnrealNetwork.h"

UEntityActorCollisionComponent::UEntityActorCollisionComponent() {
}

void UEntityActorCollisionComponent::OnRep_PrimitiveComponent() {
}

void UEntityActorCollisionComponent::OnRep_CollisionProfileName() {
}

void UEntityActorCollisionComponent::OnNativeComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UEntityActorCollisionComponent::OnNativeComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UEntityActorCollisionComponent::OnNativeComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UEntityActorCollisionComponent::OnEnabledChanged(bool bIsEnabled) {
}

void UEntityActorCollisionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEntityActorCollisionComponent, ShadowVar_CollisionProfileName);
    DOREPLIFETIME(UEntityActorCollisionComponent, PrimitiveComponentCache);
}


