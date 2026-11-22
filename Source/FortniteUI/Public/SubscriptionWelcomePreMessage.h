#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AthenaUpgradedPreMessage.h"
#include "SubscriptionWelcomePreMessage.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USubscriptionWelcomePreMessage : public UAthenaUpgradedPreMessage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideC;
    
public:
    USubscriptionWelcomePreMessage();

};

