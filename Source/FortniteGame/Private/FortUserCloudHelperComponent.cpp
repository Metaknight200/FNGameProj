#include "FortUserCloudHelperComponent.h"

UFortUserCloudHelperComponent::UFortUserCloudHelperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastIssuedRequestHandle = 0;
    this->SaveSizeCompressionThreshold = 256000;
}


