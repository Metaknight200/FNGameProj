#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortConversationMessageWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortConversationMessageWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFortConversationMessageWidget();

    UFUNCTION(BlueprintCallable)
    void SetPreviewMessage(const FText& MessageToSet);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewMessageSet(const FText& PreviewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMainMessageSet(const FText& NPCName, const FText& MessageBody);
    
};

