#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/AssetManagerSettings.h"
#include "LevelSaveRecordActorClassRedirects.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ULevelSaveRecordActorClassRedirects : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetManagerRedirect> LevelSaveRecordActorClassRedirects;
    
public:
    ULevelSaveRecordActorClassRedirects();

};

