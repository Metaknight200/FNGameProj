#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayspaceComponent.h"
#include "MoleLevelManagerComponent.generated.h"

class UMoleLevelDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleLevelManagerComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapDataContentPackageGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DesiredMapDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoleLevelDataAsset* CurrentLevelData;
    
public:
    UMoleLevelManagerComponent(const FObjectInitializer& ObjectInitializer);

};

