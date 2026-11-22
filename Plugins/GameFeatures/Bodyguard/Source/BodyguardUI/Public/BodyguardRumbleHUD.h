#pragma once
#include "CoreMinimal.h"
#include "BodyguardWidgetBase.h"
#include "BodyguardRumbleHUD.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBodyguardRumbleHUD : public UBodyguardWidgetBase {
    GENERATED_BODY()
public:
    UBodyguardRumbleHUD();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatedVIPCount_BP(const uint8 EnemyVIPs, const uint8 FriendlyVIPs);
    
};

