#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BoneSetVisibilityInterface.h"
#include "CustomCharacterPartOwnerInterface.h"
#include "EFortCustomPartType.h"
#include "PartStackEntry.h"
#include "FortCharacterPartsComponent.generated.h"

class UCustomCharacterPart;
class UFortCustomizationAssetLoader;
class USkeletalMeshComponent;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCharacterPartsComponent : public UActorComponent, public ICustomCharacterPartOwnerInterface, public IBoneSetVisibilityInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCustomizationAssetLoader* CustomizationAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterParts, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CharacterPartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponentBudgeted*> SkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPartStackEntry> CharacterPartStack;
    
public:
    UFortCharacterPartsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool RestoreParts();
    
    UFUNCTION(BlueprintCallable)
    bool RemovePartByGameplayTag(FGameplayTag PartTag);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePart(TEnumAsByte<EFortCustomPartType::Type> PartType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllParts();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterParts(TArray<UCustomCharacterPart*> PreviousParts);
    
public:
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMeshForPartType(TEnumAsByte<EFortCustomPartType::Type> PartType);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMeshForPartTag(FGameplayTag PartTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<USkeletalMeshComponent*> GetSkeletalMeshesForAllParts();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyParts(const TArray<UCustomCharacterPart*>& Parts);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void PlayAnimationsMatchingQuery(const FGameplayTagQuery& TagQueryToMatch) override PURE_VIRTUAL(PlayAnimationsMatchingQuery,);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetCustomizationRootSkeletalMeshComponent() const override PURE_VIRTUAL(GetCustomizationRootSkeletalMeshComponent, return NULL;);
    
};

