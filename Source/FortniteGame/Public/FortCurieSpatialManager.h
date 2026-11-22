#pragma once
#include "CoreMinimal.h"
#include "FortCurieBuildingGrid.h"
#include "FortCurieElementSpatialGrid.h"
#include "FortCurieGrassGrid.h"
#include "FortCurieManagerComponent.h"
#include "FortCurieSpatialManagerTickFunction.h"
#include "FortCurieSpatialManager.generated.h"

class UBuildingStructuralSupportSystem;
class UFoliageType;
class UFortCurieSpatialManagerConfig;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCurieSpatialManager : public UFortCurieManagerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFoliageType*> GrassFoliageTypePtrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieSpatialManagerTickFunction PrimaryTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieBuildingGrid CurieBuildingGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieElementSpatialGrid ElementSpatialGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieGrassGrid GrassGrid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieSpatialManagerConfig* InternalManagerConfig;
    
public:
    UFortCurieSpatialManager();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleBuildingGridInitialized(UBuildingStructuralSupportSystem* StructuralSupportSystem);
    
};

