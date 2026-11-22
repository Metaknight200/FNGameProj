#pragma once
#include "CoreMinimal.h"
#include "FortStaticMeshActor.h"
#include "FortAthenaTutorialMarker.generated.h"

UCLASS(Blueprintable)
class AFortAthenaTutorialMarker : public AFortStaticMeshActor {
    GENERATED_BODY()
public:
    AFortAthenaTutorialMarker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerVisibilityChanged(bool IsActive);
    
};

