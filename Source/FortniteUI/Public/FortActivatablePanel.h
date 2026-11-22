#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "EInputPriority.h"
#include "FortPrimaryContentInterface.h"
#include "PrimaryContentSetup.h"
#include "FortActivatablePanel.generated.h"

class UObject;
class USoundBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortActivatablePanel : public UCommonActivatablePanelLegacy, public IFortPrimaryContentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPushedOnToContentPanelStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlreadyOnContentPanelStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputPriority InputPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClosableByPlayerInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryContentSetup PrimaryContentSetup;
    
public:
    UFortActivatablePanel();

    UFUNCTION(BlueprintCallable)
    void RestoreScrollWidget(UWidget* FallbackWidget);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCenterWidget(UWidget* FallbackWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    void AsyncPlaySound2D(const UObject* WorldContextObject, TSoftObjectPtr<USoundBase> SoundToLoad, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    

    // Fix for true pure virtual functions not being implemented
};

