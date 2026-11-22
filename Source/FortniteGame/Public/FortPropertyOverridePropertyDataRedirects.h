#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PropertyOverridePropertyDataRedirect.h"
#include "FortPropertyOverridePropertyDataRedirects.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Redirect)
class UFortPropertyOverridePropertyDataRedirects : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyOverridePropertyDataRedirect> PropertyOverridePropertyDataRedirects;
    
public:
    UFortPropertyOverridePropertyDataRedirects();

};

