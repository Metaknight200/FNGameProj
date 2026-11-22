#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CreativeIslandResourceComponent.generated.h"

// Recovered 17.50 resource-manager delegate parameters.
class UCreativeIslandResourceManagerComponent;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestResourcesSignature, UCreativeIslandResourceManagerComponent*, ResourceManager);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFreeResourcesSignature, UCreativeIslandResourceManagerComponent*, ResourceManager);

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCreativeIslandResourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestResourcesSignature RequestResourcesDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFreeResourcesSignature FreeResourcesDelegate;
    
    UCreativeIslandResourceComponent(const FObjectInitializer& ObjectInitializer);

};

