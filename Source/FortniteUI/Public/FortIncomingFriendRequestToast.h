#pragma once
#include "CoreMinimal.h"
#include "FortToastWidget.h"
#include "FortIncomingFriendRequestToast.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortIncomingFriendRequestToast : public UFortToastWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_NumMutualFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RelationshipStatus;
    
public:
    UFortIncomingFriendRequestToast();

};

