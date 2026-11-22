#include "CraftingObjectBGA.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"

ACraftingObjectBGA::ACraftingObjectBGA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
    this->Inventory = NULL;
    this->SphereComponent_InteractionRange = NULL;
    this->WidgetComponent_PotContents = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_PotContents"));
    this->WidgetComponent_PotContents->SetupAttachment(RootComponent);
}

void ACraftingObjectBGA::HandleInteractionRangeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACraftingObjectBGA::HandleInteractionRangeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACraftingObjectBGA::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACraftingObjectBGA, Inventory);
}


