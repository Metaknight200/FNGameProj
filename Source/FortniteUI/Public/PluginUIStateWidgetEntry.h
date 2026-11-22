#pragma once
#include "CoreMinimal.h"
#include "PluginUIStateWidgetEntry.generated.h"

class UFortUIStateWidgetBase;

USTRUCT(BlueprintType)
struct FPluginUIStateWidgetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortUIStateWidgetBase> WidgetClass;
    
    FORTNITEUI_API FPluginUIStateWidgetEntry();
};

