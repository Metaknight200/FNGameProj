#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "FortAlterationButtonWidget.generated.h"

class UFortAlterationInfo;

UCLASS(Blueprintable, EditInlineNew)
class UFortAlterationButtonWidget : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAlterationInfo* AlterationInfo;
    
public:
    UFortAlterationButtonWidget();

    UFUNCTION(BlueprintCallable)
    void Setup(UFortAlterationInfo* InAlterationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAlterationInfo* GetAlterationInfo() const;
    
};

