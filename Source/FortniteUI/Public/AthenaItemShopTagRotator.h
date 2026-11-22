#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaItemShopTagRotator.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopTagRotator : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenTitleChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TagCallout;
    
public:
    UAthenaItemShopTagRotator();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTagText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTagExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTagEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveStatusChanged(bool bIsActive);
    
};

