#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "EAthenaGamePhase.h"
#include "FortControllerComponent.h"
#include "GlobalCurrencyTrackedData.h"
#include "RepGlobalCurrencyStash.h"
#include "FortControllerComponent_InventoryService.generated.h"

class AFortGameStateAthena;
class AFortPlayerControllerGameplay;
class AFortPlayerStateAthena;
class IFortInventoryOwnerInterface;
class UFortInventoryOwnerInterface;
class UCurveTable;
class UFortControllerComponent_InventoryService;
class UFortItemDefinition;
class UFortPlaylist;
class UFortResourceItemDefinition;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_InventoryService : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoundToRegisteredPlayerInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRepGlobalCurrencyStash GlobalCurrencyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldDropCurrencyOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumDeathsThatDropCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InventoryServiceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGlobalCurrencyTrackedData TotalCurrencyEarnedData;
    
public:
    UFortControllerComponent_InventoryService(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsGlobalCurrencyWidgetEnabled();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlacementChanged(AFortPlayerStateAthena* FortPlayerState, int32 NewPlacement);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnItemCountChanged(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, UFortItemDefinition* Definition, int32 Delta);
    
public:
    UFUNCTION(BlueprintCallable)
    static UFortControllerComponent_InventoryService* GetInventoryServiceComponent(AFortPlayerControllerGameplay* FortPC);
    
    UFUNCTION(BlueprintCallable)
    static UFortResourceItemDefinition* GetDefaultGlobalCurrencyItemDefinition();
    
    UFUNCTION(BlueprintCallable)
    static UCurveTable* GetDefaultCurrencyPayoutTable();
    
};

