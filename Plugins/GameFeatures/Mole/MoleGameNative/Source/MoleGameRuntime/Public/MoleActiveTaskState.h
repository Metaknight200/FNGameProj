#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAbilitySetHandle.h"
#include "GameplayTagContainer.h"
#include "Engine/NetSerialization.h"
#include "EMoleNewTaskNotificationType.h"
#include "MoleActiveTaskStateHandle.h"
#include "MoleActiveTaskState.generated.h"

class UMoleTaskDataAsset;
class UMoleTaskLogic;

USTRUCT(BlueprintType)
struct FMoleActiveTaskState : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleActiveTaskStateHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoleTaskDataAsset* TaskAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoleTaskLogic* TaskLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayTag TaskStateMachineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FFortAbilitySetHandle AbilitySetHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGuid AbilitySetInputGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FGuid> GrantedItemGuids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoleNewTaskNotificationType NotificationType;
    
    MOLEGAMERUNTIME_API FMoleActiveTaskState();
};

