#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "MoleControllerBinding.generated.h"

class UFortKeybindWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMoleControllerBinding : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey RepresentedKey;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeyBind_RepresentedAction;
    
public:
    UMoleControllerBinding();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBindingInfoSet(const FText& BindingLabel, bool bIsSaboteurBinding);
    
};

