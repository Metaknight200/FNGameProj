#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator_RemoveGameFeatures.generated.h"

class AFortGameStateAthena;
class UFortPlaylist;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortAthenaMutator_RemoveGameFeatures : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WhitelistedGameFeatures;
    
public:
    AFortAthenaMutator_RemoveGameFeatures(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags);
    
};

