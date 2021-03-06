// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MAG_Flamethrower_BottleTP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.Released
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AMAG_Flamethrower_BottleTP_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.Released");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMAG_Flamethrower_BottleTP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.DoRelease
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMAG_Flamethrower_BottleTP_C::DoRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.DoRelease");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.ExecuteUbergraph_MAG_Flamethrower_BottleTP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMAG_Flamethrower_BottleTP_C::ExecuteUbergraph_MAG_Flamethrower_BottleTP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.ExecuteUbergraph_MAG_Flamethrower_BottleTP");

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
