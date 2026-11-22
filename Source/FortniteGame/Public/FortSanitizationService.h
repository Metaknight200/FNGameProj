#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SanitizationData.h"
#include "FortSanitizationService.generated.h"

UCLASS(Blueprintable)
class UFortSanitizationService : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSanitizationData> PendingRequests;
    
public:
    UFortSanitizationService();

};

