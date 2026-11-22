#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "MiniMapDataOverride.h"
#include "MiniMapDataOverrideRepData.h"
#include "FortGameStateComponent_MiniMapDataOverride.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_MiniMapDataOverride : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniMapDataOverride> MiniMapDataOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MiniMapDataOverridesRepDatas, meta=(AllowPrivateAccess=true))
    TArray<FMiniMapDataOverrideRepData> MiniMapDataOverrideRepDatas;
    
public:
    UFortGameStateComponent_MiniMapDataOverride(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MiniMapDataOverridesRepDatas();
    
};

