#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SidecarInventorySys.generated.h"

UCLASS(Blueprintable, Config=Engine)
class SIDECARSYS_API USidecarInventorySys : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InventoryDownloadUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InventoryLockUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemUpdateUrl;
    
public:
    USidecarInventorySys();

};

