#include "FortCosmeticReactivePreview.h"

AFortCosmeticReactivePreview::AFortCosmeticReactivePreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AFortCosmeticReactivePreview::StartSteppedDynamicStat(UObject* Requester, int32 From, int32 To, int32 AtRate, EFCRP_LoopBehavior EndBehavior) {
}

void AFortCosmeticReactivePreview::StartSmoothDynamicStat(UObject* Requester, float From, float To, float AtRate, EFCRP_LoopBehavior EndBehavior) {
}

void AFortCosmeticReactivePreview::OnFortPlayerPawnFinishedCustomization(AFortPlayerPawn* Pawn) {
}

void AFortCosmeticReactivePreview::OnBoundingActorEndedPlay(AActor* ActorEndingPlay, TEnumAsByte<EEndPlayReason::Type> Reason) {
}

FCosmeticVariantInfo AFortCosmeticReactivePreview::GetVariantInfo() const {
    return FCosmeticVariantInfo{};
}

void AFortCosmeticReactivePreview::DispatchReactStart() {
}

void AFortCosmeticReactivePreview::DispatchReactEnd() {
}


