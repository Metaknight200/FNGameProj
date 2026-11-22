#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "EMoleTaskObjectiveStatus.h"
#include "MoleObjectiveValue.h"
#include "MoleTaskLogicSubobject.h"
#include "MoleTaskLogicObjective.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMoleTaskLogicObjective : public UMoleTaskLogicSubobject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveTargetValueChanged, float, NewTargetValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveCurrentValueChanged, float, NewCurrentValue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveCurrentValueChanged OnObjectiveCurrentValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveTargetValueChanged OnObjectiveTargetValueChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentValue, meta=(AllowPrivateAccess=true))
    FMoleObjectiveValue CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CapturedInitialValue, meta=(AllowPrivateAccess=true))
    float CapturedInitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CapturedTargetValue, meta=(AllowPrivateAccess=true))
    float CapturedTargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentStatus, meta=(AllowPrivateAccess=true))
    EMoleTaskObjectiveStatus CurrentStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IndicatorRelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumCompletionTimeSecurityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowClientCompletion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bValidateDistFromAssociatedActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bValidateMinCompletionTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInterruptTaskOnValidationFailure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClearProgressOnTaskInterruption: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasPerformedInitialCapture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttemptSetPrimaryActiveTaskOnValueDelta: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttemptHighlightAssociatedActorsIfPrimaryActiveTask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttemptApplyIndicatorsToAssociatedActorsIfPrimaryActiveTask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequirePermissionForEmphasisFX: 1;
    
public:
    UMoleTaskLogicObjective();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetObjectiveStatus(EMoleTaskObjectiveStatus InNewStatus);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuggestObjectiveStatus(EMoleTaskObjectiveStatus InNewSuggestedStatus);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAsPrimaryActiveTask();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentValue();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CapturedTargetValue();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CapturedInitialValue();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMoleTaskObjectiveStatus GetObjectiveStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCapturedTargetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCapturedInitialValue() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckObjectiveStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CaptureTargetValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CaptureInitialValue();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCurrentValueDelta(float Delta);
    
};

