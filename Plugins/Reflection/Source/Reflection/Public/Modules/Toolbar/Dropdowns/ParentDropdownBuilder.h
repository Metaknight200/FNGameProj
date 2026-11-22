/* Copyright Reflection Contributors 2024-2026 */

#pragma once

#include "CoreMinimal.h"
#include "Engine/Compatibility.h"

#include "Framework/MultiBox/MultiBoxBuilder.h"

/* What every section of the dropdown is built through */
struct IParentDropdownBuilder {
	virtual ~IParentDropdownBuilder() = default;
	virtual void Build(FMenuBuilder& MenuBuilder) const = 0;
};
