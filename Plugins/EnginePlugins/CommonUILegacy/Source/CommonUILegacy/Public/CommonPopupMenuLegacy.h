#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "CommonPopupMenuLegacy.generated.h"

class UMenuAnchor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class COMMONUILEGACY_API UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInputStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMenuAnchor> OwningMenuAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> ContextProvidingObject;
    
public:
    UCommonPopupMenuLegacy();

    UFUNCTION(BlueprintCallable)
    void SetOwningMenuAnchor(const UMenuAnchor* MenuAnchor);
    
    UFUNCTION(BlueprintCallable)
    void SetContextProvider(const UObject* NewContextProvidingObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestClose();
    
    UFUNCTION(BlueprintCallable)
    void OnIsOpenChanged(bool IsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePreDifferentContextProviderSet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePostDifferentContextProviderSet();
    
};

