#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionScreenContainerTabInfo.generated.h"

class UCommonActivatableWidget;
class UObject;

USTRUCT(BlueprintType)
struct FAthenaCollectionScreenContainerTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> TabIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> TabClass;
    
    FORTNITEUI_API FAthenaCollectionScreenContainerTabInfo();
};

