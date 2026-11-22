#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EAthenaGamePhase.h"
#include "FortAsyncAction_WaitQuestProgressionEnabled.generated.h"

class UFortAsyncAction_WaitQuestProgressionEnabled;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_WaitQuestProgressionEnabled : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FQuestProgressionEnabledDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestProgressionEnabledDelegate OnQuestProgressionEnabled;
    
    UFortAsyncAction_WaitQuestProgressionEnabled();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_WaitQuestProgressionEnabled* WaitQuestProgressionEnabled(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(const EAthenaGamePhase GamePhase);
    
};

