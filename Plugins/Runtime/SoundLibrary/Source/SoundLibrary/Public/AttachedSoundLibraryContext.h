#pragma once
#include "CoreMinimal.h"
#include "AttachedSoundLibraryContextSettings.h"
#include "SoundLibraryContext.h"
#include "AttachedSoundLibraryContext.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class SOUNDLIBRARY_API UAttachedSoundLibraryContext : public USoundLibraryContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttachedSoundLibraryContextSettings Settings;
    
    UAttachedSoundLibraryContext();

    UFUNCTION(BlueprintCallable)
    void ConfigureContext(AActor* OwningActor, const FAttachedSoundLibraryContextSettings& InSettings);
    
};

