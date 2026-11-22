#include "FortServerBrowserListView.h"

UFortServerBrowserListView::UFortServerBrowserListView() : Super(FObjectInitializer::Get()) {
    this->Orientation = Orient_Horizontal;
    this->EntrySpacing = 0.00f;
    this->CreativeServerInfoTileEntryClass = NULL;
    this->ServerActionTileEntryClass = NULL;
    this->OwnServerActionTileEntryClass = NULL;
    this->PlaylistSelectionActionTileEntryClass = NULL;
}


