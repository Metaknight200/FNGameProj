#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortAthenaZipline.h"
#include "FortAthenaSplineZipline.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class AFortAthenaSplineZipline : public AFortAthenaZipline {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* ZiplineSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AttachLinesToPolesHotfix;
    
public:
    AFortAthenaSplineZipline(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void CheckZiplineDisableHotfix();
    
};

