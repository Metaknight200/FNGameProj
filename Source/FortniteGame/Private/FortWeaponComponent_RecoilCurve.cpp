#include "FortWeaponComponent_RecoilCurve.h"

UFortWeaponComponent_RecoilCurve::UFortWeaponComponent_RecoilCurve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRandomizeHorizFlip = true;
    this->bRandomizeVertFlip = false;
    this->RecoilBehaviorType = EFortRecoilCurveType::WithTime;
}

void UFortWeaponComponent_RecoilCurve::StartRecoilCurve() {
}

void UFortWeaponComponent_RecoilCurve::EndRecoilCurve() {
}


