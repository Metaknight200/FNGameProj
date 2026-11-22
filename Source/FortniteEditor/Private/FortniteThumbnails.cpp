#include "FortniteThumbnails.h"
#include "AthenaCharacterItemDefinition.h"
#include "AthenaLoadingScreenItemDefinition.h"
#include "BuildingTextureData.h"
#include "CustomCharacterPart.h"
#include "FortHeroType.h"
#include "FortItemDefinition.h"
#include "Engine/Texture2D.h"
#include "Engine/SkeletalMesh.h"

namespace {
UTexture2D* FindItemIcon(UFortItemDefinition* Item) {
    if (!Item) return nullptr;
    if (UTexture2D* Icon = Item->GetLargePreviewImage().LoadSynchronous()) return Icon;
    if (UTexture2D* Icon = Item->GetSmallPreviewImage().LoadSynchronous()) return Icon;
    return Item->GetWidePreviewImage().LoadSynchronous();
}
UTexture2D* FindIcon(UObject* Object) {
    UFortItemDefinition* Item = Cast<UFortItemDefinition>(Object);
    if (UTexture2D* Icon = FindItemIcon(Item)) return Icon;
    if (UAthenaCharacterItemDefinition* Character = Cast<UAthenaCharacterItemDefinition>(Object)) {
        return FindItemIcon(Character->HeroDefinition);
    }
    if (UAthenaLoadingScreenItemDefinition* LoadingScreen = Cast<UAthenaLoadingScreenItemDefinition>(Object)) {
        if (UTexture2D* Image = LoadingScreen->BackgroundImage.LoadSynchronous()) return Image;
        return Cast<UTexture2D>(LoadingScreen->BackgroundMaterialOrTexture.LoadSynchronous());
    }
    return nullptr;
}
}

bool UFortItemDefinitionThumbnailRenderer::CanVisualizeAsset(UObject* Object) { return FindIcon(Object) != nullptr; }
void UFortItemDefinitionThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height,
    FRenderTarget* Target, FCanvas* Canvas, bool bAdditionalViewFamily) {
    if (UTexture2D* Icon = FindIcon(Object)) Super::Draw(Icon, X, Y, Width, Height, Target, Canvas, bAdditionalViewFamily);
}
bool UFortCharacterPartThumbnailRenderer::CanVisualizeAsset(UObject* Object) {
    UCustomCharacterPart* Part = Cast<UCustomCharacterPart>(Object);
    return Part && Part->GetSkeletalMesh();
}
void UFortCharacterPartThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height,
    FRenderTarget* Target, FCanvas* Canvas, bool bAdditionalViewFamily) {
    UCustomCharacterPart* Part = Cast<UCustomCharacterPart>(Object);
    if (Part && Part->GetSkeletalMesh()) Super::Draw(Part->GetSkeletalMesh(), X, Y, Width, Height, Target, Canvas, bAdditionalViewFamily);
}
bool UFortBuildingTextureThumbnailRenderer::CanVisualizeAsset(UObject* Object) {
    UBuildingTextureData* Data = Cast<UBuildingTextureData>(Object);
    return Data && Data->Diffuse;
}
void UFortBuildingTextureThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height,
    FRenderTarget* Target, FCanvas* Canvas, bool bAdditionalViewFamily) {
    UBuildingTextureData* Data = Cast<UBuildingTextureData>(Object);
    if (Data && Data->Diffuse) Super::Draw(Data->Diffuse, X, Y, Width, Height, Target, Canvas, bAdditionalViewFamily);
}
