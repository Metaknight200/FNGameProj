#include "FortAnimNotify_Mantis.h"

UFortAnimNotify_Mantis::UFortAnimNotify_Mantis() {
    this->MantisNotifyEvent = EFortMantisNotifyEvent::Invalid;
    this->MantisBranchRule = EFortMantisBranchRule::Any;
    this->MantisBranchPath = EFortMantisBranchPath::Default;
}


