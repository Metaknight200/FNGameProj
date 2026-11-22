#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DevicesDataTrackingComponent.generated.h"

class UDeviceTrackedData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UDevicesDataTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDeviceTrackedData*> DevicesTrackedData;
    
public:
    UDevicesDataTrackingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UDeviceTrackedData* AddNewTracker(UClass* DataTrackedClass);
    
};

