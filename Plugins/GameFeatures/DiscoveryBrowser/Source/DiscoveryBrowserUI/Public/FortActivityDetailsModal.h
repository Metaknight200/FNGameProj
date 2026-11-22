#pragma once
#include "CoreMinimal.h"
#include "EFortInvalidActivityReason.h"
#include "FortActivityView.h"
#include "FortActivityDetailsModal.generated.h"

class UCommonButtonBase;
class UCommonTextBlock;
class UFortActivityDetailsDisplay;
class UTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsModal : public UFortActivityView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_LinkCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityDetailsDisplay* DetailsDisplay_SelectedActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_MobileClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Accept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_BackBoard;
    
public:
    UFortActivityDetailsModal();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewImageChanged(const bool bIsLoading, const UTexture* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartySizeChanged(const int32 PartySize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerPromotedToLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerDemoted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortInvalidActivityReason GetInvalidActivityReason() const;
    
};

