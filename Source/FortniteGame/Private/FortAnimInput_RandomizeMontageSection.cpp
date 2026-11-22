#include "FortAnimInput_RandomizeMontageSection.h"

FFortAnimInput_RandomizeMontageSection::FFortAnimInput_RandomizeMontageSection() {
    this->CurrentAnimation = NULL;
    this->TimeUntilNextSectionChange = 0.00f;
    this->CurrentSectionParamIndex = 0;
}

