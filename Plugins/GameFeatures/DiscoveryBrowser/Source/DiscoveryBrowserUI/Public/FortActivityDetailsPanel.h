#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortActivityDetailsPanel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsPanel : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PanelName;
    
public:
    UFortActivityDetailsPanel();

};

