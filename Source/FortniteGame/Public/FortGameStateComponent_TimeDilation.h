#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortGameStateComponent.h"
#include "FortGameStateComponent_TimeDilation.generated.h"

class UCurveFloat;
class UFortAthenaCustomTimeDilationManager;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_TimeDilation : public UFortGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EndGameTimeDilationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EndGameTimeDilationDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaCustomTimeDilationManager* TimeDilationManager;
    
public:
    UFortGameStateComponent_TimeDilation(const FObjectInitializer& ObjectInitializer);

};

