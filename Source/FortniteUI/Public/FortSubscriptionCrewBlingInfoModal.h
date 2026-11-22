#pragma once
#include "CoreMinimal.h"
#include "FortSubscriptionPlatformModal.h"
#include "FortSubscriptionCrewBlingInfoModal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSubscriptionCrewBlingInfoModal : public UFortSubscriptionPlatformModal {
    GENERATED_BODY()
public:
    UFortSubscriptionCrewBlingInfoModal();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformGenericEntries(const TArray<FText>& Entries);
    
    UFUNCTION(BlueprintCallable)
    FText FormatBulletPoint(const FText& InBulletPoint);
    
};

