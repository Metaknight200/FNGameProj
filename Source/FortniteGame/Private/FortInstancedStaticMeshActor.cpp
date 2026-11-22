#include "FortInstancedStaticMeshActor.h"
#include "Components/InstancedStaticMeshComponent.h"

AFortInstancedStaticMeshActor::AFortInstancedStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UInstancedStaticMeshComponent>(TEXT("StaticMeshComponent0"))) {
    const FProperty* p_StaticMeshComponent = GetClass()->FindPropertyByName("StaticMeshComponent");
    (*p_StaticMeshComponent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this)) = (UStaticMeshComponent*)RootComponent;
}


