#include "FortProgressiveStageTags.h"

UFortProgressiveStageTags::UFortProgressiveStageTags() : UUserWidget(FObjectInitializer::Get()) {
    this->Switcher_ActiveTag = NULL;
    this->Tag_Owned = NULL;
    this->Tag_Prerequisite = NULL;
}


