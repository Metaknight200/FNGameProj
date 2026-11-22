#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingRequestHandle.h"
#include "TargetingFilterTask_ObstructedByWorld.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetingFilterTask_ObstructedByWorld : public UTargetingFilterTask_BasicFilterTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bComplexTrace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExcludeAllAttachedToTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExcludeInstigator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExcludeAllAttachedToInstigator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExcludeAthenaVehicleOfInstigator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExcludeAllAttachedToSource: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExcludeAthenaVehicleOfSource: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExcludeAthenaVehicleFromObstructionChecks: 1;
    
public:
    UTargetingFilterTask_ObstructedByWorld();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSourceLocation(const FTargetingRequestHandle& TargetingHandle) const;
    
};

