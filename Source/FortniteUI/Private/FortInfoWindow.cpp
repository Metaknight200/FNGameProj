#include "FortInfoWindow.h"
#include "EInputPriority.h"

UFortInfoWindow::UFortInfoWindow() {
    this->InputPriority = EInputPriority::Modal;
    this->InfoEntries = NULL;
}

UWidget* UFortInfoWindow::GetListWidget(UObject* Item) {
    return NULL;
}


