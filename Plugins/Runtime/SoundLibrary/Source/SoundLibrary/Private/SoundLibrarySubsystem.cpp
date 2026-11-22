#include "SoundLibrarySubsystem.h"
#include "Templates/SubclassOf.h"

USoundLibrarySubsystem::USoundLibrarySubsystem() {
}

void USoundLibrarySubsystem::RemoveLibrary(const AActor* Actor, TSubclassOf<USoundLibrary> Library) {
}

void USoundLibrarySubsystem::RemoveLibraries(const AActor* Actor, TArray<TSubclassOf<USoundLibrary>> Libraries) {
}

void USoundLibrarySubsystem::PlaySound(const USoundLibraryContext* Context, FSoundLibraryPlaySoundResult& OutResults) {
}

void USoundLibrarySubsystem::EnableEventsForActor(const AActor* Actor) {
}

void USoundLibrarySubsystem::DisableEventsForActor(const AActor* Actor) {
}

void USoundLibrarySubsystem::AddLibrary(const AActor* Actor, TSubclassOf<USoundLibrary> Library) {
}

void USoundLibrarySubsystem::AddLibraries(const AActor* Actor, TArray<TSubclassOf<USoundLibrary>> Libraries) {
}


