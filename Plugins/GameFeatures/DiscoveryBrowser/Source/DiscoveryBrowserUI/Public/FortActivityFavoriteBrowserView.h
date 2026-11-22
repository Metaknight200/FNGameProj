#pragma once
#include "CoreMinimal.h"
#include "FortActivityPlayerBrowserView.h"
#include "FortActivityFavoriteBrowserView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityFavoriteBrowserView : public UFortActivityPlayerBrowserView {
    GENERATED_BODY()
public:
    UFortActivityFavoriteBrowserView();

};

