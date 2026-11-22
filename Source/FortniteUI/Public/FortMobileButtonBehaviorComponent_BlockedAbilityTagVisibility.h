#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_TagVisibility.h"
#include "FortMobileButtonBehaviorComponent_BlockedAbilityTagVisibility.generated.h"

class UFortAbilitySystemComponent;

UCLASS(Blueprintable, EditInlineNew)
class UFortMobileButtonBehaviorComponent_BlockedAbilityTagVisibility : public UFortMobileButtonBehaviorComponent_TagVisibility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
public:
    UFortMobileButtonBehaviorComponent_BlockedAbilityTagVisibility();

};

