#pragma once
#include "CoreMinimal.h"
#include "FortUIStateWidgetBase.h"
#include "FortUIStateWidget_ForcedIntro.generated.h"

class UAthenaLoadingScreenItemDefinition;
class UCommonButtonLegacy;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortUIStateWidget_ForcedIntro : public UFortUIStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultIntroPlaylistName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_StartMatch;
    
public:
    UFortUIStateWidget_ForcedIntro();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void StartMatch();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UUserWidget> GetPlaylistLoadingScreenWidget() const;
    
};

