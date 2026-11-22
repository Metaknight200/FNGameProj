#pragma once
#include "CoreMinimal.h"
#include "FortLocalPlayerSubsystem.h"
#include "FortActivityImageContext.generated.h"

class UTexture;

UCLASS(Blueprintable, MinimalAPI)
class UFortActivityImageContext : public UFortLocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture*> SmallCachedImageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture*> LargeCachedImageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PendingImageKeys;
    
public:
    UFortActivityImageContext();

};

