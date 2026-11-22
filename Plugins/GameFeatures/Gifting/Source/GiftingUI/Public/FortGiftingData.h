#pragma once
#include "CoreMinimal.h"
#include "FortGameFeatureData.h"
#include "FortGiftingData.generated.h"

class UAthenaGiftingScreen;

UCLASS(Blueprintable)
class UFortGiftingData : public UFortGameFeatureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaGiftingScreen> GiftingScreenClass;
    
    UFortGiftingData();

};

