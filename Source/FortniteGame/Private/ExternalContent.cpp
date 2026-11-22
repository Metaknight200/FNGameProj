#include "ExternalContent.h"

UExternalContent::UExternalContent() {
    this->Type = EReferenceType::Hard;
    this->Label = TEXT("active");
}

bool UExternalContent::IsLoaded() const {
    return false;
}


