#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoleActiveTaskContextBarHUDWidget.generated.h"

class UMolePlayerTaskManagementComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleActiveTaskContextBarHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMolePlayerTaskManagementComponent* CachedOwningTaskComponent;
    
public:
    UMoleActiveTaskContextBarHUDWidget();

};

