#include "GenericSmartObject.h"
#include "Components/SceneComponent.h"
#include "SmartObjectComponent.h"

AGenericSmartObject::AGenericSmartObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->SOComponent = CreateDefaultSubobject<USmartObjectComponent>(TEXT("SmartObjectComp"));
}


