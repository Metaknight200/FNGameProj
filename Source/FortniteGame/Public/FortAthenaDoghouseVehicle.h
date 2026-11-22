#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActiveVehicleUI.h"
#include "AileronRoll.h"
#include "EAileronRollDirection.h"
#include "EVehicleFuelState.h"
#include "FlightControlSurfaces.h"
#include "FortAthenaSKVehicle.h"
#include "FortRechargingActionTimer.h"
#include "ReplicatedControlState.h"
#include "VehicleSpecificUIDetails.h"
#include "FortAthenaDoghouseVehicle.generated.h"

class UFortAthenaVehicleFuelComponent;
class UFortDoghouseVehicleConfigs;

UCLASS(Blueprintable, Config=Game)
class AFortAthenaDoghouseVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiGravityScalerWhenEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPitchInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraYawInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PropSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PropRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirbrakeDragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRechargingActionTimer BoostAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAileronRoll AileronRoll;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AileronRollDoubleClickSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreelookAutoRecenter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookPitchConstraintDegrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookYawConstraintDegrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSteerSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookInterpolation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookReturnAcceleration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookReturnDecelleration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShootCenterPointSocket;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootAimAheadDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortDoghouseVehicleConfigs* FortAirVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEngineOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartEngineInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEngineStartIsBeingHeld;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaVehicleFuelComponent* FuelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleFuelSystemState, meta=(AllowPrivateAccess=true))
    EVehicleFuelState VehicleFuelSystemState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveVehicleUI> ActiveUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpecificUIDetails> CustomUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpecificUIDetails> CustomFuelUI;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControlState, meta=(AllowPrivateAccess=true))
    FReplicatedControlState ControlState;
    
public:
    AFortAthenaDoghouseVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateControlState(FReplicatedControlState InControlState);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerBeginAileronRoll(EAileronRollDirection Direction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeoff();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleFuelSystemState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLanding();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEngineStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEngineStart();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MultiBeginAileronRoll(EAileronRollDirection Direction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandingInPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStallingFromAltitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollingRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollingLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollingInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreelooking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEngineOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEngineAutoStartingInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAileronRolling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStandingInPlaceSteeringAngle() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetShootCenterPointLocal();
    
    UFUNCTION(BlueprintCallable)
    FVector GetShootCenterPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFlightControlTorque() const;
    
    UFUNCTION(BlueprintCallable)
    FFlightControlSurfaces GetFlightControlSurfaceTargets() const;
    
    UFUNCTION(BlueprintCallable)
    FFlightControlSurfaces GetFlightControlSurfaces() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFlightControlForce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAltitudeZ() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAimPointLocal();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAimPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAileronRollDirection GetAileronRollDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GasPedalIsDown() const;
    
};

