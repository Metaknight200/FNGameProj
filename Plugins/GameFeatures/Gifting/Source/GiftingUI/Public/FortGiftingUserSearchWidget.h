#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Types/SlateEnums.h"
#include "FortGiftingUserSearchWidget.generated.h"

class UCommonButtonBase;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGiftingUserSearchWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_SearchFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ClearQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_SubmitQuery;
    
public:
    UFortGiftingUserSearchWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSearchCommit(bool bSearchStringShort);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSearchFriendsTextEntered(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleSearchFriendsTextChanged(const FText& Text);
    
};

