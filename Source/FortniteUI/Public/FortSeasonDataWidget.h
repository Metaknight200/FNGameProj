#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortSeasonDataWidget.generated.h"

class UAthenaChallengeRewards;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortSeasonDataWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeRewards* LevelRewards;
    
public:
    UFortSeasonDataWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuperCharged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgressUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassOwned();
    
};

