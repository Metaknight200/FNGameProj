#pragma once
#include "CoreMinimal.h"
#include "EDynamicHUDZOrder.h"
#include "DynamicHUDAllowed.generated.h"

class UDynamicHUDConstraintBase;
class UUserWidget;

USTRUCT(BlueprintType)
struct FDynamicHUDAllowed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> Widget;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDZOrder ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDynamicHUDConstraintBase*> LayoutConstraints;
    
    DYNAMICHUD_API FDynamicHUDAllowed();
};

