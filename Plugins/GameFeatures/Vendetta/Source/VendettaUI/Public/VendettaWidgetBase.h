#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "VendettaWidgetBase.generated.h"

class AFortAthenaMutator_Vendetta;

UCLASS(Blueprintable, EditInlineNew)
class UVendettaWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Vendetta* CachedVendettaMutator;
    
public:
    UVendettaWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindFromMutator_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindToMutator_BP();
    
};

