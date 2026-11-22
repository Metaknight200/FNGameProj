#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECustomFeedFilterParticipantNames.h"
#include "FortCustomFeedMessageGeneratorBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortCustomFeedMessageGeneratorBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomFeedFilterParticipantNames FilteredParticipantNamePolicy;
    
public:
    UFortCustomFeedMessageGeneratorBase();

};

