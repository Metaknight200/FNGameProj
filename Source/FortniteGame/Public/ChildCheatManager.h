#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ChildCheatManager.generated.h"

UCLASS(Blueprintable, Within=FortCheatManager)
class FORTNITEGAME_API UChildCheatManager : public UCheatManagerExtension {
    GENERATED_BODY()
public:
    UChildCheatManager();

};

