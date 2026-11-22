#include "FortCurieBGA.h"
#include "FortCurieComponent.h"

AFortCurieBGA::AFortCurieBGA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowInteract = false;
    this->CurieComponent = CreateDefaultSubobject<UFortCurieComponent>(TEXT("CurieComponent"));
}


