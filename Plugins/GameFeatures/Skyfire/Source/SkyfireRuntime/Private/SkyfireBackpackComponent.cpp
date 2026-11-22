#include "SkyfireBackpackComponent.h"

USkyfireBackpackComponent::USkyfireBackpackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BackpackVFX = NULL;
    this->CachedBackPackSkeletalMesh = NULL;
    this->CachedSpawnedPawnWarningFX = NULL;
    this->CachedLightConeBurstEffect = NULL;
    this->CachedLootLevelBurstEffect = NULL;
    this->CountUpTimeline = NULL;
    this->TimeParameterMinutes = TEXT("SF_Number_Minutes");
    this->TimeParameterSeconds = TEXT("SF_Number_Seconds");
    this->ColorTentName = TEXT("SF_ColorTent");
    this->FontColorName = TEXT("SF_Font_Color");
    this->FlashBackPackName = TEXT("SF_Flash_Backpack 0=off 1=On");
    this->FlashTimerName = TEXT("SF_Flash_Timer 0=off 1=On");
    this->HologramSocketName = TEXT("FX_Holorgram_Socket");
    this->LootLevelColor_Name = TEXT("LootLevel_Color");
    this->LootLevelName = TEXT("LootLevel");
    this->AlphaName = TEXT("Alpha");
    this->NiagaraFXBlinkParameterName = TEXT("TurnOnBlink");
    this->JumpCountMaterialParameterName = TEXT("SF_Jump_Count");
    this->JumpThrusterMaterialRarity = TEXT("SF_Jump_Color");
    this->MaterialTickSpeed = TEXT("SF_Tic_Speed");
    this->FontOffsetParameterName = TEXT("SF_Font_Offset");
    this->DMBackBling = NULL;
    this->DMDigitalDisplay = NULL;
    this->BackBlingMaterialIndex = 0;
    this->DigitalDisplayMaterialIndex = 1;
    this->RarityChangedFX = NULL;
    this->bIsFlashingFromIncreaseInTime = false;
    this->TimeCollectedFX = NULL;
    this->OutOfTimeFX = NULL;
    this->bSpawnedInitialWarningParticle = false;
    this->bTimeCapWarningActive = false;
    this->TimeCapWarningDuration = 4.00f;
    this->PawnWarningFX = NULL;
    this->LightConeBurstEffect = NULL;
    this->StarLootLevelBurstEffect = NULL;
    this->AlmostOutOfTimeBackpackThreshold = 10.00f;
    this->AlmostOutOfTimePawnThreshold = 5.00f;
    this->IncreaseTimeFlashDuration = 2.50f;
    this->IntroDuration = 3.50f;
    this->IntroStartThreshold = 9.00f;
    this->CollectTimeDuration = 1.00f;
    this->OldTime = 0.00f;
    this->CurrentTime = 0.00f;
    this->TimeRemaining = 0.00f;
    this->bShouldChangeTimeBackgroundColor = false;
    this->bShouldChangeTimeFontColor = true;
    this->InitialJumpCount = 2.00f;
    this->bUseUniqueCommonRarityWarningColor = false;
    this->DefaultTimerFlashRate = 1.00f;
    this->IncreaseInTimeTimerFlashRate = 2.00f;
    this->bPlayCountUpEffectInGameplayChamber = false;
    this->CommonColorSemiTransparentOpacityLevel = 0.12f;
    this->SFX_Tick_1P_Prison = NULL;
    this->SFX_Tick_1P_Arena = NULL;
    this->SFX_Tick_1P_LootRoom = NULL;
    this->SFX_CountdownStart_1P_Prison = NULL;
    this->SFX_Tick_1P_Warning_Prison = NULL;
    this->SFX_Tick_1P_Warning_Arena = NULL;
    this->SFX_Tick_1P_Warning_LootRoom = NULL;
    this->SFX_Tick_1P_Warning_10Sec = NULL;
    this->TickVolume_Prison = 0.80f;
    this->TickVolume_DefaultArena = 1.00f;
    this->TickVolume_LootRoom = 1.00f;
    this->SFX_TimeIncrease_3P = NULL;
    this->SFX_TimeIncrease_1P = NULL;
    this->SFX_RarityChange_3P = NULL;
    this->SFX_RarityChange_3P_Rare = NULL;
    this->SFX_RarityChange_3P_Epic = NULL;
    this->SFX_RarityChange_3P_Legendary = NULL;
    this->SFX_RarityChange_1P = NULL;
    this->SFX_RarityChange_1P_Rare = NULL;
    this->SFX_RarityChange_1P_Epic = NULL;
    this->SFX_RarityChange_1P_Legendary = NULL;
    this->TickVolume_RarityChange = 1.00f;
    this->BackpackAudioPhase = ESkyfireBackpackAudioPhase::Prison;
    this->SFX_DeRez_Loop = NULL;
    this->SFX_DeRez_Loop_AC = NULL;
    this->SFX_DeRez_Loop_FadeOut_Duration = 0.10f;
    this->SFX_DeRez_Loop_Stop = NULL;
    this->SFX_DeRez_Loop_3P = NULL;
    this->SFX_DeRez_Loop_Stop_3P = NULL;
    this->SFX_CountUp_3P = NULL;
    this->SFX_CountUp_1P = NULL;
    this->SFX_RezSoundIsPlaying = false;
    this->SFX_MX_PrisonTeleport = NULL;
    this->SFX_MX_Prison_Reveal = NULL;
    this->SFX_Prison_Buzzer_CountUp = NULL;
    this->SFX_Prison_Buzzer_PostCountUp = NULL;
    this->CurrentRarity = EFortRarity::Common;
    this->bHasEnteredBattleArena = false;
    this->bCountUpIntroStarted = false;
    this->bIntroPawnFXStarted = false;
    this->BackpackCharacterPartModifier = NULL;
    this->SkyfireMutator = NULL;
    this->SkyfirePlayerPawnComponent = NULL;
    this->MaxInitialUpdateDelay = 0.50f;
    this->CurrentAssociatedPlayerPawn = NULL;
    this->CurrentAssociatedPlayerPawnController = NULL;
}

