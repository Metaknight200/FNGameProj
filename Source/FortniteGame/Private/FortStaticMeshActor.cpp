#include "FortStaticMeshActor.h"

AFortStaticMeshActor::AFortStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinkCompCount = 0;
    this->bUseAutoNavmeshFlags = true;
}


