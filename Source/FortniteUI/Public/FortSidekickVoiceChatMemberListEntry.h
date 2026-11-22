#pragma once
#include "CoreMinimal.h"
#include "SocialListInteractableEntryBase.h"
#include "FortSidekickVoiceChatMemberListEntry.generated.h"

class UCommonRichTextBlock;
class UFortVoiceChatStatusIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSidekickVoiceChatMemberListEntry : public USocialListInteractableEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_RichPresence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
public:
    UFortSidekickVoiceChatMemberListEntry();

};

