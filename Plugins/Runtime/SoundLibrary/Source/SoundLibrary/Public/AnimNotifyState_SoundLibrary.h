#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SoundLibraryPlaySoundResult.h"
#include "AnimNotifyState_SoundLibrary.generated.h"

class UAudioComponent;
class USoundLibraryContext;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SOUNDLIBRARY_API UAnimNotifyState_SoundLibrary : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USoundLibraryContext* SoundContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> PlayingComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSoundLibraryPlaySoundResult PlaybackResult;
    
    UAnimNotifyState_SoundLibrary();

};

