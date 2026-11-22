/* Copyright Reflection Contributors 2024-2026 */

#include "Importers/Constructor/Graph/MaterialNodeSubstitute.h"

#include "Materials/MaterialExpressionCustom.h"

#include "Engine/Compatibility.h"

class FLengthSubstitute final : public FMaterialNodeSubstitute {
public:
	virtual bool Handles(const FName Type) const override {
		return Type == FName(TEXT("MaterialExpressionLength"));
	}

	virtual UMaterialExpression* Create(FMaterialSubstituteContext& Context) override {
		UObject* Parent = Context.GetParent();

		UMaterialExpressionCustom* Custom = NewObject<UMaterialExpressionCustom>(
			Parent,
			UMaterialExpressionCustom::StaticClass(),
			MakeUniqueObjectName(Parent, UMaterialExpressionCustom::StaticClass(), Context.GetName()),
			RF_Transactional
		);

		Custom->Code = TEXT("length(Input)");
		Custom->OutputType = CMOT_Float1;
		Custom->Description = TEXT("Length");
		Custom->bCollapsed = true;
		Custom->MaterialExpressionEditorX = Context.GetEditorX();
		Custom->MaterialExpressionEditorY = Context.GetEditorY();

		/* Keep the replacement collapsed when the source properties are propagated. */
		if (Context.GetProperties().IsValid()) {
			Context.GetProperties()->SetBoolField(TEXT("bCollapsed"), true);
		}

		Custom->Inputs.Empty();
		const int32 InputIndex = Custom->Inputs.AddDefaulted();
		SetExpressionName(Custom->Inputs[InputIndex].InputName, TEXT("Input"));

		Context.ConnectLater(Custom, InputIndex, Context.FindConnectedInput(TEXT("Input")));

		GLog->Log(*FString::Printf(TEXT("Reflection: Rebuilt MaterialExpressionLength \"%s\" as a custom expression"), *Context.GetBaseName()));

		return Custom;
	}
};

REGISTER_MATERIAL_NODE_SUBSTITUTE(FLengthSubstitute);
