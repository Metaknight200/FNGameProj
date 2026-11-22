#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TimeOfDayInhibitor.generated.h"

UINTERFACE(Blueprintable)
class UTimeOfDayInhibitor : public UInterface {
    GENERATED_BODY()
};

class ITimeOfDayInhibitor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDominantChanged(bool bIsDominant);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInhibitionEnabled() const;
    
};

