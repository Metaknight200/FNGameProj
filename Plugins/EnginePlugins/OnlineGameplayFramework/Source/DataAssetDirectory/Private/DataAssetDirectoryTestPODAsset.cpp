#include "DataAssetDirectoryTestPODAsset.h"

UDataAssetDirectoryTestPODAsset::UDataAssetDirectoryTestPODAsset() {
    this->AssetName = TEXT("DataAssetDirectoryTestPODAsset");
    this->EnumProperty = EDataAssetDirectoryTestEnum::A;
    this->IntProperty = 0;
    this->FloatProperty = 0.00f;
    this->BoolProperty = false;
    this->StringProperty = TEXT("TestString");
    this->NameProperty = TEXT("TestName");
}


