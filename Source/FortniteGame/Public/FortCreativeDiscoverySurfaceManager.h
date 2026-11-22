#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCreativeDiscoverySurfaceManager.generated.h"

class UFortCreativeDiscoverySurface;

UCLASS(Blueprintable, Config=Game, Within=FortGameInstance)
class UFortCreativeDiscoverySurfaceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeDiscoverySurface*> Surfaces;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DevPlaylistPanelName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceRefreshRate;
    
public:
    UFortCreativeDiscoverySurfaceManager();

};

