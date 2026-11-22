/* Copyright Reflection Contributors 2024-2026 */

#pragma once

#include "CoreMinimal.h"

/* Only active while an import runs. Cloud paths remain source paths; packages and
 * references in the editor use the destination. Keeping Game and plugin mount
 * folders is controlled independently by the destination settings. */
class REFLECTION_API FImportDestination {
public:
	static FString Remap(const FString& Path);
	static FString Source(const FString& Path);
	static bool IsActive() { return !ActiveRoot.IsEmpty(); }
	static bool IsImporting() { return ScopeDepth > 0; }
	static bool Choose(FString& OutRoot);

	class REFLECTION_API FScope {
	public:
		explicit FScope(const FString& Root);
		~FScope();
		FScope(const FScope&) = delete;
		FScope& operator=(const FScope&) = delete;
	private:
		FString Previous;
	};
private:
	static FString ActiveRoot;
	static TMap<FString, FString> MappedPaths;
	static int32 ScopeDepth;
};
