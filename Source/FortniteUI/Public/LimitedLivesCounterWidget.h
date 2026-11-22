#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "LimitedLivesCounterWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API ULimitedLivesCounterWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> CurrentPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLives;
    
public:
    ULimitedLivesCounterWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(AFortPlayerStateAthena* DeadPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLivesCountUpdated(int32 NewCount);
    
};

