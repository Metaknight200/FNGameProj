#include "FortAccoladeItemDefinition.h"
#include "EFortItemType.h"

UFortAccoladeItemDefinition::UFortAccoladeItemDefinition() {
    this->ItemType = EFortItemType::Accolades;
    this->bAllowMultipleStacks = false;
    this->AccoladeType = EFortAccoladeType::Acknowledgement;
    this->AccoladeSubtype = EFortAccoladeSubtype::Action;
    this->Priority = EXPEventPriorityType::NearReticle;
    this->AccoladeLevel = 1.00f;
    this->bOnlyAllowOncePerDay = false;
    this->bIgnoreInAntiAddictionReducedStates = false;
    this->AwardedSoundCue = NULL;
}

EXPEventPriorityType UFortAccoladeItemDefinition::GetPriority() const {
    return EXPEventPriorityType::NearReticle;
}

TSoftObjectPtr<UTexture2D> UFortAccoladeItemDefinition::GetPreviousAccoladeSmallPreviewImage() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortAccoladeItemDefinition::GetPreviousAccoladeLargePreviewImage() const {
    return NULL;
}

USoundCue* UFortAccoladeItemDefinition::GetAwardedSound() const {
    return NULL;
}

int32 UFortAccoladeItemDefinition::GetAccoladeXpValueWithCountScalar(const int32 Count) const {
    return 0;
}

int32 UFortAccoladeItemDefinition::GetAccoladeXpValue() const {
    return 0;
}

EFortAccoladeType UFortAccoladeItemDefinition::GetAccoladeType() const {
    return EFortAccoladeType::Acknowledgement;
}

EFortAccoladeSubtype UFortAccoladeItemDefinition::GetAccoladeSubtype() const {
    return EFortAccoladeSubtype::NotSet;
}

float UFortAccoladeItemDefinition::GetAccoladeLevel() const {
    return AccoladeLevel;
}


