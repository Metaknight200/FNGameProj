#pragma once
#include "CoreMinimal.h"
#include "FortItemReceivedWidgetBase.h"
#include "FortMessageReceivedScreen.h"
#include "FortItemReceivedScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemReceivedScreen : public UFortItemReceivedWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMessageReceivedScreen::FOnFinalGiftingComplete OnFinalGiftingComplete;
    
    UFortItemReceivedScreen();

};

