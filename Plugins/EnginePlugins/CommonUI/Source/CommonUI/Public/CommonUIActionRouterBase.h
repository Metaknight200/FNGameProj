#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "CommonUIActionRouterBase.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonUIActionRouterBase : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UCommonUIActionRouterBase();

};

