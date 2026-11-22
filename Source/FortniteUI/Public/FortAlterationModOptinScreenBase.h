#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortAlterationModOptinScreenBase.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAlterationModOptinScreenBase : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* ItemToOptin;
    
public:
    UFortAlterationModOptinScreenBase();

    UFUNCTION(BlueprintCallable)
    void SetupItem(UFortItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestClose(bool bCancelled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemConversionComplete();
    
    UFUNCTION(BlueprintCallable)
    void ConvertItemAlterations();
    
};

