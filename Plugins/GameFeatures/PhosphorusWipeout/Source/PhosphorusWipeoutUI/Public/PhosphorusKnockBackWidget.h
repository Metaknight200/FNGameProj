#pragma once
#include "CoreMinimal.h"
#include "KnockbackMutatorData.h"
#include "EPhosphorusPhase.h"
#include "PhosphorusWidgetBase.h"
#include "PhosphorusKnockBackWidget.generated.h"

class AFortAthenaMutator_Knockback;
class AFortAthenaMutator_Phosphorus;
class AFortAthenaMutator_PhosphorusWipeout;

UCLASS(Blueprintable, EditInlineNew)
class UPhosphorusKnockBackWidget : public UPhosphorusWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_PhosphorusWipeout* CachedPhosphorusWipeoutMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Knockback* CachedKnockbackMutator;
    
public:
    UPhosphorusKnockBackWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PhosphorusPhaseChangedEvent(AFortAthenaMutator_Phosphorus* Mutator, EPhosphorusPhase Phase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KnockBackFromAllPlayersReceivedEvent(const FKnockbackMutatorData& KnockbackData);
    
};

