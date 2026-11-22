#include "FortGameStateComponent_FrontEndFlowSTW.h"

UFortGameStateComponent_FrontEndFlowSTW::UFortGameStateComponent_FrontEndFlowSTW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NameHomebaseAnnouncement = NULL;
    this->SatelliteCinematicAnnouncement = NULL;
    this->BannerWidgetClass = NULL;
}

void UFortGameStateComponent_FrontEndFlowSTW::OnSatelliteAnnouncementEnded(AFortClientAnnouncement* Announcement) {
}

void UFortGameStateComponent_FrontEndFlowSTW::OnNameHomebaseAnnouncementEnded(AFortClientAnnouncement* Announcement) {
}

void UFortGameStateComponent_FrontEndFlowSTW::HandleClientEvent_HomebasePersonalized() {
}


