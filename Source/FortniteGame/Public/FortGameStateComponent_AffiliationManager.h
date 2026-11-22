#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactionData.h"
#include "FortFactionInfo.h"
#include "FortGameStateComponent.h"
#include "FortGameStateComponent_AffiliationManager.generated.h"

class UFortActorComponent_Affiliation;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_AffiliationManager : public UFortGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFactionData GameParticipantFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFactionData> CachedFactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CachedFactionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockResetSpecificRelationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortActorComponent_Affiliation*> AffiliationComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FactionInfos, meta=(AllowPrivateAccess=true))
    TArray<FFortFactionInfo> FactionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortActorComponent_Affiliation*> AffiliationComponentsToRegister;
    
public:
    UFortGameStateComponent_AffiliationManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FactionInfos();
    
};

