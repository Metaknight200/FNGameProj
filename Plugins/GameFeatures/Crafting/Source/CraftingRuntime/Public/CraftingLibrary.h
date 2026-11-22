#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortItemEntry.h"
#include "ItemAndCount.h"
#include "GameplayTagContainer.h"
#include "CraftingIngredientQueryState.h"
#include "CraftingIngredientRequirement.h"
#include "ECraftingObjectState.h"
#include "CraftingLibrary.generated.h"

class AActor;
class AFortPickup;
class AFortPlayerController;
class UFortItemDefinition;
class UFortWorldItem;
class UObject;

UCLASS(Blueprintable)
class CRAFTINGRUNTIME_API UCraftingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCraftingLibrary();

    UFUNCTION(BlueprintCallable)
    static void StartCrafting(AFortPlayerController* Instigator, AActor* CraftingObject, const FName& CraftingFormulaName);
    
    UFUNCTION(BlueprintCallable)
    static void ReportCraftingSuccess(AFortPlayerController* Instigator, AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable)
    static void PickupItemAndStartCrafting(AFortPlayerController* Instigator, AActor* CraftingObject, AFortPickup* PickUp, const FName& CraftingFormulaName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidIngredient(const AFortPlayerController* FortPC, const AActor* CraftingObject, const UFortItemDefinition* ItemDef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GiveItemToCraftingObject(AFortPlayerController* Instigator, AActor* CraftingObject, const FFortItemEntry& ItemEntryToGrant);
    
    UFUNCTION(BlueprintCallable)
    static void GetValidIngredientsInInventory(const AFortPlayerController* FortPC, const AActor* CraftingObject, TArray<UFortWorldItem*>& OutIngredients);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetUIDataForCraftingIngredientTags(UObject* WorldContextObject, const FGameplayTagContainer& IngredientTags, TArray<TSoftObjectPtr<UFortItemDefinition>>& OutItemDefs, TArray<TSoftObjectPtr<UObject>>& OutIcons);
    
    UFUNCTION(BlueprintCallable)
    static void GetKnownCraftingFormulas(const AFortPlayerController* FortPC, const AActor* CraftingObject, TArray<FName>& OutFormulas);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFortWorldItem*> GetIngredientsInCraftingObject(AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCraftingResultsForRowName(const UObject* WorldContextObject, const FName& CraftingFormulaRow, TArray<FItemAndCount>& OutResults);
    
    UFUNCTION(BlueprintCallable)
    static float GetCraftingObjectCurrentCraftingStateTimeLeft(const AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetCraftingObjectCurrentCraftingStateStartTime(const AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetCraftingObjectCurrentCraftingStateEndTime(const AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECraftingObjectState GetCraftingObjectCraftingState(AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFortWorldItem*> GetCraftingIngredients_TempItems(AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable)
    static FName GetCraftingFormulaNameBeingCrafted(AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetCraftingFormulaIngredientRequirements(UObject* WorldContextObject, const FName& CraftingFormulaRow, TArray<FCraftingIngredientRequirement>& OutIngredientRequirements);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFortWorldItem*> GetCraftedResults_TempItems(AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllValidIngredients(const AFortPlayerController* FortPC, const AActor* CraftingObject, TArray<FGameplayTagContainer>& OutIngredients);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllCraftableFormulas(const AFortPlayerController* FortPC, const AActor* CraftingObject, TArray<FName>& OutFormulas);
    
    UFUNCTION(BlueprintCallable)
    static void EjectItems(AFortPlayerController* Instigator, AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClaimCraftingResults(AFortPlayerController* Instigator, AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CanCraftFormulaWithAdditionalItems(const AFortPlayerController* FortPC, const AActor* CraftingObject, const FName CraftingFormulaRow, const TArray<FItemAndCount>& AdditionalItems, TArray<FCraftingIngredientQueryState>& OutIngredientStates);
    
    UFUNCTION(BlueprintCallable)
    static bool CanCraftFormula(const AFortPlayerController* FortPC, const AActor* CraftingObject, const FName CraftingFormulaRow, TArray<FCraftingIngredientQueryState>& OutIngredientStates);
    
    UFUNCTION(BlueprintCallable)
    static void CancelCrafting(AFortPlayerController* Instigator, AActor* CraftingObject);
    
};

