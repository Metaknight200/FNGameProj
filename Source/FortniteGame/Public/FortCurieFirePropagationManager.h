#pragma once
#include "CoreMinimal.h"
#include "FortCurieActorFireEntry.h"
#include "FortCurieFirePropagationManagerTickFunction.h"
#include "FortCurieManagerComponent.h"
#include "FortCurieFirePropagationManager.generated.h"

class UFortCurieFirePropagationManagerConfig;

UCLASS(Blueprintable)
class UFortCurieFirePropagationManager : public UFortCurieManagerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieFirePropagationManagerTickFunction PrimaryTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCurieActorFireEntry> ActiveActorFires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieFirePropagationManagerConfig* InternalManagerConfig;
    
public:
    UFortCurieFirePropagationManager();

};

