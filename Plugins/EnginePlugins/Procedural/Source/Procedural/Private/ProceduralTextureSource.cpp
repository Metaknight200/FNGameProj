#include "ProceduralTextureSource.h"

FProceduralTextureSource::FProceduralTextureSource() {
    this->bUseRenderTarget = false;
    this->Texture = NULL;
    this->RenderTarget = NULL;
    this->RenderTargetMaterial = NULL;
    this->bStretchToFit = false;
    this->TexelSize = 0.00f;
    this->XOffset = 0.00f;
    this->YOffset = 0.00f;
    this->Rotation = 0.00f;
}

