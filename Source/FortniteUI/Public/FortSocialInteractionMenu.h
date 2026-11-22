#pragma once
#include "CoreMinimal.h"
#include "SocialInteractionMenu.h"
#include "FortSocialInteractionMenu.generated.h"

class UCommonButtonLegacy;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortEditNicknameButton;
class UFortSocialNameTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialInteractionMenu : public USocialInteractionMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialNameTextBlock* Text_SocialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_PlatformNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_Presence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditNicknameButton* Button_EditNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CancelEdit;
    
public:
    UFortSocialInteractionMenu();

};

