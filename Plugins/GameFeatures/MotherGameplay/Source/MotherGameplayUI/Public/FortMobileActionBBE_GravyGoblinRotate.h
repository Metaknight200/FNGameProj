#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehaviorExtension.h"
#include "EventMessageTag.h"
#include "GameplayTagContainer.h"
#include "FortMobileActionBBE_GravyGoblinRotate.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortMobileActionBBE_GravyGoblinRotate : public UFortMobileActionButtonBehaviorExtension {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag HeldObjectRotatableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag HeldObjectUnrotatableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GravyGoblinTag;
    
public:
    UFortMobileActionBBE_GravyGoblinRotate();

};

