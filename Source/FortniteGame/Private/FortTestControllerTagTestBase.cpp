#include "FortTestControllerTagTestBase.h"
#include "FortTaggedAssetTest_Base.h"

UFortTestControllerTagTestBase::UFortTestControllerTagTestBase() : Super(FObjectInitializer::Get()) {
    this->TestManager = NULL;
    this->AssetTypesToTest.AddDefaulted(3);
    this->TargetTestBaseClass = UFortTaggedAssetTest_Base::StaticClass();
}


