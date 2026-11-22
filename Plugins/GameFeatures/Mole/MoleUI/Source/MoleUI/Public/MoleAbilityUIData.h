#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MoleAbilityUIData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMoleAbilityUIData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HUDText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HUDSubText;
    
    MOLEUI_API FMoleAbilityUIData();
};

