#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VendettaBountyPuckTargetDataChangedDelegate.h"
#include "BountyPuckWeaponComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VENDETTARUNTIME_API UBountyPuckWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaBountyPuckTargetDataChanged OnTargetDataChanged;
    
    UBountyPuckWeaponComponent(const FObjectInitializer& ObjectInitializer);

};

