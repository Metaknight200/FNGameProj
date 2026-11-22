#pragma once
#include "CoreMinimal.h"
#include "AthenaDanceItemDefinition.h"
#include "AthenaMultiStateEmoteItemDefinition.generated.h"

class AFortPlayerPawn;
class UFortMontageItemDefinitionBase;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaMultiStateEmoteItemDefinition : public UAthenaDanceItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortMontageItemDefinitionBase>> EmoteStageList;
    
public:
    UAthenaMultiStateEmoteItemDefinition();

    UFUNCTION(BlueprintCallable)
    void ResetActiveEmoteIndex();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayActiveEmote(AFortPlayerPawn* FortPawn, bool bAdvanceActiveEmote);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceActiveEmoteIndex();
    
};

