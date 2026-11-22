#include "FortTheaterMapTile.h"
#include "Components/StaticMeshComponent.h"

AFortTheaterMapTile::AFortTheaterMapTile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->bFocused = false;
    this->bHostSelected = false;
    this->bGoToPromptEnabled = false;
    this->bHasFinishedLoading = false;
    this->TileType = EFortTheaterMapTileType::Normal;
    this->ZoneThemeClass = NULL;
    this->TileIndex = -1;
    this->RegionIndex = -1;
    this->SelectionInterpSpeed = 6.00f;
    this->NormalBrightness = 0.80f;
    this->LockedBrightness = 0.10f;
    this->FocusedBrightness = 1.00f;
    this->SelectedBrightnessRange = 0.25f;
    this->SelectedPulseSpeed = 10.00f;
    this->bEnableBrightnessCode = true;
    this->bDisallowQuickplay = false;
    this->StaticMeshMaterialID = 1.00f;
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}


void AFortTheaterMapTile::OnTileClicked(AActor* ClickedActor, FKey ButtonReleased) {
}

void AFortTheaterMapTile::OnSelectWrapper(bool bIsGameSessionOwner) {
}


void AFortTheaterMapTile::OnMouseOverEnd(AActor* MousedOverActor) {
}

void AFortTheaterMapTile::OnMouseOverBegin(AActor* MousedOverActor) {
}









void AFortTheaterMapTile::OnDeselectWrapper(bool bIsGameSessionOwner) {
}




bool AFortTheaterMapTile::IsTileValidForMarkedQuest(UFortQuestItem*& OutMarkedQuest) const {
    return false;
}

bool AFortTheaterMapTile::IsTileSelectable() const {
    return false;
}

bool AFortTheaterMapTile::IsTileQuestRecommended() const {
    return false;
}

bool AFortTheaterMapTile::IsTilePlayable() const {
    return false;
}

bool AFortTheaterMapTile::IsTileLocked() const {
    return false;
}

bool AFortTheaterMapTile::IsTileInPhoenixTheater() const {
    return false;
}

bool AFortTheaterMapTile::IsTileHidden() const {
    return false;
}

bool AFortTheaterMapTile::IsTeamRatingDataValid() const {
    return false;
}

bool AFortTheaterMapTile::IsMissionAlertTile() const {
    return false;
}

bool AFortTheaterMapTile::HasValidMissionData() const {
    return false;
}

FGameDifficultyInfo AFortTheaterMapTile::GetZoneDifficulty() const {
    return FGameDifficultyInfo{};
}

bool AFortTheaterMapTile::GetMissionDefinitionIcon(FSlateBrush& OutMissionDefIcon) const {
    return false;
}

int32 AFortTheaterMapTile::GetMissionContentDifficultyLevel() const {
    return 0;
}

FGameplayTagContainer AFortTheaterMapTile::GetMissionAlertVisualTags() const {
    return FGameplayTagContainer{};
}

FName AFortTheaterMapTile::GetMissionAlertCategoryName() const {
    return NAME_None;
}

bool AFortTheaterMapTile::DoesTileAllowQuickplay() const {
    return false;
}


