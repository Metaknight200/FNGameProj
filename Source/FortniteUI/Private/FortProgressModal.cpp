#include "FortProgressModal.h"

UFortProgressModal::UFortProgressModal() {
    this->bIntroOutroEnabled = false;
    this->bAutoInitialize = false;
    this->bFocusSelf = false;
    this->bConsumeAnalogInput = false;
    this->ProgressWidget_Main = NULL;
}

void UFortProgressModal::SetTitle(const FText& InTitle) {
}

void UFortProgressModal::SetIcon(FSlateBrush InIcon) {
}

void UFortProgressModal::SetDescription(const FText& InDescription) {
}

void UFortProgressModal::InitializeModal() {
}