void USkyfireBackpackComponent::TimelineCountUpTimeUpdate(const float Alpha, ESkyfireBackpackComponentYesNoExec& OutResult) {
}

void USkyfireBackpackComponent::TimelineCountUpCompleted(ESkyfireBackpackComponentYesNoExec& OutResult) {
}

void USkyfireBackpackComponent::ShouldTick(ESkyfireBackpackComponentYesNoExec& OutResult) {
}

void USkyfireBackpackComponent::PawnLanded(const FHitResult& Hit) {
}

void USkyfireBackpackComponent::OnTimeUntilTeleportToLootRoomReachedCap() {
}

void USkyfireBackpackComponent::OnTeleportToLootRoomTimeChanged(const float NewTime) {
}

void USkyfireBackpackComponent::OnPlayerEnteredLootRoom(USkyfirePlayerPawnComponent* SkyfirePawnComponent) {
}

void USkyfireBackpackComponent::OnExitLootRoomTimeChanged(const float NewTime) {
}

void USkyfireBackpackComponent::OnExitInitialPrisonTimeChanged(const float NewTime) {
}

void USkyfireBackpackComponent::OnEarnedLootRarityChanged(const EFortRarity NewRarity) {
}

void USkyfireBackpackComponent::NativeUpdateTime() {
}

void USkyfireBackpackComponent::Initialize(ACustomCharacterPartModifier* BackpackCCPM, UTimelineComponent* InCountUpTimeline, FSkyfireBackpackComponentInitializerAssetNamesStruct BackpackAssetNamesData, FSkyfireBackpackComponentInitializerColorsStruct BackpackColorData, FSkyfireBackpackComponentInitializerConfigStruct BackpackConfigData, FSkyfireBackpackComponentInitializerFXStruct BackpackFXData, FSkyfireBackpackComponentInitializerTimesStruct BackpackTimesData, FSkyfireBackpackComponentInitializerSoundTickStruct BackpackSoundTickData, FSkyfireBackpackComponentInitializerSoundConfigStruct BackpackSoundConfigData, FSkyfireBackpackComponentInitializerSoundRarityStruct BackpackSoundRarityData, FSkyfireBackpackComponentInitializerSoundTeleportStruct BackpackSoundTeleportData, FSkyfireUpdateBackpackTick InUpdateBackpackTickFunction, FSkyfirePlayCountUpTimeNative InPlayCountUpTimeNative) {
}

AFortAthenaMutator_Skyfire* USkyfireBackpackComponent::GetSkyfireMutator() const {
    return SkyfireMutator;
}

float USkyfireBackpackComponent::GetSecondsUntil(const float Time) const {
    return 0.0f;
}

void USkyfireBackpackComponent::CacheVariables(AFortPlayerPawn* AssociatedPlayerPawn, ESkyfireBackpackComponentCachedExec& OutResult) {
}


