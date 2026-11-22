#pragma once
#include "CoreMinimal.h"
#include "ESmartBuildMode.h"
#include "FortBuildingItemDefinition.h"
#include "SmartBuildSelection.h"
#include "FortSmartBuildingItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortSmartBuildingItemDefinition : public UFortBuildingItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartBuildMode SmartBuildMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartBuildSelection> BoxModeSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartBuildSelection> BridgeModeSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartBuildSelection> TowerModeSelections;
    
public:
    UFortSmartBuildingItemDefinition();

};

