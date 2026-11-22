#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortVariantEditorWidgetBase.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortVariantEditorWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LogicalOuter;
    
    UFortVariantEditorWidgetBase();

};

