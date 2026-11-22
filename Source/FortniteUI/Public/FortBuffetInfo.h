#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortBuffetInfo.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBuffetInfo : public UUserWidget {
    GENERATED_BODY()
public:
    UFortBuffetInfo();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshDisplay(const FText& EventName, const FText& Date, const FText& Time, const FText& AdditionalEvents);
    
};

