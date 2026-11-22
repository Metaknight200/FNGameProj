#include "FortCurieFirePropagationManagerConfig.h"

UFortCurieFirePropagationManagerConfig::UFortCurieFirePropagationManagerConfig() {
    this->TickInterval = 0.00f;
    this->FirePropagationDelay = 1.00f;
    this->MinPropagationFuel = 1.00f;
    this->DefaultPropagationFuel = 20.00f;
    this->MaxPropagationFuel = 30.00f;
    this->DefaultPropagationFuelCost = 1.00f;
    this->IncompletePropagationRefundFuelMultiplier = 0.50f;
    this->InactiveFireFailsafeRemovalTime = 20.00f;
    this->MaximumPendingInteractTimePerTick = 0.00f;
    this->PropagationApplicationMagnitude = 10.00f;
    this->HalfAngleForUpwardMobilityCalculation = 45.00f;
    this->PropagationLimit = 200;
    this->MinimumPendingInteractsToProcessPerTick = 8;
    this->DefaultConnectivityPoints = 2;
    this->bAllowPropagationFuelOverrides = true;
    this->FireElementSubgridOverlapThreshold = 16.00f;
    this->BuildingFirePropagationTickInterval = 0.50f;
    this->GrassFirePropagationInterval = 0.50f;
    this->GrassFireBurnoutInterval = 2.50f;
    this->GrassFireInitialPropagationDelay = 1.50f;
    this->GrassFireMinPropagationDelay = 1.50f;
    this->GrassFireMaxPropagationDelay = 2.50f;
    this->GrassFireBurnoutTime = 10.00f;
    this->GrassMaxWaterContent = 10.00f;
    this->GrassWaterContentChangeOnFireApplication = 1.00f;
    this->GrassWaterContentChangeOnWaterApplication = 1.00f;
    this->GrassFirePropagationCostPerLocation = 1.00f;
    this->GrassTraceLandscapeOffset = 10.00f;
    this->FireFoundationGrassDefaultExpansion = 128.00f;
    this->GrassFirePropagationRate = 2;
    this->GrassGridCellsPerAxisManagedByGrassFireReplicator = 8;
    this->GrassGridFireMinimumTraceOptimization = 24;
    this->GrassFirePropagationFuelConsumptionLimit = 5;
    this->bUseLandscapeMapForGrassGrid = true;
    this->bUseIFACacheForGrassGrid = true;
}


