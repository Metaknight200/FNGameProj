#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortItemEntry.h"
#include "ItemAndCount.h"
#include "GameplayAbilitySpec.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameFrameworkComponent.h"
#include "CraftingObjectOnCraftingSuccessDelegate.h"
#include "CraftingObjectRepStateData.h"
#include "ECraftingObjectState.h"
#include "CraftingObjectComponent.generated.h"

class AFortPawn;
class AFortPickup;
class AFortPlayerController;
class UFortGameplayAbility;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCraftingObjectComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCraftingObjectStateChanged, ECraftingObjectState, CraftingState, float, CraftingStateStartTime, float, CraftingStateDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCraftingObjectOnFormulaCraftableChanged, const FName&, FormulaRowName, bool, bIsCraftable);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingObjectStateChanged CraftingObjectStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingObjectOnFormulaCraftableChanged OnFormulaCraftableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingObjectOnCraftingSuccess OnCraftingSuccess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CraftingObjectRepStateData, meta=(AllowPrivateAccess=true))
    FCraftingObjectRepStateData CraftingObjectRepStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName CraftingFormulaRow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> CraftingInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> AllOfTheIngredientItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> NonConsumedIngredientItemIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastIngredientStringForAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastFormulaStringForAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastResultsStringForAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> CraftingResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle WhileCraftingAbilitySpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle OwnerCraftingAbilitySpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CraftingObjectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CraftingTimeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReadyTimeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OverCraftingTimeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ResettingTimeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverCraftingLootTierKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTakeItemsAtCraftingStart: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGiveIngredientsToCraftingObject: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGiveIngredientsToInstigator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IngredientSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGiveToCraftingObject: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGiveResultToInstigator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortGameplayAbility> OwnerCraftingAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CraftingFailedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPickup* PendingPickupCraftingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PendingPickupCraftingFormula;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortItemEntry PendingPickupCraftingItemEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PendingPickupHeldCount;
    
public:
    UCraftingObjectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftingObjectRepStateData();
    
    UFUNCTION(BlueprintCallable)
    void HandlePickupCraftingItemPickedUp(AFortPickup* PickUp, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation);
    
};

