#include "FortAnimInputEvent_AnimClass.h"
#include "Templates/SubclassOf.h"

UFortAnimInputEvent_AnimClass::UFortAnimInputEvent_AnimClass() {
    this->Value = NULL;
}

UFortAnimInputEvent_AnimClass* UFortAnimInputEvent_AnimClass::CreateAnimInputEvent_AnimClass(FName InEventName, TSubclassOf<UAnimInstance> InValue) {
    return NULL;
}


