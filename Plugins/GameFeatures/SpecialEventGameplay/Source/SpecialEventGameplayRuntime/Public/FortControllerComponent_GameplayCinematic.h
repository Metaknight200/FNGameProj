#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "DynamicGameplayIntroPanelEventDelegate.h"
#include "FortControllerComponent_GameplayCinematic.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPECIALEVENTGAMEPLAYRUNTIME_API UFortControllerComponent_GameplayCinematic : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicGameplayIntroPanelEvent BP_OnStartGameplayOutro;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicGameplayIntroPanelEvent BP_OnGameplayIntroFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsReadyForGameplay, meta=(AllowPrivateAccess=true))
    bool bIsReadyForGameplay;
    
public:
    UFortControllerComponent_GameplayCinematic(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void StartGameplayOutro();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void StartGameplayCinematicOutro();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetReadyForGameplay(bool bIsReady);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnGameplayIntroFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsReadyForGameplay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void HideHUDElementsForLoadingScreen(const bool bHideElements);
    
};

