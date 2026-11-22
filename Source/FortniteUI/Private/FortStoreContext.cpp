#include "FortStoreContext.h"

UFortStoreContext::UFortStoreContext() {
    this->CardIndex = 0;
    this->LastCardRarity = EFortRarity::Common;
}

void UFortStoreContext::SetSkipOpening(const bool bSkipOpen) {
}

bool UFortStoreContext::MakeChoice(int32 ChoiceIdx, UFortAccountItemDefinition* ChoiceItemDefinition) {
    return false;
}

bool UFortStoreContext::IsWaitingForMcp() const {
    return false;
}

bool UFortStoreContext::IsOpeningDirectPack() const {
    return false;
}

bool UFortStoreContext::IsItemMissingFromCollectionBook(const UFortItemDefinition* ItemDefinition) const {
    return false;
}

EFortStoreState UFortStoreContext::GetStoreState() const {
    return EFortStoreState::Error;
}

bool UFortStoreContext::GetSkipOpening() const {
    return false;
}

int32 UFortStoreContext::GetPackOpeningLimit() const {
    return 0;
}

int32 UFortStoreContext::GetOwnedSurvivorCount(const UFortItem* SurvivorItem) const {
    return 0;
}

int32 UFortStoreContext::GetOwnedItemCount(const UFortItemDefinition* ItemDefinition) const {
    return 0;
}

int32 UFortStoreContext::GetNumUnopenedCardPacksRemaining(const UFortCardPackItemDefinition* PackType, bool bCountChoicePacks) const {
    return 0;
}

TArray<FCard> UFortStoreContext::GetChoiceCards(int32 CardIdx) const {
    return TArray<FCard>();
}

bool UFortStoreContext::GetCard(int32 CardIdx, FCard& ResultOut) const {
    return false;
}

void UFortStoreContext::FireInteractionAnalyticsEvent(const FString& Interaction, const FString& Details) const {
}

bool UFortStoreContext::ExitSummary() {
    return false;
}

bool UFortStoreContext::ExitCurrencyStore() {
    return false;
}

bool UFortStoreContext::EnterCurrencyStore() {
    return false;
}

bool UFortStoreContext::DoesItemSlotExistInCollectionBook(const UFortItemDefinition* ItemDefinition) const {
    return false;
}

bool UFortStoreContext::ChoiceResultComplete() {
    return false;
}

bool UFortStoreContext::CardPackOpeningComplete() {
    return false;
}

bool UFortStoreContext::CardPackDestroyComplete() {
    return false;
}

bool UFortStoreContext::CardFrontRevealComplete() {
    return false;
}

bool UFortStoreContext::CardFlipComplete() {
    return false;
}

bool UFortStoreContext::CardExitComplete() {
    return false;
}

bool UFortStoreContext::CardEntryComplete() {
    return false;
}

bool UFortStoreContext::CardBackRevealComplete() {
    return false;
}

bool UFortStoreContext::CardAddedToSummaryComplete() {
    return false;
}


