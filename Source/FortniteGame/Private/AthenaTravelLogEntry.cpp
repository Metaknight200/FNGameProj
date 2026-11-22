#include "AthenaTravelLogEntry.h"

FAthenaTravelLogEntry::FAthenaTravelLogEntry() {
    // Initialize reflected value fields omitted by the dump.
    this->Position = FVector::ZeroVector;
    this->Rotation = FRotator::ZeroRotator;
    this->Time = 0.00f;
    this->Type = EAthenaTravelEventType::GroundMove;
    this->InstigatorPlayerType = EAthenaTravelLogPlayerType::Self;
    this->ReceiverPlayerType = EAthenaTravelLogPlayerType::Self;
    this->Value = 0.00f;
}

