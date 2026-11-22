#include "McpBanInfo.h"

FMcpBanInfo::FMcpBanInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->BanStartTimeUtc = FDateTime(0);
    this->BanDurationDays = 0.00f;
    this->CompetitiveBanReason = EPlayerCompetitiveBanReasons::None;
    this->bRequiresUserAck = false;
    this->bBanHasStarted = false;
}

