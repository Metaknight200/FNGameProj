#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurieEffectContainer.h"
#include "CurieElementGameplayEffectOwner.h"
#include "ECurieHandlerBehavior.h"
#include "ECurieHandlerPriority.h"
#include "CurieElementInteractWithContainerHandler.generated.h"

UCLASS(Abstract, Blueprintable)
class CURIE_API UCurieElementInteractWithContainerHandler : public UCurieElementGameplayEffectOwner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurieHandlerPriority HandlerPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurieHandlerBehavior HandlerBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ElementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OnInstantInteractionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OnBeginInteractionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OngoingInteractionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OnEndInteractionEffects;
    
public:
    UCurieElementInteractWithContainerHandler();

};

