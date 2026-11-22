#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpecialEventGameplayLibrary.generated.h"

class AController;
class AFortAthenaMutator_SpecialEvent;
class ASpecialEventScript;
class UAthenaLoadingScreenItemDefinition;
class UFortControllerComponent_GameplayCinematic;
class UFortControllerComponent_SpecialEvent;
class UObject;

UCLASS(Blueprintable)
class USpecialEventGameplayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpecialEventGameplayLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void SetNextLoadingScreen(UObject* WorldContextObject, const UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, const bool bCanShowLoadingBar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASpecialEventScript* GetSpecialEventScript(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void ForceUpdateGrass(UObject* WorldContextObject, const FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(AController* Controller);
    
};

