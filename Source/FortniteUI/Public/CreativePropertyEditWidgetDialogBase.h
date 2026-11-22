#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreativePropertyEditWidgetDialogBase.generated.h"

class UCanvasPanelSlot;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePropertyEditWidgetDialogBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* PanelSlot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WaitOnAnimation;
    
public:
    UCreativePropertyEditWidgetDialogBase();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Close();
    
};

