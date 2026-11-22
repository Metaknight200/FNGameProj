#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SyncedMontageParams.h"
#include "FortAnimNotifyState_PlaySyncedMontage.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_PlaySyncedMontage : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyncedMontageParams> MontageParamsList;
    
    UFortAnimNotifyState_PlaySyncedMontage();

};

