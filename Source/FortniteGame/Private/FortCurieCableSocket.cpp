#include "FortCurieCableSocket.h"

FFortCurieCableSocket::FFortCurieCableSocket() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->bAutoSendSignalOnElementAttachment = false;
    this->bAutoSendSignalOnElementDetachment = false;
    this->bAutoRouteToCurieComponentOnReceive = false;
}

