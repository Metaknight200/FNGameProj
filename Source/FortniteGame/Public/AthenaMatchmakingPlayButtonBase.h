#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "FortPublicAccountInfo.h"
#include "AthenaMatchmakingPlayButtonBase.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UAthenaMatchmakingPlayButtonBase : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Mobile_FTUE_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Mobile_FTUE_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Mobile_FTUE_Anim;
    
public:
    UAthenaMatchmakingPlayButtonBase();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo);
    
};

