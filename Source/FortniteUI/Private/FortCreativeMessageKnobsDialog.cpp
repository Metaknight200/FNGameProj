#include "FortCreativeMessageKnobsDialog.h"

UFortCreativeMessageKnobsDialog::UFortCreativeMessageKnobsDialog() {
    this->CurrentDialog = NULL;
    this->LegacyEntryWidgetClass = NULL;
    this->AdvancedEntryWidgetClass = NULL;
    this->CanvasPanel_OptionsDialog = NULL;
    this->OverrideCancelButton_BP = NULL;
}

void UFortCreativeMessageKnobsDialog::ShrinkViewPort(float InterpolationTime) {
}

void UFortCreativeMessageKnobsDialog::SetFocusToItem(UObject* Item) {
}

void UFortCreativeMessageKnobsDialog::ResetViewPort(float InterpolationTime) {
}

void UFortCreativeMessageKnobsDialog::RemoveTagFilter(bool UpdateSelection) {
}

void UFortCreativeMessageKnobsDialog::RemoveStringFilter(bool UpdateSelection) {
}

void UFortCreativeMessageKnobsDialog::RemoveIsModifiedFilter(bool UpdateSelection) {
}

bool UFortCreativeMessageKnobsDialog::IsAnyFilterActive() {
    return false;
}

void UFortCreativeMessageKnobsDialog::HandleClearItemsClicked() {
}


int32 UFortCreativeMessageKnobsDialog::GetItemCount() const {
    return 0;
}

void UFortCreativeMessageKnobsDialog::GenerateFilteredEntries(bool UpdateSelection) {
}

void UFortCreativeMessageKnobsDialog::FilterEntriesByTag(FGameplayTagContainer Tags, bool UpdateSelection) {
}

void UFortCreativeMessageKnobsDialog::FilterEntriesByString(const FString& FilterString, bool UpdateSelection) {
}

void UFortCreativeMessageKnobsDialog::FilterEntriesByIsModified(bool bShowUnmodifiedEntries, bool UpdateSelection) {
}

void UFortCreativeMessageKnobsDialog::DisableFilters() {
}

bool UFortCreativeMessageKnobsDialog::ContainsItem() const {
    return false;
}

void UFortCreativeMessageKnobsDialog::CloseDialog() {
}


