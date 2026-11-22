#include "FortFrontendLevelScriptActor.h"

AFortFrontendLevelScriptActor::AFortFrontendLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TSoftObjectPtr<AFortItemPreviewPedestal> AFortFrontendLevelScriptActor::GetHeroLoadoutPreviewPedestalActor() const {
    return NULL;
}

AFortFrontendLevelScriptActor* AFortFrontendLevelScriptActor::GetFrontendLevelScript(UObject* WorldContextObject) {
    return NULL;
}

TSoftObjectPtr<AFortItemPreviewPedestal> AFortFrontendLevelScriptActor::GetCommanderPreviewPedestalActor() const {
    return NULL;
}


