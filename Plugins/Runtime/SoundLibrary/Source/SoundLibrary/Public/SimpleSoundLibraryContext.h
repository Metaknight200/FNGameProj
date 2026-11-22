#pragma once
#include "CoreMinimal.h"
#include "SimpleSoundLibraryContextSettings.h"
#include "SoundLibraryContext.h"
#include "SimpleSoundLibraryContext.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class SOUNDLIBRARY_API USimpleSoundLibraryContext : public USoundLibraryContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleSoundLibraryContextSettings Settings;
    
    USimpleSoundLibraryContext();

    UFUNCTION(BlueprintCallable)
    void ConfigureContext(AActor* OwningActor, const FSimpleSoundLibraryContextSettings& InSettings);
    
};

