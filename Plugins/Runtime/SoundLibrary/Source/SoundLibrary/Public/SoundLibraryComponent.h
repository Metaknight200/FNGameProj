#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnSoundLibraryPlayEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "SoundLibraryComponent.generated.h"

class USoundLibrary;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SOUNDLIBRARY_API USoundLibraryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnSoundLibraryPlayEvent OnSoundLibraryPlayEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USoundLibrary>> SoundLibraries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEnable;
    
public:
    USoundLibraryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
};

