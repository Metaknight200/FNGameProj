#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MoleAbilityUIData.h"
#include "MoleEnemyAbilityItem.generated.h"

UCLASS(Blueprintable)
class UMoleEnemyAbilityItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleAbilityUIData EnemyAbilityUIData;
    
    UMoleEnemyAbilityItem();

};

