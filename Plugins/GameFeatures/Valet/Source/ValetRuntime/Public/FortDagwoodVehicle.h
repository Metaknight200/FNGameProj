#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaSKMotorVehicle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AttachedWheel.h"
#include "DagwoodActionDefForUI.h"
#include "DagwoodRuntimeModifiers.h"
#include "EFuelLeakType.h"
#include "EPoppedTireReactionStates.h"
#include "ETireLocations.h"
#include "ETireStates.h"
#include "ETireSurfaces.h"
#include "EVehicleClass.h"
#include "GenericDagwoodEventSignatureDelegate.h"
#include "MountedGun.h"
#include "RuntimeBoostInfo.h"
#include "RuntimeFuelInfo.h"
#include "RuntimeGearInfo.h"
#include "RuntimeSpringsInfo.h"
#include "Templates/SubclassOf.h"
#include "TireInfo.h"
#include "FortDagwoodVehicle.generated.h"

class AActor;
class ABuildingActor;
class AController;
class AFortPawn;
class AFortPlayerController;
class AFortProjectileBase;
class AFortValetAudioController;
class UDagwoodNetworkPhysicsComponent;
class UFortAthenaVehicleFuelComponent;
class UFortCameraMode;
class UFortCameraMode_AthenaVehicle;
class UFortDagwoodModsConfigs;
class UFortDagwoodVehicleConfigs;
class UFortGameStateComponent_Valet;
class UFortSplatterSourceComponent;
class UFortVehicleSeatWeaponComponent;
class UMatineeCameraShake;
class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortDagwoodVehicle : public AFortAthenaSKMotorVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> HardLandingCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> OffroadCamShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> DriverCamShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> HandBrakeCamShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleClass VehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeMinPontoonRadiusToSink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativePontoonScaleTimeFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativePontoonScaleRadiusPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativePontoonScaleTimeRear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeBasePontoonRadiusFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeBasePontoonRadiusRear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBrakeForceForSkid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinForwardSpeedForSkid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeedLinesCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NormalizedRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FadeStartTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericDagwoodEventSignature OnOutOfFuelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericDagwoodEventSignature OnGainedFuelDelegate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDagwoodNetworkPhysicsComponent* NetworkPhysicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleSeatWeaponComponent* ModSeatWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MountedWeapon, meta=(AllowPrivateAccess=true))
    FMountedGun MountedWeaponMod;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTireInfo BaseTireInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastModApplyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RechargeableBoostPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoostEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortSplatterSourceComponent* SplatterSourceComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFuelLeakType FuelLeakType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNativizedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PassengerLeanSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PassngerLeanRelativeOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode_AthenaVehicle> PassengerCameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> PassengerCameraModeClass_ADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WheelSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortDagwoodVehicleConfigs* FortDagwoodVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDagwoodVehicleConfigs> FortDagwoodConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RearShocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OffroadEnvironmentDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FireDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NativeWheelScaleRear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NativeWheelScaleFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NativeTireScaleRear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NativeTireScaleFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTireSmokeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoostFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanBoostPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOnRoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOnLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOnDirt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOnVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasBrakeSkidding;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 AccelForceFeedbackHandle;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 SkidForceFeedbackHandle;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 BrakeForceFeedbackHandle;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 HandBrakeForceFeedbackHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ETireSurfaces> TireSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpeedLinesActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_Valet* ValetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DagwoodRuntimeModifiers, meta=(AllowPrivateAccess=true))
    FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttachedWheelMeshes, meta=(AllowPrivateAccess=true))
    TArray<FAttachedWheel> ServerRepWheelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FlipYawForwardTargetDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FlipYawOriginalForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETireLocations LastPoppedTire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RoadTopSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentBumpiness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentForwardAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreviousTurnAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentCameraAssistStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LostGripTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LostGripRightAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandbrakeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandbrakeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RimScrapeDamageTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlipYawMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlipTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlipExplodeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlipPushForceTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlipAirTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlipLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlipStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastFlipDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreFlipControlLossTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPopTireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthZeroTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NativePontoonScaleTimerFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NativePontoonScaleTimerRear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NativeScaledFrontPontoonRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NativeScaledRearPontoonRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDidCinematicFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanCinematicFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClientWaitingToApplyMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInPopTireVeer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInFlipRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bExplodeAfterFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLostGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bApplyHandbrakeCatchupForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDidHandbrakeCatchup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInFlipRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInFlipYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInFlipPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFlipDidLeaveGround;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakBuildingsIfBlockingLeaningPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeanBreakTimeAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanBreakCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D LastStickInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SeatToWindowShapeNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* OffroadCameraShakeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* DriverCameraShakeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* AccelCameraShakeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* HandBrakeCameraShakeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NativeComp_RoadAndExhaust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NativeComp_TireSkid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NativeComp_LowFuelSputter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NativeComp_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NativeComp_SpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TireExhaustFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NativeSys_LowFuelSputter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NativeSys_SpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NativeSys_TireSkid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaVehicleFuelComponent* FuelComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Tires, meta=(AllowPrivateAccess=true))
    TArray<ETireStates> TireStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FakeTires, meta=(AllowPrivateAccess=true))
    TArray<ETireStates> FakeTireStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPoppedTireReactionStates ActivePoppedTireReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PoppedTireReaction, meta=(AllowPrivateAccess=true))
    EPoppedTireReactionStates ServerPoppedTireReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Exploded, meta=(AllowPrivateAccess=true))
    bool bExploded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ServerCriticalHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortValetAudioController> ValetAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> KillerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> KillerCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> TireMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> FakeTireMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsInoperable, meta=(AllowPrivateAccess=true))
    bool bIsInoperable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RandSeed, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandStream;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSelfDestructEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClientUsesSelfDestructTimer: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TireBootMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDagwoodActionDefForUI> MapSelfDestructActionDefForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeBetweenSelfDestructPromptChanges;
    
    AFortDagwoodVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateVehicleFuelLeak();
    
    void TrySpawnWithMod();
    
    UFUNCTION(BlueprintCallable)
    void StartFade();
    
    UFUNCTION(BlueprintCallable)
    void SetValetAudioController(AFortValetAudioController* NewValetAudio);
    
    UFUNCTION(BlueprintCallable)
    void SetOnFire(bool bNewFire);
    
    UFUNCTION(BlueprintCallable)
    void SetNormalizedAudioRPM(float InRPM);
    
    UFUNCTION(BlueprintCallable)
    void SetFuel(float NewFuel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ServerSetTireModTag(const FGameplayTag& TireModTag);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetRuntimeSpringsInfo(const FRuntimeSpringsInfo& SpringsInfo);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetRuntimeGravity(float GravMult);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetRuntimeFuelInfo(const FRuntimeFuelInfo& FuelInfo);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetRuntimeDriveInfo(float MaxIncline, float MaxTilt);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetRuntimeBoostInfo(const FRuntimeBoostInfo& BoostInfo);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerSetFadeDuration(const float NewFadeDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ServerSetDamageInfo(const bool bDamageFriendlyFire, const bool bDamageOtherVehicles, const bool bDamageOwnVehicle);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSelfDestructActivated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ServerAddRuntimeGearsInfo(const FRuntimeGearInfo& GearInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelfDestructCleanup();
    
    UFUNCTION(BlueprintCallable)
    void RemoveModMountedGun();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickAudioFade(float FadeParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickAudioController(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopHandbrake();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartHandbrake();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCriticalHealth();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnLeakProjectile(AFortProjectileBase* SpawnProjectile);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnServerAltInteract(AFortPawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRimScrapeDamage(int32 TireIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Tires(const TArray<ETireStates>& PrevTireStates);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RandSeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PoppedTireReaction();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MountedWeapon(const FMountedGun& PrevMountedWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInoperable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FakeTires(const TArray<ETireStates>& PrevTireStates);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Exploded();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DagwoodRuntimeModifiers(const FDagwoodRuntimeModifiers& PrevMods);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedWheelMeshes();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPoppedTire(const int32 TireIndex, const bool bFakeTire);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLowFuel();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeakingFuelStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeakingFuelStart();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInoperableChanged(bool bInoperable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldSelfDestructStopped(AFortPawn* DriverPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldSelfDestructStarted(AFortPawn* DriverPawn, const float ExitDuration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGainedFuel(float NewPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlipImpactDamage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireStart();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExplode();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitRoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitLandscape();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterLandscape();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredRoad();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmptyFuel();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyedPropFromCollision(const ABuildingActor* BuildingHitActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClientBeginAltInteract(AFortPawn* Pawn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostFailed();
    
public:
    UFUNCTION(BlueprintCallable)
    void NativeOnOutOfFuel();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnLowFuel();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnFuelChanged(float NewFuelPercent, float OldFuelPercent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float NativeCalculateAccelRumbleIntensity(float MaxIntensity) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeOperable(bool bAddGas);
    
    UFUNCTION(BlueprintCallable)
    void MakeInoperable();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVehicleAcceleratingWithSpeedThreshold(float SpeedThreshold) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTireSkidding(const float MinSpeedForSkid, const float AngleForSkid, const float SpeedForPeelout, const float SpeedForBraking) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnRoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnLandscape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnDirt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOffroad() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNativeBPTickEnabled() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInoperable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTireMod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAppliedMountedGunMod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetVehicleModTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETireSurfaces GetTireSurface(ETireLocations TireIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTireState(int32 TireIndex) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTireHealthPercent(ETireLocations TireIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerFacingName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedAudioRPM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMountedWeaponOnlySeatIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetModSocketNames() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMiddleAxleForwardAdjust() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHUDTopSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFuelCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFuel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBumpiness() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ForwardOrReverseInputPressed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesVehicleDamageOwnVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesVehicleDamageOtherVehicles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesVehicleDamageFriendlyFire() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanupLoopingPooledFX();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBoostStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBoostFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAnyTiresPopped() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyVehicleModMountedGun(UFortDagwoodModsConfigs* ModConfigsRef);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyTireMod(const FGameplayTag& NewTireModTag, const AFortPlayerController* EventInstigator);
    
};

