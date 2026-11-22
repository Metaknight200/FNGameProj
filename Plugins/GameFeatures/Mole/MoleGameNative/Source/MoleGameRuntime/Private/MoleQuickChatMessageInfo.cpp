#include "MoleQuickChatMessageInfo.h"

FMoleQuickChatMessageInfo::FMoleQuickChatMessageInfo() {
    this->Sender = NULL;
    this->CategoryIndex = 0;
    this->ActionIndex = 0;
    this->MessageIndex = 0;
    this->SectionASelectedPlayer = NULL;
    this->SectionBSelectedPlayer = NULL;
    this->SectionCSelectedPlayer = NULL;
    this->bIsSelfSelected = false;
    this->DummyCount = 0;
}

