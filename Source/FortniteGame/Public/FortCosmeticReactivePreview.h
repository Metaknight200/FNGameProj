#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "CosmeticVariantInfo.h"
#include "EFCRP_LoopBehavior.h"
#include "FCRP_LoopingUpdate.h"
#include "FortCosmeticReactivePreview.generated.h"

class AFortPlayerPawn;
class UObject;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AFortCosmeticReactivePreview : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PotentiallyResponsiveObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFCRP_LoopingUpdate> ActiveLoops;
    
public:
    AFortCosmeticReactivePreview(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSteppedDynamicStat(UObject* Requester, int32 From, int32 To, int32 AtRate, EFCRP_LoopBehavior EndBehavior);
    
    UFUNCTION(BlueprintCallable)
    void StartSmoothDynamicStat(UObject* Requester, float From, float To, float AtRate, EFCRP_LoopBehavior EndBehavior);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFortPlayerPawnFinishedCustomization(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnBoundingActorEndedPlay(AActor* ActorEndingPlay, TEnumAsByte<EEndPlayReason::Type> Reason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCosmeticVariantInfo GetVariantInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void DispatchReactStart();
    
    UFUNCTION(BlueprintCallable)
    void DispatchReactEnd();
    
};

