#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayspaceLibrary.generated.h"

class APlayspace;

UCLASS(Blueprintable)
class PLAYSPACESYSTEM_API UPlayspaceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayspaceLibrary();

    UFUNCTION(BlueprintCallable)
    static void DestroyPlayspace(APlayspace* PlayspaceToDestroy);
    
};

