#pragma once
#include "CoreMinimal.h"
#include "ThumbnailRendering/TextureThumbnailRenderer.h"
#include "ThumbnailRendering/SkeletalMeshThumbnailRenderer.h"
#include "FortniteThumbnails.generated.h"

UCLASS()
class UFortItemDefinitionThumbnailRenderer : public UTextureThumbnailRenderer {
    GENERATED_BODY()
public:
    virtual bool CanVisualizeAsset(UObject* Object) override;
    virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height,
        FRenderTarget* Target, FCanvas* Canvas, bool bAdditionalViewFamily) override;
};

UCLASS()
class UFortCharacterPartThumbnailRenderer : public USkeletalMeshThumbnailRenderer {
    GENERATED_BODY()
public:
    virtual bool CanVisualizeAsset(UObject* Object) override;
    virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height,
        FRenderTarget* Target, FCanvas* Canvas, bool bAdditionalViewFamily) override;
};

UCLASS()
class UFortBuildingTextureThumbnailRenderer : public UTextureThumbnailRenderer {
    GENERATED_BODY()
public:
    virtual bool CanVisualizeAsset(UObject* Object) override;
    virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height,
        FRenderTarget* Target, FCanvas* Canvas, bool bAdditionalViewFamily) override;
};
