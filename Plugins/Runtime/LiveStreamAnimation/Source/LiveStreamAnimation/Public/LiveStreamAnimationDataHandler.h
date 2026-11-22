#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LiveStreamAnimationDataHandler.generated.h"

class ULiveStreamAnimationSubsystem;

UCLASS(Abstract, Blueprintable, Transient)
class LIVESTREAMANIMATION_API ULiveStreamAnimationDataHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULiveStreamAnimationSubsystem* OwningSubsystem;
    
public:
    ULiveStreamAnimationDataHandler();

};

