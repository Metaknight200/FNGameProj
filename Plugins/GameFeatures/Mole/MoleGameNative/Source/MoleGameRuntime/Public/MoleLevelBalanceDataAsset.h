#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MoleLevelBalanceDataAsset.generated.h"

class UCurveTable;
class UDataTable;

UCLASS(Blueprintable)
class UMoleLevelBalanceDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> DataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCurveTable>> CurveTables;
    
    UMoleLevelBalanceDataAsset();

};

