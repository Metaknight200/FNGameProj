#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "AnimTagProperty.h"
#include "BoneSet.h"
#include "BoneSetInterface.h"
#include "GameplayTagNotifyDelegateDelegate.h"
#include "FortBaseAnimInstance.generated.h"

class AFortPawn;
class UFortAnimInputEvent;

UCLASS(Blueprintable, NonTransient, Config=Game)
class FORTNITEGAME_API UFortBaseAnimInstance : public UAnimInstance, public IBoneSetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAnimInputEvent*> AnimInputEventList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBoneSet> BoneSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimTagProperty> AnimPropertyGameplayTagBindings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagNotifyDelegate OnGameplayTagNotifyBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagNotifyDelegate OnGameplayTagNotifyEnd;
    
    UFortBaseAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPawn* TryGetFortPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintProcessAnimInputEvent(const UFortAnimInputEvent* AnimInputEvent);
    

    // Fix for true pure virtual functions not being implemented
};

