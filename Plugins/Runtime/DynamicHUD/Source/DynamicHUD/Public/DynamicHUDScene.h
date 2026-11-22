#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DynamicHUDAllowed.h"
#include "DynamicHUDUnallowed.h"
#include "DynamicHUDScene.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDynamicHUDScene : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicHUDAllowed> Allowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicHUDUnallowed> Unallowed;
    
    UDynamicHUDScene();

};

