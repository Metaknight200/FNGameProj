#include "FortCreativeBossInfo.h"

UFortCreativeBossInfo::UFortCreativeBossInfo() {
    this->bShowHealthbarIfLocalPlayerIsBoss = false;
    this->Text_PlayerName = NULL;
    this->Image_HealthBar = NULL;
    this->Image_ShieldBar = NULL;
    this->Image_DBNOBar = NULL;
    this->BossPlayerState = NULL;
}

void UFortCreativeBossInfo::OnBossPlayerStateChanged(AFortPlayerStateAthena* PlayerState, UCreativePlayerHealthInfoComponent* HealthInfoComponent) {
}

void UFortCreativeBossInfo::HandleHitPointsChanged(AFortPlayerState* PlayerState, float Health, float HealthMax, float Shield, float ShieldMax) {
}


