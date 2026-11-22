#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SoundLibraryContext.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class SOUNDLIBRARY_API USoundLibraryContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    USoundLibraryContext();

};

