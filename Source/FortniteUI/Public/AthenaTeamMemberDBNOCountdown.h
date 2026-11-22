#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaTeamMemberDBNOCountdown.generated.h"

class AFortPlayerStateAthena;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaTeamMemberDBNOCountdown : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Timer;
    
public:
    UAthenaTeamMemberDBNOCountdown();

    UFUNCTION(BlueprintCallable)
    void SetPlayerState(AFortPlayerStateAthena* InPlayerState);
    
};

