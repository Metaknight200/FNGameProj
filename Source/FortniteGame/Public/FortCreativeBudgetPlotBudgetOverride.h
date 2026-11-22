#pragma once
#include "CoreMinimal.h"
#include "FortCreativeBudget.h"
#include "FortCreativeGridCellBudget.h"
#include "FortCreativeBudgetPlotBudgetOverride.generated.h"

class UFortCreativeRealEstatePlotItemDefinition;

USTRUCT(BlueprintType)
struct FFortCreativeBudgetPlotBudgetOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCreativeRealEstatePlotItemDefinition> PlotItemDefinitionClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudget> Budgets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreativeHeatmapThermometerEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreativeHeatmapThermometerCellSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreativeHeatmapThermometerInfluenceDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeGridCellBudget> CreativeHeatmapThermometerBudgetOverrides;
    
    FORTNITEGAME_API FFortCreativeBudgetPlotBudgetOverride();
};

