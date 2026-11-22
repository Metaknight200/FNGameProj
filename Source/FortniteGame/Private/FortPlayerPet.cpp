#include "FortPlayerPet.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AFortPlayerPet::AFortPlayerPet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent0"));
    this->PetItemDef = NULL;
    this->PetAudioComponent = NULL;
    this->bIsFrontEndPreview = false;
    this->PetMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("PetMesh0"));
    this->InteractionCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionCollisionSphere"));
    this->bSuppressInteract = false;
    this->SoundBank = NULL;
    this->InteractionCollisionSphere->SetupAttachment(PetMesh);
    this->PetMesh->SetupAttachment(RootComponent);
}

void AFortPlayerPet::ResetPetMaterials() {
}

void AFortPlayerPet::ReInitPetDisplay() {
}


void AFortPlayerPet::OnRequestedCustomizationComplete(AFortPlayerPawn* Pawn) {
}

void AFortPlayerPet::InitalizeFromItemDef(const UAthenaPetItemDefinition* InPetItemDef) {
}

AFortPlayerPawn* AFortPlayerPet::GetFortPlayerPawn() const {
    return NULL;
}


