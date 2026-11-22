#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator_LoadGameFeature.generated.h"

class AFortGameStateAthena;
class UFortPlaylist;

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class AFortAthenaMutator_LoadGameFeature : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameFeatureToLoad;
    
public:
    AFortAthenaMutator_LoadGameFeature(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags);
    
};

