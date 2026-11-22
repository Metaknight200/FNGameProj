#include "FortAircraft.h"
#include "Components/SceneComponent.h"
#include "FortCameraMode_ThirdPerson.h"
#include "Net/UnrealNetwork.h"

AFortAircraft::AFortAircraft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent0"));
    this->JumpFlashCount = 0;
    this->CameraModeClass = UFortCameraMode_ThirdPerson::StaticClass();
}


void AFortAircraft::OnRep_JumpFlashCount() {
}

void AFortAircraft::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAircraft, JumpFlashCount);
}


