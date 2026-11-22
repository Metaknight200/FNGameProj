#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaSpatialStyleCharacterData.h"
#include "AthenaSpatialStyleChallengeDetails.generated.h"

class UAthenaSpatialStyleChallengeUnlockReason;
class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UDynamicEntryBox;
class UFortGameStateComponent_EventLevel;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialStyleChallengeDetails : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PageRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* StyleRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Styles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* ButtonGroup_Styles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_Prerequisities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Prerequisites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_MainMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialStyleChallengeUnlockReason* QuestProgression_MainMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_PurchaseBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_EventLevel* EventGameStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAthenaSpatialStyleCharacterData CharacterData;
    
public:
    UAthenaSpatialStyleChallengeDetails();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStyleUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrerequisitesAndMissionUpdated(bool bLocked, const FText& CharacterName, const FText& StyleName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterUpdated();
    
};

