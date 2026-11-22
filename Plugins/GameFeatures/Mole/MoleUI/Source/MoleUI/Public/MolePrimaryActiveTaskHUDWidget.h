#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MolePrimaryActiveTaskHUDWidget.generated.h"

class UMolePlayerTaskManagementComponent;
class UMoleTaskHUDWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMolePrimaryActiveTaskHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMolePlayerTaskManagementComponent* CachedOwningTaskComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoleTaskHUDWidget* MoleTaskHUDWidget;
    
public:
    UMolePrimaryActiveTaskHUDWidget();

};

