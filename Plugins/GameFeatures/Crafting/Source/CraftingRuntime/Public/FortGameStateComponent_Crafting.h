#pragma once
#include "CoreMinimal.h"
#include "DataRegistryId.h"
#include "FortGameStateComponent.h"
#include "GameplayTagContainer.h"
#include "CraftingResult.h"
#include "FortGameStateComponent_Crafting.generated.h"

class AFortGameStateAthena;
class UFortPlaylist;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Crafting, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_Crafting : public UFortGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistryType CraftingFormulaRegistryType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistryType CraftingIngredientsUIDataRegistryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CraftingResultsList, meta=(AllowPrivateAccess=true))
    TArray<FCraftingResult> CraftingResultsList;
    
public:
    UFortGameStateComponent_Crafting(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftingResultsList();
    
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags);
    
};

