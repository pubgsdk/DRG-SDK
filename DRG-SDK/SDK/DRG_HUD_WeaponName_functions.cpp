// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_WeaponName_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_WeaponName.HUD_WeaponName_C.UpdateLabel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_WeaponName_C::UpdateLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.UpdateLabel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_WeaponName.HUD_WeaponName_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_WeaponName_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_WeaponName.HUD_WeaponName_C.OnItemEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_WeaponName_C::OnItemEquipped(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.OnItemEquipped");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_WeaponName.HUD_WeaponName_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_WeaponName_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_WeaponName.HUD_WeaponName_C.ExecuteUbergraph_HUD_WeaponName
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_WeaponName_C::ExecuteUbergraph_HUD_WeaponName(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.ExecuteUbergraph_HUD_WeaponName");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
