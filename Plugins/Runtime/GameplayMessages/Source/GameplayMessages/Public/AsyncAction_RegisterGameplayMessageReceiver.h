#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncGameplayMessageDelegateDelegate.h"
#include "EGameplayMessageMatchType.h"
#include "EventMessageTag.h"
#include "AsyncAction_RegisterGameplayMessageReceiver.generated.h"

class AActor;
class UAsyncAction_RegisterGameplayMessageReceiver;
class UObject;
class UScriptStruct;

UCLASS(Blueprintable)
class GAMEPLAYMESSAGES_API UAsyncAction_RegisterGameplayMessageReceiver : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncGameplayMessageDelegate OnMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncGameplayMessageDelegate HandleSavedState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncGameplayMessageDelegate HandleStateCleared;
    
    UAsyncAction_RegisterGameplayMessageReceiver();

    UFUNCTION(BlueprintCallable)
    void Unregister();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_RegisterGameplayMessageReceiver* RegisterGameplayMessageReceiver(UObject* WorldContextObject, FEventMessageTag Channel, UScriptStruct* PayloadType, EGameplayMessageMatchType MatchType, AActor* ActorContext);
    
    UFUNCTION(BlueprintCallable)
    bool GetPayload(UPARAM(Ref) int32& OutPayload);
    
};

