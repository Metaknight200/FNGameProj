#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SoundLibraryPlaySoundResult.h"
#include "Templates/SubclassOf.h"
#include "SoundLibrarySubsystem.generated.h"

class AActor;
class USoundLibrary;
class USoundLibraryContext;

UCLASS(Blueprintable)
class SOUNDLIBRARY_API USoundLibrarySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    USoundLibrarySubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveLibrary(const AActor* Actor, TSubclassOf<USoundLibrary> Library);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLibraries(const AActor* Actor, TArray<TSubclassOf<USoundLibrary>> Libraries);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(const USoundLibraryContext* Context, FSoundLibraryPlaySoundResult& OutResults);
    
    UFUNCTION(BlueprintCallable)
    void EnableEventsForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void DisableEventsForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddLibrary(const AActor* Actor, TSubclassOf<USoundLibrary> Library);
    
    UFUNCTION(BlueprintCallable)
    void AddLibraries(const AActor* Actor, TArray<TSubclassOf<USoundLibrary>> Libraries);
    
};

