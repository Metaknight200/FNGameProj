#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "RebirthPlayerRarity.h"
#include "FortAthenaMutator_Rebirth.generated.h"

class AFortAthenaMutator_ItemPromotion;
class AFortPlayerStateAthena;
class AFortPlayerStateZone;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Rebirth : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_ItemPromotion* ItemPromotionMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> ClientViewedPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerRarities, meta=(AllowPrivateAccess=true))
    TArray<FRebirthPlayerRarity> PlayerRarities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebirthPlayerRarity> CachedLocalPlayerRarities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity MaxItemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity StartingItemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortRarity, FString> KillFeedRarityStyles;
    
public:
    AFortAthenaMutator_Rebirth(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerRarities();
    
    UFUNCTION(BlueprintCallable)
    void OnClientSpectatorChanged(AFortPlayerStateZone* SpectatingTarget);
    
};

