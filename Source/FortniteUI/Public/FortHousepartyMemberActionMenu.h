#pragma once
#include "CoreMinimal.h"
#include "SocialInteractionMenu.h"
#include "FortHousepartyMemberActionMenu.generated.h"

class UCommonRichTextBlock;
class UFortTextButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHousepartyMemberActionMenu : public USocialInteractionMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTextButton* Button_Mute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTextButton* Button_Report;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_DisplayName;
    
public:
    UFortHousepartyMemberActionMenu();

};

