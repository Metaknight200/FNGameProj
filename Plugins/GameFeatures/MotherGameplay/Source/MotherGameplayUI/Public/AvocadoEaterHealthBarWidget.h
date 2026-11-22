#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "EventMessageTag.h"
#include "AvocadoEaterHealthBarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAvocadoEaterHealthBarWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag AttachedMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag DetachedMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag SetMarkerPositionMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag TargetDamagedMessageTag;
    
public:
    UAvocadoEaterHealthBarWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetDamaged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMarkerPosition(float MarkerPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParasiteDetached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParasiteAttached();
    
};

