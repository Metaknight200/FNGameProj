#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "FortItemWidget_NUI.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortItem;

UCLASS(Abstract, Blueprintable)
class FORTNITEUI_API UFortItemWidget_NUI : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
public:
    UFortItemWidget_NUI();

    UFUNCTION(BlueprintCallable)
    void SetItemViewContext(TScriptInterface<IFortItemViewContextInterface> NewItemViewContext);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(const UFortItem* NewItemToRepresent);
    
};

