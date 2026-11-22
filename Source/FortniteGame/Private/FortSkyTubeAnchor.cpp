#include "FortSkyTubeAnchor.h"

AFortSkyTubeAnchor::AFortSkyTubeAnchor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->bEnabled = true;
    this->bExemptFromShutdown = false;
}


bool AFortSkyTubeAnchor::IsExemptFromShutdown() const {
    return bExemptFromShutdown;
}

bool AFortSkyTubeAnchor::IsEnabled() const {
    return false;
}


