#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Animation/SkeletalMeshActor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BoneSetVisibilityInterface.h"
#include "CustomCharacterPartOwnerInterface.h"
#include "CustomizationItemInterface.h"
#include "EFortCustomGender.h"
#include "EFortCustomPartType.h"
#include "McpVariantChannelInfo.h"
#include "MorphValuePair.h"
#include "FortPlayerMannequin.generated.h"

class UAthenaBackpackItemDefinition;
class UAthenaCharacterItemDefinition;
class UAthenaCosmeticItemDefinition;
class UAudioComponent;
class UCustomCharacterPart;
class UCustomColorComponent;
class UCustomColorSwatch;
class UFortCustomizationAssetLoader;
class UFortHeroType;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerMannequin : public ASkeletalMeshActor, public ICustomCharacterPartOwnerInterface, public ICustomizationItemInterface, public IBoneSetVisibilityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHeroType* CurrentFortHeroType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterItemDefinition* AthenaCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBackpackItemDefinition* AthenaBackBling;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UAudioComponent*> EmoteAudioCompsMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* CharacterParts[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels MannequinLightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MannequinBoundsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMannequinVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMannequinCastsHiddenShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 LoadsPending;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* CharacterPartList[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> OverrideVariants;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterPartColorSwatches[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* ColorSwatchesForCharacterParts[7];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorComponent* AccessoryColorSwatchHandler[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* ColorSwatches[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* WeaponSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorphValuePair> MorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegisterWithBudgetAllocator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCustomizationAssetLoader* CustomizationAssetLoader;
    
public:
    AFortPlayerMannequin(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMorphTargets();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleGenderBP();
    
    UFUNCTION(BlueprintCallable)
    bool SetWeaponSkeletalMesh(USkeletalMesh* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMesh(USkeletalMesh* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    bool SetPart(TEnumAsByte<EFortCustomPartType::Type> Part, UCustomCharacterPart* PartAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetMannequinLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    
    UFUNCTION(BlueprintCallable)
    void SetHeroType(UFortHeroType* NewHeroType);
    
    UFUNCTION(BlueprintCallable)
    void SetAthenaCharacterDefAndVariants(UAthenaCharacterItemDefinition* NewAthenaCharacter, const TArray<FMcpVariantChannelInfo>& InOverrideVariants);
    
    UFUNCTION(BlueprintCallable)
    void SetAthenaBackpackDefAndVariants(UAthenaBackpackItemDefinition* NewAthenaBackpack, const TArray<FMcpVariantChannelInfo>& InOverrideVariants);
    
    UFUNCTION(BlueprintCallable)
    void ResetAthenaCharacterDefAndVariants(UAthenaCharacterItemDefinition* NewAthenaCharacter, const TArray<FMcpVariantChannelInfo>& InOverrideVariants);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePart(TEnumAsByte<EFortCustomPartType::Type> Part);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnVariantChanged(FGameplayTag VariantChannel, FGameplayTag OldVariantTag, FGameplayTag NewVariantTag);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPartChanged(const UCustomCharacterPart* OldPart, const UCustomCharacterPart* NewPart, EFortCustomPartType::Type PartType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleReInitializeComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetPartSkeletalMeshComponent(TEnumAsByte<EFortCustomPartType::Type> Part) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EFortCustomGender::Type> GetGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetEmoteAudioComponent(const FName InSoundId) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UCustomCharacterPart*> GetCustomCharacterParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaCharacterItemDefinition* GetAthenaCharacterItemDefinition() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllPartSkeletalMeshComponents(TArray<USkeletalMeshComponent*>& SkeletalMeshComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GatherMetaTags(const UAthenaCosmeticItemDefinition* CosmeticItem) const;
    
    UFUNCTION(BlueprintCallable)
    bool CyclePartBP(TEnumAsByte<EFortCustomPartType::Type> Part, bool bNextPart);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChoosePartsForHeroType(UFortHeroType* HeroType, const TArray<FMcpVariantChannelInfo> InOverrideVariants, const bool bClearOldParts);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void PlayAnimationsMatchingQuery(const FGameplayTagQuery& TagQueryToMatch) override PURE_VIRTUAL(PlayAnimationsMatchingQuery,);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetCustomizationRootSkeletalMeshComponent() const override PURE_VIRTUAL(GetCustomizationRootSkeletalMeshComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationCosmeticItemAndVariants(UAthenaCosmeticItemDefinition* NewCosmeticItemDefinition, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) override PURE_VIRTUAL(SetCustomizationCosmeticItemAndVariants,);
    
    UFUNCTION(BlueprintCallable)
    void ResetCustomizationCosmeticItemAndVariants(UAthenaCosmeticItemDefinition* NewCosmeticItemDefinition, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) override PURE_VIRTUAL(ResetCustomizationCosmeticItemAndVariants,);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetCustomizationItemRotatableSceneComponent() const override PURE_VIRTUAL(GetCustomizationItemRotatableSceneComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UAthenaCosmeticItemDefinition* GetCustomizationCosmeticItem() const override PURE_VIRTUAL(GetCustomizationCosmeticItem, return NULL;);
    
};

