#pragma once
#include "CoreMinimal.h"
#include "CheatMenuEntry.h"
#include "CheatMenuSection.generated.h"

USTRUCT(BlueprintType)
struct FCheatMenuSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DevName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MinVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheatMenuEntry> Entries;
    
    FORTNITEUI_API FCheatMenuSection();
};

