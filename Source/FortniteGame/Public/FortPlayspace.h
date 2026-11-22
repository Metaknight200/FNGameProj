#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMeshNetworkNodeType.h"
#include "Playspace.h"
#include "EFortPlayspaceUserAcceptanceType.h"
#include "FortMutatorOwner.h"
#include "FortPlayspaceMatchmakingSettings.h"
#include "FortSpatialGameplayInterface.h"
#include "Templates/SubclassOf.h"
#include "FortPlayspace.generated.h"

class AActor;
class AFortGameplayMutator;
class AFortPlayspaceReplicatedState;
class APlayerState;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayspace : public APlayspace, public IFortMutatorOwner, public IFortSpatialGameplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubscribeToMeshNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayspaceUserAcceptanceType UserAcceptanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayspaceMatchmakingSettings MatchmakingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayspaceReplicatedState> ReplicatedStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayspaceReplicatedState* ReplicatedState;
    
public:
    AFortPlayspace(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkReady(EMeshNetworkNodeType NodeType);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkEventStart(const FName& EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkEventEnd(const FName& EventName, const EMeshNetworkNodeType NodeType);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkEventChange(const FName& EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkEventBurst(const FName& EventName, const EMeshNetworkNodeType NodeType, const FString& EventParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayspaceReplicatedState* GetReplicatedState();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void RemoveMutatorFromList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(RemoveMutatorFromList,);
    
    UFUNCTION()
    void GetMutatorsForContextActor(TArray<AFortGameplayMutator*>& OutMutators, const AActor* ContextActor) const override PURE_VIRTUAL(GetMutatorsForContextActor,);
    
    UFUNCTION()
    void GetMutatorRelevantPlayers(TArray<APlayerState*>& OutPlayers) const override PURE_VIRTUAL(GetMutatorRelevantPlayers,);
    
    UFUNCTION()
    void AddMutatorToList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(AddMutatorToList,);
    
};

