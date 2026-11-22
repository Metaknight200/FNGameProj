#pragma once
#include "CoreMinimal.h"
#include "AthenaSpatialItemPreviewScreen.h"
#include "AthenaSpatialStyleChallengeScreen.generated.h"

class UAthenaSpatialStyleChallengeDetails;
class UAthenaSpatialStyleChallengeScreenData;
class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialStyleChallengeScreen : public UAthenaSpatialItemPreviewScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_CharacterChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* ButtonGroup_CharacterChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialStyleChallengeDetails* ChallengeDetails_CharacterDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaSpatialStyleChallengeScreenData* StyleChallengeData;
    
public:
    UAthenaSpatialStyleChallengeScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowFirstTimeInfo();
    
};

