#include "FortCollectionBookPage.h"

UFortCollectionBookPage::UFortCollectionBookPage() {
    this->State = EFortCollectionBookState::Active;
}

EFortCollectionBookState UFortCollectionBookPage::GetSectionState(FName SectionId) const {
    return EFortCollectionBookState::Active;
}

EFortCollectionBookState UFortCollectionBookPage::GetPageState() const {
    return EFortCollectionBookState::Active;
}


