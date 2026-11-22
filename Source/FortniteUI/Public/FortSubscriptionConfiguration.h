#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSubscriptionConfiguration.generated.h"

class UFortSubscriptionContentContainer;

UCLASS(Blueprintable, Config=Game)
class UFortSubscriptionConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortSubscriptionContentContainer> SubscriptionContentContainerClass;
    
public:
    UFortSubscriptionConfiguration();

};

