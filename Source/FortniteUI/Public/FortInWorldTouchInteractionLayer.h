#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortInWorldTouchInteractionLayer.generated.h"

class UWidgetInteractionComponent;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortInWorldTouchInteractionLayer : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetInteractionComponent* WidgetInteractor;
    
public:
    UFortInWorldTouchInteractionLayer();

};

