#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "GameplayTagContainer.h"
#include "FortGameFeatureAction_AddToPlaylists.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortGameFeatureAction_AddToPlaylists : public UGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery PlaylistQuery;
    
public:
    UFortGameFeatureAction_AddToPlaylists();

};

