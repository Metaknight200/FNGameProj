#pragma once
#include "CoreMinimal.h"
#include "AdHocSquad_InviteData.h"
#include "AdHocSquads_InviteStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdHocSquads_InviteStatusChanged, const FAdHocSquad_InviteData&, InviteData);

