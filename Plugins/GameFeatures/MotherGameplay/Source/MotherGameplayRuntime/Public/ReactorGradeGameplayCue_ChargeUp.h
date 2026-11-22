#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FortGameplayCueNotify_Loop.h"
#include "ScalableFloat.h"
#include "ReactorGradeGameplayCue_ChargeUp.generated.h"

class AFortPawn;

UCLASS(Blueprintable)
class AReactorGradeGameplayCue_ChargeUp : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FoundEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HitObjectsLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
public:
    AReactorGradeGameplayCue_ChargeUp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAimEndPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndPointFound(const FVector& FoundPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFoundEndPoint() const;
    
};

