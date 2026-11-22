#pragma once
#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "CreateHUDWidgetDragDropOperation.generated.h"

UCLASS(Blueprintable)
class UCreateHUDWidgetDragDropOperation : public UDragDropOperation {
    GENERATED_BODY()
public:
    UCreateHUDWidgetDragDropOperation();

};

