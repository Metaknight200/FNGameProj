#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GenericSmartObject.generated.h"

class USmartObjectComponent;

UCLASS(Blueprintable)
class SMARTOBJECTSMODULE_API AGenericSmartObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    USmartObjectComponent* SOComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ReferenceActors;
    
public:
    AGenericSmartObject(const FObjectInitializer& ObjectInitializer);

};

