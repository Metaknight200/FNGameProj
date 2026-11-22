#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSubmixAnalyzerData.h"
#include "Templates/SubclassOf.h"
#include "FortAudioAnalysisSettings.generated.h"

class UFortAudioAnalysisDebugWidget;
class USoundSubmix;

UCLASS(Blueprintable)
class UFortAudioAnalysisSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* DefaultAnalysisSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSubmixAnalyzerData DefaultAnalysisData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAudioAnalysisDebugWidget> DebugWidgetClass;
    
    UFortAudioAnalysisSettings();

};

