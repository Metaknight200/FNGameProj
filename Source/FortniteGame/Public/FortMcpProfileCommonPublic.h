#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCommonPublic.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileCommonPublic : public UFortMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfileCommonPublic();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomebaseName(const FString& HomebaseName, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomebaseBanner(const FString& HomebaseBannerIconId, const FString& HomebaseBannerColorId, UPARAM(ref) FClientUrlContext& Context);
    
};

