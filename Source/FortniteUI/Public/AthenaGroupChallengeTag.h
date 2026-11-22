#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaGroupChallengeTag.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaGroupChallengeTag : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Flash;
    
public:
    UAthenaGroupChallengeTag();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnToggleFullScreenMap(bool bIsMapVisible);
    
};

