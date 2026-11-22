#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CreativeDeveloperSettings.generated.h"

class AActor;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class UCreativeDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> PlaysetThumbnailEditorStage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ValidPermissionTags;
    
    UCreativeDeveloperSettings();

};

