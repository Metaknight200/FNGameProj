#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDataAssetDirectoryUpdateStatus.h"
#include "PlaylistUserOptionEnum.h"
#include "PlaylistUserOptionDADCosmetic.generated.h"

UCLASS(Blueprintable)
class UPlaylistUserOptionDADCosmetic : public UPlaylistUserOptionEnum {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CosmeticItemUserOptionsListName;
    
public:
    UPlaylistUserOptionDADCosmetic();

    UFUNCTION(BlueprintCallable)
    void UpdateData();
    
    UFUNCTION(BlueprintCallable)
    void OnDADUpdateComplete(EDataAssetDirectoryUpdateStatus Result, const TArray<FPrimaryAssetId>& PatchedAssetIds);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

