#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EmergencyNoticeBase.generated.h"

class UBorder;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEmergencyNoticeBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_TestBG;
    
public:
    UEmergencyNoticeBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNotice(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideNotice();
    
};

