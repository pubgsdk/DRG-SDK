#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AFE_TP_DeepSnow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFE_TP_DeepSnow.AFE_TP_DeepSnow_C
// 0x0000 (0x0048 - 0x0048)
class UAFE_TP_DeepSnow_C : public UAttachedParticlesAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AFE_TP_DeepSnow.AFE_TP_DeepSnow_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
