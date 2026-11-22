#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "LiveStreamAnimationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class LIVESTREAMANIMATION_API ULiveStreamAnimationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> HandleNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> ConfiguredDataHandlers;
    
public:
    ULiveStreamAnimationSettings();

};

