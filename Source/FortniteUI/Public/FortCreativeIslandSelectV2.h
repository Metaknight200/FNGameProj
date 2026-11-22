#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortCreativeIslandSelectV2.generated.h"

class UFortCreativeIslandSelectScreen;
class UFortCreativeIslandSelectTabData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandSelectV2 : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeIslandSelectTabData*> TabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeIslandSelectScreen* IslandSelect_Base;
    
public:
    UFortCreativeIslandSelectV2();

};

