#pragma once
#include "CoreMinimal.h"
#include "FortDecoTool.h"
#include "FortTrapTool.generated.h"

class AFortWeapon;

UCLASS(Blueprintable, Config=Engine)
class AFortTrapTool : public AFortDecoTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecalculateTrapPositionOnServer;
    
public:
    AFortTrapTool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEquip(AFortWeapon* OldWeapon);
    
};

