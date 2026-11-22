#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CosmeticVariantInfo.h"
#include "ReactivePreviewSupportInterface.generated.h"

class AFortCosmeticReactivePreview;

UINTERFACE(Blueprintable)
class UReactivePreviewSupportInterface : public UInterface {
    GENERATED_BODY()
};

class IReactivePreviewSupportInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPreviewReactiveResponse(const FCosmeticVariantInfo& ChannelAndVariant, AFortCosmeticReactivePreview* Preview);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPreviewReactiveResponse(const FCosmeticVariantInfo& ChannelAndVariant, AFortCosmeticReactivePreview* Preview);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewReactiveSteppedUpdate(int32 CurrentValue, const FCosmeticVariantInfo& ChannelAndVariant, AFortCosmeticReactivePreview* Preview);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewReactiveSmoothUpdate(float CurrentValue, const FCosmeticVariantInfo& ChannelAndVariant, AFortCosmeticReactivePreview* Preview);
    
};

