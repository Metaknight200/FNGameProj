#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAnimInputEvent.generated.h"

class UFortAnimInputEvent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimInputEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UFortAnimInputEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNamed(FName InEventName) const;
    
    UFUNCTION(BlueprintCallable)
    static UFortAnimInputEvent* CreateAnimInputEvent(FName InEventName);
    
};

