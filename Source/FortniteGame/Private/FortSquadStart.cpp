#include "FortSquadStart.h"
#include "Components/SceneComponent.h"

AFortSquadStart::AFortSquadStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->PlayerStarts.AddDefaulted(4);
}

FGameplayTagContainer AFortSquadStart::GetSquadStartGameplayTags() const {
    return FGameplayTagContainer{};
}

FTransform AFortSquadStart::GetPlayerStartTransform(const int32 Index) const {
    return FTransform{};
}


