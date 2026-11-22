#pragma once
#include "CoreMinimal.h"
#include "FortSubscriptionScreenBase.h"
#include "FortSubscriptionPlatformModal.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortSubscriptionPlatformModal : public UFortSubscriptionScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CloseMobile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModalId;
    
public:
    UFortSubscriptionPlatformModal();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformSpecificQRCode(const FString& QRCodeAssetURL);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformSpecificEntries(const TArray<FText>& Entries);
    
    UFUNCTION(BlueprintCallable)
    void SendSubscriptionAnalyticsEvent(const FString& Interaction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModalBackout();
    
    UFUNCTION(BlueprintCallable)
    void ExitModal();
    
};

