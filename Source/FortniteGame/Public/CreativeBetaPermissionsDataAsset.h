#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CreativeBetaPermissionConfig.h"
#include "CreativeBetaPermissionsDataAsset.generated.h"

UCLASS(Blueprintable)
class UCreativeBetaPermissionsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeBetaPermissionConfig> CreativeBetaPermissions;
    
public:
    UCreativeBetaPermissionsDataAsset();

};

