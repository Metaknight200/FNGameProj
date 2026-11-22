#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CreativeIgnoreEnabledInterface.generated.h"

UINTERFACE(Blueprintable)
class UCreativeIgnoreEnabledInterface : public UInterface {
    GENERATED_BODY()
};

class ICreativeIgnoreEnabledInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldIgnoreEnabledState();
    
};

