#include "AthenaCollectionItemToastSwitcher.h"

UAthenaCollectionItemToastSwitcher::UAthenaCollectionItemToastSwitcher() {
    this->TimeToShowToast = 5.00f;
    this->ActivationDelay = 1.00f;
    this->WidgetSwitcher_Toasts = NULL;
    this->ActiveCollectionItemToastWidget = NULL;
    this->bHasPrioritizedWidgetFocus = false;
}


