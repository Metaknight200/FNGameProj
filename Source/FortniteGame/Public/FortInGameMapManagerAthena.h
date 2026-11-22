#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortInGameMapManager.h"
#include "FortInGameMapManagerAthena.generated.h"

class AActor;
class AFortPlayerControllerZone;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortInGameMapManagerAthena : public AFortInGameMapManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawMapLocationsIfFogged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawSpecialActorIconsIfFogged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawSquadPinsIfFogged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawMapIndicatorsIfFogged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawEliminationsIfFogged: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MapMaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapMaskMaterialMID;
    
public:
    AFortInGameMapManagerAthena(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEndSkydivingFromBus(AFortPlayerControllerZone* FortPC);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSkydivingFromBus(AFortPlayerControllerZone* FortPC);
    
    UFUNCTION(BlueprintCallable)
    void OnAthenaPlayerControllerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerTeamIndexChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerStateSet();
    
};

