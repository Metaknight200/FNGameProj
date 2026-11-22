#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortPersistentResourceItemDefinition.generated.h"

class AFortItemPreviewActor;
class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPersistentResourceItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortItemPreviewActor> ItemPreviewActorClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExclusiveDesciption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ExclusiveIcon;
    
public:
    UFortPersistentResourceItemDefinition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventItem() const;
    
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AccountResource", GetFName());
    }
};

