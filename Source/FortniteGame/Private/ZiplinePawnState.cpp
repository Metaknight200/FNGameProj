#include "ZiplinePawnState.h"

FZiplinePawnState::FZiplinePawnState() {
    // Initialize reflected value fields omitted by the dump.
    this->SocketOffset = FVector::ZeroVector;
    this->Zipline = NULL;
    this->bIsZiplining = false;
    this->bJumped = false;
    this->bReachedEnd = false;
    this->AuthoritativeValue = 0;
    this->TimeZipliningBegan = 0.00f;
    this->TimeZipliningEndedFromJump = 0.00f;
}

