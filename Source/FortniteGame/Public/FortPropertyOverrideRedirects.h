#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PropertyOverrideRedirect.h"
#include "FortPropertyOverrideRedirects.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Redirect)
class UFortPropertyOverrideRedirects : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyOverrideRedirect> PropertyOverrideRedirects;
    
public:
    UFortPropertyOverrideRedirects();

};

