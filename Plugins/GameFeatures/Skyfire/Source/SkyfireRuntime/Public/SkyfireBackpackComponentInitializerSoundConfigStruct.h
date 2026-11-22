#pragma once
#include "CoreMinimal.h"
#include "SkyfireBackpackCountdownSoundStruct.h"
#include "SkyfireBackpackComponentInitializerSoundConfigStruct.generated.h"

USTRUCT(BlueprintType)
struct FSkyfireBackpackComponentInitializerSoundConfigStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickVolume_Prison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickVolume_DefaultArena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickVolume_LootRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkyfireBackpackCountdownSoundStruct> BackpackAudioPlaylist;
    
    SKYFIRERUNTIME_API FSkyfireBackpackComponentInitializerSoundConfigStruct();
};

