#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BoneContainer.h"
#include "Interfaces/Interface_BoneReferenceSkeletonProvider.h"
#include "Engine/EngineTypes.h"
#include "LiveLinkTestSkelMeshTrackerComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LSALIVELINK_API ULiveLinkTestSkelMeshTrackerComponent : public UActorComponent, public IBoneReferenceSkeletonProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TranslationProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference SkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> WeakSkelMeshComp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> BonesToTrack;
    
public:
    ULiveLinkTestSkelMeshTrackerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTrackingSkelMesh();
    
    UFUNCTION(BlueprintCallable)
    void StartTrackingSkelMesh(FName InSubjectName);
    

    // Fix for true pure virtual functions not being implemented
};

