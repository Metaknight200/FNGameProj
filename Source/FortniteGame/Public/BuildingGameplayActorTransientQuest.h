#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "BuildingGameplayActorConversationCompatible.h"
#include "PawnBountyInteractionInfo.h"
#include "BuildingGameplayActorTransientQuest.generated.h"

class AActor;
class AFortPlayerPawn;
class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class ABuildingGameplayActorTransientQuest : public ABuildingGameplayActorConversationCompatible {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionTextRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumberOfPlayersToSelectFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoBountiesAvailableInteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BountyInProgressInteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FailedInteractionTextToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InteractSubTextColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> PawnsInTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AFortPlayerStateAthena*> PlayersGrantedBounty;
    
public:
    ABuildingGameplayActorTransientQuest(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopUpdatingInteractionText(const AActor* TriggeredActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartUpdatingInteractionText(const AActor* TriggeredActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBountyStarted(const TArray<AFortPlayerStateAthena*>& HunterPlayerStates);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetInteractionText(const TArray<FPawnBountyInteractionInfo>& PawnBountyInteractionInfo);
    
};

