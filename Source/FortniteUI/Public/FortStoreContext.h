#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "EFortRarity.h"
#include "Card.h"
#include "CardPackOffer.h"
#include "EFortStoreState.h"
#include "OpenedCardPack.h"
#include "StoreSkipOpenChangedDelegateDelegate.h"
#include "StoreStateChangedDelegateDelegate.h"
#include "FortStoreContext.generated.h"

class UFortAccountItemDefinition;
class UFortCardPackItem;
class UFortCardPackItemDefinition;
class UFortItem;
class UFortItemDefinition;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortStoreContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreStateChangedDelegate OnStoreStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreSkipOpenChangedDelegate OnStoreSkipOpenChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCardPackOffer> Offers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCard> CardList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CardIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenedCardPack OpenedCardPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity LastCardRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCard> PurchasedItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCardPackItem*> PurchasedCardPacks;
    
    UFortStoreContext();

    UFUNCTION(BlueprintCallable)
    void SetSkipOpening(const bool bSkipOpen);
    
    UFUNCTION(BlueprintCallable)
    bool MakeChoice(int32 ChoiceIdx, UFortAccountItemDefinition* ChoiceItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForMcp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpeningDirectPack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemMissingFromCollectionBook(const UFortItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortStoreState GetStoreState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipOpening() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPackOpeningLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnedSurvivorCount(const UFortItem* SurvivorItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnedItemCount(const UFortItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumUnopenedCardPacksRemaining(const UFortCardPackItemDefinition* PackType, bool bCountChoicePacks) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCard> GetChoiceCards(int32 CardIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCard(int32 CardIdx, FCard& ResultOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireInteractionAnalyticsEvent(const FString& Interaction, const FString& Details) const;
    
    UFUNCTION(BlueprintCallable)
    bool ExitSummary();
    
    UFUNCTION(BlueprintCallable)
    bool ExitCurrencyStore();
    
    UFUNCTION(BlueprintCallable)
    bool EnterCurrencyStore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesItemSlotExistInCollectionBook(const UFortItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable)
    bool ChoiceResultComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardPackOpeningComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardPackDestroyComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardFrontRevealComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardFlipComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardExitComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardEntryComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardBackRevealComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardAddedToSummaryComplete();
    
};

