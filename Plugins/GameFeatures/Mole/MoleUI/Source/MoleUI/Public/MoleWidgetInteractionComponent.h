#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetInteractionComponent.h"
#include "MoleWidgetInteractionComponent.generated.h"

class UInputComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleWidgetInteractionComponent : public UWidgetInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComp;
    
public:
    UMoleWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

