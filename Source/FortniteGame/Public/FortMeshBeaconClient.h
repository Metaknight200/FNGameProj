#pragma once
#include "CoreMinimal.h"
#include "MeshBeaconClient.h"
#include "FortMeshBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class AFortMeshBeaconClient : public AMeshBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreFailedUpdateLevelVisibilityValidation;
    
public:
    AFortMeshBeaconClient(const FObjectInitializer& ObjectInitializer);

};

