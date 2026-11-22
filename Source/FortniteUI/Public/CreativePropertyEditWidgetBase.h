#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "CreativePropertyEditWidgetBase.generated.h"

class UCommonButtonLegacy;
class UCreativePropertyEditWidgetDialogBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePropertyEditWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ExtraContentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCreativePropertyEditWidgetDialogBase* DialogWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ExtraContentWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreativePropertyEditWidgetDialogBase> DialogWidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> AvailableStepperValueLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndexInStepperValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Collapse;
    
public:
    UCreativePropertyEditWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetIsModified(bool bModified);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStepperLabelForIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsModified();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEntryDisplayValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEntryDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEntryDescriptionText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PostInitEditWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnModified(bool bModified);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEditWidgetClicked();
    
};

