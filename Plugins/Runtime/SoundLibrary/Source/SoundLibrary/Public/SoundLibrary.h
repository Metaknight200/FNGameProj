#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SoundLibrary.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class SOUNDLIBRARY_API USoundLibrary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<USoundBase>> Sounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> LoadedSoundObjects;
    
public:
    USoundLibrary();

};

