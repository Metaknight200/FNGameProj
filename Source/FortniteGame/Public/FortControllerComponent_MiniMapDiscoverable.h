#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "ControllerComponentMiniMapDiscoverableUIDelegateDelegate.h"
#include "ControllerComponentMiniMapDiscoverableVisibilitiesMapUpdatedDelegate.h"
#include "FortControllerComponent.h"
#include "FortControllerMiniMapComponentVisibilitiesArray.h"
#include "FortControllerMiniMapComponentVisibility.h"
#include "FortControllerComponent_MiniMapDiscoverable.generated.h"

class AFortPlayerStateAthena;
class UFortMiniMapComponent_Discoverable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_MiniMapDiscoverable : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentMiniMapDiscoverableUIDelegate OnSquadAlliesSharedMiniMapVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentMiniMapDiscoverableVisibilitiesMapUpdated OnClientVisibilitiesMapUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShareMiniMapComponentVisibilityWithAllySquadmates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FortControllerMiniMapComponentVisibilities, meta=(AllowPrivateAccess=true))
    FFortControllerMiniMapComponentVisibilitiesArray FortControllerMiniMapComponentVisibilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFortMiniMapComponent_Discoverable*, FFortControllerMiniMapComponentVisibility> FortControllerMiniMapComponentVisibilitiesMap;
    
public:
    UFortControllerComponent_MiniMapDiscoverable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FortControllerMiniMapComponentVisibilities();
    
    UFUNCTION(BlueprintCallable)
    void HandleServerSquadChange(AFortPlayerStateAthena* InPlayerState, const uint8 PreviousSquadId);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendOnSquadAlliesSharedMiniMapVisibilityMessage();
    
};

