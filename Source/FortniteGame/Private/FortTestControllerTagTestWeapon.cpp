#include "FortTestControllerTagTestWeapon.h"
#include "FortTaggedAssetTest_Weapon.h"

UFortTestControllerTagTestWeapon::UFortTestControllerTagTestWeapon() {
    this->AssetTypesToTest.AddDefaulted(3);
    this->TargetTestBaseClass = UFortTaggedAssetTest_Weapon::StaticClass();
}


