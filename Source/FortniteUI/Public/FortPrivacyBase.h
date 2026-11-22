#pragma once
#include "CoreMinimal.h"
#include "Party/PartyTypes.h"
#include "FortActivatablePanel.h"
#include "FortPrivacyBase.generated.h"

class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPrivacyBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* AllowFriendsOfFriendsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* AllowFriendsOfFriendsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UCommonButtonLegacy*, EPartyType> PrivacyButtonMap;
    
public:
    UFortPrivacyBase();

private:
    UFUNCTION(BlueprintCallable)
    void HandlePrivacyButtonSelected(UCommonButtonLegacy* SelectedPrivacyButton, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyPrivacySetting();
    
    UFUNCTION(BlueprintCallable)
    void AddPrivacyButton(UCommonButtonLegacy* PrivacyButton, EPartyType PartyType);
    
};

