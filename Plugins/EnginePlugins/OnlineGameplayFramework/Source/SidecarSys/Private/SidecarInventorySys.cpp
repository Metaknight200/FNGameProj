#include "SidecarInventorySys.h"

USidecarInventorySys::USidecarInventorySys() {
    this->InventoryDownloadUrl = TEXT("/api/inventory/v2/player/`account_id/`inventory_name");
    this->InventoryLockUrl = TEXT("/api/inventory/v2/player/`account_id/`inventory_name/lock");
    this->ItemUpdateUrl = TEXT("/api/inventory/v2/player/`account_id/`inventory_name/update");
}


