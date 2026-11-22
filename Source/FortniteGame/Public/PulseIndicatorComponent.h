#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScalableFloat.h"
#include "IndicatedActorDataWithFilter.h"
#include "IndicatedActorParticleSystemData.h"
#include "OnIndicatedActorAddedDelegate.h"
#include "OnIndicatedActorRemovedDelegate.h"
#include "PulseIndicatorComponent.generated.h"

class AFortPlayerControllerAthena;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPulseIndicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIndicatedActorDataWithFilter> IndicatedActorFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IndicatorGroupIdentifierOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StencilGroupIdentifierOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PlayerPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndicatedActorParticleSystemData PlayerParticleSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PulseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MarkRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MarkDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerGroupIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIndicatedActorAdded OnActorAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIndicatedActorRemoved OnActorRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerAthena* IndicatingController;
    
public:
    UPulseIndicatorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopPulseMarkers();
    
    UFUNCTION(BlueprintCallable)
    void StartPulseMarkers();
    
    UFUNCTION(BlueprintCallable)
    void SetIndicatingController(AFortPlayerControllerAthena* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayTeam(uint8 NewDisplayTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseComponentIndicators() const;
    
};

