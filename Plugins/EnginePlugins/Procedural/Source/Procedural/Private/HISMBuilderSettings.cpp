#include "HISMBuilderSettings.h"

UHISMBuilderSettings::UHISMBuilderSettings() {
    this->Mobility = EComponentMobility::Static;
    this->bCastShadow = true;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastDynamicShadow = true;
    this->bCastStaticShadow = true;
    this->bCastShadowAsTwoSided = false;
    this->bReceivesDecals = false;
    this->bOverrideLightMapRes = false;
    this->OverriddenLightMapRes = 8;
    this->LightmapType = ELightmapType::Default;
    this->bUseAsOccluder = false;
    this->CustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->CustomDepthStencilValue = 0;
    this->TranslucencySortPriority = 0;
    this->bEnableDensityScaling = false;
    this->VirtualTextureCullMips = 0;
    this->VirtualTextureRenderPassType = ERuntimeVirtualTextureMainPassType::Exclusive;
}

void UHISMBuilderSettings::SetOverriddenLightMapRes(int32 Value) {
}

int32 UHISMBuilderSettings::GetOverriddenLightMapRes() const {
    return OverriddenLightMapRes;
}


