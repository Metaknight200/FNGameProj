#pragma once
#include "CoreMinimal.h"
#include "Components/NamedSlotInterface.h"
#include "Components/Widget.h"
#include "EModalContainerSize.h"
#include "FortModalContainerSizeEntry.h"
#include "FortModalContainerWidget.generated.h"

class UFortModalContainerData;

UCLASS(Blueprintable)
class UFortModalContainerWidget : public UWidget, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModalContainerSize SizeConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortModalContainerSizeEntry> DefaultSizeEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortModalContainerData* OverrideSizeEntries;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TopContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MiddleContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BottomContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BackgroudContent;
    
public:
    UFortModalContainerWidget();


    // Fix for true pure virtual functions not being implemented
public:
    virtual void GetSlotNames(TArray<FName>& Names) const override { Names.Append({"TopContent", "MiddleContent", "BottomContent", "BackgroudContent"}); }
    virtual UWidget* GetContentForSlot(FName Name) const override {
        if (Name == "TopContent") return TopContent;
        if (Name == "MiddleContent") return MiddleContent;
        if (Name == "BottomContent") return BottomContent;
        if (Name == "BackgroudContent") return BackgroudContent;
        return nullptr;
    }
    virtual void SetContentForSlot(FName Name, UWidget* Content) override {
        if (Name == "TopContent") TopContent = Content;
        else if (Name == "MiddleContent") MiddleContent = Content;
        else if (Name == "BottomContent") BottomContent = Content;
        else if (Name == "BackgroudContent") BackgroudContent = Content;
    }
};

