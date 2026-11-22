#pragma once
#include "CoreMinimal.h"
#include "FortCollectionDataEntry.h"
#include "FortCollectionDataEntryCharacter.generated.h"

class UFortTandemCharacterData;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortCollectionDataEntryCharacter : public UFortCollectionDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortTandemCharacterData> CharacterData;
    
    UFortCollectionDataEntryCharacter();

};

