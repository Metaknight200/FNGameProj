#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DynamicHUDVisualizerWidget.generated.h"

class UDynamicHUDScene;

UCLASS(Blueprintable, EditInlineNew)
class UDynamicHUDVisualizerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDynamicHUDScene*> Scenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRefresh;
    
public:
    UDynamicHUDVisualizerWidget();

};

