#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Templates/SubclassOf.h"
#include "FortCommunityVotingOption.generated.h"

class UFortCommunityVotingFeedback;
class UFortCommunityVotingManager;
class UFortCommunityVotingOptionPreview;
class UFortCommunityVotingVoteCounter;
class UFortDirectAcquisitionOfferDetailsWidget;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingOption : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingManager* VotingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDirectAcquisitionOfferDetailsWidget> PreviewDetailWidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* ComOptionVote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* ComOptionDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingVoteCounter* FlameCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingFeedback> VoteFeedbackClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingOptionPreview* ComOptionPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ComVoteFeedbackContainer;
    
public:
    UFortCommunityVotingOption();

    UFUNCTION(BlueprintCallable)
    bool HaveVotesRemaining();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableButtons();
    
};

