#include "FortCreativeIslandSelectCodeTab.h"

UFortCreativeIslandSelectCodeTab::UFortCreativeIslandSelectCodeTab() {
    this->Button_Select = NULL;
    this->EditableText_IslandLink = NULL;
    this->IslandDetailsPanel = NULL;
    this->Button_Favorite = NULL;
    this->Widget_LaunchError = NULL;
    this->ActivityProvider = NULL;
    this->LastActivityQueried = NULL;
    this->UserEnteredActivity = NULL;
}




void UFortCreativeIslandSelectCodeTab::HandleActivityCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo) {
}

void UFortCreativeIslandSelectCodeTab::HandleActivityChanged(const FText& Text) {
}


