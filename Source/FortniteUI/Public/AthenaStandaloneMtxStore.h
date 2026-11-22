#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortHUDShutdownTimerInterface.h"
#include "AthenaStandaloneMtxStore.generated.h"

class UCommonButtonBase;
class UFortMtxStoreRootBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaStandaloneMtxStore : public UCommonActivatableWidget, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMtxStoreRootBase* Panel_MTXStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_CloseMobile;
    
public:
    UAthenaStandaloneMtxStore();


    // Fix for true pure virtual functions not being implemented
};

