#include "FortFrontEndContext.h"
#include "Templates/SubclassOf.h"

UFortFrontEndContext::UFortFrontEndContext() {
    this->ServerBrowserHelper = NULL;
}

void UFortFrontEndContext::ViewVaultItemsFromOffer(const FCatalogOffer& CatalogOffer, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext) {
}

void UFortFrontEndContext::ViewVaultItems(const TArray<UFortItem*>& ItemsToView, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext) {
}

void UFortFrontEndContext::ViewVaultItemFromDefinition(const UFortItemDefinition* ItemToViewDefinition, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext) {
}

void UFortFrontEndContext::ViewVaultItem(const UFortItem* ItemToView, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext) {
}

UFortSocialImportPanel* UFortFrontEndContext::ShowSocialImport(TSubclassOf<UFortSocialImportPanel> PanelClass) {
    return NULL;
}

bool UFortFrontEndContext::ShouldShowSocialImport() const {
    return false;
}

bool UFortFrontEndContext::ShouldShowPhoenixDisplay() const {
    return false;
}

bool UFortFrontEndContext::ShouldShowAccountItemWarning() const {
    return false;
}

void UFortFrontEndContext::SetSelectedTheater(const FString& TheaterId) {
}

void UFortFrontEndContext::SetSeasonTabVariantPreviewInfo(FUnlockableVariantPreviewInfo Info) {
}

void UFortFrontEndContext::SetLocalVariantPreview(const UAthenaCosmeticItemDefinition* CosmeticItem, FGameplayTag VariantChannelTag, FGameplayTag VariantTag, const FString& CustomData) {
}

void UFortFrontEndContext::SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget) {
}

void UFortFrontEndContext::SetFrontEndCamera(EFrontEndCamera NewState) {
}

void UFortFrontEndContext::SetDefaultLocalVariantPreview(const UAthenaCosmeticItemDefinition* CosmeticItem) {
}

void UFortFrontEndContext::SetCurrentLockerSubslotIndex(int32 NewIndex) {
}

bool UFortFrontEndContext::SelectTileForQuest(UFortQuestItem* QuestItem, float& OutCriticalMissionDifficultyOverrideMin, float& OutCriticalMissionDifficultyOverrideMax) {
    return false;
}

void UFortFrontEndContext::SelectDefaultTheaterTile() {
}

void UFortFrontEndContext::SelectDefaultTheater() {
}

void UFortFrontEndContext::PushContentWidget_Adv(UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget) {
}

void UFortFrontEndContext::PlayLevelUpEffect() {
}

void UFortFrontEndContext::PlayEvolutionEffect() {
}

void UFortFrontEndContext::OnPlayerProfileInitialized() {
}

bool UFortFrontEndContext::IsTileMissionAlertRewardClaimed(const AFortTheaterMapTile* Tile) const {
    return false;
}

bool UFortFrontEndContext::IsCelebrateEffectPlaying() {
    return false;
}

bool UFortFrontEndContext::IsActiveTileMissionValid() {
    return false;
}

bool UFortFrontEndContext::Is4PlayerTile(const AFortTheaterMapTile* Tile) const {
    return false;
}

void UFortFrontEndContext::HideAthenaStoreNewItemBang() const {
}

void UFortFrontEndContext::HandleDynamicSocialImportClosed() {
}

UClass* UFortFrontEndContext::GetUITestingClass() const {
    return NULL;
}

bool UFortFrontEndContext::GetTileMissionDetails(const AFortTheaterMapTile* Tile, FFortMissionDetails& MissionDetails) const {
    return false;
}

bool UFortFrontEndContext::GetTheaterData(const FString& TheaterId, FFortTheaterMapData& OutTheaterData) const {
    return false;
}

FString UFortFrontEndContext::GetSelectedTheaterId() const {
    return TEXT("");
}

bool UFortFrontEndContext::GetSelectedTheaterData(FFortTheaterMapData& OutTheaterData) const {
    return false;
}

void UFortFrontEndContext::GetSelectableGadgets(TArray<UFortWorldItem*>& SelectableGadgets, TArray<UFortWorldItem*>& LastSelectedGadgets) {
}

FUnlockableVariantPreviewInfo UFortFrontEndContext::GetSeasonTabVariantPreviewInfo() {
    return FUnlockableVariantPreviewInfo{};
}

