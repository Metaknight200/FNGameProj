#include "CustomCharacterPart.h"
#include "Materials/MaterialInterface.h"
#if WITH_EDITOR
#include "UObject/UnrealType.h"
#include "CustomCharacterHeadData.h"
#include "CustomCharacterBodyPartData.h"
#include "CustomCharacterHatData.h"
#include "CustomCharacterBackpackData.h"
#include "CustomCharacterCharmData.h"
#include "CustomCharacterFaceData.h"
#endif

UCustomCharacterPart::UCustomCharacterPart() {
    this->GenderPermitted = EFortCustomGender::Male;
    this->BodyTypesPermitted = EFortCustomBodyType::All;
    this->CharacterPartType = EFortCustomPartType::Head;
    this->bShouldHideBonesForThisPart = true;
    this->bGameplayRelevantCosmeticPart = false;
    this->bAttachToSocket = true;
    this->bIgnorePart = false;
    this->AdditionalData = NULL;
    this->FrontEndBackPreviewRotationOffset = 0.00f;
    this->bSinglePieceMesh = false;
    this->bSupportsColorSwatches = true;
    this->bAllowStaticRenderPath = false;
    this->MaterialOverrideFlags = 0;
    this->IgnoredMaterialOverrideFlags = 0;
    this->bUseIdleFXNativeCustomAttachmentParams = false;
    this->bAutoActivate = false;
    this->AuthoredData = NULL;
}

bool UCustomCharacterPart::ShouldAutoActivate() const {
    return bAutoActivate;
}

USkeletalMesh* UCustomCharacterPart::GetSkeletalMesh() const {
    return SkeletalMesh.LoadSynchronous();
}

TEnumAsByte<EFortCustomPartType::Type> UCustomCharacterPart::GetPartType() const {
    return CharacterPartType;
}

TMap<int32, UMaterialInterface*> UCustomCharacterPart::GetMaterialOverridesByIndex() {
    TMap<int32, UMaterialInterface*> Result;
    for (const FCustomPartMaterialOverrideData& Override : MaterialOverrides) {
        if (UMaterialInterface* Material = Override.OverrideMaterial.LoadSynchronous()) {
            Result.Add(Override.MaterialOverrideIndex, Material);
        }
    }
    return Result;
}

FName UCustomCharacterPart::GetIdleFXSocketName() const {
    return IdleFXSocketName;
}

TSoftObjectPtr<UNiagaraSystem> UCustomCharacterPart::GetEffectNiagara() const {
    return IdleEffectNiagara;
}

TSoftObjectPtr<UParticleSystem> UCustomCharacterPart::GetEffectCascade() const {
    return IdleEffect;
}

TEnumAsByte<EFortCustomPartType::Type> UCustomCharacterPart::GetCharacterPartType() const {
    return CharacterPartType;
}

#if WITH_EDITOR
void UCustomCharacterPart::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
    if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCustomCharacterPart, CharacterPartType)) {
        UClass* DataClass = nullptr;
        switch (CharacterPartType.GetValue()) {
        case EFortCustomPartType::Head: DataClass = UCustomCharacterHeadData::StaticClass(); break;
        case EFortCustomPartType::Body: DataClass = UCustomCharacterBodyPartData::StaticClass(); break;
        case EFortCustomPartType::Hat: DataClass = UCustomCharacterHatData::StaticClass(); break;
        case EFortCustomPartType::Backpack: DataClass = UCustomCharacterBackpackData::StaticClass(); break;
        case EFortCustomPartType::MiscOrTail: DataClass = UCustomCharacterCharmData::StaticClass(); break;
        case EFortCustomPartType::Face: DataClass = UCustomCharacterFaceData::StaticClass(); break;
        default: break;
        }
        if (DataClass && (!AdditionalData || !AdditionalData->IsA(DataClass))) {
            Modify();
            AdditionalData = NewObject<UCustomCharacterPartData>(this, DataClass, NAME_None, RF_Transactional);
        }
    }
    Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif


