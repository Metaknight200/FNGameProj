#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCollectionBook.generated.h"

UCLASS(Blueprintable)
class UFortMcpProfileCollectionBook : public UFortMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfileCollectionBook();

private:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpgradeSlottedItem(const FString& TargetItemId, int32 DesiredLevel, UPARAM(ref) FClientUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PromoteItem(const FString& TargetItemId, UPARAM(ref) FClientUrlContext& Context);
    
private:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConvertSlottedItem(const FString& TargetItemId, int32 ConversionIndex, UPARAM(ref) FClientUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimCollectionBookPageRewards(const FString& PageTemplateId, const FString& SectionId, int32 SelectedRewardIndex, UPARAM(ref) FClientUrlContext& Context);
    
};

