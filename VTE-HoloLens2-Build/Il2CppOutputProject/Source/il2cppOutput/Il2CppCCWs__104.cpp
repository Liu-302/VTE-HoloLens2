﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct ValueOutputU5BU5D_tBAA15CCC547BD7B4BDA59FBAC0E7651F36652F84;
struct VariableDeclarationU5BU5D_tF1BD7460A89D2C75597E7A0AB98A098C02278F22;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VectorImageManagerU5BU5D_tED65E2CFA572B3026276D5E87498FCD9EAA5D73B;
struct ViewConfigurationU5BU5D_t9E0F2FDCAF2F8400EA19CD21ABE84CE2BD431060;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct VisualElementAssetU5BU5D_t4308B4E4264B586FCB93ADA8B53116C25C5597AA;
struct X509CertificateImplU5BU5D_tF7670421D516AF3E064DBA6E32AA03CED589795D;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3;
struct IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301;
struct IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9(IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A(IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct NOVTABLE IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() = 0;
};
struct List_1_tEB41A51F62077E42B72895E6E928E335175C7AB0  : public RuntimeObject
{
	ValueOutputU5BU5D_tBAA15CCC547BD7B4BDA59FBAC0E7651F36652F84* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDB31D6CDF9FDFD3940412D5D928C152FE501F1FB  : public RuntimeObject
{
	VariableDeclarationU5BU5D_tF1BD7460A89D2C75597E7A0AB98A098C02278F22* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00  : public RuntimeObject
{
	VectorImageManagerU5BU5D_tED65E2CFA572B3026276D5E87498FCD9EAA5D73B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE2B365AF138FFA7544A3A825DF752CE5F3ACC299  : public RuntimeObject
{
	ViewConfigurationU5BU5D_t9E0F2FDCAF2F8400EA19CD21ABE84CE2BD431060* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95  : public RuntimeObject
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE  : public RuntimeObject
{
	VisualElementAssetU5BU5D_t4308B4E4264B586FCB93ADA8B53116C25C5597AA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC  : public RuntimeObject
{
	X509CertificateImplU5BU5D_tF7670421D516AF3E064DBA6E32AA03CED589795D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33  : public RuntimeObject
{
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tEB41A51F62077E42B72895E6E928E335175C7AB0_StaticFields
{
	ValueOutputU5BU5D_tBAA15CCC547BD7B4BDA59FBAC0E7651F36652F84* ___s_emptyArray;
};
struct List_1_tDB31D6CDF9FDFD3940412D5D928C152FE501F1FB_StaticFields
{
	VariableDeclarationU5BU5D_tF1BD7460A89D2C75597E7A0AB98A098C02278F22* ___s_emptyArray;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray;
};
struct List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00_StaticFields
{
	VectorImageManagerU5BU5D_tED65E2CFA572B3026276D5E87498FCD9EAA5D73B* ___s_emptyArray;
};
struct List_1_tE2B365AF138FFA7544A3A825DF752CE5F3ACC299_StaticFields
{
	ViewConfigurationU5BU5D_t9E0F2FDCAF2F8400EA19CD21ABE84CE2BD431060* ___s_emptyArray;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_StaticFields
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___s_emptyArray;
};
struct List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE_StaticFields
{
	VisualElementAssetU5BU5D_t4308B4E4264B586FCB93ADA8B53116C25C5597AA* ___s_emptyArray;
};
struct List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_StaticFields
{
	X509CertificateImplU5BU5D_tF7670421D516AF3E064DBA6E32AA03CED589795D* ___s_emptyArray;
};
struct List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33_StaticFields
{
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ___s_emptyArray;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable* ___1_value);
il2cpp_hresult_t IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable* ___1_value);
il2cpp_hresult_t IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index);
il2cpp_hresult_t IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_value);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue);
il2cpp_hresult_t IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue);



struct List_1_tEB41A51F62077E42B72895E6E928E335175C7AB0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tEB41A51F62077E42B72895E6E928E335175C7AB0_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6
{
	inline List_1_tEB41A51F62077E42B72895E6E928E335175C7AB0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tEB41A51F62077E42B72895E6E928E335175C7AB0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[3] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tEB41A51F62077E42B72895E6E928E335175C7AB0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tEB41A51F62077E42B72895E6E928E335175C7AB0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tEB41A51F62077E42B72895E6E928E335175C7AB0_ComCallableWrapper(obj));
}

struct List_1_tDB31D6CDF9FDFD3940412D5D928C152FE501F1FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tDB31D6CDF9FDFD3940412D5D928C152FE501F1FB_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6
{
	inline List_1_tDB31D6CDF9FDFD3940412D5D928C152FE501F1FB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tDB31D6CDF9FDFD3940412D5D928C152FE501F1FB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[3] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tDB31D6CDF9FDFD3940412D5D928C152FE501F1FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tDB31D6CDF9FDFD3940412D5D928C152FE501F1FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tDB31D6CDF9FDFD3940412D5D928C152FE501F1FB_ComCallableWrapper(obj));
}

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_ComCallableWrapper(obj));
}

struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_ComCallableWrapper(obj));
}

struct List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6, IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E
{
	inline List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[4] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;
		interfaceIds[5] = IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9(IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A(IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00_ComCallableWrapper(obj));
}

struct List_1_tE2B365AF138FFA7544A3A825DF752CE5F3ACC299_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tE2B365AF138FFA7544A3A825DF752CE5F3ACC299_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6
{
	inline List_1_tE2B365AF138FFA7544A3A825DF752CE5F3ACC299_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tE2B365AF138FFA7544A3A825DF752CE5F3ACC299_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[3] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tE2B365AF138FFA7544A3A825DF752CE5F3ACC299(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tE2B365AF138FFA7544A3A825DF752CE5F3ACC299_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tE2B365AF138FFA7544A3A825DF752CE5F3ACC299_ComCallableWrapper(obj));
}

struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6
{
	inline List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[3] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_ComCallableWrapper(obj));
}

struct List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6
{
	inline List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[3] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE_ComCallableWrapper(obj));
}

struct List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6, IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E
{
	inline List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[4] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;
		interfaceIds[5] = IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9(IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A(IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_ComCallableWrapper(obj));
}

struct List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33_ComCallableWrapper(obj));
}
