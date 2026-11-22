#include "DataAssetDirectoryTestObjectAsset.h"
#include "DataAssetDirectorySimpleObject.h"

UDataAssetDirectoryTestObjectAsset::UDataAssetDirectoryTestObjectAsset() {
    this->SimpleObject = CreateDefaultSubobject<UDataAssetDirectorySimpleObject>(TEXT("SimpleObject"));
}


