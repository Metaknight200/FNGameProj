#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_Visibility.h"
#include "GameplayMessageVisibility.h"
#include "FortMobileButtonBehaviorComponent_GameplayMessageTagVisibility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortMobileButtonBehaviorComponent_GameplayMessageTagVisibility : public UFortMobileButtonBehaviorComponent_Visibility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayMessageVisibility> GameplayMessageVisibilities;
    
public:
    UFortMobileButtonBehaviorComponent_GameplayMessageTagVisibility();

};

