#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "CommonGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class COMMONUI_API UCommonGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UCommonGameViewportClient();

};

