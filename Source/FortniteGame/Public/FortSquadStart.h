#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "FortSquadStart.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortSquadStart : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> PlayerStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
public:
    AFortSquadStart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetSquadStartGameplayTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPlayerStartTransform(const int32 Index) const;
    
};

