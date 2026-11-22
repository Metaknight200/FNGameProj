#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "MoleQuickChatLogWidget.generated.h"

class UListView;
class UMoleQuickChatMessageItem;

UCLASS(Blueprintable, EditInlineNew)
class UMoleQuickChatLogWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SelfMessageLogTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SelectedTokenFormat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ListView_MessageLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMoleQuickChatMessageItem*> MessageLog;
    
public:
    UMoleQuickChatLogWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFirstMessageReceived();
    
};

