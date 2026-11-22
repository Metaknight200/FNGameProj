#include "WeightedActorClassListLibrary.h"
#include "Templates/SubclassOf.h"

UWeightedActorClassListLibrary::UWeightedActorClassListLibrary() {
}

TSubclassOf<AActor> UWeightedActorClassListLibrary::SelectRandomActorTypeFromList(const FFortWeightedActorTypeList& QueryList) {
    return NULL;
}

bool UWeightedActorClassListLibrary::IsListValid(const FFortWeightedActorTypeList& QueryList) {
    return false;
}


