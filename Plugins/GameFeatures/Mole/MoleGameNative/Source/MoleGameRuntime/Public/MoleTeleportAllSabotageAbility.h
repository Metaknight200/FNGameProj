#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "MoleSabotageAbility.h"
#include "MoleTeleportAllSabotageAbility.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class UMoleTeleportAllSabotageAbility : public UMoleSabotageAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeBeforeTeleport;
    
public:
    UMoleTeleportAllSabotageAbility();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerTeleported(APlayerState* TeleportedPlayer);
    
};

