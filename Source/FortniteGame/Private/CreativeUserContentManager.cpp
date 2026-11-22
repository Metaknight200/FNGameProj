#include "CreativeUserContentManager.h"
#include "LevelSaveRecordThumbnailGenerator.h"

UCreativeUserContentManager::UCreativeUserContentManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThumbnailGenerator = CreateDefaultSubobject<ULevelSaveRecordThumbnailGenerator>(TEXT("ThumbnailGenerator"));
}


