#include "FortAnimationBlueprintLibrary.h"

UFortAnimationBlueprintLibrary::UFortAnimationBlueprintLibrary() {
}

void UFortAnimationBlueprintLibrary::UpdateAnimSpinner(FAnimSpinner& SpinInformation, float DeltaSeconds, float NewRotationRate) {
}

FVector UFortAnimationBlueprintLibrary::ReorientWindVector(FVector WindVector, const UCustomCharacterPartAnimInstance* PartAnimInstance, FName JointName) {
    return FVector{};
}

void UFortAnimationBlueprintLibrary::QueryPoseDeformation_Arms(const USkeletalMeshComponent* MeshComponent, FPoseDeformationQuery_Arms& ArmsDeformationQuery) {
}

void UFortAnimationBlueprintLibrary::QueryPoseDeformation(const USkeletalMeshComponent* MeshComponent, FPoseDeformationQuery& PoseDeformationQuery) {
}

float UFortAnimationBlueprintLibrary::PoseReader(const USkeletalMeshComponent* MeshComponent, FName StartJoint, FName EndJoint, FName PoseJoint, float Angle, bool bDrawDebug) {
    return 0.0f;
}

float UFortAnimationBlueprintLibrary::GetRelevantAnimTimeRemainingFromCachedData(FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance) {
    return 0.0f;
}

float UFortAnimationBlueprintLibrary::GetRelevantAnimTimeRemainingFractionFromCachedData(FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance) {
    return 0.0f;
}

float UFortAnimationBlueprintLibrary::GetRelevantAnimTimeFromCachedData(FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance) {
    return 0.0f;
}

FVector UFortAnimationBlueprintLibrary::GetRandomWindVector(float GameTime, float TimeOffset, float PerlinScale, FVector Frequency, FVector Amplitude, FVector Offset) {
    return FVector{};
}

FRotator UFortAnimationBlueprintLibrary::GetRandomWindRotator(float GameTime, float TimeOffset, float PerlinScale, FRotator Frequency, FRotator Amplitude, FRotator Offset) {
    return FRotator{};
}

void UFortAnimationBlueprintLibrary::GetAlphaFromReferenceTransformDelta(float& AlphaOutput, float& RawOutput, const USkinnedMeshComponent* SkeletalMeshComponent, const FName BoneName, const FName BaseName, TEnumAsByte<EAlphaFromDeltaTypes::Type> DeltaComponentType, FVector2D InputRange, FVector2D OutputRange, FVector TwistAxis) {
}


