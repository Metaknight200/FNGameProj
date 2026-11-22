#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "ELocalUserOnlineStatus.h"
#include "Templates/SubclassOf.h"
#include "FortLocalUserEntry.generated.h"

class UFortLocalUserSettingsMenu;
class UFortSocialAvatarIcon;
class UImage;
class UMenuAnchor;
class UTextBlock;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLocalUserEntry : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortLocalUserSettingsMenu> LocalUserSettingsMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalUserSettingsMenu* LocalUserSettingsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* SocialAvatarIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Crown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_VoiceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* MenuAnchor_LocalUserSettingMenu;
    
public:
    UFortLocalUserEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMenuOpenChanged(bool bIsOpen);
    
protected:
    UFUNCTION(BlueprintCallable)
    UUserWidget* HandleGetMenuContent();
    
};

