#include "FortProfileGo.h"

UFortProfileGo::UFortProfileGo() {
    this->ProfileGoScenarios.AddDefaulted(202);
    this->ProfileGoGeneratedScenarios.AddDefaulted(2);
    this->ProfileGoCollections.AddDefaulted(26);
    this->AllCommands.AddDefaulted(98);
    this->AnimProfilingAssetsBlacklist.AddDefaulted(26);
    this->DefaultSettleTime = 5.00f;
}


