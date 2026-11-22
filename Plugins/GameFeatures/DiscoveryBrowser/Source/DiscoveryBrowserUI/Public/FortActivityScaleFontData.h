#pragma once
#include "CoreMinimal.h"
#include "FortActivityScaleFontData.generated.h"

USTRUCT(BlueprintType)
struct FFortActivityScaleFontData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterCountStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
    DISCOVERYBROWSERUI_API FFortActivityScaleFontData();
};

