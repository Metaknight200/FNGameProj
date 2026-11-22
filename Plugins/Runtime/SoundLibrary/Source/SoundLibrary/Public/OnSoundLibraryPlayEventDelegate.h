#pragma once
#include "CoreMinimal.h"
#include "SoundLibraryPlaySoundResult.h"
#include "OnSoundLibraryPlayEventDelegate.generated.h"

class USoundLibraryContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSoundLibraryPlayEvent, const FSoundLibraryPlaySoundResult&, Results, const USoundLibraryContext*, Context);

