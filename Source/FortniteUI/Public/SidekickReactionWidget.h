#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SidekickReactionWidget.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USidekickReactionWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Animation_Fly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Animation_FlyRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ReactionImage;
    
public:
    USidekickReactionWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleReactionAnimationStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleReactionAnimationCompleted();
    
};

