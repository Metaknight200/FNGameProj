#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "McpProfile.h"
#include "FortMcpProfile.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfile : public UMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfile();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveGiftBox(const TArray<FString>& GiftBoxItemIds, UPARAM(ref) FClientUrlContext& Context);
    
private:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MarkItemSeen(const TArray<FString>& ItemIds, UPARAM(ref) FClientUrlContext& Context);
    
};

