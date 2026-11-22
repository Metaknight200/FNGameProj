#include "FortHexMapMarkerBase.h"
#include "Components/SkeletalMeshComponent.h"

AFortHexMapMarkerBase::AFortHexMapMarkerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMeshComponent0"));
    this->IdleAnimation = NULL;
    this->SkelMeshComponent = (USkeletalMeshComponent*)RootComponent;
}


