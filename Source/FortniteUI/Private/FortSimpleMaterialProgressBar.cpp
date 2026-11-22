#include "FortSimpleMaterialProgressBar.h"

UFortSimpleMaterialProgressBar::UFortSimpleMaterialProgressBar() {
    this->bOverrideDefaultColorA = false;
    this->bOverrideDefaultColorB = false;
    this->bOverrideDefaultColorBackground = false;
    this->bOverrideDefaultSegments = false;
    this->Segments = 0;
    this->bOverrideDefaultSegmentEdge = false;
    this->SegmentEdge = 0.00f;
    this->bOverrideDefaultFillEdgeSoftness = false;
    this->FillEdgeSoftness = 0.00f;
    this->bOverrideDefaultGlowEdge = false;
    this->GlowEdge = 0.00f;
    this->bOverrideDefaultGlowSoftness = false;
    this->GlowSoftness = 0.00f;
    this->bOverrideDefaultOutlineScale = false;
    this->OutlineScale = 0.00f;
    this->bUseStroke = true;
    this->StrokeMaterial = NULL;
    this->NoStrokeMaterial = NULL;
    this->Image_Bar = NULL;
    this->BoundAnim_FillBar = NULL;
    this->CachedMID = NULL;
}

void UFortSimpleMaterialProgressBar::SetStartProgress(float StartProgress) {
}

void UFortSimpleMaterialProgressBar::SetProgress(float Progress) {
}

void UFortSimpleMaterialProgressBar::SetColorBackground(FLinearColor ColorBackground) {
}

void UFortSimpleMaterialProgressBar::SetColorB(FLinearColor ColorB) {
}

void UFortSimpleMaterialProgressBar::SetColorA(FLinearColor ColorA) {
}

void UFortSimpleMaterialProgressBar::AnimateProgressFromStart(float Start, float End, float AnimSpeed) {
}

void UFortSimpleMaterialProgressBar::AnimateProgressFromCurrent(float End, float AnimSpeed) {
}


