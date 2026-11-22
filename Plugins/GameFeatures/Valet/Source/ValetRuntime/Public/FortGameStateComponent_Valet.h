#pragma once
#include "CoreMinimal.h"
#include "FortGameStateComponent.h"
#include "GameplayTagContainer.h"
#include "TireInfo.h"
#include "VehicleAttachment.h"
#include "FortGameStateComponent_Valet.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VALETRUNTIME_API UFortGameStateComponent_Valet : public UFortGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTireInfo> TireMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTireInfo EmptyTireInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVehicleAttachment> Attachments;
    
public:
    UFortGameStateComponent_Valet(const FObjectInitializer& ObjectInitializer);

};

