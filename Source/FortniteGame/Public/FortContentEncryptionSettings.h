#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "FortContentEncryptionCollection.h"
#include "FortContentEncryptionSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Game)
class UFortContentEncryptionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortContentEncryptionCollection> Collections;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EncryptedGameFeaturePluginNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BackendURLs;
    
    UFortContentEncryptionSettings();

};

