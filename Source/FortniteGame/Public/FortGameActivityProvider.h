#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CreativeIslandDescriptionTag.h"
#include "FortGameActivityProvider.generated.h"

class AFortPlayerController;
class UFortGameActivity;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UFortGameActivityProvider : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortGameActivity*> Activities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OwningPlayer;
    
public:
    UFortGameActivityProvider();

    UFUNCTION(BlueprintCallable)
    static TArray<FCreativeIslandDescriptionTag> GetActivityDescriptionTags(const UFortGameActivity* Activity);
    
};

