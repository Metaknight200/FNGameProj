#include "LoginFailureLogSubmitOptions.h"

FLoginFailureLogSubmitOptions::FLoginFailureLogSubmitOptions() {
    this->bSubmitLogs = false;
    this->bSubmitSecondaryLogs = false;
    this->LogTailKb = 0;
    this->LogSubmitChance = 0.00f;
}

