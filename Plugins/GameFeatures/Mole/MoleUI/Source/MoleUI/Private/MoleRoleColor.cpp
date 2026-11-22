#include "MoleRoleColor.h"

AMoleRoleColor::AMoleRoleColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraceChannel = ECC_Visibility;
    this->DecalComponent = NULL;
}

void AMoleRoleColor::SetColor(const FLinearColor& Color) {
}


void AMoleRoleColor::Hide() {
}


