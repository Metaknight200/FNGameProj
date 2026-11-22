#pragma once
#include "CoreMinimal.h"
#include "EAthenaCustomizationCategory.h"
#include "EFortFrontendInventoryFilter.h"
#include "EFortPawnDisplayContext.h"
#include "EFrontEndCamera.h"
#include "FortItemQuantityPair.h"
#include "FortLocalPlayerSubsystem.h"
#include "FortTheaterMapData.h"
#include "GameDifficultyInfo.h"
#include "CatalogOffer.h"
#include "GameplayTagContainer.h"
#include "EFortFrontEndFeature.h"
#include "EFortFrontEndFeatureState.h"
#include "EFortFrontEndFeatureStateReason.h"
#include "FortFrontEndFeatureStruct.h"
#include "FortMissionDetails.h"
#include "FortMissionRewardInfo.h"
#include "LobbyPlayerGadgetsClickedDelegateDelegate.h"
#include "OnCameraChangedDelegateDelegate.h"
#include "OnMainTabSelectedDelegateDelegate.h"
#include "OnRadialPickerStatusChangedDelegate.h"
#include "OnSocialImportClosedDelegateDelegate.h"
#include "PlayerLoginDelegateDelegate.h"
#include "SeasonTabVariantPreviewInfoChangedDelegate.h"
#include "SetPreviewedSceneTheaterDelegateDelegate.h"
#include "ShouldShowPhoenixDisplayChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "TheaterDataChangedDelegateDelegate.h"
#include "TheaterPinClickedDelegateDelegate.h"
#include "TheaterSelectedDelegateDelegate.h"
#include "TheaterTileClickedDelegateDelegate.h"
#include "TheaterTileDoubleClickedDelegateDelegate.h"
#include "TheaterTileFocusedDelegateDelegate.h"
#include "UnlockableVariantPreviewInfo.h"
#include "VaultItemViewedDelegate.h"
#include "VaultItemsViewedDelegate.h"
#include "FortFrontEndContext.generated.h"

class AFortPlayerPawn;
class AFortTheaterMapTile;
class UAthenaCosmeticItemDefinition;
class UFortItem;
class UFortItemDefinition;
class UFortOutpostItemDefinition;
class UFortQuestItem;
class UFortServerBrowserHelper;
class UFortSocialImportPanel;
class UFortWorldItem;
class UWidget;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortFrontEndContext : public UFortLocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyPlayerGadgetsClickedDelegate OnLobbyPlayerGadgetsClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadialPickerStatusChanged OnRadialPickerStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraChangedDelegate OnFrontEndCameraChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterPinClickedDelegate OnTheaterPinClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetPreviewedSceneTheaterDelegate OnSetPreviewedSceneTheater;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterSelectedDelegate OnTheaterSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterDataChangedDelegate OnTheaterDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterTileClickedDelegate OnTheaterTileClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterTileDoubleClickedDelegate OnTheaterTileDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterTileFocusedDelegate OnTheaterTileFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterTileFocusedDelegate OnTheaterTileUnfocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShouldShowPhoenixDisplayChangedDelegate OnShouldShowPhoenixDisplayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVaultItemViewed OnVaultItemViewed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVaultItemsViewed OnVaultItemsViewed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeasonTabVariantPreviewInfoChanged OnSeasonTabVariantPreviewInfoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLoginDelegate OnPlayerLoggedOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMainTabSelectedDelegate OnMainTabSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSocialImportClosedDelegate OnSocialImportClosed;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortFrontEndFeatureStruct Features[11];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString OfferIdToFocusInItemShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUnlockableVariantPreviewInfo SeasonTabVariantPreviewInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortServerBrowserHelper* ServerBrowserHelper;
    
