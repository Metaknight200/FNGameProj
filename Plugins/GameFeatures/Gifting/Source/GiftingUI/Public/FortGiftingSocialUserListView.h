#pragma once
#include "CoreMinimal.h"
#include "SocialUserListViewBase.h"
#include "FortGiftingSocialUserListView.generated.h"

UCLASS(Blueprintable)
class UFortGiftingSocialUserListView : public USocialUserListViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshRecipientStatusDelay;
    
public:
    UFortGiftingSocialUserListView();

};

