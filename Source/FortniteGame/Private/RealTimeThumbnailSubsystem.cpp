#include "RealTimeThumbnailSubsystem.h"
#include "Templates/SubclassOf.h"

URealTimeThumbnailSubsystem::URealTimeThumbnailSubsystem() {
}

void URealTimeThumbnailSubsystem::DestroyThumbnailRenderer(UFortThumbnailRenderer* ThumbnailRenderer) {
}

UFortThumbnailRenderer* URealTimeThumbnailSubsystem::CreateThumbnailRenderer(TSubclassOf<UFortThumbnailRenderer> ThumbnailRendererClass) {
    return NULL;
}


