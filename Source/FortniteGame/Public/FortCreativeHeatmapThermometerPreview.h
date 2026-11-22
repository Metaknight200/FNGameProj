#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortCreativeHeatmapThermometerPreviewData.h"
#include "FortCreativeHeatmapThermometerPreview.generated.h"

UCLASS(Blueprintable)
class AFortCreativeHeatmapThermometerPreview : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FFortCreativeHeatmapThermometerPreviewData> PreviewDataMap;
    
public:
    AFortCreativeHeatmapThermometerPreview(const FObjectInitializer& ObjectInitializer);

};

