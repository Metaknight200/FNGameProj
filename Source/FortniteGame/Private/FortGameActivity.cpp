#include "FortGameActivity.h"

UFortGameActivity::UFortGameActivity() {
    this->Type = EFortGameActivityType::Undefined;
    this->Version = 0;
    this->Matchmaking_MaximumNumberOfPlayers = 0;
    this->Matchmaking_PlayersPerTeam = 0;
    this->Matchmaking_MMSType = EMMSRulePreset::RespectParties;
    this->Matchmaking_MMSPrivacy = EMMSPrivacy::Public;
    this->Previews.AddDefaulted(3);
    this->PreviewPaths.AddDefaulted(3);
}

void UFortGameActivity::OnPreviewRetrieved(bool bSuccess, UTexture2DDynamic* InThumbnailTexture) {
}

void UFortGameActivity::OnLoadedLinkQueryComplete(bool bSuccess, const FString& ErrorMessage, const FCreativeLoadedLinkData& LinkData) {
}

FString UFortGameActivity::GetPreviewPath(const ECreativeLinkPreviewSize PreviewSize) const {
    return TEXT("");
}

UTexture* UFortGameActivity::GetPreview(const ECreativeLinkPreviewSize PreviewSize) const {
    return NULL;
}

bool UFortGameActivity::GetIsFavorite() const {
    return false;
}

void UFortGameActivity::AsyncPreviewLoadComplete() {
}


