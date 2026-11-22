#pragma once
#include "CoreMinimal.h"
#include "MoleHoldBinding.h"
#include "Blueprint/UserWidget.h"
#include "MolePostGameScreen.generated.h"

class UAthenaAccoladeListWidget;
class UInputComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMolePostGameScreen : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* PostGameInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleHoldBinding BackToMenuBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileAutoGoBackToMenuTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaAccoladeListWidget* Listview_Accolades;
    
public:
    UMolePostGameScreen();

    UFUNCTION(BlueprintCallable)
    void StartMobileAutoGoBackToMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnXPCalculated(int32 XPValue);
    
};

