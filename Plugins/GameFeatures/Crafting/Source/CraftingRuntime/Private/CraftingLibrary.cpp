#include "CraftingLibrary.h"

UCraftingLibrary::UCraftingLibrary() {
}

void UCraftingLibrary::StartCrafting(AFortPlayerController* Instigator, AActor* CraftingObject, const FName& CraftingFormulaName) {
}

void UCraftingLibrary::ReportCraftingSuccess(AFortPlayerController* Instigator, AActor* CraftingObject) {
}

void UCraftingLibrary::PickupItemAndStartCrafting(AFortPlayerController* Instigator, AActor* CraftingObject, AFortPickup* PickUp, const FName& CraftingFormulaName) {
}

bool UCraftingLibrary::IsValidIngredient(const AFortPlayerController* FortPC, const AActor* CraftingObject, const UFortItemDefinition* ItemDef) {
    return false;
}

void UCraftingLibrary::GiveItemToCraftingObject(AFortPlayerController* Instigator, AActor* CraftingObject, const FFortItemEntry& ItemEntryToGrant) {
}

void UCraftingLibrary::GetValidIngredientsInInventory(const AFortPlayerController* FortPC, const AActor* CraftingObject, TArray<UFortWorldItem*>& OutIngredients) {
}

void UCraftingLibrary::GetUIDataForCraftingIngredientTags(UObject* WorldContextObject, const FGameplayTagContainer& IngredientTags, TArray<TSoftObjectPtr<UFortItemDefinition>>& OutItemDefs, TArray<TSoftObjectPtr<UObject>>& OutIcons) {
}

void UCraftingLibrary::GetKnownCraftingFormulas(const AFortPlayerController* FortPC, const AActor* CraftingObject, TArray<FName>& OutFormulas) {
}

TArray<UFortWorldItem*> UCraftingLibrary::GetIngredientsInCraftingObject(AActor* CraftingObject) {
    return TArray<UFortWorldItem*>();
}

void UCraftingLibrary::GetCraftingResultsForRowName(const UObject* WorldContextObject, const FName& CraftingFormulaRow, TArray<FItemAndCount>& OutResults) {
}

float UCraftingLibrary::GetCraftingObjectCurrentCraftingStateTimeLeft(const AActor* CraftingObject) {
    return 0.0f;
}

float UCraftingLibrary::GetCraftingObjectCurrentCraftingStateStartTime(const AActor* CraftingObject) {
    return 0.0f;
}

float UCraftingLibrary::GetCraftingObjectCurrentCraftingStateEndTime(const AActor* CraftingObject) {
    return 0.0f;
}

ECraftingObjectState UCraftingLibrary::GetCraftingObjectCraftingState(AActor* CraftingObject) {
    return ECraftingObjectState::Invalid;
}

TArray<UFortWorldItem*> UCraftingLibrary::GetCraftingIngredients_TempItems(AActor* CraftingObject) {
    return TArray<UFortWorldItem*>();
}

FName UCraftingLibrary::GetCraftingFormulaNameBeingCrafted(AActor* CraftingObject) {
    return NAME_None;
}

bool UCraftingLibrary::GetCraftingFormulaIngredientRequirements(UObject* WorldContextObject, const FName& CraftingFormulaRow, TArray<FCraftingIngredientRequirement>& OutIngredientRequirements) {
    return false;
}

TArray<UFortWorldItem*> UCraftingLibrary::GetCraftedResults_TempItems(AActor* CraftingObject) {
    return TArray<UFortWorldItem*>();
}

void UCraftingLibrary::GetAllValidIngredients(const AFortPlayerController* FortPC, const AActor* CraftingObject, TArray<FGameplayTagContainer>& OutIngredients) {
}

void UCraftingLibrary::GetAllCraftableFormulas(const AFortPlayerController* FortPC, const AActor* CraftingObject, TArray<FName>& OutFormulas) {
}

void UCraftingLibrary::EjectItems(AFortPlayerController* Instigator, AActor* CraftingObject) {
}

void UCraftingLibrary::ClaimCraftingResults(AFortPlayerController* Instigator, AActor* CraftingObject) {
}

bool UCraftingLibrary::CanCraftFormulaWithAdditionalItems(const AFortPlayerController* FortPC, const AActor* CraftingObject, const FName CraftingFormulaRow, const TArray<FItemAndCount>& AdditionalItems, TArray<FCraftingIngredientQueryState>& OutIngredientStates) {
    return false;
}

bool UCraftingLibrary::CanCraftFormula(const AFortPlayerController* FortPC, const AActor* CraftingObject, const FName CraftingFormulaRow, TArray<FCraftingIngredientQueryState>& OutIngredientStates) {
    return false;
}

void UCraftingLibrary::CancelCrafting(AFortPlayerController* Instigator, AActor* CraftingObject) {
}