public:
    UFortFrontEndContext();

    UFUNCTION(BlueprintCallable)
    void ViewVaultItemsFromOffer(const FCatalogOffer& CatalogOffer, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext);
    
    UFUNCTION(BlueprintCallable)
    void ViewVaultItems(const TArray<UFortItem*>& ItemsToView, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext);
    
    UFUNCTION(BlueprintCallable)
    void ViewVaultItemFromDefinition(const UFortItemDefinition* ItemToViewDefinition, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext);
    
    UFUNCTION(BlueprintCallable)
    void ViewVaultItem(const UFortItem* ItemToView, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext);
    
    UFUNCTION(BlueprintCallable)
    UFortSocialImportPanel* ShowSocialImport(TSubclassOf<UFortSocialImportPanel> PanelClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowSocialImport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPhoenixDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowAccountItemWarning() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedTheater(const FString& TheaterId);
    
    UFUNCTION(BlueprintCallable)
    void SetSeasonTabVariantPreviewInfo(FUnlockableVariantPreviewInfo Info);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalVariantPreview(const UAthenaCosmeticItemDefinition* CosmeticItem, FGameplayTag VariantChannelTag, FGameplayTag VariantTag, const FString& CustomData);
    
    UFUNCTION(BlueprintCallable)
    void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetFrontEndCamera(EFrontEndCamera NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLocalVariantPreview(const UAthenaCosmeticItemDefinition* CosmeticItem);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLockerSubslotIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTileForQuest(UFortQuestItem* QuestItem, float& OutCriticalMissionDifficultyOverrideMin, float& OutCriticalMissionDifficultyOverrideMax);
    
    UFUNCTION(BlueprintCallable)
    void SelectDefaultTheaterTile();
    
    UFUNCTION(BlueprintCallable)
    void SelectDefaultTheater();
    
    UFUNCTION(BlueprintCallable)
    void PushContentWidget_Adv(UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable)
    void PlayLevelUpEffect();
    
    UFUNCTION(BlueprintCallable)
    void PlayEvolutionEffect();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerProfileInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileMissionAlertRewardClaimed(const AFortTheaterMapTile* Tile) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCelebrateEffectPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveTileMissionValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Is4PlayerTile(const AFortTheaterMapTile* Tile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideAthenaStoreNewItemBang() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDynamicSocialImportClosed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetUITestingClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTileMissionDetails(const AFortTheaterMapTile* Tile, FFortMissionDetails& MissionDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTheaterData(const FString& TheaterId, FFortTheaterMapData& OutTheaterData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedTheaterId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelectedTheaterData(FFortTheaterMapData& OutTheaterData) const;
    
    UFUNCTION(BlueprintCallable)
    void GetSelectableGadgets(TArray<UFortWorldItem*>& SelectableGadgets, TArray<UFortWorldItem*>& LastSelectedGadgets);
    
    UFUNCTION(BlueprintCallable)
    FUnlockableVariantPreviewInfo GetSeasonTabVariantPreviewInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPostMaxAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 RewardOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOutpostCoreLevelByTheaterId(const FString& TheaterId, int32& OutCoreLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOutpostCoreLevelByItemDefinition(UFortOutpostItemDefinition* OutpostCoreItemDef, int32& OutCoreLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMCPRegionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMCPRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyInfo GetMaxAvailableDifficulty(bool bIncludeMissionAlertTiles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemDefinition* GetItemFromItemQuantityPair(const FFortItemQuantityPair& InPair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortFrontendInventoryFilter GetInventoryFilterForAccountItemWarning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHighestEnduranceWaveReachedByItemDefinition(UFortOutpostItemDefinition* OutpostCoreItemDef, int32& HighestWaveNumber) const;
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* GetHeroPlayerPawnForCurrentDisplayedItem();
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* GetHeroPlayerPawnByIndex(int32 PartyMemberIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFrontEndCamera GetFrontEndCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFocusedOrActiveTileMissionDetails(FFortMissionDetails& MissionDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortTheaterMapTile* GetFocusedOrActiveTile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFeatureState(const EFortFrontEndFeature Feature, EFortFrontEndFeatureState& OutFeatureState, EFortFrontEndFeatureStateReason& OutReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentTheaterName() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLockerSubslotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCriticalMissionRewards(TArray<FFortMissionRewardInfo>& RewardList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameDifficultyInfo> GetAvailableDifficulties(bool bIncludeMissionAlertTiles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllTheaterData(TArray<FFortTheaterMapData>& OutAllTheaterData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveTileMissionDetails(FFortMissionDetails& MissionDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortTheaterMapTile* GetActiveTile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 AccountLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedTheater();
    
    UFUNCTION(BlueprintCallable)
    void ClearLocalPreview(bool StopUsingLocalPreview);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowLockerSlotType(EAthenaCustomizationCategory SlotType) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanFindTileForQuest(UFortQuestItem* QuestItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCompleteQuestInFocusedOrActiveTileMission(UFortQuestItem* QuestItem) const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastMainTabSelected(FName TabName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreProfilesAvailableForWriting() const;
    
    UFUNCTION(BlueprintCallable)
    void AccountItemWarningShown();
    
};

