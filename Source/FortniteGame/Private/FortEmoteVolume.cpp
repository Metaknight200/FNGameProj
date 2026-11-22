#include "FortEmoteVolume.h"

AFortEmoteVolume::AFortEmoteVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RequiredQuest = NULL;
    this->bAllowGrantingUnownedEmotes = false;
    this->bUseEmoteCategory = false;
    this->bDisplayExclusive = false;
    this->EmoteCategoryName = TEXT("EmoteVolumeCategory");
}

bool AFortEmoteVolume::WasPlayerGrantedEmotes(const AFortPlayerController* PlayerController) const {
    return false;
}

bool AFortEmoteVolume::IsPlayerOverlapping(const AFortPlayerController* PlayerController) const {
    return false;
}

UFortQuestItemDefinition* AFortEmoteVolume::GetRequiredQuest() const {
    return RequiredQuest;
}

FName AFortEmoteVolume::GetRequiredObjectiveName() const {
    return NAME_None;
}

TArray<FEmoteActionBinding> AFortEmoteVolume::GetGrantedEmotes() const {
    return TArray<FEmoteActionBinding>();
}


