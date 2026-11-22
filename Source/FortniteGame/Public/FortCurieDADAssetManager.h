#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FortCurieDADAssetManager.generated.h"

class UFortCurieManagerComponentConfig;

UCLASS(Blueprintable)
class UFortCurieDADAssetManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCurieManagerComponentConfig*> DADAssets;
    
public:
    UFortCurieDADAssetManager();

};

