#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_AddBarrier.generated.h"

class AAthenaBigBaseWall;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_AddBarrier : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAthenaBigBaseWall> BigBaseWallClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartTimerAtSafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAtMidFlightPathDuringBusLockedPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeToBringDownWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WallGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WallZLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AAthenaBigBaseWall* BigBaseWall;
    
public:
    AFortAthenaMutator_AddBarrier(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBarrierUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAthenaBigBaseWall* GetBigBaseWall() const;
    
};

