﻿#include "pch-cpp.hpp"





template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct IEnumerator_1_tC46762DF28C9BF8FE752C6F44A38BC938B7C63F2;
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5;
struct UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4;
struct Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F;
IL2CPP_EXTERN_C String_t* _stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457;
IL2CPP_EXTERN_C String_t* _stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5  : public RuntimeObject
{
	Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC 
{
	int32_t ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B 
{
	uint32_t ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
typedef Il2CppFullySharedGenericStruct NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51;
typedef Il2CppFullySharedGenericStruct Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6;
typedef Il2CppFullySharedGenericStruct Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6;
struct ParallelWriter_t725B9E76F960232582498637DEF16962C7959261 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_ThreadIndex;
};
struct UnsafeParallelHashMapBase_2_tE32A0E6514398F89C1AE8F4A64B3404FD606044F 
{
};
struct UnsafeParallelHashMapBase_2_tBB457536F8C60DEE9AB3B04D227F6FCE63A3A88D 
{
};
struct UnsafeParallelHashMapBase_2_t1BD0CA3528161BCA85DBE75C9AF94C4416025CF9 
{
};
struct UnsafeParallelHashMapBase_2_tB81581C8DF1653B9F1D459135F67A53788D63A3B 
{
};
struct UnsafeParallelHashMapBase_2_tB8E84CFEEE078C7B73F58345C464EA951F7BE6FC 
{
};
struct UnsafeParallelHashMapBase_2_t4EE797D67C7F49F863E9976C0A176AFAD26DE32A 
{
};
struct UnsafeParallelHashMapBase_2_t1974D8A21AC8F349CCFED6168093C9FE5AE773C4 
{
};
struct UnsafeParallelHashMapBase_2_t7ED7869559F006EC61EF50D99E7F979C9031B0E0 
{
};
struct UnsafeParallelHashMapBase_2_t7A7D91A95511F4C98A66D0490C3BD377B3D41906 
{
};
struct UnsafeParallelHashMapBase_2_tB0C02E0D42773FC6279148955479C9F639550ECC 
{
};
struct UnsafeParallelHashMapBase_2_tAE85432C2B90E1579E0CF847B2FDAA6CB0772F45 
{
};
struct UnsafeParallelHashMapBase_2_t71E2732E8CAEDE80F025D72E9D186280FCF68561 
{
};
struct UnsafeParallelHashMapBase_2_tC9A90870EF7154E90FC350CFEC5BAF8C8F35A4C0 
{
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 
{
	uint32_t ___value;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 
{
	int32_t ___entityIndex;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_BucketIndex;
	int32_t ___m_NextIndex;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42 
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 ___m_Enumerator;
};
struct NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF 
{
	SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct ShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D 
{
	int32_t ___value__;
};
struct UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___Data;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 
{
	int32_t ___shadowIndex;
	int32_t ___viewportSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___offsetInAtlas;
	bool ___rendersOnPlacement;
};
struct CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_marshaled_pinvoke
{
	int32_t ___shadowIndex;
	int32_t ___viewportSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___offsetInAtlas;
	int32_t ___rendersOnPlacement;
};
struct CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_marshaled_com
{
	int32_t ___shadowIndex;
	int32_t ___viewportSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___offsetInAtlas;
	int32_t ___rendersOnPlacement;
};
struct CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angles;
};
struct NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC 
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271 ___m_HashMapData;
};
struct UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4  : public RuntimeObject
{
	UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___m_Target;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C 
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	bool ___staticShadowCaster;
	int32_t ___rendererPriority;
	bool ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 
{
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Keys;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Values;
};
struct NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___range;
	int32_t ___lightmapIndex;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5_StaticFields
{
	Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_StaticFields
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___Null;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_StaticFields
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___Null;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_StaticFields
{
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___Invalid;
};
struct HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_StaticFields
{
	HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 ___Invalid;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_StaticFields
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___Invalid;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_StaticFields
{
	SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___Invalid;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m6564DDE54C96DB6027C802DDB51638722A8B7A9C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAC61BCD78DBCF3665AB62CF3F0A9160131582E7C_gshared_inline (void* ___0_destination, int32_t ___1_index, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE62A9F90862B9AF9BF01C07B0A17F0C8F2372D6D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m74D70D8E65D60A3A3B782011BC925E749F8C29C8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 UnsafeUtility_ReadArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mFD7DBC1199616005466125347027F6201459B40D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAFEFFB673EC0E6AACC6C9F4ECEBB1ACA52A589B0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m97E032CD6E0F90AFEDAFAF6FC9790EAEFAD4D38F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m74EB5C8C921F13820DB035CF8DA58E1FB942A142_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m32FE612078445C09645A5FEFCADD35BF1B5497D3_gshared_inline (void* ___0_destination, int32_t ___1_index, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m900571E61B5A7712D4C2358CC8B337805E654A03_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m0D3BC53501025D0E6FFB93ADC9A6861B58849FE5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5D25900ED3545AA3E3F72977EB6F728351B3D361_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C UnsafeUtility_ReadArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mDE41FFE3160D153E47D8D93EF29E4B9C3DB23D20_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0A1550FEB428909B2E587F9AA67DD634D414D678_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m8AD3BCA9FB9188688CEFCD9B8C98668A2AB7D334_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m0CA08285DF610E216621F21C754D8D5E56428B01_gshared_inline (void* ___0_destination, int32_t ___1_index, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m68049D0DC47E97C465D43753CAAFAF997DE7804C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m7276C3EA10AA4289184C4478EC7CE69B78E70B2C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAC37A0DE4D5678D35DF0C57E71A79D74CB486CAE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6DF4FDD33DF0500B90F89611D3B0EB217FBE80A9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mA6D1BF0531A4B163ED154D98E5AC42EBF6BA5F3D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mFC4E3A09D0F9A76B3DA65553F10F7EF785896EEA_gshared_inline (void* ___0_destination, int32_t ___1_index, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8FD2ED9C81D1A54D0D5D33B66435A7B5E8E4C65E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m5EEA3CF56A858CE6C8B93F86EBD5D9E0EC019D09_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3453F1516A7747F6CB50AA7E83EFF9D33D9D1325_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 UnsafeUtility_ReadArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mF42F014B5AA9C633D3FCAB3FFF26646E54395BD8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m62D7AA6A3F3B3E079B744D8D1AA5F9A22C7229A4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m6D25448FB196CBD8CF6078CA6D44987A14900252_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_m8E4A765ABCC666BDB704BAE1F9252D4DBBE17C9E_gshared_inline (void* ___0_destination, int32_t ___1_index, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m993E197C44782381F50C5F9358CFE4F60B2158B8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_mA0ACBD5F08D696522B3B9BC27800C791335F01C5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m260194DFCEEC078AEAF9B5474A7D6B3D0DCD6AA4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 UnsafeUtility_ReadArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_mAFAA4FE48EF2524A46E0D360AAE5303BE8B51EC0_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA5FCFB37B4C19FD5FF7B0660AAE55181A6A68C1F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mA60C7AAB43656E7611E27393BC6AB7E52163A000_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m2D4905CE9CCFB4EF383D04FA0F872F621E08A309_gshared_inline (void* ___0_destination, int32_t ___1_index, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mC0307320846285CEBB98C0EF64D1880A4876EBB6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mD9CA815618E4ED4EC44B7F5D9D7ACF7649BEF9AF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m907C21D03B0B07E416159F61AE6322D367A27C05_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B UnsafeUtility_ReadArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m86FC76E325E9D3B56133BB7A193BAF12B47FBCC1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m526C9313C8BCF707526B309126FFB7502C548A5D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8B43648CBDE9E427984C2142FD2AE8614713B474_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m4CA7D5F8CB87265AEDC41B095F214E10D6C291AA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m5F7F22F8AC0CE4FCC6AC027EB2C42BCCD5331616_gshared_inline (void* ___0_destination, int32_t ___1_index, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m3295B4A91183A7C409EC30F4AE1FB1A2FFA21207_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_mD52B127B97D37B0E888372E75F0EB778C8D9B731_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1EDC20E540990610D711636F04418BBBD7370AA9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 UnsafeUtility_ReadArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m747314CBED7C22FD9FDF54EEC99A346A55503493_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDC277D141C123D09979BB199452A518ACA996D89_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m17CDC899591C0359D17251F4DC69ABB42BCC7D41_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m463A0B1A1A7ED5C9FD51E1EDCD073E4D96AB0BF1_gshared_inline (void* ___0_destination, int32_t ___1_index, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mBE4686D07050739816F7A654D52B1148188ED8B3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_mF381C1E98C962CEDB6A4736E389C9CC2B6767B78_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m28C697C6882CBA7D5E4C620BE18189F7CC1DEA19_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 UnsafeUtility_ReadArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m6936A2AE805E085425106C4C393B7D81ADA4B1BB_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m57B325EFF67BD5485331BD2F287B463A5D8FC9C8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_gshared_inline (void* ___0_destination, int32_t ___1_index, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m95E0C2203337A917B366551260F10DD9AA00924A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m337E81148B331D4822C7412A962A569B8D2ADC59_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m92F223FB6B0005A83CA9AC122EEB656E520F55AC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m47876EC0F084EFF368B74E8E931FCC774940C8B8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m72E4916B9F2F2ADBE570135B25642B48E8905DD2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m8EF0148FF7EE5D2FD7612F1D419951EE0547D8C5_gshared_inline (void* ___0_destination, int32_t ___1_index, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m6DC9EC22FBED4404D564A598C5E1D1EDCCC841B9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDBBEC8084143D11100E641430E613B78DB37E7BE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 UnsafeUtility_ReadArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_mFA361CB1BDFC44955AC2650781EB1E111FB3768D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m9DFD0C61BAA59F9DA62114F045C8D6219C0EE3B3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEB3EEF401A3CDD197AC9DE490B9CAA5F3415FBE5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___2_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m87F60C86A474B557B069D37548567CB2667C42FA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_gshared_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_gshared_inline (void* ___0_destination, int32_t ___1_index, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8D99BED2AEF823C1F525AF6D51D018736E33922F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mC740151B18F0E9F81E90C5B066A052BAB9F361C4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3C59C500D6E8A033EFFAD29EA56E615156D25D1D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___1_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 UnsafeUtility_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m80C61348EC8F9D4F73F0AAA4A69A028E6D599DCD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37_gshared (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pair_2__ctor_mCA54688368FE894C9F314471A3DA94A72B709F51_gshared (Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6* __this, Il2CppFullySharedGenericAny ___0_k, Il2CppFullySharedGenericAny ___1_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m720B963A1A8BA6E3EF6204599F7B1AE86C47B938_gshared (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_mAC8F198D20B98C2819447D8E080EBF2F2714BFFE_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_gshared_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m2EB3B4B325AAF39DA286FF82FDB26405AE271998_gshared_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_Count_m3B17849FD6E9AEFC745138B43A5F5924BDA651A6_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m5516D69B8E5C8A61A3B8112E3B0C0DC701FDEF20_gshared_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_mD1D227DF7720121254BBE5435F29C5CB94D97831_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mEFDB8CAFDB397D0E8A4279CA11C361A29EC8A4BB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_mED257AE6B2327BE5847C946467D88E33B4A1BA52_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_m62B965BA968787C68DDE510C13D98B45ACF574A8_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mD0A7EC52AF9067A81379B898E9F19FA26F3F4B88_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_mE398837783AB4D7D5B1519D6B47F03F029B40A9A_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_mFBBB13C3C28724EEB5E77C8EBCF29B6EFEAE9C8C_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Item_m74D6405042402B9FE213F8E6F3A0E02CFB637FF9_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mBC2EB4E62A5FAA365C4795E1D7FA3F3ED271F97A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_m78B278F2F9ECFF6DD543068ED4A22897FFEA5017_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_gshared (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 CollectionHelper_CreateNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAF52A80BBB617F62596D58F8FFD9E3E6AA9DB60F_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m49E855A91D083A54CFF44DEB13335123AD3C4001_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 UnsafeParallelHashMap_2_GetKeyArray_m0790F3B72CBA21D7B667E1A333E76DEAC8678138_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_m28E06E6A40485B8C1E9CEB5D9AD5DCEB3FD937B7_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m5C1BD5C2D8BD4FE03EC32866EEDF2EBECAB7B7F3_gshared (NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC3C2330139E264EC4EB952292BE242F6511CA8E6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 UnsafeParallelHashMap_2_GetKeyValueArrays_mBAD0B630B8637FBD3415B9CA1EB4912C07A0183A_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_t725B9E76F960232582498637DEF16962C7959261 UnsafeParallelHashMap_2_AsParallelWriter_mBB99B9D2617627AD5097AA220071CE11F5F93C2D_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnly__ctor_m0CF31DFE3FE1BB2E49351FDCD039458FFC66E9D1_gshared_inline (ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC* __this, UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271 ___0_hashMapData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC UnsafeParallelHashMap_2_AsReadOnly_m3745E965DCA687407B0FC6E9CF9914D39339955B_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42 UnsafeParallelHashMap_2_GetEnumerator_mA769C26ABB845731EFF75A5774F58BFA39A7C30B_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, int32_t*, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m6564DDE54C96DB6027C802DDB51638722A8B7A9C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m6564DDE54C96DB6027C802DDB51638722A8B7A9C_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAC61BCD78DBCF3665AB62CF3F0A9160131582E7C_inline (void* ___0_destination, int32_t ___1_index, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAC61BCD78DBCF3665AB62CF3F0A9160131582E7C_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DrawKey_GetHashCode_m6E3C5F3D42D02D8035AA7E7B5501FDBC1551F4E5 (DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mE62A9F90862B9AF9BF01C07B0A17F0C8F2372D6D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mE62A9F90862B9AF9BF01C07B0A17F0C8F2372D6D_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3 (int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m74D70D8E65D60A3A3B782011BC925E749F8C29C8 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m74D70D8E65D60A3A3B782011BC925E749F8C29C8_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 UnsafeUtility_ReadArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mFD7DBC1199616005466125347027F6201459B40D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mFD7DBC1199616005466125347027F6201459B40D_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DrawKey_Equals_mBA2838871085C8944B81322DC6E851F4273E8E91 (DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAFEFFB673EC0E6AACC6C9F4ECEBB1ACA52A589B0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t*, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAFEFFB673EC0E6AACC6C9F4ECEBB1ACA52A589B0_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m97E032CD6E0F90AFEDAFAF6FC9790EAEFAD4D38F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m97E032CD6E0F90AFEDAFAF6FC9790EAEFAD4D38F_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m74EB5C8C921F13820DB035CF8DA58E1FB942A142 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m74EB5C8C921F13820DB035CF8DA58E1FB942A142_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m32FE612078445C09645A5FEFCADD35BF1B5497D3_inline (void* ___0_destination, int32_t ___1_index, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m32FE612078445C09645A5FEFCADD35BF1B5497D3_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m900571E61B5A7712D4C2358CC8B337805E654A03 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m900571E61B5A7712D4C2358CC8B337805E654A03_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m0D3BC53501025D0E6FFB93ADC9A6861B58849FE5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m0D3BC53501025D0E6FFB93ADC9A6861B58849FE5_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5D25900ED3545AA3E3F72977EB6F728351B3D361 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5D25900ED3545AA3E3F72977EB6F728351B3D361_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C UnsafeUtility_ReadArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mDE41FFE3160D153E47D8D93EF29E4B9C3DB23D20_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mDE41FFE3160D153E47D8D93EF29E4B9C3DB23D20_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0A1550FEB428909B2E587F9AA67DD634D414D678 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0A1550FEB428909B2E587F9AA67DD634D414D678_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m8AD3BCA9FB9188688CEFCD9B8C98668A2AB7D334 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m8AD3BCA9FB9188688CEFCD9B8C98668A2AB7D334_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m0CA08285DF610E216621F21C754D8D5E56428B01_inline (void* ___0_destination, int32_t ___1_index, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m0CA08285DF610E216621F21C754D8D5E56428B01_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m68049D0DC47E97C465D43753CAAFAF997DE7804C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m68049D0DC47E97C465D43753CAAFAF997DE7804C_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m7276C3EA10AA4289184C4478EC7CE69B78E70B2C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m7276C3EA10AA4289184C4478EC7CE69B78E70B2C_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAC37A0DE4D5678D35DF0C57E71A79D74CB486CAE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAC37A0DE4D5678D35DF0C57E71A79D74CB486CAE_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6DF4FDD33DF0500B90F89611D3B0EB217FBE80A9 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6DF4FDD33DF0500B90F89611D3B0EB217FBE80A9_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mA6D1BF0531A4B163ED154D98E5AC42EBF6BA5F3D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mA6D1BF0531A4B163ED154D98E5AC42EBF6BA5F3D_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mFC4E3A09D0F9A76B3DA65553F10F7EF785896EEA_inline (void* ___0_destination, int32_t ___1_index, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mFC4E3A09D0F9A76B3DA65553F10F7EF785896EEA_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m8FD2ED9C81D1A54D0D5D33B66435A7B5E8E4C65E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m8FD2ED9C81D1A54D0D5D33B66435A7B5E8E4C65E_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m5EEA3CF56A858CE6C8B93F86EBD5D9E0EC019D09 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m5EEA3CF56A858CE6C8B93F86EBD5D9E0EC019D09_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3453F1516A7747F6CB50AA7E83EFF9D33D9D1325 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3453F1516A7747F6CB50AA7E83EFF9D33D9D1325_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 UnsafeUtility_ReadArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mF42F014B5AA9C633D3FCAB3FFF26646E54395BD8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mF42F014B5AA9C633D3FCAB3FFF26646E54395BD8_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m62D7AA6A3F3B3E079B744D8D1AA5F9A22C7229A4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m62D7AA6A3F3B3E079B744D8D1AA5F9A22C7229A4_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m6D25448FB196CBD8CF6078CA6D44987A14900252 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m6D25448FB196CBD8CF6078CA6D44987A14900252_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_m8E4A765ABCC666BDB704BAE1F9252D4DBBE17C9E_inline (void* ___0_destination, int32_t ___1_index, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_m8E4A765ABCC666BDB704BAE1F9252D4DBBE17C9E_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m993E197C44782381F50C5F9358CFE4F60B2158B8 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m993E197C44782381F50C5F9358CFE4F60B2158B8_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_mA0ACBD5F08D696522B3B9BC27800C791335F01C5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_mA0ACBD5F08D696522B3B9BC27800C791335F01C5_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m260194DFCEEC078AEAF9B5474A7D6B3D0DCD6AA4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m260194DFCEEC078AEAF9B5474A7D6B3D0DCD6AA4_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 UnsafeUtility_ReadArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_mAFAA4FE48EF2524A46E0D360AAE5303BE8B51EC0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_mAFAA4FE48EF2524A46E0D360AAE5303BE8B51EC0_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA5FCFB37B4C19FD5FF7B0660AAE55181A6A68C1F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA5FCFB37B4C19FD5FF7B0660AAE55181A6A68C1F_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mA60C7AAB43656E7611E27393BC6AB7E52163A000 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mA60C7AAB43656E7611E27393BC6AB7E52163A000_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m2D4905CE9CCFB4EF383D04FA0F872F621E08A309_inline (void* ___0_destination, int32_t ___1_index, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m2D4905CE9CCFB4EF383D04FA0F872F621E08A309_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mC0307320846285CEBB98C0EF64D1880A4876EBB6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mC0307320846285CEBB98C0EF64D1880A4876EBB6_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mD9CA815618E4ED4EC44B7F5D9D7ACF7649BEF9AF (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mD9CA815618E4ED4EC44B7F5D9D7ACF7649BEF9AF_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m907C21D03B0B07E416159F61AE6322D367A27C05 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m907C21D03B0B07E416159F61AE6322D367A27C05_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B UnsafeUtility_ReadArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m86FC76E325E9D3B56133BB7A193BAF12B47FBCC1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m86FC76E325E9D3B56133BB7A193BAF12B47FBCC1_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m526C9313C8BCF707526B309126FFB7502C548A5D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m526C9313C8BCF707526B309126FFB7502C548A5D_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8B43648CBDE9E427984C2142FD2AE8614713B474 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8B43648CBDE9E427984C2142FD2AE8614713B474_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m4CA7D5F8CB87265AEDC41B095F214E10D6C291AA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m4CA7D5F8CB87265AEDC41B095F214E10D6C291AA_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m5F7F22F8AC0CE4FCC6AC027EB2C42BCCD5331616_inline (void* ___0_destination, int32_t ___1_index, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m5F7F22F8AC0CE4FCC6AC027EB2C42BCCD5331616_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m3295B4A91183A7C409EC30F4AE1FB1A2FFA21207 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m3295B4A91183A7C409EC30F4AE1FB1A2FFA21207_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_mD52B127B97D37B0E888372E75F0EB778C8D9B731 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_mD52B127B97D37B0E888372E75F0EB778C8D9B731_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1EDC20E540990610D711636F04418BBBD7370AA9 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1EDC20E540990610D711636F04418BBBD7370AA9_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 UnsafeUtility_ReadArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m747314CBED7C22FD9FDF54EEC99A346A55503493_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m747314CBED7C22FD9FDF54EEC99A346A55503493_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDC277D141C123D09979BB199452A518ACA996D89 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDC277D141C123D09979BB199452A518ACA996D89_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m17CDC899591C0359D17251F4DC69ABB42BCC7D41 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m17CDC899591C0359D17251F4DC69ABB42BCC7D41_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m463A0B1A1A7ED5C9FD51E1EDCD073E4D96AB0BF1_inline (void* ___0_destination, int32_t ___1_index, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m463A0B1A1A7ED5C9FD51E1EDCD073E4D96AB0BF1_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mBE4686D07050739816F7A654D52B1148188ED8B3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mBE4686D07050739816F7A654D52B1148188ED8B3_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_mF381C1E98C962CEDB6A4736E389C9CC2B6767B78 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_mF381C1E98C962CEDB6A4736E389C9CC2B6767B78_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m28C697C6882CBA7D5E4C620BE18189F7CC1DEA19 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m28C697C6882CBA7D5E4C620BE18189F7CC1DEA19_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 UnsafeUtility_ReadArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m6936A2AE805E085425106C4C393B7D81ADA4B1BB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m6936A2AE805E085425106C4C393B7D81ADA4B1BB_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C, int32_t*, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m57B325EFF67BD5485331BD2F287B463A5D8FC9C8 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m57B325EFF67BD5485331BD2F287B463A5D8FC9C8_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline (void* ___0_destination, int32_t ___1_index, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257 (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m95E0C2203337A917B366551260F10DD9AA00924A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m95E0C2203337A917B366551260F10DD9AA00924A_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m337E81148B331D4822C7412A962A569B8D2ADC59 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m337E81148B331D4822C7412A962A569B8D2ADC59_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RangeKey_Equals_m05E612C122D91758588CEB7529751045E6F09493 (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* __this, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m92F223FB6B0005A83CA9AC122EEB656E520F55AC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t*, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m92F223FB6B0005A83CA9AC122EEB656E520F55AC_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m47876EC0F084EFF368B74E8E931FCC774940C8B8 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692, int32_t*, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m47876EC0F084EFF368B74E8E931FCC774940C8B8_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m72E4916B9F2F2ADBE570135B25642B48E8905DD2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m72E4916B9F2F2ADBE570135B25642B48E8905DD2_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m8EF0148FF7EE5D2FD7612F1D419951EE0547D8C5_inline (void* ___0_destination, int32_t ___1_index, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m8EF0148FF7EE5D2FD7612F1D419951EE0547D8C5_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedInstanceHandle_GetHashCode_m5B97E179A78BD59969291F66E286E00873FC120D (SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m6DC9EC22FBED4404D564A598C5E1D1EDCCC841B9 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m6DC9EC22FBED4404D564A598C5E1D1EDCCC841B9_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDBBEC8084143D11100E641430E613B78DB37E7BE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDBBEC8084143D11100E641430E613B78DB37E7BE_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 UnsafeUtility_ReadArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_mFA361CB1BDFC44955AC2650781EB1E111FB3768D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_mFA361CB1BDFC44955AC2650781EB1E111FB3768D_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SharedInstanceHandle_Equals_m8318CF0264558ADD64222B3A2593EACCED56BFE0 (SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* __this, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m9DFD0C61BAA59F9DA62114F045C8D6219C0EE3B3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t*, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m9DFD0C61BAA59F9DA62114F045C8D6219C0EE3B3_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEB3EEF401A3CDD197AC9DE490B9CAA5F3415FBE5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___2_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint32_t, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEB3EEF401A3CDD197AC9DE490B9CAA5F3415FBE5_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m87F60C86A474B557B069D37548567CB2667C42FA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m87F60C86A474B557B069D37548567CB2667C42FA_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, uint32_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline (void* ___0_destination, int32_t ___1_index, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m8D99BED2AEF823C1F525AF6D51D018736E33922F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m8D99BED2AEF823C1F525AF6D51D018736E33922F_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mC740151B18F0E9F81E90C5B066A052BAB9F361C4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mC740151B18F0E9F81E90C5B066A052BAB9F361C4_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3 (uint32_t* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3C59C500D6E8A033EFFAD29EA56E615156D25D1D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___1_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3C59C500D6E8A033EFFAD29EA56E615156D25D1D_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 UnsafeUtility_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m80C61348EC8F9D4F73F0AAA4A69A028E6D599DCD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m80C61348EC8F9D4F73F0AAA4A69A028E6D599DCD_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline void NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37 (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37_gshared)(__this, method);
}
inline void Pair_2__ctor_m080327976BEF3D9FBA133845A20983F2462E1D6A (Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6* __this, Il2CppFullySharedGenericStruct ___0_k, Il2CppFullySharedGenericStruct ___1_v, const RuntimeMethod* method)
{
	((  void (*) (Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Pair_2__ctor_mCA54688368FE894C9F314471A3DA94A72B709F51_gshared)((Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6*)__this, (Il2CppFullySharedGenericAny)___0_k, (Il2CppFullySharedGenericAny)___1_v, method);
}
inline void UnsafeParallelHashMapData_AllocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m720B963A1A8BA6E3EF6204599F7B1AE86C47B938 (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**, const RuntimeMethod*))UnsafeParallelHashMapData_AllocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m720B963A1A8BA6E3EF6204599F7B1AE86C47B938_gshared)(___0_length, ___1_bucketLength, ___2_label, ___3_outBuf, method);
}
inline void UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C_gshared)(__this, method);
}
inline void UnsafeParallelHashMap_2__ctor_mAC8F198D20B98C2819447D8E080EBF2F2714BFFE (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2__ctor_mAC8F198D20B98C2819447D8E080EBF2F2714BFFE_gshared)(__this, ___0_capacity, ___1_allocator, method);
}
inline bool UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMap_2_get_IsEmpty_m2EB3B4B325AAF39DA286FF82FDB26405AE271998_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsEmpty_m2EB3B4B325AAF39DA286FF82FDB26405AE271998_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMap_2_Count_m3B17849FD6E9AEFC745138B43A5F5924BDA651A6 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_m3B17849FD6E9AEFC745138B43A5F5924BDA651A6_gshared)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_get_Capacity_m5516D69B8E5C8A61A3B8112E3B0C0DC701FDEF20_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_m5516D69B8E5C8A61A3B8112E3B0C0DC701FDEF20_gshared_inline)(__this, method);
}
inline void UnsafeParallelHashMap_2_set_Capacity_mD1D227DF7720121254BBE5435F29C5CB94D97831 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_set_Capacity_mD1D227DF7720121254BBE5435F29C5CB94D97831_gshared)(__this, ___0_value, method);
}
inline void UnsafeParallelHashMapBase_2_Clear_mEFDB8CAFDB397D0E8A4279CA11C361A29EC8A4BB (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_mEFDB8CAFDB397D0E8A4279CA11C361A29EC8A4BB_gshared)(___0_data, method);
}
inline bool UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, int32_t, bool, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A_gshared)(___0_data, ___1_key, ___2_item, ___3_isMultiHashMap, ___4_allocation, method);
}
inline bool UnsafeParallelHashMap_2_TryAdd_mED257AE6B2327BE5847C946467D88E33B4A1BA52 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_TryAdd_mED257AE6B2327BE5847C946467D88E33B4A1BA52_gshared)(__this, ___0_key, ___1_item, method);
}
inline void UnsafeParallelHashMap_2_Add_m62B965BA968787C68DDE510C13D98B45ACF574A8 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_Add_m62B965BA968787C68DDE510C13D98B45ACF574A8_gshared)(__this, ___0_key, ___1_item, method);
}
inline int32_t UnsafeParallelHashMapBase_2_Remove_mD0A7EC52AF9067A81379B898E9F19FA26F3F4B88 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, bool, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Remove_mD0A7EC52AF9067A81379B898E9F19FA26F3F4B88_gshared)(___0_data, ___1_key, ___2_isMultiHashMap, method);
}
inline bool UnsafeParallelHashMap_2_Remove_mE398837783AB4D7D5B1519D6B47F03F029B40A9A (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, const RuntimeMethod*))UnsafeParallelHashMap_2_Remove_mE398837783AB4D7D5B1519D6B47F03F029B40A9A_gshared)(__this, ___0_key, method);
}
inline bool UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t* ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, int32_t*, const RuntimeMethod*))UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6_gshared)(__this, ___0_key, ___1_item, method);
}
inline bool UnsafeParallelHashMap_2_ContainsKey_mFBBB13C3C28724EEB5E77C8EBCF29B6EFEAE9C8C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, const RuntimeMethod*))UnsafeParallelHashMap_2_ContainsKey_mFBBB13C3C28724EEB5E77C8EBCF29B6EFEAE9C8C_gshared)(__this, ___0_key, method);
}
inline int32_t UnsafeParallelHashMap_2_get_Item_m74D6405042402B9FE213F8E6F3A0E02CFB637FF9 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Item_m74D6405042402B9FE213F8E6F3A0E02CFB637FF9_gshared)(__this, ___0_key, method);
}
inline bool UnsafeParallelHashMapBase_2_SetValue_mBC2EB4E62A5FAA365C4795E1D7FA3F3ED271F97A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___1_it, int32_t* ___2_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_SetValue_mBC2EB4E62A5FAA365C4795E1D7FA3F3ED271F97A_gshared)(___0_data, ___1_it, ___2_item, method);
}
inline void UnsafeParallelHashMap_2_set_Item_m78B278F2F9ECFF6DD543068ED4A22897FFEA5017 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_set_Item_m78B278F2F9ECFF6DD543068ED4A22897FFEA5017_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C_gshared)(__this, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_gshared)(___0_jobData, ___1_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB_gshared)(__this, ___0_inputDeps, method);
}
inline NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 CollectionHelper_CreateNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAF52A80BBB617F62596D58F8FFD9E3E6AA9DB60F (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAF52A80BBB617F62596D58F8FFD9E3E6AA9DB60F_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetKeyArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m49E855A91D083A54CFF44DEB13335123AD3C4001 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09, const RuntimeMethod*))UnsafeParallelHashMapData_GetKeyArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m49E855A91D083A54CFF44DEB13335123AD3C4001_gshared)(___0_data, ___1_result, method);
}
inline NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 UnsafeParallelHashMap_2_GetKeyArray_m0790F3B72CBA21D7B667E1A333E76DEAC8678138 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetKeyArray_m0790F3B72CBA21D7B667E1A333E76DEAC8678138_gshared)(__this, ___0_allocator, method);
}
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E_gshared)(___0_data, ___1_result, method);
}
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_m28E06E6A40485B8C1E9CEB5D9AD5DCEB3FD937B7 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetValueArray_m28E06E6A40485B8C1E9CEB5D9AD5DCEB3FD937B7_gshared)(__this, ___0_allocator, method);
}
inline void NativeKeyValueArrays_2__ctor_m5C1BD5C2D8BD4FE03EC32866EEDF2EBECAB7B7F3 (NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeKeyValueArrays_2__ctor_m5C1BD5C2D8BD4FE03EC32866EEDF2EBECAB7B7F3_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetKeyValueArrays_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC3C2330139E264EC4EB952292BE242F6511CA8E6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346, const RuntimeMethod*))UnsafeParallelHashMapData_GetKeyValueArrays_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC3C2330139E264EC4EB952292BE242F6511CA8E6_gshared)(___0_data, ___1_result, method);
}
inline NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 UnsafeParallelHashMap_2_GetKeyValueArrays_mBAD0B630B8637FBD3415B9CA1EB4912C07A0183A (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetKeyValueArrays_mBAD0B630B8637FBD3415B9CA1EB4912C07A0183A_gshared)(__this, ___0_allocator, method);
}
inline ParallelWriter_t725B9E76F960232582498637DEF16962C7959261 UnsafeParallelHashMap_2_AsParallelWriter_mBB99B9D2617627AD5097AA220071CE11F5F93C2D (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  ParallelWriter_t725B9E76F960232582498637DEF16962C7959261 (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_AsParallelWriter_mBB99B9D2617627AD5097AA220071CE11F5F93C2D_gshared)(__this, method);
}
inline void ReadOnly__ctor_m0CF31DFE3FE1BB2E49351FDCD039458FFC66E9D1_inline (ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC* __this, UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271 ___0_hashMapData, const RuntimeMethod* method)
{
	((  void (*) (ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC*, UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271, const RuntimeMethod*))ReadOnly__ctor_m0CF31DFE3FE1BB2E49351FDCD039458FFC66E9D1_gshared_inline)(__this, ___0_hashMapData, method);
}
inline ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC UnsafeParallelHashMap_2_AsReadOnly_m3745E965DCA687407B0FC6E9CF9914D39339955B (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_AsReadOnly_m3745E965DCA687407B0FC6E9CF9914D39339955B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator__ctor_m4BD89848A9562869AB65E15D3D1D24A194187736 (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42 UnsafeParallelHashMap_2_GetEnumerator_mA769C26ABB845731EFF75A5774F58BFA39A7C30B (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42 (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_GetEnumerator_mA769C26ABB845731EFF75A5774F58BFA39A7C30B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
inline RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86_gshared)(__this, method);
}
inline RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mEFDB8CAFDB397D0E8A4279CA11C361A29EC8A4BB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m6564DDE54C96DB6027C802DDB51638722A8B7A9C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE62A9F90862B9AF9BF01C07B0A17F0C8F2372D6D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m8D9EB95A581DE583866F77875CFEBA2DA8CAC3E5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m6564DDE54C96DB6027C802DDB51638722A8B7A9C(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAC61BCD78DBCF3665AB62CF3F0A9160131582E7C_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = DrawKey_GetHashCode_m6E3C5F3D42D02D8035AA7E7B5501FDBC1551F4E5((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mE62A9F90862B9AF9BF01C07B0A17F0C8F2372D6D(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mF18960FFA0CDB6F3FB7DECD62BD33FCFE0BD5DD9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m6564DDE54C96DB6027C802DDB51638722A8B7A9C(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAC61BCD78DBCF3665AB62CF3F0A9160131582E7C_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = DrawKey_GetHashCode_m6E3C5F3D42D02D8035AA7E7B5501FDBC1551F4E5((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m74D70D8E65D60A3A3B782011BC925E749F8C29C8(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAC61BCD78DBCF3665AB62CF3F0A9160131582E7C_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		int32_t L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = DrawKey_GetHashCode_m6E3C5F3D42D02D8035AA7E7B5501FDBC1551F4E5((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mD0A7EC52AF9067A81379B898E9F19FA26F3F4B88_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = DrawKey_GetHashCode_m6E3C5F3D42D02D8035AA7E7B5501FDBC1551F4E5((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mFD7DBC1199616005466125347027F6201459B40D_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_16 = ___1_key;
		bool L_17;
		L_17 = DrawKey_Equals_mBA2838871085C8944B81322DC6E851F4273E8E91((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m3529B4E5F4C1537D4D08A03731FF1A6AE4220388_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* L_4 = (DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = DrawKey_GetHashCode_m6E3C5F3D42D02D8035AA7E7B5501FDBC1551F4E5(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_0 = ___3_it;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		int32_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(int32_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = DrawKey_GetHashCode_m6E3C5F3D42D02D8035AA7E7B5501FDBC1551F4E5((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		int32_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAFEFFB673EC0E6AACC6C9F4ECEBB1ACA52A589B0(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAFEFFB673EC0E6AACC6C9F4ECEBB1ACA52A589B0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		int32_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mFD7DBC1199616005466125347027F6201459B40D_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_22 = ___2_it;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_23 = L_22->___key;
		bool L_24;
		L_24 = DrawKey_Equals_mBA2838871085C8944B81322DC6E851F4273E8E91((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		int32_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(int32_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mBC2EB4E62A5FAA365C4795E1D7FA3F3ED271F97A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		int32_t* L_9 = ___2_item;
		int32_t L_10 = (*(int32_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m77FFD2C11BEE21C59889219CBD967FD1CC39F3D8_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m64E33D0F2A3F6B45C362B2239E202FBAFCA505B5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mB9E87EA3603BB40485DE516212383CDF480DB857_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mDB55768CA502F19B73A91B7B61198815A8F309B5_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m9D697346792B01D5704CE90A823D958CB4FC2AA9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m74EB5C8C921F13820DB035CF8DA58E1FB942A142_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m900571E61B5A7712D4C2358CC8B337805E654A03_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m6897C1560907A37A2D866473770A8B4A7EF24FCE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m97E032CD6E0F90AFEDAFAF6FC9790EAEFAD4D38F(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m74EB5C8C921F13820DB035CF8DA58E1FB942A142(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m32FE612078445C09645A5FEFCADD35BF1B5497D3_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m97E032CD6E0F90AFEDAFAF6FC9790EAEFAD4D38F(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m900571E61B5A7712D4C2358CC8B337805E654A03(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mD4D9E9007492474CA83465EEB12BE2598C360D93_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m74EB5C8C921F13820DB035CF8DA58E1FB942A142(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m32FE612078445C09645A5FEFCADD35BF1B5497D3_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mD4B7FE3FC4BD3B5C3A16E35F17A9D92A6E69E4A7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m97E032CD6E0F90AFEDAFAF6FC9790EAEFAD4D38F(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m0D3BC53501025D0E6FFB93ADC9A6861B58849FE5(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		int32_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m32FE612078445C09645A5FEFCADD35BF1B5497D3_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m9A211EEBC2C5B395D439BCDD639ACAC22834AE20_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m1A32DF0ED7D694F6249ED62CBD83A5E1329C7AF3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m97E032CD6E0F90AFEDAFAF6FC9790EAEFAD4D38F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5D25900ED3545AA3E3F72977EB6F728351B3D361(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5D25900ED3545AA3E3F72977EB6F728351B3D361_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mDE41FFE3160D153E47D8D93EF29E4B9C3DB23D20_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mB3E7DD8B2C317D36964E58651BDB743A541BE1E5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_9 = ___2_item;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_10 = (*(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*)L_9);
		UnsafeUtility_WriteArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m32FE612078445C09645A5FEFCADD35BF1B5497D3_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m31F780B66F49CF4BFE8C4D38EB1FFD84C7A24C91_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m67EC0375AB71A94F169A919C44796BA57376DB4A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m1BE2FEDCCD3D5EC8DBBC6506D3B2E669F34E1E27_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m3CC4325AC86DAC4885C254BAFE41198898308C6F_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m001273171056567D90F65A94742C26DB58F8B4DB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m8AD3BCA9FB9188688CEFCD9B8C98668A2AB7D334_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m68049D0DC47E97C465D43753CAAFAF997DE7804C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m9CA9E7EEB3BF9AB42EA2D5B3B510F8B6617FB163_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0A1550FEB428909B2E587F9AA67DD634D414D678(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m8AD3BCA9FB9188688CEFCD9B8C98668A2AB7D334(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m0CA08285DF610E216621F21C754D8D5E56428B01_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0A1550FEB428909B2E587F9AA67DD634D414D678(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m68049D0DC47E97C465D43753CAAFAF997DE7804C(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m127937152AC2823EA6890495AE506FB2406B6C5B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m8AD3BCA9FB9188688CEFCD9B8C98668A2AB7D334(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m0CA08285DF610E216621F21C754D8D5E56428B01_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m4849AB2C4383F884449A7D99D188F392790E619A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0A1550FEB428909B2E587F9AA67DD634D414D678(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m7276C3EA10AA4289184C4478EC7CE69B78E70B2C(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		int32_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m0CA08285DF610E216621F21C754D8D5E56428B01_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m494397DB04F39E75798DB2AB0FFA134A7D2D72A8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m9EA3CAE57EFD8BBDCE9D46B0CD3E4889FEFDE6FB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0A1550FEB428909B2E587F9AA67DD634D414D678_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAC37A0DE4D5678D35DF0C57E71A79D74CB486CAE(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAC37A0DE4D5678D35DF0C57E71A79D74CB486CAE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m46272B735CECDC1EBF0556FC8443F8D1C77BD881_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_9 = ___2_item;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_10 = (*(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*)L_9);
		UnsafeUtility_WriteArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m0CA08285DF610E216621F21C754D8D5E56428B01_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mF17922DEE544C7D9B9FAA0F058788977E2BAE968_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mD298D6B83ED3868EE95DFFF494B34E4D1AB12D28_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mF60DF765CE8AD0E3BAFAF29819933B549668A625_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m7DDE0E34190B32F7C0C74EA813DF7EADD3B2AE2F_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m197BCFCF26F8E531B55F40781262127A4EC5CB6D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mA6D1BF0531A4B163ED154D98E5AC42EBF6BA5F3D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8FD2ED9C81D1A54D0D5D33B66435A7B5E8E4C65E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m688210F8BD254EA96317F8DEB56C694FAD69AAAF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6DF4FDD33DF0500B90F89611D3B0EB217FBE80A9(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mA6D1BF0531A4B163ED154D98E5AC42EBF6BA5F3D(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mFC4E3A09D0F9A76B3DA65553F10F7EF785896EEA_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6DF4FDD33DF0500B90F89611D3B0EB217FBE80A9(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m8FD2ED9C81D1A54D0D5D33B66435A7B5E8E4C65E(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m9E379D319EC36F9C671F83AFE1C9392AE3F8E46C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mA6D1BF0531A4B163ED154D98E5AC42EBF6BA5F3D(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mFC4E3A09D0F9A76B3DA65553F10F7EF785896EEA_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mB973BB372093CBC6DB660DD13230590FAE34FD26_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6DF4FDD33DF0500B90F89611D3B0EB217FBE80A9(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m5EEA3CF56A858CE6C8B93F86EBD5D9E0EC019D09(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		int32_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mFC4E3A09D0F9A76B3DA65553F10F7EF785896EEA_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mCE6DF4C8905ACBAE7E5D421ED244EAC9A7EC740C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m6F63F3D7CF1CCBA256CF8FFF827834E8F6CDC53C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6DF4FDD33DF0500B90F89611D3B0EB217FBE80A9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3453F1516A7747F6CB50AA7E83EFF9D33D9D1325(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3453F1516A7747F6CB50AA7E83EFF9D33D9D1325_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mF42F014B5AA9C633D3FCAB3FFF26646E54395BD8_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m68DD649D2380023901CC831016DEA16A5B288282_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_9 = ___2_item;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_10 = (*(GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78*)L_9);
		UnsafeUtility_WriteArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mFC4E3A09D0F9A76B3DA65553F10F7EF785896EEA_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m82C93532EC8019E57890DFD6E9CC46A317151539_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m2572955425519CE1B06763800D02CC31D4524A66_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m510B53DA90FFE39645247335AF32A06FDFA8CDC8_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m3E27B66D1AF2B2EFDC1E134558E03432C319C236_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m02C761EACF89E4688DB64F93E2964303D0F91716_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m6D25448FB196CBD8CF6078CA6D44987A14900252_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m993E197C44782381F50C5F9358CFE4F60B2158B8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mC1D8DBBCAF3815BE83DB3334FDFE620B1786D3F3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m62D7AA6A3F3B3E079B744D8D1AA5F9A22C7229A4(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m6D25448FB196CBD8CF6078CA6D44987A14900252(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_m8E4A765ABCC666BDB704BAE1F9252D4DBBE17C9E_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m62D7AA6A3F3B3E079B744D8D1AA5F9A22C7229A4(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m993E197C44782381F50C5F9358CFE4F60B2158B8(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mA7D791C1AE54C7872E31544472EF513AAB0DD417_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m6D25448FB196CBD8CF6078CA6D44987A14900252(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_m8E4A765ABCC666BDB704BAE1F9252D4DBBE17C9E_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m0EF191B649EE8341F078D1BA7BD8DCDEF3062119_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m62D7AA6A3F3B3E079B744D8D1AA5F9A22C7229A4(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_mA0ACBD5F08D696522B3B9BC27800C791335F01C5(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		int32_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_m8E4A765ABCC666BDB704BAE1F9252D4DBBE17C9E_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mAB74CE713C7969C612D86CBD7C4DEFB46F785714_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m633A2DC0120A42F8D81FC4F1C6C30EED7ECBA84D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m62D7AA6A3F3B3E079B744D8D1AA5F9A22C7229A4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m260194DFCEEC078AEAF9B5474A7D6B3D0DCD6AA4(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m260194DFCEEC078AEAF9B5474A7D6B3D0DCD6AA4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_mAFAA4FE48EF2524A46E0D360AAE5303BE8B51EC0_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m6284CEC6812F88932F9259CA5614F3B9EE614842_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0* L_9 = ___2_item;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 L_10 = (*(HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0*)L_9);
		UnsafeUtility_WriteArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_m8E4A765ABCC666BDB704BAE1F9252D4DBBE17C9E_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mC5DC427A3E768974AF962C38F1D281C97D83934C_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m6D48DC0D3504518685478674A7544C214B293861_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m7827F895F293F9F9EEF77730CFF9D8E8C5D81289_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m63BC43604B61DAA4BFC21D76C484B87664520573_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m79A95CE9116B5691078AA0912B3D07D7D08F65A9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mA60C7AAB43656E7611E27393BC6AB7E52163A000_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mC0307320846285CEBB98C0EF64D1880A4876EBB6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m0E59C749F5C3995145CFD54DB36FDAA9B1378C6D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA5FCFB37B4C19FD5FF7B0660AAE55181A6A68C1F(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mA60C7AAB43656E7611E27393BC6AB7E52163A000(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m2D4905CE9CCFB4EF383D04FA0F872F621E08A309_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA5FCFB37B4C19FD5FF7B0660AAE55181A6A68C1F(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mC0307320846285CEBB98C0EF64D1880A4876EBB6(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m72E3D9FF3ED833A330329D5B9993EEC0F0D58EE0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mA60C7AAB43656E7611E27393BC6AB7E52163A000(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m2D4905CE9CCFB4EF383D04FA0F872F621E08A309_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m450B8516C47AE46DC2F9EBD35EA5DCDE2FE8268E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA5FCFB37B4C19FD5FF7B0660AAE55181A6A68C1F(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mD9CA815618E4ED4EC44B7F5D9D7ACF7649BEF9AF(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		int32_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m2D4905CE9CCFB4EF383D04FA0F872F621E08A309_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m5D6AEA333632082B84439F9086EDF7DC99347A25_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m4EA4A3FEF1A7229781E9C677F5F5D71A120B2C65_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA5FCFB37B4C19FD5FF7B0660AAE55181A6A68C1F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m907C21D03B0B07E416159F61AE6322D367A27C05(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m907C21D03B0B07E416159F61AE6322D367A27C05_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m86FC76E325E9D3B56133BB7A193BAF12B47FBCC1_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m8F11784964EF3E22F8574119728AAEE91BD22524_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_9 = ___2_item;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_10 = (*(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)L_9);
		UnsafeUtility_WriteArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m2D4905CE9CCFB4EF383D04FA0F872F621E08A309_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m246E8AFC9F573399936B217AC86EC61F6A047C81_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mE3F071807F1870991264235D85A27DBB6384804A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mE56E2B1FC56DF63469BEF77F6D7EECABB7304BF6_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m6CD64A8CECC69407359ABD13395E75E5D39F27F9_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mEF3A98FABCE256A22409653F694F4C72E3DDB4DC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m8C100557ED4970593FAA5F277523DE937111A595_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m5526D6FE4ABA7C6061685D4681AFD4686049B9E3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mAAF058F1A428D8780337B9CF2695CE9338966DCC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m526C9313C8BCF707526B309126FFB7502C548A5D(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		int32_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		int32_t L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m2FA6AF21EE9FA483A21E8B68CEB5BE800461C16A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m54C8F3E22FCD1BD6648FDE077BB6829BE5EB8AB1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		int32_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(int32_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		int32_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		int32_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		int32_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(int32_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m10BCBE8DA6067B78364AB1CB739C84E9E6A2B4EE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		int32_t* L_9 = ___2_item;
		int32_t L_10 = (*(int32_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m547A37BE167FA17E04E82D8F63EF88F4EB78351E_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mA97A5DACECAD61C19D0990D7C5A59A8397C38755_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mC9F41380E928E0EBFABDFB192DAAC447ADB2D07E_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m48435615E06A634B4C733D313195F8AE779007F2_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m210AC79FC169C4C98DD37B766416DA4730773F51_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m4CA7D5F8CB87265AEDC41B095F214E10D6C291AA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m3295B4A91183A7C409EC30F4AE1FB1A2FFA21207_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m10AEF0E0182A0627F9B7E4C44A0E82D084319C45_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8B43648CBDE9E427984C2142FD2AE8614713B474(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m4CA7D5F8CB87265AEDC41B095F214E10D6C291AA(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m5F7F22F8AC0CE4FCC6AC027EB2C42BCCD5331616_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8B43648CBDE9E427984C2142FD2AE8614713B474(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m3295B4A91183A7C409EC30F4AE1FB1A2FFA21207(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mF56531913380EF5EF66B4DF8F3230C8B4D57841B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m4CA7D5F8CB87265AEDC41B095F214E10D6C291AA(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m5F7F22F8AC0CE4FCC6AC027EB2C42BCCD5331616_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mA7C7EC8AC6BC65D508C354F7612E6C617F080287_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8B43648CBDE9E427984C2142FD2AE8614713B474(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_mD52B127B97D37B0E888372E75F0EB778C8D9B731(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		int32_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m5F7F22F8AC0CE4FCC6AC027EB2C42BCCD5331616_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mE477BC40038463B36AC2185B5588099643E8239A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m6B6BAE7AD73FE5070CF559CE49236C57075EE6A2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8B43648CBDE9E427984C2142FD2AE8614713B474_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1EDC20E540990610D711636F04418BBBD7370AA9(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1EDC20E540990610D711636F04418BBBD7370AA9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m747314CBED7C22FD9FDF54EEC99A346A55503493_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m14BE0BCE054F5BE02156548D2722AFC92B96F770_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7* L_9 = ___2_item;
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 L_10 = (*(CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7*)L_9);
		UnsafeUtility_WriteArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m5F7F22F8AC0CE4FCC6AC027EB2C42BCCD5331616_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mF0496CBEDB0264E6A711B70BBAF5DD1A027AC090_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m98EADDD78E2A1F5AFE29FA78E3F31C5E6AACEA05_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m1BEDE92BA101CCF4B8B7F8078FAB141F808911FF_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m242A7071CDBC88698FCBB62CE0B9302C671B230A_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m9AF1225CDAE5837EB1CAFD19361E88DD33CA9590_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m17CDC899591C0359D17251F4DC69ABB42BCC7D41_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mBE4686D07050739816F7A654D52B1148188ED8B3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m74B79FCC8C0DC7A44126EA2B9405D1806EAA0CDD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDC277D141C123D09979BB199452A518ACA996D89(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m17CDC899591C0359D17251F4DC69ABB42BCC7D41(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m463A0B1A1A7ED5C9FD51E1EDCD073E4D96AB0BF1_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDC277D141C123D09979BB199452A518ACA996D89(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mBE4686D07050739816F7A654D52B1148188ED8B3(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mE4207C5825BA4691080FA96EFDC9D8D415C034DF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m17CDC899591C0359D17251F4DC69ABB42BCC7D41(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m463A0B1A1A7ED5C9FD51E1EDCD073E4D96AB0BF1_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m8F2F0528DF03E70702E770746833B06DFA734D45_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDC277D141C123D09979BB199452A518ACA996D89(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_mF381C1E98C962CEDB6A4736E389C9CC2B6767B78(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		int32_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m463A0B1A1A7ED5C9FD51E1EDCD073E4D96AB0BF1_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mCD3AA21DB87ADE7F5157459EF1F333D5C9273413_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m4C29F5A36E1FA20879E8C990C3560E8552496D49_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDC277D141C123D09979BB199452A518ACA996D89_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m28C697C6882CBA7D5E4C620BE18189F7CC1DEA19(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m28C697C6882CBA7D5E4C620BE18189F7CC1DEA19_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m6936A2AE805E085425106C4C393B7D81ADA4B1BB_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m36B768D50C18166B755BBE2095A71EAF03603862_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707* L_9 = ___2_item;
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 L_10 = (*(CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707*)L_9);
		UnsafeUtility_WriteArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m463A0B1A1A7ED5C9FD51E1EDCD073E4D96AB0BF1_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mDB87BE6F69BCD892E0DCD89BEBC6776A65A0350E_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m01344EB2B3B98BF6CD97EC490ADFA3B6CDB018CF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m48888E0CF064F8F0007D11F4D79EBE5A27BCA741_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m742956D44523478B6C7550B4AD3FBAD510AFAC24_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m076E14A8C3CB4EED234BF7E788152BB9A6F22D82_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m57B325EFF67BD5485331BD2F287B463A5D8FC9C8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m95E0C2203337A917B366551260F10DD9AA00924A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m8B2F4B364F6D97AA02F42B29C9CD5942FF7E2094_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m57B325EFF67BD5485331BD2F287B463A5D8FC9C8(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m95E0C2203337A917B366551260F10DD9AA00924A(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m35894EBBB103E1E0CD0CD016DB1B35AC14A28D1B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m57B325EFF67BD5485331BD2F287B463A5D8FC9C8(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m68F426016D2195FB3CAC3B543D8F67C733031A7A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m337E81148B331D4822C7412A962A569B8D2ADC59(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		int32_t L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m84E20B60B35803AAAE1A64D7E170477EDB1DEB10_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_16 = ___1_key;
		bool L_17;
		L_17 = RangeKey_Equals_m05E612C122D91758588CEB7529751045E6F09493((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m984EF7E144684AA2009D90721D61BE05A46AFD09_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_4 = (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_0 = ___3_it;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		int32_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(int32_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		int32_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m92F223FB6B0005A83CA9AC122EEB656E520F55AC(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m92F223FB6B0005A83CA9AC122EEB656E520F55AC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		int32_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_22 = ___2_it;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_23 = L_22->___key;
		bool L_24;
		L_24 = RangeKey_Equals_m05E612C122D91758588CEB7529751045E6F09493((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		int32_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(int32_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m0EC4D0EEAFA0FED1FD26DDC65F7A85F8E250F64D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		int32_t* L_9 = ___2_item;
		int32_t L_10 = (*(int32_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m52745ED7420EABDF0FE1EB18EB8DF971BC38F55E_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mAFBD8500D8F997F21382951674B827495971A191_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m228ECE552E75254D780BC34D5F06FE9C2AE3FC76_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mB3A30520B48654DAAAB2BD313E27D8ECC4BC7FA4_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mE7F90CAB479EA1DBC2D065472AD6D69F3138CBAB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m72E4916B9F2F2ADBE570135B25642B48E8905DD2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m6DC9EC22FBED4404D564A598C5E1D1EDCCC841B9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mFA9AC1C5F4D3DF1F8237C1C5945AA5A3E268C4C3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m47876EC0F084EFF368B74E8E931FCC774940C8B8(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m72E4916B9F2F2ADBE570135B25642B48E8905DD2(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m8EF0148FF7EE5D2FD7612F1D419951EE0547D8C5_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_runtime_class_init_inline(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = SharedInstanceHandle_GetHashCode_m5B97E179A78BD59969291F66E286E00873FC120D((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m47876EC0F084EFF368B74E8E931FCC774940C8B8(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m6DC9EC22FBED4404D564A598C5E1D1EDCCC841B9(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m0F4324E138D1BD06BD6BD7DA152C0A4B7CA83033_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m72E4916B9F2F2ADBE570135B25642B48E8905DD2(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m8EF0148FF7EE5D2FD7612F1D419951EE0547D8C5_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_runtime_class_init_inline(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = SharedInstanceHandle_GetHashCode_m5B97E179A78BD59969291F66E286E00873FC120D((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m79F6341CBA33F4AD486FF585CF9351637EDC6876_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m47876EC0F084EFF368B74E8E931FCC774940C8B8(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDBBEC8084143D11100E641430E613B78DB37E7BE(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m8EF0148FF7EE5D2FD7612F1D419951EE0547D8C5_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		int32_t L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_runtime_class_init_inline(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		int32_t L_71;
		L_71 = SharedInstanceHandle_GetHashCode_m5B97E179A78BD59969291F66E286E00873FC120D((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mF1A689DACF84480061C11463FDF11F3C533626C0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		il2cpp_codegen_runtime_class_init_inline(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = SharedInstanceHandle_GetHashCode_m5B97E179A78BD59969291F66E286E00873FC120D((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_mFA361CB1BDFC44955AC2650781EB1E111FB3768D_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_16 = ___1_key;
		il2cpp_codegen_runtime_class_init_inline(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = SharedInstanceHandle_Equals_m8318CF0264558ADD64222B3A2593EACCED56BFE0((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mA113C7640DD431FC0BA91060F7B309B12F331774_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF ___1_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* L_4 = (SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692*)(&(&___1_it)->___key);
		il2cpp_codegen_runtime_class_init_inline(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = SharedInstanceHandle_GetHashCode_m5B97E179A78BD59969291F66E286E00873FC120D(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m47876EC0F084EFF368B74E8E931FCC774940C8B8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* ___3_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_0 = ___3_it;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		int32_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(int32_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		il2cpp_codegen_runtime_class_init_inline(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = SharedInstanceHandle_GetHashCode_m5B97E179A78BD59969291F66E286E00873FC120D((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		int32_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m9DFD0C61BAA59F9DA62114F045C8D6219C0EE3B3(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m9DFD0C61BAA59F9DA62114F045C8D6219C0EE3B3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* ___2_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		int32_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_mFA361CB1BDFC44955AC2650781EB1E111FB3768D_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_22 = ___2_it;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_23 = L_22->___key;
		il2cpp_codegen_runtime_class_init_inline(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = SharedInstanceHandle_Equals_m8318CF0264558ADD64222B3A2593EACCED56BFE0((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		int32_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(int32_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m6C484F5E6CB4F04144D484CFEBC595C84F4A9F65_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tF5308198D949B307C25F95FFA6AF3272F7B709FF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		int32_t* L_9 = ___2_item;
		int32_t L_10 = (*(int32_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m5AD1B272FFA92B6C3CD1CDCBC99150790F0F2F41_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m252DF27AB8BE4621E5E4FC6CB71A2DCBD4114E48_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mD4F02723CF5792AE795B9D9A0CE195DBD51D4B20_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mB2A6BCB2BBCEDB9A04CFA3460A52DFA7C434A2AA_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m6111762F9DF12CED5C2FD1961B340676409BFF0E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m87F60C86A474B557B069D37548567CB2667C42FA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8D99BED2AEF823C1F525AF6D51D018736E33922F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m6F8189F7B1BB735D6A415B2178B5549363D3DF5F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEB3EEF401A3CDD197AC9DE490B9CAA5F3415FBE5(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m87F60C86A474B557B069D37548567CB2667C42FA(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		uint32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEB3EEF401A3CDD197AC9DE490B9CAA5F3415FBE5(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m8D99BED2AEF823C1F525AF6D51D018736E33922F(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m924581E765BF4C2E5D146C6BA539FF8916116EFF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m87F60C86A474B557B069D37548567CB2667C42FA(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mB28BD55CA55523FDBE164F76B61971032DD40858_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEB3EEF401A3CDD197AC9DE490B9CAA5F3415FBE5(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mC740151B18F0E9F81E90C5B066A052BAB9F361C4(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		uint32_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mBBA5DDB2402B59D3790793E8834261C6BAD875D8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		uint32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		uint32_t L_16 = ___1_key;
		bool L_17;
		L_17 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mC4CBF0F01465E8FDE0330757D4F54389C5C09D4F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint32_t* L_4 = (uint32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEB3EEF401A3CDD197AC9DE490B9CAA5F3415FBE5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___2_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_0 = ___3_it;
		uint32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3C59C500D6E8A033EFFAD29EA56E615156D25D1D(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3C59C500D6E8A033EFFAD29EA56E615156D25D1D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___1_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		uint32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_22 = ___2_it;
		uint32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m80C61348EC8F9D4F73F0AAA4A69A028E6D599DCD_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m27DB9701BD4DACF3D9F720EA077801FB3BA61418_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___1_it, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_9 = ___2_item;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_10 = (*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)L_9);
		UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mF42833F07FCA6740C8043CA6FEB7D74C1F716443_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m257CA01A4F9ECAE49EA8029FD5725E238BD2C32E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mFC393025CEDB40A8010D99EA624C6E7764420B16_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m94C2D2CC468E8E6A467577E08B46E82ADD771B59_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mCAE3A74A5AB042537557D83CCB3C4B27F509B19C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_9 = L_1;
	const Il2CppFullySharedGenericStruct L_33 = L_1;
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_2;
		L_2 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_7, L_8, L_9);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		il2cpp_codegen_memcpy(L_13, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_11, L_12, L_13);
		int32_t L_15;
		L_15 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_14, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		V_6 = L_28;
		int32_t* L_29 = V_5;
		int32_t L_30 = V_2;
		int32_t L_31 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_31;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		il2cpp_codegen_memcpy(L_33, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_34;
		L_34 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_32, L_33, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (!L_34)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t L_36 = V_2;
		int32_t L_37 = ___3_threadIndex;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_35, L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_38 = V_4;
		int32_t L_39 = V_3;
		int32_t L_40 = V_2;
		int32_t L_41 = V_6;
		int32_t L_42;
		L_42 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4)))), L_40, L_41, NULL);
		int32_t L_43 = V_6;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m943307074EE293074937D7AE27E1745AA05FE78E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_4, L_5, L_6);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_8, L_9, L_10);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_11, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		uint8_t* L_16 = L_15->___buckets;
		V_2 = (int32_t*)L_16;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___next;
		V_4 = (int32_t*)L_18;
	}

IL_0046:
	{
		int32_t* L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		int32_t L_24 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_24;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		int32_t L_29;
		L_29 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4)))), L_27, L_28, NULL);
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m6F349BA91ED50CB53221A30136FCD2F0D0A2922B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_71 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_66 = L_2;
	const Il2CppFullySharedGenericStruct L_70 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		il2cpp_codegen_memcpy(L_2, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_3;
		L_3 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_1, L_2, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		il2cpp_codegen_memcpy(L_66, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_64, L_65, L_66);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		il2cpp_codegen_memcpy(L_70, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_68, L_69, L_70);
		int32_t L_72;
		L_72 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_71, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		int32_t L_74 = L_73->___bucketCapacityMask;
		V_4 = ((int32_t)(L_72&L_74));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___buckets;
		V_5 = (int32_t*)L_76;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_77 = ___0_data;
		NullCheck(L_77);
		uint8_t* L_78 = L_77->___next;
		V_3 = (int32_t*)L_78;
		int32_t* L_79 = V_3;
		int32_t L_80 = V_2;
		int32_t* L_81 = V_5;
		int32_t L_82 = V_4;
		int32_t L_83 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_79, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_80), 4))))) = (int32_t)L_83;
		int32_t* L_84 = V_5;
		int32_t L_85 = V_4;
		int32_t L_86 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_86;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m6648F1C82F87EE0C1EC2361356969E1893FF4EAC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_6, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_7;
		L_7 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_6, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (void*)L_14, L_15, (Il2CppFullySharedGenericStruct*)L_16);
		il2cpp_codegen_memcpy(V_6, L_16, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_memcpy(L_17, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_19;
		L_19 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_18, (void*)(Il2CppFullySharedGenericStruct*)V_6, L_17);
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_26;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_27 = V_2;
		int32_t L_28 = V_4;
		int32_t* L_29 = V_2;
		int32_t L_30 = V_5;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))) = (int32_t)L_31;
	}

IL_0086:
	{
		int32_t* L_32 = V_2;
		int32_t L_33 = V_5;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t* L_38;
		L_38 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_37, NULL);
		int32_t L_39 = (*(L_38));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))) = (int32_t)L_39;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_34;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00bb:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m8BAE6A94FC57AB2FD13A4FD8729670F270544F06_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method) 
{
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_12 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_26 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_32 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_36 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_43 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t L_5;
		L_5 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_4, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer((NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)___1_it, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0)))));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		il2cpp_codegen_memcpy(L_12, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		il2cpp_codegen_memcpy(L_26, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		il2cpp_codegen_memcpy(L_32, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_32, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		il2cpp_codegen_memcpy(L_36, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_36, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		il2cpp_codegen_memcpy(L_43, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_44 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_43, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct* ___2_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___3_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___3_it;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_write_instance_field_data(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0), L_1, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_6);
		int32_t L_7 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_7);
		Il2CppFullySharedGenericStruct* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_11, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_2 = L_20;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_20);
		int32_t L_21 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_21);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		Il2CppFullySharedGenericStruct* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_24 = ___3_it;
		bool L_25;
		L_25 = ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_23 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_36 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_2, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___2_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1));
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_2 = ___2_it;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), (-1));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_3 = ___2_it;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), (-1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (void*)L_19, L_20, (Il2CppFullySharedGenericStruct*)L_21);
		il2cpp_codegen_memcpy(V_2, L_21, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_22 = ___2_it;
		il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0)), SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_25;
		L_25 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_24, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_23);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		il2cpp_codegen_write_instance_field_data<int32_t>(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_29);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_30 = ___2_it;
		int32_t L_31 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_31);
		Il2CppFullySharedGenericStruct* L_32 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		uint8_t* L_34 = L_33->___values;
		int32_t L_35 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (void*)L_34, L_35, (Il2CppFullySharedGenericStruct*)L_36);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_32, L_36, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), (void**)(Il2CppFullySharedGenericStruct*)L_32, (void*)L_36);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m557C0D5801C035501701C60FE81775298FDD76A5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, Il2CppFullySharedGenericStruct* ___2_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___1_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		Il2CppFullySharedGenericStruct* L_9 = ___2_item;
		il2cpp_codegen_memcpy(L_10, L_9, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_7, L_8, L_10);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m38D20A847D6996E7C118E952524DEE9592A2B629_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mFE0B2263ABF50F3C1DD001FF39C0D0DC181DD163_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mE68740A5B03A3A069612808990A947A3C61FCDE0_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m01EFA9C0C2C6B2994ED33A385814CC4C0FF28B19_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDebuggerTypeProxy_2__ctor_m987AD575BFED1AEAD92F5DABF40893738C0F47A0_gshared (UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4* __this, UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___0_target, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 L_0 = ___0_target;
		__this->___m_Target = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* UnsafeParallelHashMapDebuggerTypeProxy_2_get_Items_mFAF8210CCD89AD5741956F8C54BAA23928CF4408_gshared (UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const uint32_t SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2);
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29);
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29);
	const Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6 L_15 = alloca(SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609);
	List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* V_0 = NULL;
	NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_0 = (List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_0;
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707* L_1 = (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707*)(&__this->___m_Target);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_3;
		L_3 = ((  NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 (*) (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{
				NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				return;
			}
		});
		try
		{
			{
				V_2 = 0;
				goto IL_004a_1;
			}

IL_001c_1:
			{
				List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_4 = V_0;
				NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_5 = V_1;
				NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = L_5.___Keys;
				V_3 = L_6;
				int32_t L_7 = V_2;
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_3), L_7, (Il2CppFullySharedGenericStruct*)L_8);
				NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_9 = V_1;
				NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10 = L_9.___Values;
				V_4 = L_10;
				int32_t L_11 = V_2;
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (&V_4), L_11, (Il2CppFullySharedGenericStruct*)L_12);
				memset(L_15, 0, SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609);
				Pair_2__ctor_m080327976BEF3D9FBA133845A20983F2462E1D6A((Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6*)L_15, il2cpp_codegen_memcpy(L_13, L_8, SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2), il2cpp_codegen_memcpy(L_14, L_12, SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				NullCheck(L_4);
				InvokerActionInvoker1< Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_4, L_15);
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_004a_1:
			{
				int32_t L_17 = V_2;
				int32_t L_18;
				L_18 = ((  int32_t (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				if ((((int32_t)L_17) < ((int32_t)L_18)))
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0064;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_19 = V_0;
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_mAC8F198D20B98C2819447D8E080EBF2F2714BFFE_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_4 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m720B963A1A8BA6E3EF6204599F7B1AE86C47B938(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2)), L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2__ctor_mAC8F198D20B98C2819447D8E080EBF2F2714BFFE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	UnsafeParallelHashMap_2__ctor_mAC8F198D20B98C2819447D8E080EBF2F2714BFFE(_thisAdjusted, ___0_capacity, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m2EB3B4B325AAF39DA286FF82FDB26405AE271998_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_get_IsEmpty_m2EB3B4B325AAF39DA286FF82FDB26405AE271998_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_IsEmpty_m2EB3B4B325AAF39DA286FF82FDB26405AE271998_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_Count_m3B17849FD6E9AEFC745138B43A5F5924BDA651A6_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_Count_m3B17849FD6E9AEFC745138B43A5F5924BDA651A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Count_m3B17849FD6E9AEFC745138B43A5F5924BDA651A6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m5516D69B8E5C8A61A3B8112E3B0C0DC701FDEF20_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_get_Capacity_m5516D69B8E5C8A61A3B8112E3B0C0DC701FDEF20_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_Capacity_m5516D69B8E5C8A61A3B8112E3B0C0DC701FDEF20_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_mD1D227DF7720121254BBE5435F29C5CB94D97831_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_2, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m74D70D8E65D60A3A3B782011BC925E749F8C29C8(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_set_Capacity_mD1D227DF7720121254BBE5435F29C5CB94D97831_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	UnsafeParallelHashMap_2_set_Capacity_mD1D227DF7720121254BBE5435F29C5CB94D97831(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_mEFDB8CAFDB397D0E8A4279CA11C361A29EC8A4BB(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_mED257AE6B2327BE5847C946467D88E33B4A1BA52_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		int32_t L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A(L_0, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_TryAdd_mED257AE6B2327BE5847C946467D88E33B4A1BA52_AdjustorThunk (RuntimeObject* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_TryAdd_mED257AE6B2327BE5847C946467D88E33B4A1BA52(_thisAdjusted, ___0_key, ___1_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_m62B965BA968787C68DDE510C13D98B45ACF574A8_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		int32_t L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A(L_0, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Add_m62B965BA968787C68DDE510C13D98B45ACF574A8_AdjustorThunk (RuntimeObject* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	UnsafeParallelHashMap_2_Add_m62B965BA968787C68DDE510C13D98B45ACF574A8(_thisAdjusted, ___0_key, ___1_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_mE398837783AB4D7D5B1519D6B47F03F029B40A9A_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_mD0A7EC52AF9067A81379B898E9F19FA26F3F4B88(L_0, L_1, (bool)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_Remove_mE398837783AB4D7D5B1519D6B47F03F029B40A9A_AdjustorThunk (RuntimeObject* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Remove_mE398837783AB4D7D5B1519D6B47F03F029B40A9A(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) 
{
	NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		int32_t* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6_AdjustorThunk (RuntimeObject* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t* ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6(_thisAdjusted, ___0_key, ___1_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_mFBBB13C3C28724EEB5E77C8EBCF29B6EFEAE9C8C_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_ContainsKey_mFBBB13C3C28724EEB5E77C8EBCF29B6EFEAE9C8C_AdjustorThunk (RuntimeObject* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_ContainsKey_mFBBB13C3C28724EEB5E77C8EBCF29B6EFEAE9C8C(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Item_m74D6405042402B9FE213F8E6F3A0E02CFB637FF9_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6(__this, L_0, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_get_Item_m74D6405042402B9FE213F8E6F3A0E02CFB637FF9_AdjustorThunk (RuntimeObject* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_Item_m74D6405042402B9FE213F8E6F3A0E02CFB637FF9(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_m78B278F2F9ECFF6DD543068ED4A22897FFEA5017_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_SetValue_mBC2EB4E62A5FAA365C4795E1D7FA3F3ED271F97A(L_3, (&V_1), (&___1_value), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}

IL_0023:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_6 = ___0_key;
		int32_t L_7 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8 = __this->___m_AllocatorLabel;
		bool L_9;
		L_9 = UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A(L_5, L_6, L_7, (bool)0, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_set_Item_m78B278F2F9ECFF6DD543068ED4A22897FFEA5017_AdjustorThunk (RuntimeObject* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	UnsafeParallelHashMap_2_set_Item_m78B278F2F9ECFF6DD543068ED4A22897FFEA5017(_thisAdjusted, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_1, L_2, NULL);
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = ___0_inputDeps;
		return L_1;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		(&V_0)->___Data = L_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		(&V_0)->___Allocator = L_3;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_4 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_4, L_5, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
		return L_6;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 UnsafeParallelHashMap_2_GetKeyArray_m0790F3B72CBA21D7B667E1A333E76DEAC8678138_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAF52A80BBB617F62596D58F8FFD9E3E6AA9DB60F(L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m49E855A91D083A54CFF44DEB13335123AD3C4001(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 UnsafeParallelHashMap_2_GetKeyArray_m0790F3B72CBA21D7B667E1A333E76DEAC8678138_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetKeyArray_m0790F3B72CBA21D7B667E1A333E76DEAC8678138(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_m28E06E6A40485B8C1E9CEB5D9AD5DCEB3FD937B7_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B(L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_m28E06E6A40485B8C1E9CEB5D9AD5DCEB3FD937B7_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetValueArray_m28E06E6A40485B8C1E9CEB5D9AD5DCEB3FD937B7(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 UnsafeParallelHashMap_2_GetKeyValueArrays_mBAD0B630B8637FBD3415B9CA1EB4912C07A0183A_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_m5C1BD5C2D8BD4FE03EC32866EEDF2EBECAB7B7F3((&V_0), L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC3C2330139E264EC4EB952292BE242F6511CA8E6(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 UnsafeParallelHashMap_2_GetKeyValueArrays_mBAD0B630B8637FBD3415B9CA1EB4912C07A0183A_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetKeyValueArrays_mBAD0B630B8637FBD3415B9CA1EB4912C07A0183A(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_t725B9E76F960232582498637DEF16962C7959261 UnsafeParallelHashMap_2_AsParallelWriter_mBB99B9D2617627AD5097AA220071CE11F5F93C2D_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	ParallelWriter_t725B9E76F960232582498637DEF16962C7959261 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___m_ThreadIndex = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		ParallelWriter_t725B9E76F960232582498637DEF16962C7959261 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ParallelWriter_t725B9E76F960232582498637DEF16962C7959261 UnsafeParallelHashMap_2_AsParallelWriter_mBB99B9D2617627AD5097AA220071CE11F5F93C2D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	ParallelWriter_t725B9E76F960232582498637DEF16962C7959261 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_AsParallelWriter_mBB99B9D2617627AD5097AA220071CE11F5F93C2D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC UnsafeParallelHashMap_2_AsReadOnly_m3745E965DCA687407B0FC6E9CF9914D39339955B_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271 L_0 = (*(UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*)__this);
		ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnly__ctor_m0CF31DFE3FE1BB2E49351FDCD039458FFC66E9D1_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return L_1;
	}
}
IL2CPP_EXTERN_C  ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC UnsafeParallelHashMap_2_AsReadOnly_m3745E965DCA687407B0FC6E9CF9914D39339955B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC _returnValue;
	_returnValue = UnsafeParallelHashMap_2_AsReadOnly_m3745E965DCA687407B0FC6E9CF9914D39339955B(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42 UnsafeParallelHashMap_2_GetEnumerator_mA769C26ABB845731EFF75A5774F58BFA39A7C30B_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		UnsafeParallelHashMapDataEnumerator__ctor_m4BD89848A9562869AB65E15D3D1D24A194187736((&L_1), L_0, NULL);
		(&V_0)->___m_Enumerator = L_1;
		Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42 UnsafeParallelHashMap_2_GetEnumerator_mA769C26ABB845731EFF75A5774F58BFA39A7C30B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	Enumerator_tFFE3C79A4F5D658ED12C78D7E4F8CF7FB30BCD42 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetEnumerator_mA769C26ABB845731EFF75A5774F58BFA39A7C30B(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5_gshared (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAC61BCD78DBCF3665AB62CF3F0A9160131582E7C_gshared_inline (void* ___0_destination, int32_t ___1_index, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94);
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_3 = ___2_value;
		*(DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 UnsafeUtility_ReadArrayElement_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mFD7DBC1199616005466125347027F6201459B40D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94);
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_3 = (*(DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m32FE612078445C09645A5FEFCADD35BF1B5497D3_gshared_inline (void* ___0_destination, int32_t ___1_index, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C);
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_3 = ___2_value;
		*(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C UnsafeUtility_ReadArrayElement_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mDE41FFE3160D153E47D8D93EF29E4B9C3DB23D20_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C);
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_3 = (*(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m0CA08285DF610E216621F21C754D8D5E56428B01_gshared_inline (void* ___0_destination, int32_t ___1_index, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0);
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_3 = ___2_value;
		*(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0);
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_3 = (*(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mFC4E3A09D0F9A76B3DA65553F10F7EF785896EEA_gshared_inline (void* ___0_destination, int32_t ___1_index, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78);
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_3 = ___2_value;
		*(GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 UnsafeUtility_ReadArrayElement_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mF42F014B5AA9C633D3FCAB3FFF26646E54395BD8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78);
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_3 = (*(GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_m8E4A765ABCC666BDB704BAE1F9252D4DBBE17C9E_gshared_inline (void* ___0_destination, int32_t ___1_index, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0);
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 L_3 = ___2_value;
		*(HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 UnsafeUtility_ReadArrayElement_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_mAFAA4FE48EF2524A46E0D360AAE5303BE8B51EC0_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0);
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 L_3 = (*(HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m2D4905CE9CCFB4EF383D04FA0F872F621E08A309_gshared_inline (void* ___0_destination, int32_t ___1_index, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B);
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_3 = ___2_value;
		*(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B UnsafeUtility_ReadArrayElement_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m86FC76E325E9D3B56133BB7A193BAF12B47FBCC1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B);
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_3 = (*(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m5F7F22F8AC0CE4FCC6AC027EB2C42BCCD5331616_gshared_inline (void* ___0_destination, int32_t ___1_index, CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7);
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 L_3 = ___2_value;
		*(CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 UnsafeUtility_ReadArrayElement_TisCachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7_m747314CBED7C22FD9FDF54EEC99A346A55503493_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7);
		CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7 L_3 = (*(CachedShadowRecord_tA5CA09F81872F0A815C582713A90B602D3C078A7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m463A0B1A1A7ED5C9FD51E1EDCD073E4D96AB0BF1_gshared_inline (void* ___0_destination, int32_t ___1_index, CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707);
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 L_3 = ___2_value;
		*(CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 UnsafeUtility_ReadArrayElement_TisCachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707_m6936A2AE805E085425106C4C393B7D81ADA4B1BB_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707);
		CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707 L_3 = (*(CachedTransform_tAFD26193789897BDEA5FE16E6D38511562202707*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_gshared_inline (void* ___0_destination, int32_t ___1_index, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C);
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_3 = ___2_value;
		*(RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C);
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_3 = (*(RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m8EF0148FF7EE5D2FD7612F1D419951EE0547D8C5_gshared_inline (void* ___0_destination, int32_t ___1_index, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692);
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_3 = ___2_value;
		*(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 UnsafeUtility_ReadArrayElement_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_mFA361CB1BDFC44955AC2650781EB1E111FB3768D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692);
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 L_3 = (*(SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_gshared_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___2_value;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_gshared_inline (void* ___0_destination, int32_t ___1_index, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770);
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_3 = ___2_value;
		*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 UnsafeUtility_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m80C61348EC8F9D4F73F0AAA4A69A028E6D599DCD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770);
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_3 = (*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_gshared_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m2EB3B4B325AAF39DA286FF82FDB26405AE271998_gshared_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m5516D69B8E5C8A61A3B8112E3B0C0DC701FDEF20_gshared_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnly__ctor_m0CF31DFE3FE1BB2E49351FDCD039458FFC66E9D1_gshared_inline (ReadOnly_t7B7B7016BA0B7A204A78C8B3D489D8A05AA5F7BC* __this, UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271 ___0_hashMapData, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271 L_0 = ___0_hashMapData;
		__this->___m_HashMapData = L_0;
		return;
	}
}
