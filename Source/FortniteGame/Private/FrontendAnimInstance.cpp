#include "FrontendAnimInstance.h"

UFrontendAnimInstance::UFrontendAnimInstance() {
    this->bIsSkydiving = false;
    this->ContrailDiveFactor = 0.00f;
    this->bEnableHandIK = false;
    this->bIsPlayingEmote = false;
    this->bIsBodyTypeManuallySet = false;
    this->bIsCharacterCustomizationLoaded = false;
    this->bLookingAtBackpack = false;
    this->bIsRebirth = false;
    this->AnimBodyType = EFortPlayerAnimBodyType::Small;
    this->HandIKRetargetingWeight = 0.00f;
    this->RightHandIKAlpha = 0.00f;
    this->LeftHandIKAlpha = 0.00f;
    this->IdlePelvisOffsetAlpha = 0.00f;
    this->EmoteHipOffsetAlpha = 0.00f;
    this->EmoteHipOffsetInterpSpeed = 6.00f;
    this->FortPlayerPawn = NULL;
    this->Gender = EFortDisplayGender::Male;
    this->IntroAnimation_Female = NULL;
    this->IntroAnimation_Male = NULL;
    this->OutroAnimation_Female = NULL;
    this->OutroAnimation_Male = NULL;
    this->SelectedAnimation_Female = NULL;
    this->SelectedAnimation_Male = NULL;
    this->bCanPlayCustomAnimations = false;
    this->bDontCrossArms = false;
    this->bNoHandsOnHips = false;
}

bool UFrontendAnimInstance::ShouldHidePropsDuringBlend(UAnimMontage* Montage) const {
    return false;
}

void UFrontendAnimInstance::PlaySelected() {
}

void UFrontendAnimInstance::PlayOutro() {
}

void UFrontendAnimInstance::PlayIntro() {
}



bool UFrontendAnimInstance::IsInLobby() {
    return false;
}

TEnumAsByte<EFortDisplayGender::Type> UFrontendAnimInstance::GetGender() {
    return EFortDisplayGender::Unknown;
}

void UFrontendAnimInstance::AnimNotify_PlayFireFX(const UAnimNotify* Notify) {
}


