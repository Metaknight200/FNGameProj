#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommonUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class COMMONUI_API UCommonUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayInActionBar;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumePointerInput;
    
public:
    UCommonUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetConsumePointerInput(bool bInConsumePointerInput);
    
};

