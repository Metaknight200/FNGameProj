#pragma once
#include "CoreMinimal.h"
#include "FortServerBrowser.h"
#include "FortServerBrowserCreative.generated.h"

class UFortServerBrowserActionData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortServerBrowserCreative : public UFortServerBrowser {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortServerBrowserActionData> DefaultActionIfDiscoveryDisabled;
    
public:
    UFortServerBrowserCreative();

};

