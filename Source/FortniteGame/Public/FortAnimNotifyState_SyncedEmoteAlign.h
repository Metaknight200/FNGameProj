#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortAnimNotifyState_SyncedEmoteAlign.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_SyncedEmoteAlign : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JointToAlign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JointToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLimit;
    
    UFortAnimNotifyState_SyncedEmoteAlign();

};

