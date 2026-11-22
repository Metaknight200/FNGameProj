#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ItemTagSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UItemTagSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UItemTagSubsystem();

};

