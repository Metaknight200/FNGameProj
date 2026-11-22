#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "FortCurieDangerousNavRelevantObject.generated.h"

UCLASS(Blueprintable)
class UFortCurieDangerousNavRelevantObject : public UObject, public INavRelevantInterface {
    GENERATED_BODY()
public:
    UFortCurieDangerousNavRelevantObject();


    // Fix for true pure virtual functions not being implemented
};

