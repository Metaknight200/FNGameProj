#include "PelvisMod_BankAngleInput_Spring.h"

FPelvisMod_BankAngleInput_Spring::FPelvisMod_BankAngleInput_Spring() {
    this->BankLeanStrafeA = 0.00f;
    this->BankLeanStrafeB = 0.00f;
    this->BankTurnA = 0.00f;
    this->BankTurnB = 0.00f;
    this->BankStiffness = 0.00f;
    this->BankDampening = 0.00f;
    this->BankMass = 0.00f;
    this->BankClampMin = 0.00f;
    this->BankClampMax = 0.00f;
}

