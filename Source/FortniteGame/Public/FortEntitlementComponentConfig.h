#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortEntitlementConfig.h"
#include "FortEntitlementComponentConfig.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortEntitlementComponentConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortEntitlementConfig> Entitlements;
    
public:
    UFortEntitlementComponentConfig();

};

