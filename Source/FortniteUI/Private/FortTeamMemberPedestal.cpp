#include "FortTeamMemberPedestal.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

AFortTeamMemberPedestal::AFortTeamMemberPedestal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->OwningPedestalGroup = NULL;
    this->AssignedMemberIndex = -1;
    this->VisualOrderIndex = -1;
    this->WidgetComponent_MemberInfo = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_MemberInfo"));
    this->WidgetComponent_FillOpenSlot = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_FillOpenSlot"));
    this->WidgetComponent_BattlePassInfo = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_BattlePassInfo"));
    this->WidgetComponent_CompletedFeatInfo = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_CompletedFeatInfo"));
    this->PlaceholderMesh = NULL;
    this->MemberHeroItem = NULL;
    this->LocalLoadoutFailureTimeout = 30.00f;
    this->bTimeToPawnLoadedEnabled = true;
}










bool AFortTeamMemberPedestal::IsValidTeamMember() const {
    return false;
}

bool AFortTeamMemberPedestal::IsPlayingFortnite() const {
    return false;
}

bool AFortTeamMemberPedestal::IsInLocalSquadGroup() const {
    return false;
}

bool AFortTeamMemberPedestal::IsInFrontEnd() const {
    return false;
}

bool AFortTeamMemberPedestal::IsCurrentMemberLocal() const {
    return false;
}

void AFortTeamMemberPedestal::InitializePlaceholderMesh(UStaticMeshComponent* NewPlaceholderMesh) {
}

void AFortTeamMemberPedestal::HandlePlaceholderMeshInputTouchEnd(TEnumAsByte<ETouchIndex::Type> FingerIndex, UPrimitiveComponent* TouchedComponent) {
}

void AFortTeamMemberPedestal::HandlePlaceholderMeshEndCursorOver(UPrimitiveComponent* TouchedComponent) {
}

void AFortTeamMemberPedestal::HandlePlaceholderMeshClicked(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed) {
}

void AFortTeamMemberPedestal::HandlePlaceholderMeshBeginCursorOver(UPrimitiveComponent* TouchedComponent) {
}

FString AFortTeamMemberPedestal::GetTeamMemberDisplayName() const {
    return TEXT("");
}

int32 AFortTeamMemberPedestal::GetCurrentTeamSize() const {
    return 0;
}

void AFortTeamMemberPedestal::ClearOverrideMaterial() {
}

void AFortTeamMemberPedestal::ApplyUniformOverrideMaterial(UMaterialInterface* OverrideMaterial) {
}


