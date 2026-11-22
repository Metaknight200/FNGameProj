#include "LayerAnimInstance_MechanicalEngineerPet.h"

ULayerAnimInstance_MechanicalEngineerPet::ULayerAnimInstance_MechanicalEngineerPet() {
    this->FrontendLocAlpha = 0.00f;
    this->OwlFrameAlpha = 0.00f;
    this->OwlPoseAlpha = 0.00f;
    this->SkydiveForward = 0.00f;
    this->ClosedAlpha = 0.00f;
    this->AdditiveAlpha = 0.00f;
    this->Closed_NewCurveValue = 0.00f;
    this->GliderCurveValue = 0.00f;
    this->WingCorrectiveAdditiveAlpha = 0.00f;
    this->LocalVelocityRight = 0.00f;
    this->bSwitchInterpSpeed = false;
    this->bGateCanPlayLanding = false;
    this->bGateWrenchTransition = false;
    this->bOwlIsOnPack = true;
    this->BlockAnimRule = false;
    this->bHideOwl = false;
    this->bDetachFromWrenchTransition = false;
    this->bSkydiveFreefall = false;
    this->bIsInLandingPhase = false;
    this->bCanPlayLandingAnim = false;
    this->bIsFrontEndContrails = false;
    this->bUseLayer = false;
    this->bUsingHangGliderSet = false;
    this->bUsingUmbrellaGliderSet = false;
    this->bTransition_ToSkydive = false;
    this->bTransition_ToClosed = false;
    this->bTransition_Detach_To_Dive = false;
    this->bTransition_Detach_To_Glide = false;
}


