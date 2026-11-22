#pragma once
#include "CoreMinimal.h"
#include "SoundLibraryAnimContextSettings.h"
#include "SoundLibraryContext.h"
#include "SoundLibraryAnimContext.generated.h"

class AActor;
class UAnimSequenceBase;

UCLASS(Blueprintable, EditInlineNew)
class SOUNDLIBRARY_API USoundLibraryAnimContext : public USoundLibraryContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundLibraryAnimContextSettings AnimSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimRate;
    
    USoundLibraryAnimContext();

    UFUNCTION(BlueprintCallable)
    void ConfigureContext(AActor* OwningActor, UAnimSequenceBase* InAnimation, const FSoundLibraryAnimContextSettings& InSettings);
    
};

