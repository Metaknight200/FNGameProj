#pragma once
#include "CoreMinimal.h"
#include "StandaloneItemShopTabInfo.generated.h"

class UCommonActivatableWidget;
class UObject;

USTRUCT(BlueprintType)
struct FStandaloneItemShopTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TabIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidget* TabWidget;
    
    FORTNITEUI_API FStandaloneItemShopTabInfo();
};

