#include "FortAnimInputEvent.h"

UFortAnimInputEvent::UFortAnimInputEvent() {
}

bool UFortAnimInputEvent::IsNamed(FName InEventName) const {
    return false;
}

UFortAnimInputEvent* UFortAnimInputEvent::CreateAnimInputEvent(FName InEventName) {
    return NULL;
}


