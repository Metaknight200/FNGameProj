#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortCreativeVolumeWidget.generated.h"

class AFortGameState;
class AFortVolume;
class APlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeVolumeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFortCreativeVolumeWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnVolumeManagerClientExitVolume(APlayerState* PlayerState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeManagerClientEnterVolume(APlayerState* PlayerState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnGameInstanceGameStateSet(AFortGameState* GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetVolume() const;
    
    UFUNCTION(BlueprintCallable)
    void BindToVolumeManager();
    
};

