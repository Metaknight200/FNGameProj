#include "FortEventLevelNavigationActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"

AFortEventLevelNavigationActor::AFortEventLevelNavigationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->WidgetComponent_NavigationWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_NavWidget"));
    this->WidgetComponent_CursorTargetPosition = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_CursorTargetPosition"));
    this->IndicatorWidgetClass = NULL;
    this->CursorTargetWidgetClass = NULL;
    this->DisplayMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->bAutoClick = false;
    this->bAlwaysHighliteOnMobile = false;
    this->MobileHighlightStencilValue = 21;
    this->bOverrideMobileMeshSize = false;
    this->MeshSizeOverrideScale = 1.00f;
    this->CursorHoverHighlightStencilValue = 22;
    this->DisplayMesh->SetupAttachment(RootComponent);
    this->WidgetComponent_CursorTargetPosition->SetupAttachment(RootComponent);
}

void AFortEventLevelNavigationActor::UpdateBangState(FGameplayTag BangTacker, bool bShowBang) {
}



bool AFortEventLevelNavigationActor::HasPurchasedSeasonBook() const {
    return false;
}


void AFortEventLevelNavigationActor::HandleMCPInventoryChanged(const TSet<FString>& TypesChanged, int64 ProfileRvn) {
}

void AFortEventLevelNavigationActor::HandleDisplayMeshInputTouchEnd(TEnumAsByte<ETouchIndex::Type> FingerIndex, UPrimitiveComponent* TouchedComponent) {
}

void AFortEventLevelNavigationActor::HandleDisplayMeshEndCursorOver(UPrimitiveComponent* TouchedComponent) {
}

void AFortEventLevelNavigationActor::HandleDisplayMeshClicked(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed) {
}

void AFortEventLevelNavigationActor::HandleDisplayMeshBeginCursorOver(UPrimitiveComponent* TouchedComponent) {
}

UFortGameStateComponent_EventLevel* AFortEventLevelNavigationActor::GetOwningGameStateComp() const {
    return NULL;
}

FFortEventLevelNavigationDisplayDetails AFortEventLevelNavigationActor::GetDisplayDetails() const {
    return FFortEventLevelNavigationDisplayDetails{};
}

bool AFortEventLevelNavigationActor::CanCommitNavigationRequest_Implementation() const {
    return false;
}


