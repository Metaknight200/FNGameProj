#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlaylistToActivityMapping.h"
#include "FortActivitiesSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class UFortActivitiesSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistToActivityMapping> PlaylistToActivityMap;
    
public:
    UFortActivitiesSubsystem();

};

