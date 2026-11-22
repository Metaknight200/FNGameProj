#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortActivityDetailsDisplay.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UDynamicEntryBox;
class UScrollBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsDisplay : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntroDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetailsScrollStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetailsScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetailsScrollEndDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_ActivityOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActivityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActivityDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_ActivityDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_ActivityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DetailsIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DetailsOutro;
    
public:
    UFortActivityDetailsDisplay();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetWidgetState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOutroAnimationFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsFavoriteChanged(bool bIsFavorite);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetailsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDescriptionScrollRestarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivityEpicOriginal() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetCreatorTextFormat(const FText& CreatorName);
    
};

