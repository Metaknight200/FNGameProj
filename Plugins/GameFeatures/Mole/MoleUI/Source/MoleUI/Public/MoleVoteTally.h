#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoleVoteTally.generated.h"

class APlayerState;
class UCommonTileView;

UCLASS(Blueprintable, EditInlineNew)
class UMoleVoteTally : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> VoteList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* TileView_Votes;
    
public:
    UMoleVoteTally();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoteTallyStarted(bool bIsSkipTally);
    
};

