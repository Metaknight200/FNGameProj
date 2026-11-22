#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ECurieHandlerPriority.h"
#include "CurieElementAttachConditionHandler.generated.h"

UCLASS(Abstract, Blueprintable)
class CURIE_API UCurieElementAttachConditionHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurieHandlerPriority HandlerPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ElementTag;
    
public:
    UCurieElementAttachConditionHandler();

};

