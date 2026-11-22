#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "EAppStore.h"
#include "FortSubscriptionScreenBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSubscriptionScreenBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UFortSubscriptionScreenBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnActiveSubscriptionPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubscriptionNextBillingDateAsText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetSubscriptionNextBillingDate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAppStore GetActiveSubscriptionPlatform() const;
    
};

