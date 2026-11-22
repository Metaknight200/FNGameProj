#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FriendChestLibrary.generated.h"

class AFortPlayerStateAthena;
class UObject;

UCLASS(Blueprintable)
class UFriendChestLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFriendChestLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetFilteredSquadMembers(UObject* WorldContextObject, uint8 SquadId, bool bIncludeDead, bool bIncludeResurectable, bool bIncludeDisconnected, TArray<AFortPlayerStateAthena*>& OutSquadMembers);
    
};

