#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortMediaCDNWarmer.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortMediaCDNWarmer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CDNDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoClearCDNDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarmLive;
    
    UFortMediaCDNWarmer();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
};

