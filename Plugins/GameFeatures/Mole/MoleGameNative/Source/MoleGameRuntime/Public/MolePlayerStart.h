#pragma once
#include "CoreMinimal.h"
#include "FortPlayerStart.h"
#include "MolePlayerStart.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AMolePlayerStart : public AFortPlayerStart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CorrespondingPlayerNumber;
    
public:
    AMolePlayerStart(const FObjectInitializer& ObjectInitializer);

};

