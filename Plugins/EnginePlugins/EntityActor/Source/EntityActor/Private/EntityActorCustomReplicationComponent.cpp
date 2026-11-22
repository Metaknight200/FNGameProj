#include "EntityActorCustomReplicationComponent.h"

UEntityActorCustomReplicationComponent::UEntityActorCustomReplicationComponent() {
    this->ReplicationOverride = AutoReplication;
    this->ReplicationRelevancyBucketType = UseVisualCullDistanceForReplicationRelevancy;
    this->CustomReplicationRelevancyRange = 0.00f;
}


