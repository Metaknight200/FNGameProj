#pragma once
#include "CoreMinimal.h"
#include "EFortItemType.h"
#include "GameplayTagContainer.h"
#include "EBattlePassLandingPageSpecialEntryType.h"
#include "BattlePassLandingPageEntryPreviewInfo.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FBattlePassLandingPageEntryPreviewInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattlePassLandingPageSpecialEntryType SpecialEntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemType> SubscriptionItemTypesToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpecialCharacterVariantChannelToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpecialCharacterActiveVariantTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortItemDefinition>> PreviewItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionTime;
    
    BATTLEPASSBASE_API FBattlePassLandingPageEntryPreviewInfo();
};

