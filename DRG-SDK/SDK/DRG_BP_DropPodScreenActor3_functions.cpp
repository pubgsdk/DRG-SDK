// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DropPodScreenActor3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPodScreenActor3.BP_DropPodScreenActor3_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPodScreenActor3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor3.BP_DropPodScreenActor3_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenActor3.BP_DropPodScreenActor3_C.TriggerCountdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPodScreenActor3_C::TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor3.BP_DropPodScreenActor3_C.TriggerCountdown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenActor3.BP_DropPodScreenActor3_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPodScreenActor3_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor3.BP_DropPodScreenActor3_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenActor3.BP_DropPodScreenActor3_C.ExecuteUbergraph_BP_DropPodScreenActor3
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPodScreenActor3_C::ExecuteUbergraph_BP_DropPodScreenActor3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor3.BP_DropPodScreenActor3_C.ExecuteUbergraph_BP_DropPodScreenActor3");

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
