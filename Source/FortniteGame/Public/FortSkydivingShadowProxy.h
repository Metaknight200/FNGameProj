#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortSkydivingShadowProxy.generated.h"

class AFortPlayerController;

UCLASS(Abstract, Blueprintable, Config=Engine)
class AFortSkydivingShadowProxy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkydivingHeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkydivingHeightCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* ViewingPlayerController;
    
    AFortSkydivingShadowProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowShadowProxy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideShadowProxy();
    
    UFUNCTION(BlueprintCallable)
    void CheckHeight();
    
};

