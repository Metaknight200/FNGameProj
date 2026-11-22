#pragma once
#include "CoreMinimal.h"
#include "DataRegistryId.h"
#include "Engine/DataAsset.h"
#include "EFortWorldMarkerType.h"
#include "FortWorldMarkerData.h"
#include "MarkedActorDisplayInfo.h"
#include "FortMarkerDetailsTable.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMarkerDetailsTable : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortWorldMarkerType, FMarkedActorDisplayInfo> DefaultMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortWorldMarkerType, FName> MarkerTypeToIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistryType MarkerRegistryType;
    
    UFortMarkerDetailsTable();

    UFUNCTION(BlueprintCallable)
    FMarkedActorDisplayInfo GetDisplayInfoForMarkerData(const FFortWorldMarkerData& MarkerData);
    
};

