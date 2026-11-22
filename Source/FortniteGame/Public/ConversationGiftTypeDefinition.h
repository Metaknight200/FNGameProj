#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EContextRequirementMatchPolicy.h"
#include "ConversationGiftTypeDefinition.generated.h"

class UFortControllerEffect;
class UFortControllerRequirement;
class UGiftUINotificationHandler;

USTRUCT(BlueprintType)
struct FConversationGiftTypeDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContextRequirementMatchPolicy ServiceProviderRequirementMatchPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortControllerRequirement*> ServiceProviderRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContextRequirementMatchPolicy RequirementMatchPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortControllerRequirement*> Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortControllerEffect*> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGiftUINotificationHandler* UINotificationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OptionalSelectionCooldown;
    
public:
    FORTNITEGAME_API FConversationGiftTypeDefinition();
};

