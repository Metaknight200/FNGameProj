#include "FortAthenaMutator_CreativeModifyEmotes.h"

AFortAthenaMutator_CreativeModifyEmotes::AFortAthenaMutator_CreativeModifyEmotes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
}

void AFortAthenaMutator_CreativeModifyEmotes::RemoveVolumeToModify(AFortVolume* VolumeToRemove) {
}

void AFortAthenaMutator_CreativeModifyEmotes::RemoveEmotesFromPlayerState(APlayerState* PlayerState, const TArray<FName>& CategoriesToRemove) {
}

void AFortAthenaMutator_CreativeModifyEmotes::RemoveEmoteFromCategory(const FEmoteActionBinding& EmoteToRemove, const FName& CategoryName, AFortVolume* VolumeToModify) {
}

void AFortAthenaMutator_CreativeModifyEmotes::RemoveEmoteCategory(const FName& CategoryName, AFortVolume* VolumeToModify) {
}

void AFortAthenaMutator_CreativeModifyEmotes::RemoveBlockedEmoteTag(const FGameplayTag& TagToRemove, AFortVolume* VolumeToModify) {
}

void AFortAthenaMutator_CreativeModifyEmotes::RemoveBlockedEmote(const FString& EmoteToRemove, AFortVolume* VolumeToModify) {
}

void AFortAthenaMutator_CreativeModifyEmotes::OnPlayerExitedVolume(APlayerState* PlayerState, AFortVolume* Volume) {
}

void AFortAthenaMutator_CreativeModifyEmotes::OnPlayerEnteredVolume(APlayerState* PlayerState, AFortVolume* Volume) {
}

void AFortAthenaMutator_CreativeModifyEmotes::AddVolumeToModify(AFortVolume* NewVolumeToModify) {
}

bool AFortAthenaMutator_CreativeModifyEmotes::AddUniqueEmoteCategory(const FName& CategoryName, const FText& CategoryTitle, const FText& CategoryTitleMultipage, const bool bExclusive, AFortVolume* VolumeToModify) {
    return false;
}

bool AFortAthenaMutator_CreativeModifyEmotes::AddEmoteToCategory(const FString& EmoteTemplateID, const FName& CategoryName, AFortVolume* VolumeToModify, FEmoteActionBinding& OutCreatedEmote) {
    return false;
}

void AFortAthenaMutator_CreativeModifyEmotes::AddEmotesToPlayersInVolume(AFortVolume* VolumeToModify) {
}

void AFortAthenaMutator_CreativeModifyEmotes::AddEmotesForPlayer(APlayerState* PlayerState) {
}

void AFortAthenaMutator_CreativeModifyEmotes::AddBlockedEmoteTag(const FGameplayTag& TagToBlock, AFortVolume* VolumeToModify) {
}

void AFortAthenaMutator_CreativeModifyEmotes::AddBlockedEmote(const FString& EmoteToBlock, AFortVolume* VolumeToModify) {
}


