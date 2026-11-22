#include "BuildingGameplayActorPropQuest.h"
#include "Components/SceneComponent.h"
#include "ConsolidatedQuestComponent.h"
#include "FortQuestIconComponent.h"

ABuildingGameplayActorPropQuest::ABuildingGameplayActorPropQuest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->bEnableConversationComponent = false;
    this->ConsolidatedQuestComponent = CreateDefaultSubobject<UConsolidatedQuestComponent>(TEXT("ConsolidatedQuestComponent"));
    this->QuestIconComponent = CreateDefaultSubobject<UFortQuestIconComponent>(TEXT("QuestIconComponent"));
    this->ConsolidatedQuestComponent->SetupAttachment(RootComponent);
}

void ABuildingGameplayActorPropQuest::QuestLog(const FString& StringToLog) {
}

FGameplayTagContainer ABuildingGameplayActorPropQuest::GetQuestTargetTags() const {
    return FGameplayTagContainer{};
}


