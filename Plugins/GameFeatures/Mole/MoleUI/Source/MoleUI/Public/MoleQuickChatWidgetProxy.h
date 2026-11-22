#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "MoleQuickChatWidgetProxy.generated.h"

class UMoleQuickChatUIComponent;

UCLASS(Blueprintable, EditInlineNew)
class UMoleQuickChatWidgetProxy : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMoleQuickChatUIComponent> QuickChatUIComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> ActiveClass;
    
public:
    UMoleQuickChatWidgetProxy();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuickChatOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuickChatClosed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnter();
    
};

