#pragma once
#include "CoreMinimal.h"
#include "PlaylistOptionColorValue.h"
#include "CreativePropertyEditWidgetUserOptionBase.h"
#include "CreativePropertyEditWidgetColorBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePropertyEditWidgetColorBase : public UCreativePropertyEditWidgetUserOptionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistOptionColorValue> ColorValues;
    
public:
    UCreativePropertyEditWidgetColorBase();

};

