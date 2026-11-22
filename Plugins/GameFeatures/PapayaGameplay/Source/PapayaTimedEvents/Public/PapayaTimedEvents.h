#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MediaTimeEventArray.h"
#include "PapayaTimedEvents.generated.h"

class UMediaPlayer;
class UPapayaTimedEventsResponderComponent;

UCLASS(Blueprintable)
class APapayaTimedEvents : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UMediaPlayer*> MediaPlayerMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPapayaTimedEventsResponderComponent* MeshEventResponder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TimedEventActorTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimedEventsArray, meta=(AllowPrivateAccess=true))
    FMediaTimeEventArray TimedEventsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ScreenName, meta=(AllowPrivateAccess=true))
    FString ScreenName;
    
public:
    APapayaTimedEvents(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ShutdownTimedEvents_Native();
    
    UFUNCTION(BlueprintCallable)
    void SetupTimedEvents_Native(const FString& NewScreenName);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimedEvents_Native();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimedEventsArray(const FMediaTimeEventArray& PreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ScreenName(const FString& PreviousValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTimedEvent_Native(const FString& EventName, int64 Time, const FString& EventParam);
    
};

