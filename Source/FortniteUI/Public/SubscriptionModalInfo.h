#pragma once
#include "CoreMinimal.h"
#include "EAppStore.h"
#include "SubscriptionModalInfo.generated.h"

USTRUCT(BlueprintType)
struct FSubscriptionModalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppStore PlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QrCodeImage;
    
    FORTNITEUI_API FSubscriptionModalInfo();
};

