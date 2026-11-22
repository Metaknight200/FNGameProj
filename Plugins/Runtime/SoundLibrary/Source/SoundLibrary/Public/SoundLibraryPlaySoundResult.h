#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SoundLibraryPlaySoundResult.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct SOUNDLIBRARY_API FSoundLibraryPlaySoundResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> AudioComponents;
    
    FSoundLibraryPlaySoundResult();
};

