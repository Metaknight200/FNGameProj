#include "FortSpectatorBeaconClient.h"

AFortSpectatorBeaconClient::AFortSpectatorBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReconnectionInitialTimeout = 100.00f;
    this->ReconnectionTimeout = 50.00f;
    this->bHasReconnected = false;
}

void AFortSpectatorBeaconClient::ServerReconnectExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortSpectatorBeaconClient::ServerReconnectExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}

void AFortSpectatorBeaconClient::ServerAbandonExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortSpectatorBeaconClient::ServerAbandonExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}

void AFortSpectatorBeaconClient::ClientReconnectResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse) {
}

void AFortSpectatorBeaconClient::ClientAllowedToProceedFromReservationTimeout_Implementation() {
}

void AFortSpectatorBeaconClient::ClientAllowedToProceedFromReservation_Implementation() {
}

void AFortSpectatorBeaconClient::ClientAbandonResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse) {
}


