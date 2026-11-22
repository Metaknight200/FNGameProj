#include "FortMarkActor.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AFortMarkActor::AFortMarkActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->MarkString = TEXT("Type Here, Esc Cancels");
    this->bFinishedEditing = false;
    this->AttachedToActor = NULL;
}

void AFortMarkActor::OnRep_AttachedToActor() {
}

void AFortMarkActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMarkActor, OwningPlayer);
    DOREPLIFETIME(AFortMarkActor, MarkString);
    DOREPLIFETIME(AFortMarkActor, PreapprovedMarkString);
    DOREPLIFETIME(AFortMarkActor, bFinishedEditing);
    DOREPLIFETIME(AFortMarkActor, AttachedToActor);
    DOREPLIFETIME(AFortMarkActor, AttachmentOffset);
}


