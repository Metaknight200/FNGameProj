#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortEntryMusicController.generated.h"

UCLASS(Blueprintable)
class AFortEntryMusicController : public AActor {
    GENERATED_BODY()
public:
    AFortEntryMusicController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMusic();
    
};

