#pragma once
#include "CoreMinimal.h"
#include "FortLocalUserEntry.h"
#include "FortBuffetLocalUserEntry.generated.h"

class UFortBuffetInfo;

UCLASS(Blueprintable, EditInlineNew)
class UFortBuffetLocalUserEntry : public UFortLocalUserEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBuffetInfo* BuffetInfo;
    
public:
    UFortBuffetLocalUserEntry();

};

