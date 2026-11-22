#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "PartOverrideData.h"
#include "FortAthenaMutator_CustomCharacterParts.generated.h"

class AFortPlayerController;

UCLASS(Abstract, Blueprintable, HideDropdown)
class AFortAthenaMutator_CustomCharacterParts : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartOverrideData> PartOverrideCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldSwapSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkinMetaTagsToSkip;
    
public:
    AFortAthenaMutator_CustomCharacterParts(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetPartOverridesForPlayer(TArray<FPartOverrideData>& OutOverrideParts, const AFortPlayerController* FortPlayerController) const;
    
};

