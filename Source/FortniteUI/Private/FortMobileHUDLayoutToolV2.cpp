#include "FortMobileHUDLayoutToolV2.h"

UFortMobileHUDLayoutToolV2::UFortMobileHUDLayoutToolV2() {
    this->OverlapPercentageToColapsePanels = 1.00f;
    this->NonEditableHUDWidgetOpacity = 0.50f;
    this->PanelOpacityWhenDragedOver = 0.40f;
    this->OnOpenSubPanelAnimPlaybackSpeed = 0.40f;
    this->HUDWidgetRegistry = NULL;
    this->HudLayoutToolPopupClass = NULL;
    this->HudLayoutToolTutorialPopupClass = NULL;
    this->DoubleClickDelay = 0.30f;
    this->SelectedWidgetProxy = NULL;
    this->VirtualCanvas_WidgetLayer = NULL;
    this->HUDLayer_HUDWidgetProxies = NULL;
    this->Overlay_VirtualCanvasWorkspace = NULL;
    this->Grid_Visual = NULL;
    this->Text_ProfileName = NULL;
    this->Text_WidgetName = NULL;
    this->Text_ContextName = NULL;
    this->Button_Exit = NULL;
    this->Button_ResetVirtualCanvas = NULL;
    this->Button_ToggleControlPanel = NULL;
    this->Button_ToggleWidgetCatalog = NULL;
    this->CanvasPanel_ControlsContainer = NULL;
    this->VerticalBox_ControlPanelContainer = NULL;
    this->ControlPanel_Controls = NULL;
    this->ProfileSelectionPanel_Profiles = NULL;
    this->WidgetCatalog_Catalog = NULL;
    this->LinkAcrossPanel_LinkManagementWindow = NULL;
    this->Anim_ControlPanelToggle = NULL;
    this->Anim_ToggleWidgetCatalog = NULL;
    this->Toaster_Notifications = NULL;
    this->TooltipLayer_Messages = NULL;
}


