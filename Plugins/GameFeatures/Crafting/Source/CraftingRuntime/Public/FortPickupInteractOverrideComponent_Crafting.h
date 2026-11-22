#pragma once
#include "CoreMinimal.h"
#include "EInteractionBeingAttempted.h"
#include "FortPickupInteractOverrideComponent.h"
#include "TInteractionType.h"
#include "FortPickupInteractOverrideComponent_Crafting.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPickupInteractOverrideComponent_Crafting : public UFortPickupInteractOverrideComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* LastPickupItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* LastFocusedItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName LastTargetFormulaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContextualCraftingInteractDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TInteractionType> CachedInteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInteractionBeingAttempted> CachedInteractionBeingAttempted;
    
public:
    UFortPickupInteractOverrideComponent_Crafting(const FObjectInitializer& ObjectInitializer);

};

