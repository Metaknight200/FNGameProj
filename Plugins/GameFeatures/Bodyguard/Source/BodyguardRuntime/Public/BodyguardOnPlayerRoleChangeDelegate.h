#pragma once
#include "CoreMinimal.h"
#include "EBodyguardPlayerRole.h"
#include "BodyguardOnPlayerRoleChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBodyguardOnPlayerRoleChange, EBodyguardPlayerRole, NewRole);