void UFortFrontEndContext::GetPostMaxAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 RewardOffset) const {
}

bool UFortFrontEndContext::GetOutpostCoreLevelByTheaterId(const FString& TheaterId, int32& OutCoreLevel) const {
    return false;
}

bool UFortFrontEndContext::GetOutpostCoreLevelByItemDefinition(UFortOutpostItemDefinition* OutpostCoreItemDef, int32& OutCoreLevel) const {
    return false;
}

FText UFortFrontEndContext::GetMCPRegionText() const {
    return FText::GetEmpty();
}

FText UFortFrontEndContext::GetMCPRegion() const {
    return FText::GetEmpty();
}

FGameDifficultyInfo UFortFrontEndContext::GetMaxAvailableDifficulty(bool bIncludeMissionAlertTiles) const {
    return FGameDifficultyInfo{};
}

UFortItemDefinition* UFortFrontEndContext::GetItemFromItemQuantityPair(const FFortItemQuantityPair& InPair) const {
    return NULL;
}

EFortFrontendInventoryFilter UFortFrontEndContext::GetInventoryFilterForAccountItemWarning() const {
    return EFortFrontendInventoryFilter::Schematics;
}

bool UFortFrontEndContext::GetHighestEnduranceWaveReachedByItemDefinition(UFortOutpostItemDefinition* OutpostCoreItemDef, int32& HighestWaveNumber) const {
    return false;
}

AFortPlayerPawn* UFortFrontEndContext::GetHeroPlayerPawnForCurrentDisplayedItem() {
    return NULL;
}

AFortPlayerPawn* UFortFrontEndContext::GetHeroPlayerPawnByIndex(int32 PartyMemberIndex) {
    return NULL;
}

EFrontEndCamera UFortFrontEndContext::GetFrontEndCamera() const {
    return EFrontEndCamera::Invalid;
}

bool UFortFrontEndContext::GetFocusedOrActiveTileMissionDetails(FFortMissionDetails& MissionDetails) const {
    return false;
}

AFortTheaterMapTile* UFortFrontEndContext::GetFocusedOrActiveTile() const {
    return NULL;
}

void UFortFrontEndContext::GetFeatureState(const EFortFrontEndFeature Feature, EFortFrontEndFeatureState& OutFeatureState, EFortFrontEndFeatureStateReason& OutReason) const {
}

FText UFortFrontEndContext::GetCurrentTheaterName() const {
    return FText::GetEmpty();
}

int32 UFortFrontEndContext::GetCurrentLockerSubslotIndex() {
    return 0;
}

void UFortFrontEndContext::GetCriticalMissionRewards(TArray<FFortMissionRewardInfo>& RewardList) const {
}

TArray<FGameDifficultyInfo> UFortFrontEndContext::GetAvailableDifficulties(bool bIncludeMissionAlertTiles) const {
    return TArray<FGameDifficultyInfo>();
}

bool UFortFrontEndContext::GetAllTheaterData(TArray<FFortTheaterMapData>& OutAllTheaterData) const {
    return false;
}

bool UFortFrontEndContext::GetActiveTileMissionDetails(FFortMissionDetails& MissionDetails) const {
    return false;
}

AFortTheaterMapTile* UFortFrontEndContext::GetActiveTile() const {
    return NULL;
}

void UFortFrontEndContext::GetAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 AccountLevel) const {
}

void UFortFrontEndContext::ClearSelectedTheater() {
}

void UFortFrontEndContext::ClearLocalPreview(bool StopUsingLocalPreview) {
}

bool UFortFrontEndContext::CanShowLockerSlotType(EAthenaCustomizationCategory SlotType) const {
    return false;
}

bool UFortFrontEndContext::CanFindTileForQuest(UFortQuestItem* QuestItem) {
    return false;
}

bool UFortFrontEndContext::CanCompleteQuestInFocusedOrActiveTileMission(UFortQuestItem* QuestItem) const {
    return false;
}

void UFortFrontEndContext::BroadcastMainTabSelected(FName TabName) {
}

bool UFortFrontEndContext::AreProfilesAvailableForWriting() const {
    return false;
}

void UFortFrontEndContext::AccountItemWarningShown() {
}


