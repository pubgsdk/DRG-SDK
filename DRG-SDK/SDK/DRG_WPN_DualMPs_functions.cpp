// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_DualMPs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_DualMPs.WPN_DualMPs_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_DualMPs_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DualMPs.WPN_DualMPs_C.GetGearStatEntry");

	struct
	{
		class AFSDPlayerState*         PlayerState;
		TArray<struct FGearStatEntry>  Stats;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_DualMPs.WPN_DualMPs_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_DualMPs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DualMPs.WPN_DualMPs_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DualMPs.WPN_DualMPs_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_DualMPs_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DualMPs.WPN_DualMPs_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DualMPs.WPN_DualMPs_C.ExecuteUbergraph_WPN_DualMPs
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_DualMPs_C::ExecuteUbergraph_WPN_DualMPs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DualMPs.WPN_DualMPs_C.ExecuteUbergraph_WPN_DualMPs");

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
