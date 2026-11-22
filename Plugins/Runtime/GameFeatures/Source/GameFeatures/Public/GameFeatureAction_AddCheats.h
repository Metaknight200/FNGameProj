#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "Templates/SubclassOf.h"
#include "GameFeatureAction_AddCheats.generated.h"

class UCheatManagerExtension;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGameFeatureAction_AddCheats : public UGameFeatureAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCheatManagerExtension>> CheatManagers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCheatManagerExtension*> SpawnedCheatManagers;
    
public:
    UGameFeatureAction_AddCheats();

};

