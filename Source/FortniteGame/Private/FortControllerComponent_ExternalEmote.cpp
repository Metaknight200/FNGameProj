#include "FortControllerComponent_ExternalEmote.h"
#include "Net/UnrealNetwork.h"

UFortControllerComponent_ExternalEmote::UFortControllerComponent_ExternalEmote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputComponent = NULL;
}

void UFortControllerComponent_ExternalEmote::PlayUncategorizedEmoteAtIndex(const int32 EmoteIndex) {
}

void UFortControllerComponent_ExternalEmote::PlayEmoteAtIndex(const int32 CategoryIndex, const int32 EmoteIndex) {
}

void UFortControllerComponent_ExternalEmote::OnRep_UncategorizedEmotes(TArray<FEmoteActionBinding>& PreviousUncategorizedEmotes) {
}

void UFortControllerComponent_ExternalEmote::OnRep_ExternalEmotes(TArray<FExternalEmoteCategory>& PreviousExternalEmotes) {
}

TArray<FEmoteActionBinding> UFortControllerComponent_ExternalEmote::GetUncategorizedEmotes() const {
    return TArray<FEmoteActionBinding>();
}

TArray<FExternalEmoteCategory> UFortControllerComponent_ExternalEmote::GetExternalEmotes() const {
    return TArray<FExternalEmoteCategory>();
}

void UFortControllerComponent_ExternalEmote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_ExternalEmote, ExternalEmotes);
    DOREPLIFETIME(UFortControllerComponent_ExternalEmote, UncategorizedEmotes);
}


