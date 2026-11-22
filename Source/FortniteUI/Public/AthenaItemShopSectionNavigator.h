#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaItemShopSectionNavigator.generated.h"

class UAthenaItemShopNavigationButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSectionNavigator : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopNavigationButton* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopNavigationButton* Button_Previous;
    
public:
    UAthenaItemShopSectionNavigator();

    UFUNCTION(BlueprintCallable)
    void RequestPreviousSection();
    
    UFUNCTION(BlueprintCallable)
    void RequestNextSection();
    
};

