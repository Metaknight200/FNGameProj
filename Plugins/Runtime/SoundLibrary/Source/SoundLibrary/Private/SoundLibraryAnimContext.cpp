#include "SoundLibraryAnimContext.h"

USoundLibraryAnimContext::USoundLibraryAnimContext() {
    this->Animation = NULL;
    this->AnimRate = 1.00f;
}

void USoundLibraryAnimContext::ConfigureContext(AActor* OwningActor, UAnimSequenceBase* InAnimation, const FSoundLibraryAnimContextSettings& InSettings) {
}


