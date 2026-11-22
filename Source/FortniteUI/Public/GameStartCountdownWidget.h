#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "GameStartCountdownWidget.generated.h"

class AFortAthenaMutator_GameStartCountdown;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGameStartCountdownWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* CountdownMusicStinger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_GameStartCountdown* GameStartCountdownMutator;
    
public:
    UGameStartCountdownWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGameStartCountdownEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGameStartCountdownBegin(float Duration, int32 StartingCountdownInteger);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetCountdownMusicStinger() const;
    
};

