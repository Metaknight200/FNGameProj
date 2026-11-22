#include "FortTwitchLogin.h"

UFortTwitchLogin::UFortTwitchLogin() {
    this->ActiveLoginModal = NULL;
}



void UFortTwitchLogin::OnLoginFlowModalDismissed_Implementation(UFortTwitchLoginModalWidget* Modal) {
}

void UFortTwitchLogin::OnLoginFlowModalCreated_Implementation(UFortTwitchLoginModalWidget* Modal) {
}


void UFortTwitchLogin::Logout() {
}

void UFortTwitchLogin::Login() {
}

bool UFortTwitchLogin::IsLoggedIn() {
    return false;
}

FString UFortTwitchLogin::GetLinkedTwitchAccountName() {
    return TEXT("");
}

FString UFortTwitchLogin::GetAccountName() {
    return TEXT("");
}

void UFortTwitchLogin::CancelLoginFlow() {
}


