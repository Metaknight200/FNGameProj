#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EFortActivityBrowserTagType.h"
#include "FortActivityBrowserTag.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityBrowserTag : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TagDescription;
    
public:
    UFortActivityBrowserTag();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTagUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortActivityBrowserTagType GetTagType() const;
    
};

