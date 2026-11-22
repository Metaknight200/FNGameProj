#pragma once
#include "CoreMinimal.h"
#include "FortActorIndicatorWidget.h"
#include "Templates/SubclassOf.h"
#include "FortInteractionIndicatorWidget.generated.h"

class UCommonVisibilitySwitcher;
class UFortInteractContextInfo;
class UFortInteractContextInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortInteractionIndicatorWidget : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_PrimaryContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_SecondaryContext;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFortInteractContextInfoWidget>, UFortInteractContextInfoWidget*> PrimaryContextOverrideMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFortInteractContextInfoWidget>, UFortInteractContextInfoWidget*> SecondaryContextOverrideMap;
    
public:
    UFortInteractionIndicatorWidget();

private:
    UFUNCTION(BlueprintCallable)
    void HandleRemoveContextOverride(TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget, bool bPrimary);
    
    UFUNCTION(BlueprintCallable)
    void HandleAddContextOverride(TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget, bool bPrimary);
    
    UFUNCTION(BlueprintCallable)
    UFortInteractContextInfoWidget* ActivateContextOverride(const TSubclassOf<UFortInteractContextInfoWidget>& ContextOverrideWidget, const UFortInteractContextInfo* ContextInfo, bool bPrimary);
    
};

