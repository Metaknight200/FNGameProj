#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "LSALiveLinkSettings.generated.h"

class ULSALiveLinkFrameTranslator;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class LSALIVELINK_API ULSALiveLinkSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULSALiveLinkFrameTranslator> FrameTranslator;
    
public:
    ULSALiveLinkSettings();

};

