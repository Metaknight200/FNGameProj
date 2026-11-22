#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MoleGlobals.generated.h"

UCLASS(Blueprintable, Config=Game)
class UMoleGlobals : public UObject {
    GENERATED_BODY()
public:
    UMoleGlobals();

};

