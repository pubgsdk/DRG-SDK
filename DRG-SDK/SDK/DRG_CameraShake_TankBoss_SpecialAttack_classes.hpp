#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CameraShake_TankBoss_SpecialAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShake_TankBoss_SpecialAttack.CameraShake_TankBoss_SpecialAttack_C
// 0x0000 (0x0160 - 0x0160)
class UCameraShake_TankBoss_SpecialAttack_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CameraShake_TankBoss_SpecialAttack.CameraShake_TankBoss_SpecialAttack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
