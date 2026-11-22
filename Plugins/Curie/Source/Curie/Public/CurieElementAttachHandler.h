#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurieEffectContainer.h"
#include "CurieElementGameplayEffectOwner.h"
#include "ECurieHandlerBehavior.h"
#include "ECurieHandlerPriority.h"
#include "CurieElementAttachHandler.generated.h"

UCLASS(Abstract, Blueprintable)
class CURIE_API UCurieElementAttachHandler : public UCurieElementGameplayEffectOwner {
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
    TArray<FCurieEffectContainer> OnBeginAttachmentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OngoingAttachmentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OnEndAttachmentEffects;
    
public:
    UCurieElementAttachHandler();

};

