#include "FortPawnComponent_Convert.h"
#include "Net/UnrealNetwork.h"

UFortPawnComponent_Convert::UFortPawnComponent_Convert(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConvertInteractionSound = NULL;
    this->IndicatorMarkerWidgetClass = NULL;
    this->bCanConvert = false;
    this->bCanBeConverted = false;
    this->bCanBeConvertedFromDBNO = false;
    this->ConverterPlayerState = NULL;
    this->CachedAIConvertParameters = NULL;
}

void UFortPawnComponent_Convert::TriggerUnconversion(AFortPawn* Unconverter, AFortPawn* Unconverted) {
}

void UFortPawnComponent_Convert::TriggerConversion(AFortPawn* Converter, AFortPawn* Converted) {
}

void UFortPawnComponent_Convert::ShowIndicatorMarker() {
}

void UFortPawnComponent_Convert::SetCanBeConverted(const bool bInCanBeConverted) {
}

void UFortPawnComponent_Convert::OnConverterTeamChange() {
}

void UFortPawnComponent_Convert::OnConverterStoppedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting) {
}

void UFortPawnComponent_Convert::OnConverterStartedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting) {
}

void UFortPawnComponent_Convert::OnConvertedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortPawnComponent_Convert::HideIndicatorMarker() {
}

int32 UFortPawnComponent_Convert::GetNumConvertedPawns() const {
    return 0;
}

void UFortPawnComponent_Convert::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPawnComponent_Convert, bCanConvert);
    DOREPLIFETIME(UFortPawnComponent_Convert, bCanBeConverted);
    DOREPLIFETIME(UFortPawnComponent_Convert, bCanBeConvertedFromDBNO);
    DOREPLIFETIME(UFortPawnComponent_Convert, ConverterPlayerState);
}


