#include "FortPlaysetItemDefinition.h"
#include "EFortInventoryFilter.h"
#include "EFortItemType.h"

UFortPlaysetItemDefinition::UFortPlaysetItemDefinition() {
    this->ItemType = EFortItemType::Playset;
    this->FilterOverride = EFortInventoryFilter::Gadget;
    this->bNeverPersisted = true;
    this->bAllowMultipleStacks = false;
    this->GrantToProfileType = TEXT("creative");
    this->SizeX = 1;
    this->SizeY = 1;
    this->SizeZ = 6;
    this->ZSnapTolerance = 5.00f;
    this->PlaysetCategory = EPlaysetCategory::Unset;
    this->OffsetType = EPlaysetOffsetType::CustomOffsetFromCorner;
    this->bUseLocationOffset = false;
    this->bAdjustForWorldCollision = false;
    this->bUsePlaysetProps = false;
    this->LevelSaveRecord = NULL;
    this->PlaysetPropLevelSaveRecordCollection = NULL;
}

ULevelStreamingDynamic* UFortPlaysetItemDefinition::SpawnPlaysetFromStruct(AActor* WorldContextObject, const FFortPlaysetStreamingData& LevelData) {
    return NULL;
}

ULevelStreamingDynamic* UFortPlaysetItemDefinition::SpawnPlayset(AActor* WorldContextObject, const UFortPlaysetItemDefinition* Playset, FVector Location, FRotator Rotation, FFortPlaysetStreamingData& OutLevelData) {
    return NULL;
}

void UFortPlaysetItemDefinition::SpawnActorsInPlayset(AActor* WorldContextObject, UFortPlaysetItemDefinition* Playset) {
}

FName UFortPlaysetItemDefinition::GetPlaysetName() const {
    return PlaysetName;
}

FVector UFortPlaysetItemDefinition::AdjustToFinalLocation(UObject* WorldContextObject, UFortPlaysetItemDefinition* Playset, FVector BaseLocation, FRotator Rotation) {
    return FVector{};
}


