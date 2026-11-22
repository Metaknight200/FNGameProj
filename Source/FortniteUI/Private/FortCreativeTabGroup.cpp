#include "FortCreativeTabGroup.h"

UFortCreativeTabGroup::UFortCreativeTabGroup() : UUserWidget(FObjectInitializer::Get()) {
    this->TabButtonClass = NULL;
    this->TabOnHoveredSound = NULL;
    this->TabOnPressedSound = NULL;
    this->TabButtonStyle = NULL;
    this->Tab_Box = NULL;
    this->TabGroup = NULL;
}

void UFortCreativeTabGroup::PreviousTab() {
}



void UFortCreativeTabGroup::NextTab() {
}


