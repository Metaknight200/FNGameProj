#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortProgressiveItemStateTitleWidget.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortProgressiveItemStateTitleWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_UnlockedStages;
    
public:
    UFortProgressiveItemStateTitleWidget();

};

