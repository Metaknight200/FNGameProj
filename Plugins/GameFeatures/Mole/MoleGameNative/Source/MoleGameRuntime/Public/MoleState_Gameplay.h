#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EventMessageTag.h"
#include "GameplayStateMachine.h"
#include "GameplayTagContainer.h"
#include "MoleEmergencyMeetingData.h"
#include "MoleTaskScoreEventData.h"
#include "Templates/SubclassOf.h"
#include "MoleState_Gameplay.generated.h"

class AMoleGhostMannequin;
class APlayerState;
class UObject;

UCLASS(Abstract, Blueprintable)
class UMoleState_Gameplay : public UGameplayStateMachine {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastSummonedEmergencyMeetingData, meta=(AllowPrivateAccess=true))
    FMoleEmergencyMeetingData LastSummonedEmergencyMeetingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMoleGhostMannequin> GhostMannequinProxyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GhostMannequinLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GhostMannequinRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilityTagsToBlockInMeeting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> FreshlyKilledGhosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMoleGhostMannequin*> DeadGhostProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bEmergencyMeetingActive;
    
public:
    UMoleState_Gameplay();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RequestEmergencyMeeting(UObject* WorldContext, FMoleEmergencyMeetingData MeetingData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastSummonedEmergencyMeetingData();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsEmergencyMeetingActive(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleScoreChanged(FEventMessageTag EventChannel, const FMoleTaskScoreEventData& ScoreEventData);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateDied(APlayerState* GhostPlayerState);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetAllMoleFreshlyKilledGhosts(UObject* WorldContext, TArray<APlayerState*>& OutFreshlyKilledGhosts);
    
};

