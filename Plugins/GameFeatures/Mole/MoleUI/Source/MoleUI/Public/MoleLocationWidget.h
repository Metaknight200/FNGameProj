#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoleLocationWidget.generated.h"

class UFortControllerComponent_MapDiscoverability;

UCLASS(Blueprintable, EditInlineNew)
class UMoleLocationWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_MapDiscoverability* DiscoverabilityComponent;
    
public:
    UMoleLocationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisited(const FText& LocalizedLocationName, bool bIsNamedLocation);
    
};

