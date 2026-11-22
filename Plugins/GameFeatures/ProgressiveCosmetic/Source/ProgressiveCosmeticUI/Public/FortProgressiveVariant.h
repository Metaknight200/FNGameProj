#pragma once
#include "CoreMinimal.h"
#include "FortProgressiveVariant.generated.h"

class UFortVariantTokenType;
class UObject;

USTRUCT(BlueprintType)
struct FFortProgressiveVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> TileMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidden;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortVariantTokenType> VariantToken;
    
public:
    PROGRESSIVECOSMETICUI_API FFortProgressiveVariant();
};

