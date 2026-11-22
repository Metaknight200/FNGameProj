#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "SkyfireOnSquadMemberMothershipStatusChangedDelegate.h"
#include "SkyfireSquadMemberStatusData.h"
#include "SkyfireControllerComponent.generated.h"

class AActor;
class AFortAthenaMutator_Skyfire;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SKYFIRERUNTIME_API USkyfireControllerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnSquadMemberMothershipStatusChanged OnSquadMemberMothershipStatusChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CachedTODOverrideActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Skyfire* CachedSkyfireMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SquadMemberStatusData, meta=(AllowPrivateAccess=true))
    TArray<FSkyfireSquadMemberStatusData> SquadMemberStatusData;
    
public:
    USkyfireControllerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnViewTargetInMothershipChanged(const bool bInMothership);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadMemberStatusData(TArray<FSkyfireSquadMemberStatusData> OldValues);
    
};

