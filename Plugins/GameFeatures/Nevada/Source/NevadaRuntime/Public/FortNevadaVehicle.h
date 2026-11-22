#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ActiveVehicleUI.h"
#include "FortAthenaSKVehicle.h"
#include "TowhookParams.h"
#include "VehicleGamepadLiftInputs.h"
#include "VehicleSpecificUIDetails.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "ENevadaFlightStates.h"
#include "ETractorBeamState.h"
#include "NevadaState.h"
#include "Templates/SubclassOf.h"
#include "FortNevadaVehicle.generated.h"

class AActor;
class AController;
class AFortAthenaVehicle;
class AFortNevadaAudioController;
class ALandscapeProxy;
class UAudioComponent;
class UChildActorComponent;
class UCurveFloat;
class UForceFeedbackEffect;
class UFortCameraMode_AthenaVehicle;
class UFortNevadaVehicleConfigs;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMatineeCameraShake;
class UNiagaraComponent;
class UNiagaraSystem;
class UPrimitiveComponent;
class USoundBase;
class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortNevadaVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> KillerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> KillerCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NevadaState, meta=(AllowPrivateAccess=true))
    FNevadaState ServerReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortNevadaVehicleConfigs* FortNevadaVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNevadaVehicleConfigs> FortNevadaVehicleConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortNevadaAudioController> FortNevadaAudioControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AudioControllerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortNevadaAudioController* FortNevadaAudioController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVehicleGamepadLiftInputs LiftInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastBatteryRegenTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoostThrust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoostDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoostInputReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseTractorBeamUprightForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDeadBattery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TractorBeamExtraLengthForExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CrashingDesiredUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoostStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoostPitchAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoostChargeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BoostChargesAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedBoostMoveDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentStateStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HeightAtLandingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CrashingScrapingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CrashingNotMovingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AltimeterTraceHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TractorBeamAppliedForceMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimParamDriverSeatLeftRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimParamDriverSeatForwardBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceNegativeLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForcePositiveLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ENevadaFlightStates CurrentVehicleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALandscapeProxy> CachedLandscapeProxy;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode_AthenaVehicle> PassengerCameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpecificUIDetails> CustomUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveVehicleUI> ActiveUI;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TractorBeamChargeStarted, meta=(AllowPrivateAccess=true))
    bool bTractorBeamChargeStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTowhookParams TowhookParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaVehicle> AttachedPawnHiddenVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_TractorBeamAttached, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> TractorBeamAttachedPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaVehicle* SpawnedTractorBeamVictimVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> PreviousTractorBeamAttachedPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedTargetedActors, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TractorBeamTargetedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PreviouslyTargetedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* TractorBeamAttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetedActorChanged, meta=(AllowPrivateAccess=true))
    AActor* TractorBeamTargetedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector TractorBeamTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBeamButtonReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TractorBeamObjectsTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisallowedBeamTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AlwaysAllowedBeamTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TractorBeamFX_Unattached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TractorBeamFX_Attached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BeamPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TractorBeamState, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETractorBeamState> TractorBeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TractorBeamDeactivationTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TractorBeamDisruptedTimestamp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CockpitHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Native_CockpitEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastCockpitHealthTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastCockpitDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CockpitDissolveStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CockpitMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CockpitHealthTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CockpitHealthPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CockpitRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CockpitHitMaterialWobble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDamageAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDissolvingCockpit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRestoringCockpit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCockpitWobble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* NativeComp_ShieldMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_CockpitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_EnergyRingMatInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_EnergyFieldMatInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* NativeComp_DamageStateLastLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* NativeComp_DamageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Native_LastHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Native_LastHitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NativeComp_DamageStateFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NativeComp_HologramScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NativeComp_SpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Native_EnergyRingMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Native_EnergyFieldMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NativeSys_DamageStateFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NativeSys_CockpitDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CockpitDamagedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CockpitDestroyedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CockpitRespawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Native_DamageStateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Native_DamageStateLastLifeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* CockpitDeactivatedForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> CockpitDestroyedCamShake;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> TractorBeamDisallowedClasses;
    
public:
    AFortNevadaVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetTractorBeamInactive();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTractorBeamEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCannonEnabled(const bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAttachedPawnAddedVelocity(const FVector& AddedVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamDetached(AActor* DetachedActor, const FVector& LastBeamPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamDeactivated(const FVector& LastBeamPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamChargeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetedActorChanged(AActor* NewTargetedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDescend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAscend();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TractorBeamState(const TEnumAsByte<ETractorBeamState> PreviousState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_TractorBeamChargeStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TractorBeamAttached();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetedActorChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedTargetedActors();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NevadaState(const FNevadaState& PrevState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRebootStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRebootFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutOfBattery();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewVehicleState(ENevadaFlightStates NewVehicleState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExplode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrashingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrashedImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostChargeRefilled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBatteryRegen(float Newcharge);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void NativeToggleCockpit(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTractorBeamDisrupted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTractorBeamAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTractorBeamActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTractorBeamAttachLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumRebootsAvailable() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyCanonChargePercent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GetDriverSeatRotationAnimParams(float& OutLeftRight, float& OutForwardBack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENevadaFlightStates GetCurrentVehicleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostChargeTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoostChargesAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostChargeProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBatteryCharge() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortNevadaAudioController* GetAudioController() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void DisruptTractorBeam();
    
    UFUNCTION(BlueprintCallable)
    void AddPhysicsImpulseToTractorBeamAttachedActor(const FVector& Impulse, FName BoneName, bool bVelChange);
    
};

