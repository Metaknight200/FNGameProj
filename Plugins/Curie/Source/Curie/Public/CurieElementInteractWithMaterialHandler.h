#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ECurieHandlerBehavior.h"
#include "ECurieHandlerPriority.h"
#include "CurieElementInteractWithMaterialHandler.generated.h"

UCLASS(Abstract, Blueprintable)
class CURIE_API UCurieElementInteractWithMaterialHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurieHandlerPriority HandlerPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurieHandlerBehavior HandlerBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ElementTag;
    
public:
    UCurieElementInteractWithMaterialHandler();

};

