#include "FortTrack_CustomSpline.h"
#include "Components/SplineComponent.h"

AFortTrack_CustomSpline::AFortTrack_CustomSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->CustomSplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("CustomSplineComp"));
    this->CustomSplineComp->SetupAttachment(RootComponent);
}


