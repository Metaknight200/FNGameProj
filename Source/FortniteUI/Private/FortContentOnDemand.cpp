#include "FortContentOnDemand.h"

UFortContentOnDemand::UFortContentOnDemand() {
    this->ReEnableSettingDelay = 0.50f;
    this->bEnabled = false;
    this->LastReminder = 0;
    this->bSendErrorReports = true;
    this->bSendOutOfMemoryErrorReports = false;
}



