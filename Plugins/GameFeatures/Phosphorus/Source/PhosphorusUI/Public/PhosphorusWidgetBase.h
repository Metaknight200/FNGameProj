#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "PhosphorusWidgetBase.generated.h"

class AFortAthenaMutator_Phosphorus;
class AFortGameplayMutator;
class AFortPlayerStateAthena;
class UFortLazyImage;

UCLASS(Blueprintable, EditInlineNew)
class PHOSPHORUSUI_API UPhosphorusWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Phosphorus* CachedPhosphorusMutator;
    
public:
    UPhosphorusWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetAvatarImageFromPlayerState(const AFortPlayerStateAthena* PlayerState, UFortLazyImage* AvatarImage);
    
    UFUNCTION(BlueprintCallable)
    void OnMutatorAvailable(AFortGameplayMutator* MutatorActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MutatorReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaMutator_Phosphorus* GetPhosphorusMutator() const;
    
};

