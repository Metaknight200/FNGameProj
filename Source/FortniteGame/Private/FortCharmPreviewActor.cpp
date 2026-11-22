#include "FortCharmPreviewActor.h"

AFortCharmPreviewActor::AFortCharmPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyCosmeticItem = NULL;
    this->CharmSlot = EFortCustomCharmType::Lapel;
}

void AFortCharmPreviewActor::SetActiveCharmSlot(int32 CharmSlotIn) {
}


void AFortCharmPreviewActor::ApplyMyCosmeticItemToHero(AFortPlayerPawn* PawnToModify, AFortPlayerController* FortPC) {
}


