#include "FortSubscriptionCancellationModal.h"

UFortSubscriptionCancellationModal::UFortSubscriptionCancellationModal() {
    this->Button_CancelSubscription = NULL;
}





ESubscriptionCancellability UFortSubscriptionCancellationModal::GetSubscriptionCancellabillity() const {
    return ESubscriptionCancellability::NotCancellable;
}




