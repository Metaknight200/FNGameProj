#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/NetSerialization.h"
#include "RepParamBase.generated.h"

USTRUCT(BlueprintType)
struct FRepParamBase : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    FORTNITEGAME_API FRepParamBase();
};

