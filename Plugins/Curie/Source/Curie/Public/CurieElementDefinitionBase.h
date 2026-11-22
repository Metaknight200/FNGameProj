#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "CurieElementDefinitionBase.generated.h"

class UCurieElementAttachConditionHandler;
class UCurieElementAttachHandler;
class UCurieElementInteractWithContainerHandler;
class UCurieElementInteractWithElementHandler;
class UCurieElementInteractWithMaterialHandler;

USTRUCT(BlueprintType)
struct CURIE_API FCurieElementDefinitionBase : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCurieElementAttachHandler>> ElementAttachHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCurieElementAttachConditionHandler> ElementAttachConditionHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCurieElementInteractWithElementHandler>> ElementInteractHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCurieElementInteractWithMaterialHandler>> ElementMaterialInteractHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCurieElementInteractWithContainerHandler>> ElementContainerInteractHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ElementalImmunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
public:
    FCurieElementDefinitionBase();
};

