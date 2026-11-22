#pragma once
#include "CoreMinimal.h"
#include "FortCurieCableSignalManagerTickFunction.h"
#include "FortCurieManagerComponent.h"
#include "FortCurieCableSignalManager.generated.h"

class UFortCurieCableSignalManagerConfig;

UCLASS(Blueprintable)
class UFortCurieCableSignalManager : public UFortCurieManagerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieCableSignalManagerTickFunction PrimaryManagerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieCableSignalManagerConfig* InternalManagerConfig;
    
public:
    UFortCurieCableSignalManager();

};

