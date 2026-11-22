#pragma once
#include "CoreMinimal.h"
#include "AthenaPlayerInfoBaseWidgetInterface.h"
#include "BodyguardWidgetBase.h"
#include "BodyguardPlayerInfoBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBodyguardPlayerInfoBase : public UBodyguardWidgetBase, public IAthenaPlayerInfoBaseWidgetInterface {
    GENERATED_BODY()
public:
    UBodyguardPlayerInfoBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewingPlayerVIP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleViewingPlayerStateChanged();
    

    // Fix for true pure virtual functions not being implemented
};

