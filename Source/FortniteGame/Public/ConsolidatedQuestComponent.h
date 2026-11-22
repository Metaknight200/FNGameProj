#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "EQuestUpdateType.h"
#include "EQuestVisibilityResponse.h"
#include "ConsolidatedQuestComponent.generated.h"

class AFortGameStateAthena;
class AFortPlayerController;
class UFortPlaylist;
class UFortQuestItem;
class UFortQuestItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UConsolidatedQuestComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleQuestComponentDelegate, AFortPlayerController*, PlayerController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestComponentCustomVisualsPassed, AFortPlayerController*, PlayerController, bool, bFullyInitalized);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FQuestComponentCustomUpdatedOjective, AFortPlayerController*, PlayerController, int32, AchievedCount, int32, RequiredCount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleQuestComponentDelegate OnQuestNotReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleQuestComponentDelegate OnQuestReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleQuestComponentDelegate OnQuestComponentSuccessEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleQuestComponentDelegate OnCustomSetVisualsToFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestComponentCustomVisualsPassed OnCustomSetVisualsToPassed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestComponentCustomUpdatedOjective OnCustomUpdateObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestComponentCustomUpdatedOjective OnCustomUpdateQuest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveBackendName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEnableEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockedPlaylistTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestVisibilityResponse ComponentResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestUpdateType UpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
public:
    UConsolidatedQuestComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCompletedForPlayer(AFortPlayerController* InPlayerController, bool bCompleted);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnQuestActivated(const UFortQuestItem* QuestItem, FName ObjectiveName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags);
    
    UFUNCTION(BlueprintCallable)
    void OnCalendarUpdated();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsInteractable(AFortPlayerController* InteractingController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestItemDefinition* GetQuestItemDefinition() const;
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> Editor_GetValidObjectives() const;
    
};

