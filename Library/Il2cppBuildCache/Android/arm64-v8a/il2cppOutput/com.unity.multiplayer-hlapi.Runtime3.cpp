#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t2E34DBEAE46F8D581A2BD36DF01436181B0748F3;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_tE8371663EC9914BEC5F635B74C54849B326ADE0C;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker>
struct Dictionary_2_tD72CBCF9BE040AE3A228F61DBB371525BC0811D0;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity>
struct HashSet_1_t47EED2F02F8CD5DAFE36148809BD11786AB10794;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t3F5FF9A887489019FA7B2FB1C361C15DC8BE4170;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<System.Delegate>
struct List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient>
struct List_1_tF7B19EC761F5BA98AF2C33A14FE58B6C7B00E0AA;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>
struct List_1_t9D140A08FB942235B9F31C470AEEC435BF441454;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t9B51907D678DE298D43D3C0145BE8A0BB9C6BD23;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731;
// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct List_1_tDD35339E6CDC416CA46D28EE3F916BAAEEE5ED52;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>
struct List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_tEF5FACE7C4D7D5E5A5F2DB81FD65B33FF5614A0B;
// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct Stack_1_tFC17FC60C487CA944293EC0C20A837E858FC504C;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t1AFB8A76F3C8947D751C875685F7F9A6F1D2324B;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t4F12EDE87063480F9FB83231068421DD673D98B2;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_tCBFB65F3DE13D8CF9724BDF7C0C631EC1E527805;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.String>
struct SyncListChanged_t31C3B6A626E8178223E3FFF1011E7D13B29D5147;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_tC69A38FB99F81B045C6CAA0D03D1887A3808F18F;
// UnityEngine.Networking.SyncList`1<System.Boolean>
struct SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B;
// UnityEngine.Networking.SyncList`1<System.Int32>
struct SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3;
// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_t29CA46379BC44796B1623ED9B14BD30E91F9FC6D;
// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731;
// UnityEngine.Networking.SyncList`1<System.String>
struct SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE;
// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Networking.ChannelBuffer[]
struct ChannelBufferU5BU5D_tDD121CFC96A7F7595AF221758A8DDDC7DFEC1F0B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Networking.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_tACC2FCFDEC2C97CFC299E59162033B3D37278085;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A;
// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[]
struct PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo[]
struct PendingPlayerInfoU5BU5D_t2558159156E248271949193275772BE6D9E2C5FC;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_t6B6C3E8648616FC59FD4CA2603EB2094906CD388;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.NetworkSystem.EmptyMessage
struct EmptyMessage_t990328447D8322C4402AF67E1E2713FA8B8936D8;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Networking.HostTopology
struct HostTopology_t268779309BB2D69F29D1A182662C79818813892B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Networking.LocalClient
struct LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Networking.MessageBase
struct MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Networking.NetBuffer
struct NetBuffer_tFEAD807F22521D48F1C7704785251F9D6C54547D;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E;
// UnityEngine.Networking.NetworkScene
struct NetworkScene_t9AD9379468E9115D73488B33A1BC393D13530250;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2;
// UnityEngine.Networking.NetworkServerSimple
struct NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A;
// UnityEngine.Networking.NetworkSystem.NotReadyMessage
struct NotReadyMessage_t83B510B1552A55C69E04EFA8B379E5AAACA05251;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct ObjectDestroyMessage_t5234A365BC076BB60E0E13A9C6AC0054413595A3;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_tD42DE3280BAA790DE51390215856AC606804619A;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct ObjectSpawnSceneMessage_tACE939AB6FE49062230207E1A45AA454E66FA11B;
// UnityEngine.Networking.NetworkSystem.OverrideTransformMessage
struct OverrideTransformMessage_t79E768877AE87FB3211BEC3448209F789507937A;
// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct OwnerMessage_tAB31B5261A7F05FB213057BFC3F238FDFFFB9F10;
// UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage
struct PeerAuthorityMessage_t41784D50032652A0A09AA09E67ACBDE020FC06AC;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822;
// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_tB1481179670DE32A53E7F0F01F3E6A184417670E;
// UnityEngine.Networking.PlayerController
struct PlayerController_tC346F9788A15DB87623DD99396C824504BE42F01;
// UnityEngine.Networking.NetworkSystem.ReadyMessage
struct ReadyMessage_tFE7B462238F70A58CBAE7F473501D6FD1200524D;
// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F;
// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068;
// UnityEngine.Networking.ServerAttribute
struct ServerAttribute_tFF42C2CCC4859D3FC6511283726E792828A5ACFB;
// UnityEngine.Networking.ServerCallbackAttribute
struct ServerCallbackAttribute_t29B69CF14A484B2D81D1E4713C8617ACC5FECD05;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t9AD498A37502702B3DCA7F9015C95299B9817651;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.StringMessage
struct StringMessage_tB25C942D42FCD3555DA3EF77A6521FFB01CE33D0;
// UnityEngine.Networking.SyncEventAttribute
struct SyncEventAttribute_t7346FF238D974E3D3E48D8AF89A5016CB5AF03F5;
// UnityEngine.Networking.SyncListBool
struct SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF;
// UnityEngine.Networking.SyncListFloat
struct SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1;
// UnityEngine.Networking.SyncListInt
struct SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726;
// UnityEngine.Networking.SyncListString
struct SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5;
// UnityEngine.Networking.SyncListUInt
struct SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99;
// UnityEngine.Networking.SyncVarAttribute
struct SyncVarAttribute_t065CEB73E47DCF8C126143D97012DFAE2DE7CACF;
// UnityEngine.Networking.TargetRpcAttribute
struct TargetRpcAttribute_tA5EC079234310807266F5E9E387660E2B0F7E764;
// System.Type
struct Type_t;
// UnityEngine.Networking.ULocalConnectionToClient
struct ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6;
// UnityEngine.Networking.ULocalConnectionToServer
struct ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t93845B1366E6555FD1483505B03196788A2EA0D0;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Networking.NetworkBehaviour/CmdDelegate
struct CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3;
// UnityEngine.Networking.NetworkBehaviour/EventDelegate
struct EventDelegate_t8E97F816D285A45E0CAA40FE6A75FF2D45E84C7A;
// UnityEngine.Networking.NetworkBehaviour/Invoker
struct Invoker_t6C4BE6E583114F51A045E662DC7C2F1B1A9BF7B6;
// UnityEngine.Networking.NetworkConnection/PacketStat
struct PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31;
// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293;
// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t911DC0DB1AB635909B35DCED87733639A6A3EAD8;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t657FD08F0D0959E4593C3D5BE4C2EEC3996660D4;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9D140A08FB942235B9F31C470AEEC435BF441454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFilter_tE67E8F1E7D995A98F0B4E262337040B1E0A6A3C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MsgType_t357BAE15D77E0951CFC0B4392DDB8B71A7EA34A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UNetInvokeType_t69ED86ECF5DA78EF4214409EB9C07A4F4E1A3D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F2A44A7ADA40A427BC93FD46CCD0BD5B7D3CB63;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA1B0B295B02690FCCC1785649E50DC946A7CB5;
IL2CPP_EXTERN_C String_t* _stringLiteral25324807967F300674526431DBA0B29C1C9BE1F4;
IL2CPP_EXTERN_C String_t* _stringLiteral262AED41329D8AB781480AD68FC4DCBB3876F757;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC449F5B2EAFA85049BADD7C4D0D1673C424E08;
IL2CPP_EXTERN_C String_t* _stringLiteral4D776C87A301B5AE7DD0A2421F9EBD7DD3406899;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral656E1DEE31CADB55B09AB66611AC4A9FB6282D9E;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8EAAA157D1F5D6977F519F039F9114FBEB79A704;
IL2CPP_EXTERN_C String_t* _stringLiteral91389CE6AD0166FC57A2D31316BDDB139D2599DE;
IL2CPP_EXTERN_C String_t* _stringLiteralCA836067A0DF79A979E3B805D2F0E23310042F7D;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11_m7A920C0F32818CF103496FF74161FE7B6C2563AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m583AE6E8CB7A3D6172C9A9518C39B483BB1CB994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mFEA7807DB15376F6F839594E7AC3F739FE8A3334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m50CCB0BB383B44EF176D4DF65AB61DFA281A70B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_m2BEE119FFE52625568FC42B7E0F92074395B42C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_m1A4524883E9C29D9923DE8DD3C57692885C7558C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_m7E6D353ED3D48FF328E15DEBE2628E0A9711DAC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_m9DF702C5EA68F98B4E1C37D4101A9C3747B2AAD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_mC23762033A17EDAC8A8E3FEC2C4050DC7F2A29DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_mDDCAC9BAFFA158D984CADF03DC7D8D38DD80D2A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m25675964A9726089386CA58A0B71BE653CF73082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m55E3D3708C0BD9C545A7038C56CC200E33477BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m74BBC1BE1F42C0C35721C7EAE7EA7418C461DB30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_mAE4CD70CD6B47860740D67DA5FAC730925A90B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_mCB6B86B3D9E12C5BDE1E4B37437516DAD9C07875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_m42C4C5CD1E7B07F9C433B2AB4EEFC8FCC4F5F06B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_m69152AA83358E3732C99E6EE70DA4800AF6057E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_mACFFC0B4C716960264DDDB1FDDC37983D70D71A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_mBE8B65CC1514DB122138180D6B24684C2C9BD716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_mC61C23EFFC476C12AB55EE817C9C0B3D351BF265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_m45AAB69E064A8247DECEF39E91039078310D050F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_m8BDE7C19037992940AFECA73EDAA5560BB8E7226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_m9575DC0114A9FDAFB6A37F9F97428A6709F5A7B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_mA6E90B7088553B9EEF820CE00B06669FF13B7A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_mAA5FB72D31C45975CC8BEEAE4A1DB5FA01481371_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A;
struct PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Delegate>
struct  List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633, ____items_1)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get__items_1() const { return ____items_1; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633_StaticFields, ____emptyArray_5)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>
struct  List_1_t9D140A08FB942235B9F31C470AEEC435BF441454  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9D140A08FB942235B9F31C470AEEC435BF441454, ____items_1)); }
	inline PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* get__items_1() const { return ____items_1; }
	inline PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9D140A08FB942235B9F31C470AEEC435BF441454, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9D140A08FB942235B9F31C470AEEC435BF441454, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9D140A08FB942235B9F31C470AEEC435BF441454, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9D140A08FB942235B9F31C470AEEC435BF441454_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9D140A08FB942235B9F31C470AEEC435BF441454_StaticFields, ____emptyArray_5)); }
	inline PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>
struct  List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PendingPlayerInfoU5BU5D_t2558159156E248271949193275772BE6D9E2C5FC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C, ____items_1)); }
	inline PendingPlayerInfoU5BU5D_t2558159156E248271949193275772BE6D9E2C5FC* get__items_1() const { return ____items_1; }
	inline PendingPlayerInfoU5BU5D_t2558159156E248271949193275772BE6D9E2C5FC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PendingPlayerInfoU5BU5D_t2558159156E248271949193275772BE6D9E2C5FC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PendingPlayerInfoU5BU5D_t2558159156E248271949193275772BE6D9E2C5FC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C_StaticFields, ____emptyArray_5)); }
	inline PendingPlayerInfoU5BU5D_t2558159156E248271949193275772BE6D9E2C5FC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PendingPlayerInfoU5BU5D_t2558159156E248271949193275772BE6D9E2C5FC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PendingPlayerInfoU5BU5D_t2558159156E248271949193275772BE6D9E2C5FC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Boolean>
struct  SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t1AFB8A76F3C8947D751C875685F7F9A6F1D2324B * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B, ___m_Objects_0)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B, ___m_Callback_3)); }
	inline SyncListChanged_t1AFB8A76F3C8947D751C875685F7F9A6F1D2324B * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t1AFB8A76F3C8947D751C875685F7F9A6F1D2324B ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t1AFB8A76F3C8947D751C875685F7F9A6F1D2324B * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Int32>
struct  SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t4F12EDE87063480F9FB83231068421DD673D98B2 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3, ___m_Objects_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3, ___m_Callback_3)); }
	inline SyncListChanged_t4F12EDE87063480F9FB83231068421DD673D98B2 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t4F12EDE87063480F9FB83231068421DD673D98B2 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t4F12EDE87063480F9FB83231068421DD673D98B2 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Single>
struct  SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_tCBFB65F3DE13D8CF9724BDF7C0C631EC1E527805 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731, ___m_Objects_0)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731, ___m_Callback_3)); }
	inline SyncListChanged_tCBFB65F3DE13D8CF9724BDF7C0C631EC1E527805 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_tCBFB65F3DE13D8CF9724BDF7C0C631EC1E527805 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_tCBFB65F3DE13D8CF9724BDF7C0C631EC1E527805 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.String>
struct  SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t31C3B6A626E8178223E3FFF1011E7D13B29D5147 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE, ___m_Objects_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE, ___m_Callback_3)); }
	inline SyncListChanged_t31C3B6A626E8178223E3FFF1011E7D13B29D5147 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t31C3B6A626E8178223E3FFF1011E7D13B29D5147 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t31C3B6A626E8178223E3FFF1011E7D13B29D5147 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.UInt32>
struct  SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_tC69A38FB99F81B045C6CAA0D03D1887A3808F18F * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10, ___m_Objects_0)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10, ___m_Behaviour_1)); }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10, ___m_Callback_3)); }
	inline SyncListChanged_tC69A38FB99F81B045C6CAA0D03D1887A3808F18F * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_tC69A38FB99F81B045C6CAA0D03D1887A3808F18F ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_tC69A38FB99F81B045C6CAA0D03D1887A3808F18F * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Networking.MessageBase
struct  MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Networking.NetworkReader
struct  NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkReader::m_buf
	NetBuffer_tFEAD807F22521D48F1C7704785251F9D6C54547D * ___m_buf_0;

public:
	inline static int32_t get_offset_of_m_buf_0() { return static_cast<int32_t>(offsetof(NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E, ___m_buf_0)); }
	inline NetBuffer_tFEAD807F22521D48F1C7704785251F9D6C54547D * get_m_buf_0() const { return ___m_buf_0; }
	inline NetBuffer_tFEAD807F22521D48F1C7704785251F9D6C54547D ** get_address_of_m_buf_0() { return &___m_buf_0; }
	inline void set_m_buf_0(NetBuffer_tFEAD807F22521D48F1C7704785251F9D6C54547D * value)
	{
		___m_buf_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buf_0), (void*)value);
	}
};

struct NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E_StaticFields
{
public:
	// System.Byte[] UnityEngine.Networking.NetworkReader::s_StringReaderBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_StringReaderBuffer_3;
	// System.Text.Encoding UnityEngine.Networking.NetworkReader::s_Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___s_Encoding_4;

public:
	inline static int32_t get_offset_of_s_StringReaderBuffer_3() { return static_cast<int32_t>(offsetof(NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E_StaticFields, ___s_StringReaderBuffer_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_StringReaderBuffer_3() const { return ___s_StringReaderBuffer_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_StringReaderBuffer_3() { return &___s_StringReaderBuffer_3; }
	inline void set_s_StringReaderBuffer_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_StringReaderBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringReaderBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Encoding_4() { return static_cast<int32_t>(offsetof(NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E_StaticFields, ___s_Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_s_Encoding_4() const { return ___s_Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_s_Encoding_4() { return &___s_Encoding_4; }
	inline void set_s_Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___s_Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_4), (void*)value);
	}
};


// UnityEngine.Networking.NetworkServer
struct  NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.NetworkServer::m_LocalClientActive
	bool ___m_LocalClientActive_4;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::m_LocalConnectionsFakeList
	List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 * ___m_LocalConnectionsFakeList_5;
	// UnityEngine.Networking.ULocalConnectionToClient UnityEngine.Networking.NetworkServer::m_LocalConnection
	ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * ___m_LocalConnection_6;
	// UnityEngine.Networking.NetworkScene UnityEngine.Networking.NetworkServer::m_NetworkScene
	NetworkScene_t9AD9379468E9115D73488B33A1BC393D13530250 * ___m_NetworkScene_7;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkServer::m_ExternalConnections
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___m_ExternalConnections_8;
	// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper UnityEngine.Networking.NetworkServer::m_SimpleServerSimple
	ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * ___m_SimpleServerSimple_9;
	// System.Single UnityEngine.Networking.NetworkServer::m_MaxDelay
	float ___m_MaxDelay_10;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkServer::m_RemoveList
	HashSet_1_t3F5FF9A887489019FA7B2FB1C361C15DC8BE4170 * ___m_RemoveList_11;
	// System.Int32 UnityEngine.Networking.NetworkServer::m_RemoveListCount
	int32_t ___m_RemoveListCount_12;

public:
	inline static int32_t get_offset_of_m_LocalClientActive_4() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2, ___m_LocalClientActive_4)); }
	inline bool get_m_LocalClientActive_4() const { return ___m_LocalClientActive_4; }
	inline bool* get_address_of_m_LocalClientActive_4() { return &___m_LocalClientActive_4; }
	inline void set_m_LocalClientActive_4(bool value)
	{
		___m_LocalClientActive_4 = value;
	}

	inline static int32_t get_offset_of_m_LocalConnectionsFakeList_5() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2, ___m_LocalConnectionsFakeList_5)); }
	inline List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 * get_m_LocalConnectionsFakeList_5() const { return ___m_LocalConnectionsFakeList_5; }
	inline List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 ** get_address_of_m_LocalConnectionsFakeList_5() { return &___m_LocalConnectionsFakeList_5; }
	inline void set_m_LocalConnectionsFakeList_5(List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 * value)
	{
		___m_LocalConnectionsFakeList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalConnectionsFakeList_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalConnection_6() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2, ___m_LocalConnection_6)); }
	inline ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * get_m_LocalConnection_6() const { return ___m_LocalConnection_6; }
	inline ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 ** get_address_of_m_LocalConnection_6() { return &___m_LocalConnection_6; }
	inline void set_m_LocalConnection_6(ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * value)
	{
		___m_LocalConnection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalConnection_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkScene_7() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2, ___m_NetworkScene_7)); }
	inline NetworkScene_t9AD9379468E9115D73488B33A1BC393D13530250 * get_m_NetworkScene_7() const { return ___m_NetworkScene_7; }
	inline NetworkScene_t9AD9379468E9115D73488B33A1BC393D13530250 ** get_address_of_m_NetworkScene_7() { return &___m_NetworkScene_7; }
	inline void set_m_NetworkScene_7(NetworkScene_t9AD9379468E9115D73488B33A1BC393D13530250 * value)
	{
		___m_NetworkScene_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkScene_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExternalConnections_8() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2, ___m_ExternalConnections_8)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_m_ExternalConnections_8() const { return ___m_ExternalConnections_8; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_m_ExternalConnections_8() { return &___m_ExternalConnections_8; }
	inline void set_m_ExternalConnections_8(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___m_ExternalConnections_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExternalConnections_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SimpleServerSimple_9() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2, ___m_SimpleServerSimple_9)); }
	inline ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * get_m_SimpleServerSimple_9() const { return ___m_SimpleServerSimple_9; }
	inline ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 ** get_address_of_m_SimpleServerSimple_9() { return &___m_SimpleServerSimple_9; }
	inline void set_m_SimpleServerSimple_9(ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * value)
	{
		___m_SimpleServerSimple_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SimpleServerSimple_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxDelay_10() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2, ___m_MaxDelay_10)); }
	inline float get_m_MaxDelay_10() const { return ___m_MaxDelay_10; }
	inline float* get_address_of_m_MaxDelay_10() { return &___m_MaxDelay_10; }
	inline void set_m_MaxDelay_10(float value)
	{
		___m_MaxDelay_10 = value;
	}

	inline static int32_t get_offset_of_m_RemoveList_11() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2, ___m_RemoveList_11)); }
	inline HashSet_1_t3F5FF9A887489019FA7B2FB1C361C15DC8BE4170 * get_m_RemoveList_11() const { return ___m_RemoveList_11; }
	inline HashSet_1_t3F5FF9A887489019FA7B2FB1C361C15DC8BE4170 ** get_address_of_m_RemoveList_11() { return &___m_RemoveList_11; }
	inline void set_m_RemoveList_11(HashSet_1_t3F5FF9A887489019FA7B2FB1C361C15DC8BE4170 * value)
	{
		___m_RemoveList_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RemoveList_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_RemoveListCount_12() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2, ___m_RemoveListCount_12)); }
	inline int32_t get_m_RemoveListCount_12() const { return ___m_RemoveListCount_12; }
	inline int32_t* get_address_of_m_RemoveListCount_12() { return &___m_RemoveListCount_12; }
	inline void set_m_RemoveListCount_12(int32_t value)
	{
		___m_RemoveListCount_12 = value;
	}
};

struct NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2_StaticFields
{
public:
	// System.Boolean UnityEngine.Networking.NetworkServer::s_Active
	bool ___s_Active_0;
	// UnityEngine.Networking.NetworkServer modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Networking.NetworkServer::s_Instance
	NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * ___s_Instance_1;
	// System.Object UnityEngine.Networking.NetworkServer::s_Sync
	RuntimeObject * ___s_Sync_2;
	// System.Boolean UnityEngine.Networking.NetworkServer::m_DontListen
	bool ___m_DontListen_3;
	// System.UInt16 UnityEngine.Networking.NetworkServer::maxPacketSize
	uint16_t ___maxPacketSize_14;
	// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage UnityEngine.Networking.NetworkServer::s_RemovePlayerMessage
	RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068 * ___s_RemovePlayerMessage_15;

public:
	inline static int32_t get_offset_of_s_Active_0() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2_StaticFields, ___s_Active_0)); }
	inline bool get_s_Active_0() const { return ___s_Active_0; }
	inline bool* get_address_of_s_Active_0() { return &___s_Active_0; }
	inline void set_s_Active_0(bool value)
	{
		___s_Active_0 = value;
	}

	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2_StaticFields, ___s_Instance_1)); }
	inline NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Sync_2() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2_StaticFields, ___s_Sync_2)); }
	inline RuntimeObject * get_s_Sync_2() const { return ___s_Sync_2; }
	inline RuntimeObject ** get_address_of_s_Sync_2() { return &___s_Sync_2; }
	inline void set_s_Sync_2(RuntimeObject * value)
	{
		___s_Sync_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Sync_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DontListen_3() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2_StaticFields, ___m_DontListen_3)); }
	inline bool get_m_DontListen_3() const { return ___m_DontListen_3; }
	inline bool* get_address_of_m_DontListen_3() { return &___m_DontListen_3; }
	inline void set_m_DontListen_3(bool value)
	{
		___m_DontListen_3 = value;
	}

	inline static int32_t get_offset_of_maxPacketSize_14() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2_StaticFields, ___maxPacketSize_14)); }
	inline uint16_t get_maxPacketSize_14() const { return ___maxPacketSize_14; }
	inline uint16_t* get_address_of_maxPacketSize_14() { return &___maxPacketSize_14; }
	inline void set_maxPacketSize_14(uint16_t value)
	{
		___maxPacketSize_14 = value;
	}

	inline static int32_t get_offset_of_s_RemovePlayerMessage_15() { return static_cast<int32_t>(offsetof(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2_StaticFields, ___s_RemovePlayerMessage_15)); }
	inline RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068 * get_s_RemovePlayerMessage_15() const { return ___s_RemovePlayerMessage_15; }
	inline RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068 ** get_address_of_s_RemovePlayerMessage_15() { return &___s_RemovePlayerMessage_15; }
	inline void set_s_RemovePlayerMessage_15(RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068 * value)
	{
		___s_RemovePlayerMessage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RemovePlayerMessage_15), (void*)value);
	}
};


// UnityEngine.Networking.NetworkServerSimple
struct  NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.NetworkServerSimple::m_Initialized
	bool ___m_Initialized_0;
	// System.Int32 UnityEngine.Networking.NetworkServerSimple::m_ListenPort
	int32_t ___m_ListenPort_1;
	// System.Int32 UnityEngine.Networking.NetworkServerSimple::m_ServerHostId
	int32_t ___m_ServerHostId_2;
	// System.Int32 UnityEngine.Networking.NetworkServerSimple::m_RelaySlotId
	int32_t ___m_RelaySlotId_3;
	// System.Boolean UnityEngine.Networking.NetworkServerSimple::m_UseWebSockets
	bool ___m_UseWebSockets_4;
	// System.Byte[] UnityEngine.Networking.NetworkServerSimple::m_MsgBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_MsgBuffer_5;
	// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkServerSimple::m_MsgReader
	NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___m_MsgReader_6;
	// System.Type UnityEngine.Networking.NetworkServerSimple::m_NetworkConnectionClass
	Type_t * ___m_NetworkConnectionClass_7;
	// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkServerSimple::m_HostTopology
	HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___m_HostTopology_8;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServerSimple::m_Connections
	List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 * ___m_Connections_9;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServerSimple::m_ConnectionsReadOnly
	ReadOnlyCollection_1_tEF5FACE7C4D7D5E5A5F2DB81FD65B33FF5614A0B * ___m_ConnectionsReadOnly_10;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkServerSimple::m_MessageHandlers
	NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D * ___m_MessageHandlers_11;

public:
	inline static int32_t get_offset_of_m_Initialized_0() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_Initialized_0)); }
	inline bool get_m_Initialized_0() const { return ___m_Initialized_0; }
	inline bool* get_address_of_m_Initialized_0() { return &___m_Initialized_0; }
	inline void set_m_Initialized_0(bool value)
	{
		___m_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_m_ListenPort_1() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_ListenPort_1)); }
	inline int32_t get_m_ListenPort_1() const { return ___m_ListenPort_1; }
	inline int32_t* get_address_of_m_ListenPort_1() { return &___m_ListenPort_1; }
	inline void set_m_ListenPort_1(int32_t value)
	{
		___m_ListenPort_1 = value;
	}

	inline static int32_t get_offset_of_m_ServerHostId_2() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_ServerHostId_2)); }
	inline int32_t get_m_ServerHostId_2() const { return ___m_ServerHostId_2; }
	inline int32_t* get_address_of_m_ServerHostId_2() { return &___m_ServerHostId_2; }
	inline void set_m_ServerHostId_2(int32_t value)
	{
		___m_ServerHostId_2 = value;
	}

	inline static int32_t get_offset_of_m_RelaySlotId_3() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_RelaySlotId_3)); }
	inline int32_t get_m_RelaySlotId_3() const { return ___m_RelaySlotId_3; }
	inline int32_t* get_address_of_m_RelaySlotId_3() { return &___m_RelaySlotId_3; }
	inline void set_m_RelaySlotId_3(int32_t value)
	{
		___m_RelaySlotId_3 = value;
	}

	inline static int32_t get_offset_of_m_UseWebSockets_4() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_UseWebSockets_4)); }
	inline bool get_m_UseWebSockets_4() const { return ___m_UseWebSockets_4; }
	inline bool* get_address_of_m_UseWebSockets_4() { return &___m_UseWebSockets_4; }
	inline void set_m_UseWebSockets_4(bool value)
	{
		___m_UseWebSockets_4 = value;
	}

	inline static int32_t get_offset_of_m_MsgBuffer_5() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_MsgBuffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_MsgBuffer_5() const { return ___m_MsgBuffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_MsgBuffer_5() { return &___m_MsgBuffer_5; }
	inline void set_m_MsgBuffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_MsgBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MsgBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_MsgReader_6() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_MsgReader_6)); }
	inline NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * get_m_MsgReader_6() const { return ___m_MsgReader_6; }
	inline NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E ** get_address_of_m_MsgReader_6() { return &___m_MsgReader_6; }
	inline void set_m_MsgReader_6(NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * value)
	{
		___m_MsgReader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MsgReader_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkConnectionClass_7() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_NetworkConnectionClass_7)); }
	inline Type_t * get_m_NetworkConnectionClass_7() const { return ___m_NetworkConnectionClass_7; }
	inline Type_t ** get_address_of_m_NetworkConnectionClass_7() { return &___m_NetworkConnectionClass_7; }
	inline void set_m_NetworkConnectionClass_7(Type_t * value)
	{
		___m_NetworkConnectionClass_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkConnectionClass_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_HostTopology_8() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_HostTopology_8)); }
	inline HostTopology_t268779309BB2D69F29D1A182662C79818813892B * get_m_HostTopology_8() const { return ___m_HostTopology_8; }
	inline HostTopology_t268779309BB2D69F29D1A182662C79818813892B ** get_address_of_m_HostTopology_8() { return &___m_HostTopology_8; }
	inline void set_m_HostTopology_8(HostTopology_t268779309BB2D69F29D1A182662C79818813892B * value)
	{
		___m_HostTopology_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HostTopology_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Connections_9() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_Connections_9)); }
	inline List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 * get_m_Connections_9() const { return ___m_Connections_9; }
	inline List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 ** get_address_of_m_Connections_9() { return &___m_Connections_9; }
	inline void set_m_Connections_9(List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 * value)
	{
		___m_Connections_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Connections_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectionsReadOnly_10() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_ConnectionsReadOnly_10)); }
	inline ReadOnlyCollection_1_tEF5FACE7C4D7D5E5A5F2DB81FD65B33FF5614A0B * get_m_ConnectionsReadOnly_10() const { return ___m_ConnectionsReadOnly_10; }
	inline ReadOnlyCollection_1_tEF5FACE7C4D7D5E5A5F2DB81FD65B33FF5614A0B ** get_address_of_m_ConnectionsReadOnly_10() { return &___m_ConnectionsReadOnly_10; }
	inline void set_m_ConnectionsReadOnly_10(ReadOnlyCollection_1_tEF5FACE7C4D7D5E5A5F2DB81FD65B33FF5614A0B * value)
	{
		___m_ConnectionsReadOnly_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionsReadOnly_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_11() { return static_cast<int32_t>(offsetof(NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D, ___m_MessageHandlers_11)); }
	inline NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D * get_m_MessageHandlers_11() const { return ___m_MessageHandlers_11; }
	inline NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D ** get_address_of_m_MessageHandlers_11() { return &___m_MessageHandlers_11; }
	inline void set_m_MessageHandlers_11(NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D * value)
	{
		___m_MessageHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageHandlers_11), (void*)value);
	}
};


// UnityEngine.Networking.PlayerController
struct  PlayerController_tC346F9788A15DB87623DD99396C824504BE42F01  : public RuntimeObject
{
public:
	// System.Int16 UnityEngine.Networking.PlayerController::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.PlayerController::unetView
	NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * ___unetView_2;
	// UnityEngine.GameObject UnityEngine.Networking.PlayerController::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_3;

public:
	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PlayerController_tC346F9788A15DB87623DD99396C824504BE42F01, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}

	inline static int32_t get_offset_of_unetView_2() { return static_cast<int32_t>(offsetof(PlayerController_tC346F9788A15DB87623DD99396C824504BE42F01, ___unetView_2)); }
	inline NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * get_unetView_2() const { return ___unetView_2; }
	inline NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 ** get_address_of_unetView_2() { return &___unetView_2; }
	inline void set_unetView_2(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * value)
	{
		___unetView_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unetView_2), (void*)value);
	}

	inline static int32_t get_offset_of_gameObject_3() { return static_cast<int32_t>(offsetof(PlayerController_tC346F9788A15DB87623DD99396C824504BE42F01, ___gameObject_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_3() const { return ___gameObject_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_3() { return &___gameObject_3; }
	inline void set_gameObject_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_3), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.Networking.NetworkConnection/PacketStat
struct  PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31  : public RuntimeObject
{
public:
	// System.Int16 UnityEngine.Networking.NetworkConnection/PacketStat::msgType
	int16_t ___msgType_0;
	// System.Int32 UnityEngine.Networking.NetworkConnection/PacketStat::count
	int32_t ___count_1;
	// System.Int32 UnityEngine.Networking.NetworkConnection/PacketStat::bytes
	int32_t ___bytes_2;

public:
	inline static int32_t get_offset_of_msgType_0() { return static_cast<int32_t>(offsetof(PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31, ___msgType_0)); }
	inline int16_t get_msgType_0() const { return ___msgType_0; }
	inline int16_t* get_address_of_msgType_0() { return &___msgType_0; }
	inline void set_msgType_0(int16_t value)
	{
		___msgType_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_bytes_2() { return static_cast<int32_t>(offsetof(PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31, ___bytes_2)); }
	inline int32_t get_bytes_2() const { return ___bytes_2; }
	inline int32_t* get_address_of_bytes_2() { return &___bytes_2; }
	inline void set_bytes_2(int32_t value)
	{
		___bytes_2 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.EmptyMessage
struct  EmptyMessage_t990328447D8322C4402AF67E1E2713FA8B8936D8  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Networking.NetworkHash128
struct  NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26 
{
public:
	// System.Byte UnityEngine.Networking.NetworkHash128::i0
	uint8_t ___i0_0;
	// System.Byte UnityEngine.Networking.NetworkHash128::i1
	uint8_t ___i1_1;
	// System.Byte UnityEngine.Networking.NetworkHash128::i2
	uint8_t ___i2_2;
	// System.Byte UnityEngine.Networking.NetworkHash128::i3
	uint8_t ___i3_3;
	// System.Byte UnityEngine.Networking.NetworkHash128::i4
	uint8_t ___i4_4;
	// System.Byte UnityEngine.Networking.NetworkHash128::i5
	uint8_t ___i5_5;
	// System.Byte UnityEngine.Networking.NetworkHash128::i6
	uint8_t ___i6_6;
	// System.Byte UnityEngine.Networking.NetworkHash128::i7
	uint8_t ___i7_7;
	// System.Byte UnityEngine.Networking.NetworkHash128::i8
	uint8_t ___i8_8;
	// System.Byte UnityEngine.Networking.NetworkHash128::i9
	uint8_t ___i9_9;
	// System.Byte UnityEngine.Networking.NetworkHash128::i10
	uint8_t ___i10_10;
	// System.Byte UnityEngine.Networking.NetworkHash128::i11
	uint8_t ___i11_11;
	// System.Byte UnityEngine.Networking.NetworkHash128::i12
	uint8_t ___i12_12;
	// System.Byte UnityEngine.Networking.NetworkHash128::i13
	uint8_t ___i13_13;
	// System.Byte UnityEngine.Networking.NetworkHash128::i14
	uint8_t ___i14_14;
	// System.Byte UnityEngine.Networking.NetworkHash128::i15
	uint8_t ___i15_15;

public:
	inline static int32_t get_offset_of_i0_0() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i0_0)); }
	inline uint8_t get_i0_0() const { return ___i0_0; }
	inline uint8_t* get_address_of_i0_0() { return &___i0_0; }
	inline void set_i0_0(uint8_t value)
	{
		___i0_0 = value;
	}

	inline static int32_t get_offset_of_i1_1() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i1_1)); }
	inline uint8_t get_i1_1() const { return ___i1_1; }
	inline uint8_t* get_address_of_i1_1() { return &___i1_1; }
	inline void set_i1_1(uint8_t value)
	{
		___i1_1 = value;
	}

	inline static int32_t get_offset_of_i2_2() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i2_2)); }
	inline uint8_t get_i2_2() const { return ___i2_2; }
	inline uint8_t* get_address_of_i2_2() { return &___i2_2; }
	inline void set_i2_2(uint8_t value)
	{
		___i2_2 = value;
	}

	inline static int32_t get_offset_of_i3_3() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i3_3)); }
	inline uint8_t get_i3_3() const { return ___i3_3; }
	inline uint8_t* get_address_of_i3_3() { return &___i3_3; }
	inline void set_i3_3(uint8_t value)
	{
		___i3_3 = value;
	}

	inline static int32_t get_offset_of_i4_4() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i4_4)); }
	inline uint8_t get_i4_4() const { return ___i4_4; }
	inline uint8_t* get_address_of_i4_4() { return &___i4_4; }
	inline void set_i4_4(uint8_t value)
	{
		___i4_4 = value;
	}

	inline static int32_t get_offset_of_i5_5() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i5_5)); }
	inline uint8_t get_i5_5() const { return ___i5_5; }
	inline uint8_t* get_address_of_i5_5() { return &___i5_5; }
	inline void set_i5_5(uint8_t value)
	{
		___i5_5 = value;
	}

	inline static int32_t get_offset_of_i6_6() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i6_6)); }
	inline uint8_t get_i6_6() const { return ___i6_6; }
	inline uint8_t* get_address_of_i6_6() { return &___i6_6; }
	inline void set_i6_6(uint8_t value)
	{
		___i6_6 = value;
	}

	inline static int32_t get_offset_of_i7_7() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i7_7)); }
	inline uint8_t get_i7_7() const { return ___i7_7; }
	inline uint8_t* get_address_of_i7_7() { return &___i7_7; }
	inline void set_i7_7(uint8_t value)
	{
		___i7_7 = value;
	}

	inline static int32_t get_offset_of_i8_8() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i8_8)); }
	inline uint8_t get_i8_8() const { return ___i8_8; }
	inline uint8_t* get_address_of_i8_8() { return &___i8_8; }
	inline void set_i8_8(uint8_t value)
	{
		___i8_8 = value;
	}

	inline static int32_t get_offset_of_i9_9() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i9_9)); }
	inline uint8_t get_i9_9() const { return ___i9_9; }
	inline uint8_t* get_address_of_i9_9() { return &___i9_9; }
	inline void set_i9_9(uint8_t value)
	{
		___i9_9 = value;
	}

	inline static int32_t get_offset_of_i10_10() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i10_10)); }
	inline uint8_t get_i10_10() const { return ___i10_10; }
	inline uint8_t* get_address_of_i10_10() { return &___i10_10; }
	inline void set_i10_10(uint8_t value)
	{
		___i10_10 = value;
	}

	inline static int32_t get_offset_of_i11_11() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i11_11)); }
	inline uint8_t get_i11_11() const { return ___i11_11; }
	inline uint8_t* get_address_of_i11_11() { return &___i11_11; }
	inline void set_i11_11(uint8_t value)
	{
		___i11_11 = value;
	}

	inline static int32_t get_offset_of_i12_12() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i12_12)); }
	inline uint8_t get_i12_12() const { return ___i12_12; }
	inline uint8_t* get_address_of_i12_12() { return &___i12_12; }
	inline void set_i12_12(uint8_t value)
	{
		___i12_12 = value;
	}

	inline static int32_t get_offset_of_i13_13() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i13_13)); }
	inline uint8_t get_i13_13() const { return ___i13_13; }
	inline uint8_t* get_address_of_i13_13() { return &___i13_13; }
	inline void set_i13_13(uint8_t value)
	{
		___i13_13 = value;
	}

	inline static int32_t get_offset_of_i14_14() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i14_14)); }
	inline uint8_t get_i14_14() const { return ___i14_14; }
	inline uint8_t* get_address_of_i14_14() { return &___i14_14; }
	inline void set_i14_14(uint8_t value)
	{
		___i14_14 = value;
	}

	inline static int32_t get_offset_of_i15_15() { return static_cast<int32_t>(offsetof(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26, ___i15_15)); }
	inline uint8_t get_i15_15() const { return ___i15_15; }
	inline uint8_t* get_address_of_i15_15() { return &___i15_15; }
	inline void set_i15_15(uint8_t value)
	{
		___i15_15 = value;
	}
};


// UnityEngine.Networking.NetworkInstanceId
struct  NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

struct NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51_StaticFields
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___Zero_2;

public:
	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51_StaticFields, ___Invalid_1)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_Invalid_1() const { return ___Invalid_1; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___Invalid_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51_StaticFields, ___Zero_2)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_Zero_2() const { return ___Zero_2; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___Zero_2 = value;
	}
};


// UnityEngine.Networking.NetworkSceneId
struct  NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSceneId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct  ObjectSpawnFinishedMessage_tD42DE3280BAA790DE51390215856AC606804619A  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::state
	uint32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(ObjectSpawnFinishedMessage_tD42DE3280BAA790DE51390215856AC606804619A, ___state_0)); }
	inline uint32_t get_state_0() const { return ___state_0; }
	inline uint32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(uint32_t value)
	{
		___state_0 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct  PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerInfoMessage::connectionId
	int32_t ___connectionId_0;
	// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::address
	String_t* ___address_1;
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerInfoMessage::port
	int32_t ___port_2;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerInfoMessage::isHost
	bool ___isHost_3;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerInfoMessage::isYou
	bool ___isYou_4;
	// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[] UnityEngine.Networking.NetworkSystem.PeerInfoMessage::playerIds
	PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* ___playerIds_5;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_address_1() { return static_cast<int32_t>(offsetof(PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822, ___address_1)); }
	inline String_t* get_address_1() const { return ___address_1; }
	inline String_t** get_address_of_address_1() { return &___address_1; }
	inline void set_address_1(String_t* value)
	{
		___address_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_1), (void*)value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}

	inline static int32_t get_offset_of_isHost_3() { return static_cast<int32_t>(offsetof(PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822, ___isHost_3)); }
	inline bool get_isHost_3() const { return ___isHost_3; }
	inline bool* get_address_of_isHost_3() { return &___isHost_3; }
	inline void set_isHost_3(bool value)
	{
		___isHost_3 = value;
	}

	inline static int32_t get_offset_of_isYou_4() { return static_cast<int32_t>(offsetof(PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822, ___isYou_4)); }
	inline bool get_isYou_4() const { return ___isYou_4; }
	inline bool* get_address_of_isYou_4() { return &___isYou_4; }
	inline void set_isYou_4(bool value)
	{
		___isYou_4 = value;
	}

	inline static int32_t get_offset_of_playerIds_5() { return static_cast<int32_t>(offsetof(PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822, ___playerIds_5)); }
	inline PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* get_playerIds_5() const { return ___playerIds_5; }
	inline PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1** get_address_of_playerIds_5() { return &___playerIds_5; }
	inline void set_playerIds_5(PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* value)
	{
		___playerIds_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerIds_5), (void*)value);
	}
};


// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct  PeerListMessage_tB1481179670DE32A53E7F0F01F3E6A184417670E  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkSystem.PeerListMessage::peers
	PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A* ___peers_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerListMessage::oldServerConnectionId
	int32_t ___oldServerConnectionId_1;

public:
	inline static int32_t get_offset_of_peers_0() { return static_cast<int32_t>(offsetof(PeerListMessage_tB1481179670DE32A53E7F0F01F3E6A184417670E, ___peers_0)); }
	inline PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A* get_peers_0() const { return ___peers_0; }
	inline PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A** get_address_of_peers_0() { return &___peers_0; }
	inline void set_peers_0(PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A* value)
	{
		___peers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peers_0), (void*)value);
	}

	inline static int32_t get_offset_of_oldServerConnectionId_1() { return static_cast<int32_t>(offsetof(PeerListMessage_tB1481179670DE32A53E7F0F01F3E6A184417670E, ___oldServerConnectionId_1)); }
	inline int32_t get_oldServerConnectionId_1() const { return ___oldServerConnectionId_1; }
	inline int32_t* get_address_of_oldServerConnectionId_1() { return &___oldServerConnectionId_1; }
	inline void set_oldServerConnectionId_1(int32_t value)
	{
		___oldServerConnectionId_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct  RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// System.Int16 UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::playerControllerId
	int16_t ___playerControllerId_0;

public:
	inline static int32_t get_offset_of_playerControllerId_0() { return static_cast<int32_t>(offsetof(RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068, ___playerControllerId_0)); }
	inline int16_t get_playerControllerId_0() const { return ___playerControllerId_0; }
	inline int16_t* get_address_of_playerControllerId_0() { return &___playerControllerId_0; }
	inline void set_playerControllerId_0(int16_t value)
	{
		___playerControllerId_0 = value;
	}
};


// UnityEngine.Networking.ServerAttribute
struct  ServerAttribute_tFF42C2CCC4859D3FC6511283726E792828A5ACFB  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Networking.ServerCallbackAttribute
struct  ServerCallbackAttribute_t29B69CF14A484B2D81D1E4713C8617ACC5FECD05  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.StringMessage
struct  StringMessage_tB25C942D42FCD3555DA3EF77A6521FFB01CE33D0  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// System.String UnityEngine.Networking.NetworkSystem.StringMessage::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(StringMessage_tB25C942D42FCD3555DA3EF77A6521FFB01CE33D0, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// UnityEngine.Networking.SyncEventAttribute
struct  SyncEventAttribute_t7346FF238D974E3D3E48D8AF89A5016CB5AF03F5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 UnityEngine.Networking.SyncEventAttribute::channel
	int32_t ___channel_0;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(SyncEventAttribute_t7346FF238D974E3D3E48D8AF89A5016CB5AF03F5, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}
};


// UnityEngine.Networking.SyncListBool
struct  SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF  : public SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B
{
public:

public:
};


// UnityEngine.Networking.SyncListFloat
struct  SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1  : public SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731
{
public:

public:
};


// UnityEngine.Networking.SyncListInt
struct  SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726  : public SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3
{
public:

public:
};


// UnityEngine.Networking.SyncListString
struct  SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5  : public SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE
{
public:

public:
};


// UnityEngine.Networking.SyncListUInt
struct  SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99  : public SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10
{
public:

public:
};


// UnityEngine.Networking.SyncVarAttribute
struct  SyncVarAttribute_t065CEB73E47DCF8C126143D97012DFAE2DE7CACF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Networking.SyncVarAttribute::hook
	String_t* ___hook_0;

public:
	inline static int32_t get_offset_of_hook_0() { return static_cast<int32_t>(offsetof(SyncVarAttribute_t065CEB73E47DCF8C126143D97012DFAE2DE7CACF, ___hook_0)); }
	inline String_t* get_hook_0() const { return ___hook_0; }
	inline String_t** get_address_of_hook_0() { return &___hook_0; }
	inline void set_hook_0(String_t* value)
	{
		___hook_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hook_0), (void*)value);
	}
};


// UnityEngine.Networking.TargetRpcAttribute
struct  TargetRpcAttribute_tA5EC079234310807266F5E9E387660E2B0F7E764  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 UnityEngine.Networking.TargetRpcAttribute::channel
	int32_t ___channel_0;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(TargetRpcAttribute_tA5EC079234310807266F5E9E387660E2B0F7E764, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Networking.UIntFloat
struct  UIntFloat_tC87D2C1A6FA31EC06B54644DD5B9D5BBFC644436 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.Networking.UIntFloat::floatValue
			float ___floatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UnityEngine.Networking.UIntFloat::intValue
			uint32_t ___intValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___intValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.Networking.UIntFloat::doubleValue
			double ___doubleValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntFloat::longValue
			uint64_t ___longValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_floatValue_0() { return static_cast<int32_t>(offsetof(UIntFloat_tC87D2C1A6FA31EC06B54644DD5B9D5BBFC644436, ___floatValue_0)); }
	inline float get_floatValue_0() const { return ___floatValue_0; }
	inline float* get_address_of_floatValue_0() { return &___floatValue_0; }
	inline void set_floatValue_0(float value)
	{
		___floatValue_0 = value;
	}

	inline static int32_t get_offset_of_intValue_1() { return static_cast<int32_t>(offsetof(UIntFloat_tC87D2C1A6FA31EC06B54644DD5B9D5BBFC644436, ___intValue_1)); }
	inline uint32_t get_intValue_1() const { return ___intValue_1; }
	inline uint32_t* get_address_of_intValue_1() { return &___intValue_1; }
	inline void set_intValue_1(uint32_t value)
	{
		___intValue_1 = value;
	}

	inline static int32_t get_offset_of_doubleValue_2() { return static_cast<int32_t>(offsetof(UIntFloat_tC87D2C1A6FA31EC06B54644DD5B9D5BBFC644436, ___doubleValue_2)); }
	inline double get_doubleValue_2() const { return ___doubleValue_2; }
	inline double* get_address_of_doubleValue_2() { return &___doubleValue_2; }
	inline void set_doubleValue_2(double value)
	{
		___doubleValue_2 = value;
	}

	inline static int32_t get_offset_of_longValue_3() { return static_cast<int32_t>(offsetof(UIntFloat_tC87D2C1A6FA31EC06B54644DD5B9D5BBFC644436, ___longValue_3)); }
	inline uint64_t get_longValue_3() const { return ___longValue_3; }
	inline uint64_t* get_address_of_longValue_3() { return &___longValue_3; }
	inline void set_longValue_3(uint64_t value)
	{
		___longValue_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Networking.LocalClient/InternalMsg
struct  InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D 
{
public:
	// System.Byte[] UnityEngine.Networking.LocalClient/InternalMsg::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_0;
	// System.Int32 UnityEngine.Networking.LocalClient/InternalMsg::channelId
	int32_t ___channelId_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D, ___buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_channelId_1() { return static_cast<int32_t>(offsetof(InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D, ___channelId_1)); }
	inline int32_t get_channelId_1() const { return ___channelId_1; }
	inline int32_t* get_address_of_channelId_1() { return &___channelId_1; }
	inline void set_channelId_1(int32_t value)
	{
		___channelId_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.LocalClient/InternalMsg
struct InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___buffer_0;
	int32_t ___channelId_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.LocalClient/InternalMsg
struct InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___buffer_0;
	int32_t ___channelId_1;
};

// UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
struct  PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616 
{
public:
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkLobbyManager/PendingPlayer::conn
	NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn_0;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager/PendingPlayer::lobbyPlayer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lobbyPlayer_1;

public:
	inline static int32_t get_offset_of_conn_0() { return static_cast<int32_t>(offsetof(PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616, ___conn_0)); }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * get_conn_0() const { return ___conn_0; }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 ** get_address_of_conn_0() { return &___conn_0; }
	inline void set_conn_0(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * value)
	{
		___conn_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_0), (void*)value);
	}

	inline static int32_t get_offset_of_lobbyPlayer_1() { return static_cast<int32_t>(offsetof(PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616, ___lobbyPlayer_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lobbyPlayer_1() const { return ___lobbyPlayer_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lobbyPlayer_1() { return &___lobbyPlayer_1; }
	inline void set_lobbyPlayer_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lobbyPlayer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyPlayer_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
struct PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshaled_pinvoke
{
	NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn_0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lobbyPlayer_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
struct PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshaled_com
{
	NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn_0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lobbyPlayer_1;
};

// UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct  ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo> UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers::players
	List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C * ___players_0;

public:
	inline static int32_t get_offset_of_players_0() { return static_cast<int32_t>(offsetof(ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4, ___players_0)); }
	inline List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C * get_players_0() const { return ___players_0; }
	inline List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C ** get_address_of_players_0() { return &___players_0; }
	inline void set_players_0(List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C * value)
	{
		___players_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshaled_pinvoke
{
	List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C * ___players_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshaled_com
{
	List_1_tE876B17EC7503EC65A5F679CEA4574D13BFCF10C * ___players_0;
};

// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct  ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537  : public NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D
{
public:
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::m_Server
	NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * ___m_Server_12;

public:
	inline static int32_t get_offset_of_m_Server_12() { return static_cast<int32_t>(offsetof(ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537, ___m_Server_12)); }
	inline NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * get_m_Server_12() const { return ___m_Server_12; }
	inline NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 ** get_address_of_m_Server_12() { return &___m_Server_12; }
	inline void set_m_Server_12(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * value)
	{
		___m_Server_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Server_12), (void*)value);
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.NetworkError
struct  NetworkError_t55031A243A0FD02F80E44FC25FFC9B7BD6F60DE9 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkError_t55031A243A0FD02F80E44FC25FFC9B7BD6F60DE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkWriter
struct  NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_tFEAD807F22521D48F1C7704785251F9D6C54547D * ___m_Buffer_1;

public:
	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A, ___m_Buffer_1)); }
	inline NetBuffer_tFEAD807F22521D48F1C7704785251F9D6C54547D * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline NetBuffer_tFEAD807F22521D48F1C7704785251F9D6C54547D ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(NetBuffer_tFEAD807F22521D48F1C7704785251F9D6C54547D * value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Buffer_1), (void*)value);
	}
};

struct NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A_StaticFields
{
public:
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_tC87D2C1A6FA31EC06B54644DD5B9D5BBFC644436  ___s_FloatConverter_4;

public:
	inline static int32_t get_offset_of_s_Encoding_2() { return static_cast<int32_t>(offsetof(NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A_StaticFields, ___s_Encoding_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_s_Encoding_2() const { return ___s_Encoding_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_s_Encoding_2() { return &___s_Encoding_2; }
	inline void set_s_Encoding_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___s_Encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_StringWriteBuffer_3() { return static_cast<int32_t>(offsetof(NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A_StaticFields, ___s_StringWriteBuffer_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_StringWriteBuffer_3() const { return ___s_StringWriteBuffer_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_StringWriteBuffer_3() { return &___s_StringWriteBuffer_3; }
	inline void set_s_StringWriteBuffer_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_StringWriteBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringWriteBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_FloatConverter_4() { return static_cast<int32_t>(offsetof(NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A_StaticFields, ___s_FloatConverter_4)); }
	inline UIntFloat_tC87D2C1A6FA31EC06B54644DD5B9D5BBFC644436  get_s_FloatConverter_4() const { return ___s_FloatConverter_4; }
	inline UIntFloat_tC87D2C1A6FA31EC06B54644DD5B9D5BBFC644436 * get_address_of_s_FloatConverter_4() { return &___s_FloatConverter_4; }
	inline void set_s_FloatConverter_4(UIntFloat_tC87D2C1A6FA31EC06B54644DD5B9D5BBFC644436  value)
	{
		___s_FloatConverter_4 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.NotReadyMessage
struct  NotReadyMessage_t83B510B1552A55C69E04EFA8B379E5AAACA05251  : public EmptyMessage_t990328447D8322C4402AF67E1E2713FA8B8936D8
{
public:

public:
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct  ObjectDestroyMessage_t5234A365BC076BB60E0E13A9C6AC0054413595A3  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectDestroyMessage_t5234A365BC076BB60E0E13A9C6AC0054413595A3, ___netId_0)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_0 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct  ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::assetId
	NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  ___assetId_1;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::payload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload_3;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_4;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6, ___netId_0)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_assetId_1() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6, ___assetId_1)); }
	inline NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  get_assetId_1() const { return ___assetId_1; }
	inline NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26 * get_address_of_assetId_1() { return &___assetId_1; }
	inline void set_assetId_1(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  value)
	{
		___assetId_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6, ___position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_2() const { return ___position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6, ___payload_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_payload_3() const { return ___payload_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_3), (void*)value);
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6, ___rotation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_4() const { return ___rotation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_4 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct  ObjectSpawnSceneMessage_tACE939AB6FE49062230207E1A45AA454E66FA11B  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::sceneId
	NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  ___sceneId_1;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::payload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectSpawnSceneMessage_tACE939AB6FE49062230207E1A45AA454E66FA11B, ___netId_0)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_sceneId_1() { return static_cast<int32_t>(offsetof(ObjectSpawnSceneMessage_tACE939AB6FE49062230207E1A45AA454E66FA11B, ___sceneId_1)); }
	inline NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  get_sceneId_1() const { return ___sceneId_1; }
	inline NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245 * get_address_of_sceneId_1() { return &___sceneId_1; }
	inline void set_sceneId_1(NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  value)
	{
		___sceneId_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ObjectSpawnSceneMessage_tACE939AB6FE49062230207E1A45AA454E66FA11B, ___position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_2() const { return ___position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(ObjectSpawnSceneMessage_tACE939AB6FE49062230207E1A45AA454E66FA11B, ___payload_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_payload_3() const { return ___payload_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_3), (void*)value);
	}
};


// UnityEngine.Networking.NetworkSystem.OverrideTransformMessage
struct  OverrideTransformMessage_t79E768877AE87FB3211BEC3448209F789507937A  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::payload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload_1;
	// System.Boolean UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::teleport
	bool ___teleport_2;
	// System.Int32 UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::time
	int32_t ___time_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(OverrideTransformMessage_t79E768877AE87FB3211BEC3448209F789507937A, ___netId_0)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(OverrideTransformMessage_t79E768877AE87FB3211BEC3448209F789507937A, ___payload_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_payload_1() const { return ___payload_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_1), (void*)value);
	}

	inline static int32_t get_offset_of_teleport_2() { return static_cast<int32_t>(offsetof(OverrideTransformMessage_t79E768877AE87FB3211BEC3448209F789507937A, ___teleport_2)); }
	inline bool get_teleport_2() const { return ___teleport_2; }
	inline bool* get_address_of_teleport_2() { return &___teleport_2; }
	inline void set_teleport_2(bool value)
	{
		___teleport_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(OverrideTransformMessage_t79E768877AE87FB3211BEC3448209F789507937A, ___time_3)); }
	inline int32_t get_time_3() const { return ___time_3; }
	inline int32_t* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(int32_t value)
	{
		___time_3 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct  OwnerMessage_tAB31B5261A7F05FB213057BFC3F238FDFFFB9F10  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.OwnerMessage::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.OwnerMessage::playerControllerId
	int16_t ___playerControllerId_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(OwnerMessage_tAB31B5261A7F05FB213057BFC3F238FDFFFB9F10, ___netId_0)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(OwnerMessage_tAB31B5261A7F05FB213057BFC3F238FDFFFB9F10, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage
struct  PeerAuthorityMessage_t41784D50032652A0A09AA09E67ACBDE020FC06AC  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::connectionId
	int32_t ___connectionId_0;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_1;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::authorityState
	bool ___authorityState_2;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(PeerAuthorityMessage_t41784D50032652A0A09AA09E67ACBDE020FC06AC, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_netId_1() { return static_cast<int32_t>(offsetof(PeerAuthorityMessage_t41784D50032652A0A09AA09E67ACBDE020FC06AC, ___netId_1)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_1() const { return ___netId_1; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_1() { return &___netId_1; }
	inline void set_netId_1(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_1 = value;
	}

	inline static int32_t get_offset_of_authorityState_2() { return static_cast<int32_t>(offsetof(PeerAuthorityMessage_t41784D50032652A0A09AA09E67ACBDE020FC06AC, ___authorityState_2)); }
	inline bool get_authorityState_2() const { return ___authorityState_2; }
	inline bool* get_address_of_authorityState_2() { return &___authorityState_2; }
	inline void set_authorityState_2(bool value)
	{
		___authorityState_2 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer
struct  PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C 
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.PeerInfoPlayer::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.PeerInfoPlayer::playerControllerId
	int16_t ___playerControllerId_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C, ___netId_0)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}
};


// UnityEngine.Networking.PlayerSpawnMethod
struct  PlayerSpawnMethod_t138D7CCDCB79A18D3A53FADB6B1E1D51E6C67049 
{
public:
	// System.Int32 UnityEngine.Networking.PlayerSpawnMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerSpawnMethod_t138D7CCDCB79A18D3A53FADB6B1E1D51E6C67049, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkSystem.ReadyMessage
struct  ReadyMessage_tFE7B462238F70A58CBAE7F473501D6FD1200524D  : public EmptyMessage_t990328447D8322C4402AF67E1E2713FA8B8936D8
{
public:

public:
};


// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct  ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F  : public MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSystem.ReconnectMessage::oldConnectionId
	int32_t ___oldConnectionId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.ReconnectMessage::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ReconnectMessage::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_2;
	// System.Int32 UnityEngine.Networking.NetworkSystem.ReconnectMessage::msgSize
	int32_t ___msgSize_3;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ReconnectMessage::msgData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData_4;

public:
	inline static int32_t get_offset_of_oldConnectionId_0() { return static_cast<int32_t>(offsetof(ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F, ___oldConnectionId_0)); }
	inline int32_t get_oldConnectionId_0() const { return ___oldConnectionId_0; }
	inline int32_t* get_address_of_oldConnectionId_0() { return &___oldConnectionId_0; }
	inline void set_oldConnectionId_0(int32_t value)
	{
		___oldConnectionId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}

	inline static int32_t get_offset_of_netId_2() { return static_cast<int32_t>(offsetof(ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F, ___netId_2)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_2() const { return ___netId_2; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_2() { return &___netId_2; }
	inline void set_netId_2(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_2 = value;
	}

	inline static int32_t get_offset_of_msgSize_3() { return static_cast<int32_t>(offsetof(ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F, ___msgSize_3)); }
	inline int32_t get_msgSize_3() const { return ___msgSize_3; }
	inline int32_t* get_address_of_msgSize_3() { return &___msgSize_3; }
	inline void set_msgSize_3(int32_t value)
	{
		___msgSize_3 = value;
	}

	inline static int32_t get_offset_of_msgData_4() { return static_cast<int32_t>(offsetof(ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F, ___msgData_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_msgData_4() const { return ___msgData_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_msgData_4() { return &___msgData_4; }
	inline void set_msgData_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___msgData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msgData_4), (void*)value);
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Networking.UIntDecimal
struct  UIntDecimal_t95D79A129E3CD02B5FA74E42A8609380F204DE9A 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntDecimal::longValue1
			uint64_t ___longValue1_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue1_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___longValue2_1_OffsetPadding[8];
			// System.UInt64 UnityEngine.Networking.UIntDecimal::longValue2
			uint64_t ___longValue2_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___longValue2_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___longValue2_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Decimal UnityEngine.Networking.UIntDecimal::decimalValue
			Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___decimalValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___decimalValue_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_longValue1_0() { return static_cast<int32_t>(offsetof(UIntDecimal_t95D79A129E3CD02B5FA74E42A8609380F204DE9A, ___longValue1_0)); }
	inline uint64_t get_longValue1_0() const { return ___longValue1_0; }
	inline uint64_t* get_address_of_longValue1_0() { return &___longValue1_0; }
	inline void set_longValue1_0(uint64_t value)
	{
		___longValue1_0 = value;
	}

	inline static int32_t get_offset_of_longValue2_1() { return static_cast<int32_t>(offsetof(UIntDecimal_t95D79A129E3CD02B5FA74E42A8609380F204DE9A, ___longValue2_1)); }
	inline uint64_t get_longValue2_1() const { return ___longValue2_1; }
	inline uint64_t* get_address_of_longValue2_1() { return &___longValue2_1; }
	inline void set_longValue2_1(uint64_t value)
	{
		___longValue2_1 = value;
	}

	inline static int32_t get_offset_of_decimalValue_2() { return static_cast<int32_t>(offsetof(UIntDecimal_t95D79A129E3CD02B5FA74E42A8609380F204DE9A, ___decimalValue_2)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_decimalValue_2() const { return ___decimalValue_2; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_decimalValue_2() { return &___decimalValue_2; }
	inline void set_decimalValue_2(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___decimalValue_2 = value;
	}
};


// UnityEngine.Networking.Version
struct  Version_t350DD83ABDCC5BA83E2B1EE64446167A5BC378A3 
{
public:
	// System.Int32 UnityEngine.Networking.Version::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Version_t350DD83ABDCC5BA83E2B1EE64446167A5BC378A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.ClientScene/PendingOwner
struct  PendingOwner_tA1B9ABCE976A8E4CA862CD04B565F84E4DEC91B8 
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.ClientScene/PendingOwner::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;
	// System.Int16 UnityEngine.Networking.ClientScene/PendingOwner::playerControllerId
	int16_t ___playerControllerId_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(PendingOwner_tA1B9ABCE976A8E4CA862CD04B565F84E4DEC91B8, ___netId_0)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PendingOwner_tA1B9ABCE976A8E4CA862CD04B565F84E4DEC91B8, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}
};


// UnityEngine.Networking.LogFilter/FilterLevel
struct  FilterLevel_tBDF50A9762A537106637250A6D37CC18F8B4552B 
{
public:
	// System.Int32 UnityEngine.Networking.LogFilter/FilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterLevel_tBDF50A9762A537106637250A6D37CC18F8B4552B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkBehaviour/UNetInvokeType
struct  UNetInvokeType_t69ED86ECF5DA78EF4214409EB9C07A4F4E1A3D18 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkBehaviour/UNetInvokeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UNetInvokeType_t69ED86ECF5DA78EF4214409EB9C07A4F4E1A3D18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkClient/ConnectState
struct  ConnectState_tB3AD76AB26E8E0D521A011A59360194A707A8241 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkClient/ConnectState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectState_tB3AD76AB26E8E0D521A011A59360194A707A8241, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
struct  PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7 
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo::netId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;
	// System.Int16 UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo::obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj_2;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7, ___netId_0)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}

	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7, ___obj_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_obj_2() const { return ___obj_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
struct PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshaled_pinvoke
{
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;
	int16_t ___playerControllerId_1;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
struct PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshaled_com
{
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___netId_0;
	int16_t ___playerControllerId_1;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj_2;
};

// UnityEngine.Networking.NetworkMigrationManager/SceneChangeOption
struct  SceneChangeOption_tA4869C875DABD5636D9B508D3BB7A9C359981592 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkMigrationManager/SceneChangeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneChangeOption_tA4869C875DABD5636D9B508D3BB7A9C359981592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkProximityChecker/CheckMethod
struct  CheckMethod_t6CA4D790CE672376D8CF9D7093930B6D7B276933 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkProximityChecker/CheckMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CheckMethod_t6CA4D790CE672376D8CF9D7093930B6D7B276933, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkTransform/AxisSyncMode
struct  AxisSyncMode_tDEB7B5FD6FBF2628B503FF376C155406FD588951 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransform/AxisSyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisSyncMode_tDEB7B5FD6FBF2628B503FF376C155406FD588951, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkTransform/CompressionSyncMode
struct  CompressionSyncMode_t9C9B590B3FE4B721604594BC447E778C1383C797 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransform/CompressionSyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionSyncMode_t9C9B590B3FE4B721604594BC447E778C1383C797, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkTransform/TransformSyncMode
struct  TransformSyncMode_tDDE897147742D0FBC4931A2D3D76022B88459FB0 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransform/TransformSyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformSyncMode_tDDE897147742D0FBC4931A2D3D76022B88459FB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Networking.NetworkClient
struct  NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76  : public RuntimeObject
{
public:
	// System.Type UnityEngine.Networking.NetworkClient::m_NetworkConnectionClass
	Type_t * ___m_NetworkConnectionClass_0;
	// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkClient::m_HostTopology
	HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___m_HostTopology_4;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_HostPort
	int32_t ___m_HostPort_5;
	// System.Boolean UnityEngine.Networking.NetworkClient::m_UseSimulator
	bool ___m_UseSimulator_6;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_SimulatedLatency
	int32_t ___m_SimulatedLatency_7;
	// System.Single UnityEngine.Networking.NetworkClient::m_PacketLoss
	float ___m_PacketLoss_8;
	// System.String UnityEngine.Networking.NetworkClient::m_ServerIp
	String_t* ___m_ServerIp_9;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ServerPort
	int32_t ___m_ServerPort_10;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientId
	int32_t ___m_ClientId_11;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientConnectionId
	int32_t ___m_ClientConnectionId_12;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_StatResetTime
	int32_t ___m_StatResetTime_13;
	// System.Net.EndPoint UnityEngine.Networking.NetworkClient::m_RemoteEndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_RemoteEndPoint_14;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkClient::m_MessageHandlers
	NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D * ___m_MessageHandlers_16;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkClient::m_Connection
	NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___m_Connection_17;
	// System.Byte[] UnityEngine.Networking.NetworkClient::m_MsgBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_MsgBuffer_18;
	// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkClient::m_MsgReader
	NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___m_MsgReader_19;
	// UnityEngine.Networking.NetworkClient/ConnectState UnityEngine.Networking.NetworkClient::m_AsyncConnect
	int32_t ___m_AsyncConnect_20;
	// System.String UnityEngine.Networking.NetworkClient::m_RequestedServerHost
	String_t* ___m_RequestedServerHost_21;

public:
	inline static int32_t get_offset_of_m_NetworkConnectionClass_0() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_NetworkConnectionClass_0)); }
	inline Type_t * get_m_NetworkConnectionClass_0() const { return ___m_NetworkConnectionClass_0; }
	inline Type_t ** get_address_of_m_NetworkConnectionClass_0() { return &___m_NetworkConnectionClass_0; }
	inline void set_m_NetworkConnectionClass_0(Type_t * value)
	{
		___m_NetworkConnectionClass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkConnectionClass_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_HostTopology_4() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_HostTopology_4)); }
	inline HostTopology_t268779309BB2D69F29D1A182662C79818813892B * get_m_HostTopology_4() const { return ___m_HostTopology_4; }
	inline HostTopology_t268779309BB2D69F29D1A182662C79818813892B ** get_address_of_m_HostTopology_4() { return &___m_HostTopology_4; }
	inline void set_m_HostTopology_4(HostTopology_t268779309BB2D69F29D1A182662C79818813892B * value)
	{
		___m_HostTopology_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HostTopology_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_HostPort_5() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_HostPort_5)); }
	inline int32_t get_m_HostPort_5() const { return ___m_HostPort_5; }
	inline int32_t* get_address_of_m_HostPort_5() { return &___m_HostPort_5; }
	inline void set_m_HostPort_5(int32_t value)
	{
		___m_HostPort_5 = value;
	}

	inline static int32_t get_offset_of_m_UseSimulator_6() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_UseSimulator_6)); }
	inline bool get_m_UseSimulator_6() const { return ___m_UseSimulator_6; }
	inline bool* get_address_of_m_UseSimulator_6() { return &___m_UseSimulator_6; }
	inline void set_m_UseSimulator_6(bool value)
	{
		___m_UseSimulator_6 = value;
	}

	inline static int32_t get_offset_of_m_SimulatedLatency_7() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_SimulatedLatency_7)); }
	inline int32_t get_m_SimulatedLatency_7() const { return ___m_SimulatedLatency_7; }
	inline int32_t* get_address_of_m_SimulatedLatency_7() { return &___m_SimulatedLatency_7; }
	inline void set_m_SimulatedLatency_7(int32_t value)
	{
		___m_SimulatedLatency_7 = value;
	}

	inline static int32_t get_offset_of_m_PacketLoss_8() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_PacketLoss_8)); }
	inline float get_m_PacketLoss_8() const { return ___m_PacketLoss_8; }
	inline float* get_address_of_m_PacketLoss_8() { return &___m_PacketLoss_8; }
	inline void set_m_PacketLoss_8(float value)
	{
		___m_PacketLoss_8 = value;
	}

	inline static int32_t get_offset_of_m_ServerIp_9() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_ServerIp_9)); }
	inline String_t* get_m_ServerIp_9() const { return ___m_ServerIp_9; }
	inline String_t** get_address_of_m_ServerIp_9() { return &___m_ServerIp_9; }
	inline void set_m_ServerIp_9(String_t* value)
	{
		___m_ServerIp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerIp_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerPort_10() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_ServerPort_10)); }
	inline int32_t get_m_ServerPort_10() const { return ___m_ServerPort_10; }
	inline int32_t* get_address_of_m_ServerPort_10() { return &___m_ServerPort_10; }
	inline void set_m_ServerPort_10(int32_t value)
	{
		___m_ServerPort_10 = value;
	}

	inline static int32_t get_offset_of_m_ClientId_11() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_ClientId_11)); }
	inline int32_t get_m_ClientId_11() const { return ___m_ClientId_11; }
	inline int32_t* get_address_of_m_ClientId_11() { return &___m_ClientId_11; }
	inline void set_m_ClientId_11(int32_t value)
	{
		___m_ClientId_11 = value;
	}

	inline static int32_t get_offset_of_m_ClientConnectionId_12() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_ClientConnectionId_12)); }
	inline int32_t get_m_ClientConnectionId_12() const { return ___m_ClientConnectionId_12; }
	inline int32_t* get_address_of_m_ClientConnectionId_12() { return &___m_ClientConnectionId_12; }
	inline void set_m_ClientConnectionId_12(int32_t value)
	{
		___m_ClientConnectionId_12 = value;
	}

	inline static int32_t get_offset_of_m_StatResetTime_13() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_StatResetTime_13)); }
	inline int32_t get_m_StatResetTime_13() const { return ___m_StatResetTime_13; }
	inline int32_t* get_address_of_m_StatResetTime_13() { return &___m_StatResetTime_13; }
	inline void set_m_StatResetTime_13(int32_t value)
	{
		___m_StatResetTime_13 = value;
	}

	inline static int32_t get_offset_of_m_RemoteEndPoint_14() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_RemoteEndPoint_14)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_RemoteEndPoint_14() const { return ___m_RemoteEndPoint_14; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_RemoteEndPoint_14() { return &___m_RemoteEndPoint_14; }
	inline void set_m_RemoteEndPoint_14(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_RemoteEndPoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RemoteEndPoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_16() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_MessageHandlers_16)); }
	inline NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D * get_m_MessageHandlers_16() const { return ___m_MessageHandlers_16; }
	inline NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D ** get_address_of_m_MessageHandlers_16() { return &___m_MessageHandlers_16; }
	inline void set_m_MessageHandlers_16(NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D * value)
	{
		___m_MessageHandlers_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageHandlers_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Connection_17() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_Connection_17)); }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * get_m_Connection_17() const { return ___m_Connection_17; }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 ** get_address_of_m_Connection_17() { return &___m_Connection_17; }
	inline void set_m_Connection_17(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * value)
	{
		___m_Connection_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Connection_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_MsgBuffer_18() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_MsgBuffer_18)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_MsgBuffer_18() const { return ___m_MsgBuffer_18; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_MsgBuffer_18() { return &___m_MsgBuffer_18; }
	inline void set_m_MsgBuffer_18(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_MsgBuffer_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MsgBuffer_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_MsgReader_19() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_MsgReader_19)); }
	inline NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * get_m_MsgReader_19() const { return ___m_MsgReader_19; }
	inline NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E ** get_address_of_m_MsgReader_19() { return &___m_MsgReader_19; }
	inline void set_m_MsgReader_19(NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * value)
	{
		___m_MsgReader_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MsgReader_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_AsyncConnect_20() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_AsyncConnect_20)); }
	inline int32_t get_m_AsyncConnect_20() const { return ___m_AsyncConnect_20; }
	inline int32_t* get_address_of_m_AsyncConnect_20() { return &___m_AsyncConnect_20; }
	inline void set_m_AsyncConnect_20(int32_t value)
	{
		___m_AsyncConnect_20 = value;
	}

	inline static int32_t get_offset_of_m_RequestedServerHost_21() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76, ___m_RequestedServerHost_21)); }
	inline String_t* get_m_RequestedServerHost_21() const { return ___m_RequestedServerHost_21; }
	inline String_t** get_address_of_m_RequestedServerHost_21() { return &___m_RequestedServerHost_21; }
	inline void set_m_RequestedServerHost_21(String_t* value)
	{
		___m_RequestedServerHost_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RequestedServerHost_21), (void*)value);
	}
};

struct NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient> UnityEngine.Networking.NetworkClient::s_Clients
	List_1_tF7B19EC761F5BA98AF2C33A14FE58B6C7B00E0AA * ___s_Clients_2;
	// System.Boolean UnityEngine.Networking.NetworkClient::s_IsActive
	bool ___s_IsActive_3;
	// UnityEngine.Networking.NetworkSystem.CRCMessage UnityEngine.Networking.NetworkClient::s_CRCMessage
	CRCMessage_t6B6C3E8648616FC59FD4CA2603EB2094906CD388 * ___s_CRCMessage_15;

public:
	inline static int32_t get_offset_of_s_Clients_2() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76_StaticFields, ___s_Clients_2)); }
	inline List_1_tF7B19EC761F5BA98AF2C33A14FE58B6C7B00E0AA * get_s_Clients_2() const { return ___s_Clients_2; }
	inline List_1_tF7B19EC761F5BA98AF2C33A14FE58B6C7B00E0AA ** get_address_of_s_Clients_2() { return &___s_Clients_2; }
	inline void set_s_Clients_2(List_1_tF7B19EC761F5BA98AF2C33A14FE58B6C7B00E0AA * value)
	{
		___s_Clients_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Clients_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsActive_3() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76_StaticFields, ___s_IsActive_3)); }
	inline bool get_s_IsActive_3() const { return ___s_IsActive_3; }
	inline bool* get_address_of_s_IsActive_3() { return &___s_IsActive_3; }
	inline void set_s_IsActive_3(bool value)
	{
		___s_IsActive_3 = value;
	}

	inline static int32_t get_offset_of_s_CRCMessage_15() { return static_cast<int32_t>(offsetof(NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76_StaticFields, ___s_CRCMessage_15)); }
	inline CRCMessage_t6B6C3E8648616FC59FD4CA2603EB2094906CD388 * get_s_CRCMessage_15() const { return ___s_CRCMessage_15; }
	inline CRCMessage_t6B6C3E8648616FC59FD4CA2603EB2094906CD388 ** get_address_of_s_CRCMessage_15() { return &___s_CRCMessage_15; }
	inline void set_s_CRCMessage_15(CRCMessage_t6B6C3E8648616FC59FD4CA2603EB2094906CD388 * value)
	{
		___s_CRCMessage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CRCMessage_15), (void*)value);
	}
};


// UnityEngine.Networking.NetworkConnection
struct  NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ChannelBuffer[] UnityEngine.Networking.NetworkConnection::m_Channels
	ChannelBufferU5BU5D_tDD121CFC96A7F7595AF221758A8DDDC7DFEC1F0B* ___m_Channels_0;
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.NetworkConnection::m_PlayerControllers
	List_1_t9B51907D678DE298D43D3C0145BE8A0BB9C6BD23 * ___m_PlayerControllers_1;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_NetMsg
	NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD * ___m_NetMsg_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkConnection::m_VisList
	HashSet_1_t47EED2F02F8CD5DAFE36148809BD11786AB10794 * ___m_VisList_3;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkConnection::m_Writer
	NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___m_Writer_4;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkConnection::m_MessageHandlersDict
	Dictionary_2_t2E34DBEAE46F8D581A2BD36DF01436181B0748F3 * ___m_MessageHandlersDict_5;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkConnection::m_MessageHandlers
	NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D * ___m_MessageHandlers_6;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkConnection::m_ClientOwnedObjects
	HashSet_1_t3F5FF9A887489019FA7B2FB1C361C15DC8BE4170 * ___m_ClientOwnedObjects_7;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_MessageInfo
	NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD * ___m_MessageInfo_8;
	// UnityEngine.Networking.NetworkError UnityEngine.Networking.NetworkConnection::error
	int32_t ___error_10;
	// System.Int32 UnityEngine.Networking.NetworkConnection::hostId
	int32_t ___hostId_11;
	// System.Int32 UnityEngine.Networking.NetworkConnection::connectionId
	int32_t ___connectionId_12;
	// System.Boolean UnityEngine.Networking.NetworkConnection::isReady
	bool ___isReady_13;
	// System.String UnityEngine.Networking.NetworkConnection::address
	String_t* ___address_14;
	// System.Single UnityEngine.Networking.NetworkConnection::lastMessageTime
	float ___lastMessageTime_15;
	// System.Boolean UnityEngine.Networking.NetworkConnection::logNetworkMessages
	bool ___logNetworkMessages_16;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkConnection::m_PacketStats
	Dictionary_2_tE8371663EC9914BEC5F635B74C54849B326ADE0C * ___m_PacketStats_17;
	// System.Boolean UnityEngine.Networking.NetworkConnection::m_Disposed
	bool ___m_Disposed_18;

public:
	inline static int32_t get_offset_of_m_Channels_0() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_Channels_0)); }
	inline ChannelBufferU5BU5D_tDD121CFC96A7F7595AF221758A8DDDC7DFEC1F0B* get_m_Channels_0() const { return ___m_Channels_0; }
	inline ChannelBufferU5BU5D_tDD121CFC96A7F7595AF221758A8DDDC7DFEC1F0B** get_address_of_m_Channels_0() { return &___m_Channels_0; }
	inline void set_m_Channels_0(ChannelBufferU5BU5D_tDD121CFC96A7F7595AF221758A8DDDC7DFEC1F0B* value)
	{
		___m_Channels_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Channels_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerControllers_1() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_PlayerControllers_1)); }
	inline List_1_t9B51907D678DE298D43D3C0145BE8A0BB9C6BD23 * get_m_PlayerControllers_1() const { return ___m_PlayerControllers_1; }
	inline List_1_t9B51907D678DE298D43D3C0145BE8A0BB9C6BD23 ** get_address_of_m_PlayerControllers_1() { return &___m_PlayerControllers_1; }
	inline void set_m_PlayerControllers_1(List_1_t9B51907D678DE298D43D3C0145BE8A0BB9C6BD23 * value)
	{
		___m_PlayerControllers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlayerControllers_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetMsg_2() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_NetMsg_2)); }
	inline NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD * get_m_NetMsg_2() const { return ___m_NetMsg_2; }
	inline NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD ** get_address_of_m_NetMsg_2() { return &___m_NetMsg_2; }
	inline void set_m_NetMsg_2(NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD * value)
	{
		___m_NetMsg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetMsg_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_VisList_3() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_VisList_3)); }
	inline HashSet_1_t47EED2F02F8CD5DAFE36148809BD11786AB10794 * get_m_VisList_3() const { return ___m_VisList_3; }
	inline HashSet_1_t47EED2F02F8CD5DAFE36148809BD11786AB10794 ** get_address_of_m_VisList_3() { return &___m_VisList_3; }
	inline void set_m_VisList_3(HashSet_1_t47EED2F02F8CD5DAFE36148809BD11786AB10794 * value)
	{
		___m_VisList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisList_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Writer_4() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_Writer_4)); }
	inline NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * get_m_Writer_4() const { return ___m_Writer_4; }
	inline NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A ** get_address_of_m_Writer_4() { return &___m_Writer_4; }
	inline void set_m_Writer_4(NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * value)
	{
		___m_Writer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Writer_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageHandlersDict_5() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_MessageHandlersDict_5)); }
	inline Dictionary_2_t2E34DBEAE46F8D581A2BD36DF01436181B0748F3 * get_m_MessageHandlersDict_5() const { return ___m_MessageHandlersDict_5; }
	inline Dictionary_2_t2E34DBEAE46F8D581A2BD36DF01436181B0748F3 ** get_address_of_m_MessageHandlersDict_5() { return &___m_MessageHandlersDict_5; }
	inline void set_m_MessageHandlersDict_5(Dictionary_2_t2E34DBEAE46F8D581A2BD36DF01436181B0748F3 * value)
	{
		___m_MessageHandlersDict_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageHandlersDict_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_6() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_MessageHandlers_6)); }
	inline NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D * get_m_MessageHandlers_6() const { return ___m_MessageHandlers_6; }
	inline NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D ** get_address_of_m_MessageHandlers_6() { return &___m_MessageHandlers_6; }
	inline void set_m_MessageHandlers_6(NetworkMessageHandlers_t3137A1F8EC867D49B69DA6F568F46C82EC00E88D * value)
	{
		___m_MessageHandlers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageHandlers_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClientOwnedObjects_7() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_ClientOwnedObjects_7)); }
	inline HashSet_1_t3F5FF9A887489019FA7B2FB1C361C15DC8BE4170 * get_m_ClientOwnedObjects_7() const { return ___m_ClientOwnedObjects_7; }
	inline HashSet_1_t3F5FF9A887489019FA7B2FB1C361C15DC8BE4170 ** get_address_of_m_ClientOwnedObjects_7() { return &___m_ClientOwnedObjects_7; }
	inline void set_m_ClientOwnedObjects_7(HashSet_1_t3F5FF9A887489019FA7B2FB1C361C15DC8BE4170 * value)
	{
		___m_ClientOwnedObjects_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientOwnedObjects_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageInfo_8() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_MessageInfo_8)); }
	inline NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD * get_m_MessageInfo_8() const { return ___m_MessageInfo_8; }
	inline NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD ** get_address_of_m_MessageInfo_8() { return &___m_MessageInfo_8; }
	inline void set_m_MessageInfo_8(NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD * value)
	{
		___m_MessageInfo_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageInfo_8), (void*)value);
	}

	inline static int32_t get_offset_of_error_10() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___error_10)); }
	inline int32_t get_error_10() const { return ___error_10; }
	inline int32_t* get_address_of_error_10() { return &___error_10; }
	inline void set_error_10(int32_t value)
	{
		___error_10 = value;
	}

	inline static int32_t get_offset_of_hostId_11() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___hostId_11)); }
	inline int32_t get_hostId_11() const { return ___hostId_11; }
	inline int32_t* get_address_of_hostId_11() { return &___hostId_11; }
	inline void set_hostId_11(int32_t value)
	{
		___hostId_11 = value;
	}

	inline static int32_t get_offset_of_connectionId_12() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___connectionId_12)); }
	inline int32_t get_connectionId_12() const { return ___connectionId_12; }
	inline int32_t* get_address_of_connectionId_12() { return &___connectionId_12; }
	inline void set_connectionId_12(int32_t value)
	{
		___connectionId_12 = value;
	}

	inline static int32_t get_offset_of_isReady_13() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___isReady_13)); }
	inline bool get_isReady_13() const { return ___isReady_13; }
	inline bool* get_address_of_isReady_13() { return &___isReady_13; }
	inline void set_isReady_13(bool value)
	{
		___isReady_13 = value;
	}

	inline static int32_t get_offset_of_address_14() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___address_14)); }
	inline String_t* get_address_14() const { return ___address_14; }
	inline String_t** get_address_of_address_14() { return &___address_14; }
	inline void set_address_14(String_t* value)
	{
		___address_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_14), (void*)value);
	}

	inline static int32_t get_offset_of_lastMessageTime_15() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___lastMessageTime_15)); }
	inline float get_lastMessageTime_15() const { return ___lastMessageTime_15; }
	inline float* get_address_of_lastMessageTime_15() { return &___lastMessageTime_15; }
	inline void set_lastMessageTime_15(float value)
	{
		___lastMessageTime_15 = value;
	}

	inline static int32_t get_offset_of_logNetworkMessages_16() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___logNetworkMessages_16)); }
	inline bool get_logNetworkMessages_16() const { return ___logNetworkMessages_16; }
	inline bool* get_address_of_logNetworkMessages_16() { return &___logNetworkMessages_16; }
	inline void set_logNetworkMessages_16(bool value)
	{
		___logNetworkMessages_16 = value;
	}

	inline static int32_t get_offset_of_m_PacketStats_17() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_PacketStats_17)); }
	inline Dictionary_2_tE8371663EC9914BEC5F635B74C54849B326ADE0C * get_m_PacketStats_17() const { return ___m_PacketStats_17; }
	inline Dictionary_2_tE8371663EC9914BEC5F635B74C54849B326ADE0C ** get_address_of_m_PacketStats_17() { return &___m_PacketStats_17; }
	inline void set_m_PacketStats_17(Dictionary_2_tE8371663EC9914BEC5F635B74C54849B326ADE0C * value)
	{
		___m_PacketStats_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PacketStats_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_18() { return static_cast<int32_t>(offsetof(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840, ___m_Disposed_18)); }
	inline bool get_m_Disposed_18() const { return ___m_Disposed_18; }
	inline bool* get_address_of_m_Disposed_18() { return &___m_Disposed_18; }
	inline void set_m_Disposed_18(bool value)
	{
		___m_Disposed_18 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Networking.NetworkBehaviour/Invoker
struct  Invoker_t6C4BE6E583114F51A045E662DC7C2F1B1A9BF7B6  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetworkBehaviour/UNetInvokeType UnityEngine.Networking.NetworkBehaviour/Invoker::invokeType
	int32_t ___invokeType_0;
	// System.Type UnityEngine.Networking.NetworkBehaviour/Invoker::invokeClass
	Type_t * ___invokeClass_1;
	// UnityEngine.Networking.NetworkBehaviour/CmdDelegate UnityEngine.Networking.NetworkBehaviour/Invoker::invokeFunction
	CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3 * ___invokeFunction_2;

public:
	inline static int32_t get_offset_of_invokeType_0() { return static_cast<int32_t>(offsetof(Invoker_t6C4BE6E583114F51A045E662DC7C2F1B1A9BF7B6, ___invokeType_0)); }
	inline int32_t get_invokeType_0() const { return ___invokeType_0; }
	inline int32_t* get_address_of_invokeType_0() { return &___invokeType_0; }
	inline void set_invokeType_0(int32_t value)
	{
		___invokeType_0 = value;
	}

	inline static int32_t get_offset_of_invokeClass_1() { return static_cast<int32_t>(offsetof(Invoker_t6C4BE6E583114F51A045E662DC7C2F1B1A9BF7B6, ___invokeClass_1)); }
	inline Type_t * get_invokeClass_1() const { return ___invokeClass_1; }
	inline Type_t ** get_address_of_invokeClass_1() { return &___invokeClass_1; }
	inline void set_invokeClass_1(Type_t * value)
	{
		___invokeClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invokeClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_invokeFunction_2() { return static_cast<int32_t>(offsetof(Invoker_t6C4BE6E583114F51A045E662DC7C2F1B1A9BF7B6, ___invokeFunction_2)); }
	inline CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3 * get_invokeFunction_2() const { return ___invokeFunction_2; }
	inline CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3 ** get_address_of_invokeFunction_2() { return &___invokeFunction_2; }
	inline void set_invokeFunction_2(CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3 * value)
	{
		___invokeFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invokeFunction_2), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Networking.LocalClient
struct  LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A  : public NetworkClient_tDF49EEA6C37621FAD16BEFCE2DD98234B94C1D76
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs
	List_1_tDD35339E6CDC416CA46D28EE3F916BAAEEE5ED52 * ___m_InternalMsgs_23;
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs2
	List_1_tDD35339E6CDC416CA46D28EE3F916BAAEEE5ED52 * ___m_InternalMsgs2_24;
	// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_FreeMessages
	Stack_1_tFC17FC60C487CA944293EC0C20A837E858FC504C * ___m_FreeMessages_25;
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.LocalClient::m_LocalServer
	NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * ___m_LocalServer_26;
	// System.Boolean UnityEngine.Networking.LocalClient::m_Connected
	bool ___m_Connected_27;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.LocalClient::s_InternalMessage
	NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD * ___s_InternalMessage_28;

public:
	inline static int32_t get_offset_of_m_InternalMsgs_23() { return static_cast<int32_t>(offsetof(LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A, ___m_InternalMsgs_23)); }
	inline List_1_tDD35339E6CDC416CA46D28EE3F916BAAEEE5ED52 * get_m_InternalMsgs_23() const { return ___m_InternalMsgs_23; }
	inline List_1_tDD35339E6CDC416CA46D28EE3F916BAAEEE5ED52 ** get_address_of_m_InternalMsgs_23() { return &___m_InternalMsgs_23; }
	inline void set_m_InternalMsgs_23(List_1_tDD35339E6CDC416CA46D28EE3F916BAAEEE5ED52 * value)
	{
		___m_InternalMsgs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalMsgs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalMsgs2_24() { return static_cast<int32_t>(offsetof(LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A, ___m_InternalMsgs2_24)); }
	inline List_1_tDD35339E6CDC416CA46D28EE3F916BAAEEE5ED52 * get_m_InternalMsgs2_24() const { return ___m_InternalMsgs2_24; }
	inline List_1_tDD35339E6CDC416CA46D28EE3F916BAAEEE5ED52 ** get_address_of_m_InternalMsgs2_24() { return &___m_InternalMsgs2_24; }
	inline void set_m_InternalMsgs2_24(List_1_tDD35339E6CDC416CA46D28EE3F916BAAEEE5ED52 * value)
	{
		___m_InternalMsgs2_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalMsgs2_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_FreeMessages_25() { return static_cast<int32_t>(offsetof(LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A, ___m_FreeMessages_25)); }
	inline Stack_1_tFC17FC60C487CA944293EC0C20A837E858FC504C * get_m_FreeMessages_25() const { return ___m_FreeMessages_25; }
	inline Stack_1_tFC17FC60C487CA944293EC0C20A837E858FC504C ** get_address_of_m_FreeMessages_25() { return &___m_FreeMessages_25; }
	inline void set_m_FreeMessages_25(Stack_1_tFC17FC60C487CA944293EC0C20A837E858FC504C * value)
	{
		___m_FreeMessages_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FreeMessages_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalServer_26() { return static_cast<int32_t>(offsetof(LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A, ___m_LocalServer_26)); }
	inline NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * get_m_LocalServer_26() const { return ___m_LocalServer_26; }
	inline NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 ** get_address_of_m_LocalServer_26() { return &___m_LocalServer_26; }
	inline void set_m_LocalServer_26(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * value)
	{
		___m_LocalServer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalServer_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Connected_27() { return static_cast<int32_t>(offsetof(LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A, ___m_Connected_27)); }
	inline bool get_m_Connected_27() const { return ___m_Connected_27; }
	inline bool* get_address_of_m_Connected_27() { return &___m_Connected_27; }
	inline void set_m_Connected_27(bool value)
	{
		___m_Connected_27 = value;
	}

	inline static int32_t get_offset_of_s_InternalMessage_28() { return static_cast<int32_t>(offsetof(LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A, ___s_InternalMessage_28)); }
	inline NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD * get_s_InternalMessage_28() const { return ___s_InternalMessage_28; }
	inline NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD ** get_address_of_s_InternalMessage_28() { return &___s_InternalMessage_28; }
	inline void set_s_InternalMessage_28(NetworkMessage_tD437E2806510EA8B5FC0FF52B2F985A342BFE5AD * value)
	{
		___s_InternalMessage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalMessage_28), (void*)value);
	}
};


// UnityEngine.Networking.SpawnDelegate
struct  SpawnDelegate_t9AD498A37502702B3DCA7F9015C95299B9817651  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.ULocalConnectionToClient
struct  ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6  : public NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840
{
public:
	// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::m_LocalClient
	LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * ___m_LocalClient_19;

public:
	inline static int32_t get_offset_of_m_LocalClient_19() { return static_cast<int32_t>(offsetof(ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6, ___m_LocalClient_19)); }
	inline LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * get_m_LocalClient_19() const { return ___m_LocalClient_19; }
	inline LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A ** get_address_of_m_LocalClient_19() { return &___m_LocalClient_19; }
	inline void set_m_LocalClient_19(LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * value)
	{
		___m_LocalClient_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalClient_19), (void*)value);
	}
};


// UnityEngine.Networking.ULocalConnectionToServer
struct  ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713  : public NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840
{
public:
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.ULocalConnectionToServer::m_LocalServer
	NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * ___m_LocalServer_19;

public:
	inline static int32_t get_offset_of_m_LocalServer_19() { return static_cast<int32_t>(offsetof(ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713, ___m_LocalServer_19)); }
	inline NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * get_m_LocalServer_19() const { return ___m_LocalServer_19; }
	inline NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 ** get_address_of_m_LocalServer_19() { return &___m_LocalServer_19; }
	inline void set_m_LocalServer_19(NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * value)
	{
		___m_LocalServer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalServer_19), (void*)value);
	}
};


// UnityEngine.Networking.UnSpawnDelegate
struct  UnSpawnDelegate_t93845B1366E6555FD1483505B03196788A2EA0D0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.NetworkBehaviour/CmdDelegate
struct  CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.NetworkBehaviour/EventDelegate
struct  EventDelegate_t8E97F816D285A45E0CAA40FE6A75FF2D45E84C7A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct  ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct  ClientMoveCallback2D_t911DC0DB1AB635909B35DCED87733639A6A3EAD8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct  ClientMoveCallback3D_t657FD08F0D0959E4593C3D5BE4C2EEC3996660D4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Networking.NetworkBehaviour
struct  NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkBehaviour::m_SyncVarDirtyBits
	uint32_t ___m_SyncVarDirtyBits_4;
	// System.Single UnityEngine.Networking.NetworkBehaviour::m_LastSendTime
	float ___m_LastSendTime_5;
	// System.Boolean UnityEngine.Networking.NetworkBehaviour::m_SyncVarGuard
	bool ___m_SyncVarGuard_6;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::m_MyView
	NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * ___m_MyView_8;

public:
	inline static int32_t get_offset_of_m_SyncVarDirtyBits_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3, ___m_SyncVarDirtyBits_4)); }
	inline uint32_t get_m_SyncVarDirtyBits_4() const { return ___m_SyncVarDirtyBits_4; }
	inline uint32_t* get_address_of_m_SyncVarDirtyBits_4() { return &___m_SyncVarDirtyBits_4; }
	inline void set_m_SyncVarDirtyBits_4(uint32_t value)
	{
		___m_SyncVarDirtyBits_4 = value;
	}

	inline static int32_t get_offset_of_m_LastSendTime_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3, ___m_LastSendTime_5)); }
	inline float get_m_LastSendTime_5() const { return ___m_LastSendTime_5; }
	inline float* get_address_of_m_LastSendTime_5() { return &___m_LastSendTime_5; }
	inline void set_m_LastSendTime_5(float value)
	{
		___m_LastSendTime_5 = value;
	}

	inline static int32_t get_offset_of_m_SyncVarGuard_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3, ___m_SyncVarGuard_6)); }
	inline bool get_m_SyncVarGuard_6() const { return ___m_SyncVarGuard_6; }
	inline bool* get_address_of_m_SyncVarGuard_6() { return &___m_SyncVarGuard_6; }
	inline void set_m_SyncVarGuard_6(bool value)
	{
		___m_SyncVarGuard_6 = value;
	}

	inline static int32_t get_offset_of_m_MyView_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3, ___m_MyView_8)); }
	inline NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * get_m_MyView_8() const { return ___m_MyView_8; }
	inline NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 ** get_address_of_m_MyView_8() { return &___m_MyView_8; }
	inline void set_m_MyView_8(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * value)
	{
		___m_MyView_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MyView_8), (void*)value);
	}
};

struct NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker> UnityEngine.Networking.NetworkBehaviour::s_CmdHandlerDelegates
	Dictionary_2_tD72CBCF9BE040AE3A228F61DBB371525BC0811D0 * ___s_CmdHandlerDelegates_9;

public:
	inline static int32_t get_offset_of_s_CmdHandlerDelegates_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3_StaticFields, ___s_CmdHandlerDelegates_9)); }
	inline Dictionary_2_tD72CBCF9BE040AE3A228F61DBB371525BC0811D0 * get_s_CmdHandlerDelegates_9() const { return ___s_CmdHandlerDelegates_9; }
	inline Dictionary_2_tD72CBCF9BE040AE3A228F61DBB371525BC0811D0 ** get_address_of_s_CmdHandlerDelegates_9() { return &___s_CmdHandlerDelegates_9; }
	inline void set_s_CmdHandlerDelegates_9(Dictionary_2_tD72CBCF9BE040AE3A228F61DBB371525BC0811D0 * value)
	{
		___s_CmdHandlerDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CmdHandlerDelegates_9), (void*)value);
	}
};


// UnityEngine.Networking.NetworkIdentity
struct  NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::m_SceneId
	NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  ___m_SceneId_4;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::m_AssetId
	NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  ___m_AssetId_5;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_ServerOnly
	bool ___m_ServerOnly_6;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_LocalPlayerAuthority
	bool ___m_LocalPlayerAuthority_7;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsClient
	bool ___m_IsClient_8;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsServer
	bool ___m_IsServer_9;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_HasAuthority
	bool ___m_HasAuthority_10;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::m_NetId
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___m_NetId_11;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsLocalPlayer
	bool ___m_IsLocalPlayer_12;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToServer
	NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___m_ConnectionToServer_13;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToClient
	NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___m_ConnectionToClient_14;
	// System.Int16 UnityEngine.Networking.NetworkIdentity::m_PlayerId
	int16_t ___m_PlayerId_15;
	// UnityEngine.Networking.NetworkBehaviour[] UnityEngine.Networking.NetworkIdentity::m_NetworkBehaviours
	NetworkBehaviourU5BU5D_tACC2FCFDEC2C97CFC299E59162033B3D37278085* ___m_NetworkBehaviours_16;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkIdentity::m_ObserverConnections
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___m_ObserverConnections_17;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::m_Observers
	List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 * ___m_Observers_18;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ClientAuthorityOwner
	NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___m_ClientAuthorityOwner_19;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_Reset
	bool ___m_Reset_20;

public:
	inline static int32_t get_offset_of_m_SceneId_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_SceneId_4)); }
	inline NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  get_m_SceneId_4() const { return ___m_SceneId_4; }
	inline NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245 * get_address_of_m_SceneId_4() { return &___m_SceneId_4; }
	inline void set_m_SceneId_4(NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  value)
	{
		___m_SceneId_4 = value;
	}

	inline static int32_t get_offset_of_m_AssetId_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_AssetId_5)); }
	inline NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  get_m_AssetId_5() const { return ___m_AssetId_5; }
	inline NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26 * get_address_of_m_AssetId_5() { return &___m_AssetId_5; }
	inline void set_m_AssetId_5(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  value)
	{
		___m_AssetId_5 = value;
	}

	inline static int32_t get_offset_of_m_ServerOnly_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_ServerOnly_6)); }
	inline bool get_m_ServerOnly_6() const { return ___m_ServerOnly_6; }
	inline bool* get_address_of_m_ServerOnly_6() { return &___m_ServerOnly_6; }
	inline void set_m_ServerOnly_6(bool value)
	{
		___m_ServerOnly_6 = value;
	}

	inline static int32_t get_offset_of_m_LocalPlayerAuthority_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_LocalPlayerAuthority_7)); }
	inline bool get_m_LocalPlayerAuthority_7() const { return ___m_LocalPlayerAuthority_7; }
	inline bool* get_address_of_m_LocalPlayerAuthority_7() { return &___m_LocalPlayerAuthority_7; }
	inline void set_m_LocalPlayerAuthority_7(bool value)
	{
		___m_LocalPlayerAuthority_7 = value;
	}

	inline static int32_t get_offset_of_m_IsClient_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_IsClient_8)); }
	inline bool get_m_IsClient_8() const { return ___m_IsClient_8; }
	inline bool* get_address_of_m_IsClient_8() { return &___m_IsClient_8; }
	inline void set_m_IsClient_8(bool value)
	{
		___m_IsClient_8 = value;
	}

	inline static int32_t get_offset_of_m_IsServer_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_IsServer_9)); }
	inline bool get_m_IsServer_9() const { return ___m_IsServer_9; }
	inline bool* get_address_of_m_IsServer_9() { return &___m_IsServer_9; }
	inline void set_m_IsServer_9(bool value)
	{
		___m_IsServer_9 = value;
	}

	inline static int32_t get_offset_of_m_HasAuthority_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_HasAuthority_10)); }
	inline bool get_m_HasAuthority_10() const { return ___m_HasAuthority_10; }
	inline bool* get_address_of_m_HasAuthority_10() { return &___m_HasAuthority_10; }
	inline void set_m_HasAuthority_10(bool value)
	{
		___m_HasAuthority_10 = value;
	}

	inline static int32_t get_offset_of_m_NetId_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_NetId_11)); }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  get_m_NetId_11() const { return ___m_NetId_11; }
	inline NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * get_address_of_m_NetId_11() { return &___m_NetId_11; }
	inline void set_m_NetId_11(NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  value)
	{
		___m_NetId_11 = value;
	}

	inline static int32_t get_offset_of_m_IsLocalPlayer_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_IsLocalPlayer_12)); }
	inline bool get_m_IsLocalPlayer_12() const { return ___m_IsLocalPlayer_12; }
	inline bool* get_address_of_m_IsLocalPlayer_12() { return &___m_IsLocalPlayer_12; }
	inline void set_m_IsLocalPlayer_12(bool value)
	{
		___m_IsLocalPlayer_12 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionToServer_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_ConnectionToServer_13)); }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * get_m_ConnectionToServer_13() const { return ___m_ConnectionToServer_13; }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 ** get_address_of_m_ConnectionToServer_13() { return &___m_ConnectionToServer_13; }
	inline void set_m_ConnectionToServer_13(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * value)
	{
		___m_ConnectionToServer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToServer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_ConnectionToClient_14)); }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * get_m_ConnectionToClient_14() const { return ___m_ConnectionToClient_14; }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 ** get_address_of_m_ConnectionToClient_14() { return &___m_ConnectionToClient_14; }
	inline void set_m_ConnectionToClient_14(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * value)
	{
		___m_ConnectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerId_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_PlayerId_15)); }
	inline int16_t get_m_PlayerId_15() const { return ___m_PlayerId_15; }
	inline int16_t* get_address_of_m_PlayerId_15() { return &___m_PlayerId_15; }
	inline void set_m_PlayerId_15(int16_t value)
	{
		___m_PlayerId_15 = value;
	}

	inline static int32_t get_offset_of_m_NetworkBehaviours_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_NetworkBehaviours_16)); }
	inline NetworkBehaviourU5BU5D_tACC2FCFDEC2C97CFC299E59162033B3D37278085* get_m_NetworkBehaviours_16() const { return ___m_NetworkBehaviours_16; }
	inline NetworkBehaviourU5BU5D_tACC2FCFDEC2C97CFC299E59162033B3D37278085** get_address_of_m_NetworkBehaviours_16() { return &___m_NetworkBehaviours_16; }
	inline void set_m_NetworkBehaviours_16(NetworkBehaviourU5BU5D_tACC2FCFDEC2C97CFC299E59162033B3D37278085* value)
	{
		___m_NetworkBehaviours_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkBehaviours_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObserverConnections_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_ObserverConnections_17)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_m_ObserverConnections_17() const { return ___m_ObserverConnections_17; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_m_ObserverConnections_17() { return &___m_ObserverConnections_17; }
	inline void set_m_ObserverConnections_17(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___m_ObserverConnections_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObserverConnections_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Observers_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_Observers_18)); }
	inline List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 * get_m_Observers_18() const { return ___m_Observers_18; }
	inline List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 ** get_address_of_m_Observers_18() { return &___m_Observers_18; }
	inline void set_m_Observers_18(List_1_t3A5A5819ECFCDED8256D6C95D8EFCF08F9A34528 * value)
	{
		___m_Observers_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observers_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClientAuthorityOwner_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_ClientAuthorityOwner_19)); }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * get_m_ClientAuthorityOwner_19() const { return ___m_ClientAuthorityOwner_19; }
	inline NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 ** get_address_of_m_ClientAuthorityOwner_19() { return &___m_ClientAuthorityOwner_19; }
	inline void set_m_ClientAuthorityOwner_19(NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * value)
	{
		___m_ClientAuthorityOwner_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientAuthorityOwner_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reset_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11, ___m_Reset_20)); }
	inline bool get_m_Reset_20() const { return ___m_Reset_20; }
	inline bool* get_address_of_m_Reset_20() { return &___m_Reset_20; }
	inline void set_m_Reset_20(bool value)
	{
		___m_Reset_20 = value;
	}
};

struct NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11_StaticFields
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkIdentity::s_NextNetworkId
	uint32_t ___s_NextNetworkId_21;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkIdentity::s_UpdateWriter
	NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___s_UpdateWriter_22;
	// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback UnityEngine.Networking.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293 * ___clientAuthorityCallback_23;

public:
	inline static int32_t get_offset_of_s_NextNetworkId_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11_StaticFields, ___s_NextNetworkId_21)); }
	inline uint32_t get_s_NextNetworkId_21() const { return ___s_NextNetworkId_21; }
	inline uint32_t* get_address_of_s_NextNetworkId_21() { return &___s_NextNetworkId_21; }
	inline void set_s_NextNetworkId_21(uint32_t value)
	{
		___s_NextNetworkId_21 = value;
	}

	inline static int32_t get_offset_of_s_UpdateWriter_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11_StaticFields, ___s_UpdateWriter_22)); }
	inline NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * get_s_UpdateWriter_22() const { return ___s_UpdateWriter_22; }
	inline NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A ** get_address_of_s_UpdateWriter_22() { return &___s_UpdateWriter_22; }
	inline void set_s_UpdateWriter_22(NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * value)
	{
		___s_UpdateWriter_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateWriter_22), (void*)value);
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11_StaticFields, ___clientAuthorityCallback_23)); }
	inline ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293 * get_clientAuthorityCallback_23() const { return ___clientAuthorityCallback_23; }
	inline ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293 ** get_address_of_clientAuthorityCallback_23() { return &___clientAuthorityCallback_23; }
	inline void set_clientAuthorityCallback_23(ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293 * value)
	{
		___clientAuthorityCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_23), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[]
struct PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C  m_Items[1];

public:
	inline PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * m_Items[1];

public:
	inline PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m50CCB0BB383B44EF176D4DF65AB61DFA281A70B4_gshared (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m583AE6E8CB7A3D6172C9A9518C39B483BB1CB994_gshared (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * __this, PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* List_1_ToArray_mFEA7807DB15376F6F839594E7AC3F739FE8A3334_gshared (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C_gshared (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, bool ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m1A4524883E9C29D9923DE8DD3C57692885C7558C_gshared (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m42C4C5CD1E7B07F9C433B2AB4EEFC8FCC4F5F06B_gshared (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_Item_m45AAB69E064A8247DECEF39E91039078310D050F_gshared (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m55E3D3708C0BD9C545A7038C56CC200E33477BBE_gshared (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07_gshared (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, float ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mDDCAC9BAFFA158D984CADF03DC7D8D38DD80D2A9_gshared (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m69152AA83358E3732C99E6EE70DA4800AF6057E6_gshared (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SyncList_1_get_Item_m8BDE7C19037992940AFECA73EDAA5560BB8E7226_gshared (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m74BBC1BE1F42C0C35721C7EAE7EA7418C461DB30_gshared (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD_gshared (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m9DF702C5EA68F98B4E1C37D4101A9C3747B2AAD2_gshared (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mBE8B65CC1514DB122138180D6B24684C2C9BD716_gshared (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Item_m9575DC0114A9FDAFB6A37F9F97428A6709F5A7B8_gshared (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mCB6B86B3D9E12C5BDE1E4B37437516DAD9C07875_gshared (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m2E69AC3C08E2E7B4062B432EE180F01F51810FAE_gshared (SyncList_1_t29CA46379BC44796B1623ED9B14BD30E91F9FC6D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mC8C977D54F1297FDEBACB4762FE0DB713EA62F25_gshared (SyncList_1_t29CA46379BC44796B1623ED9B14BD30E91F9FC6D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m32E98325609230AC7921F10EC44D2B2E0A8776C7_gshared (SyncList_1_t29CA46379BC44796B1623ED9B14BD30E91F9FC6D * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SyncList_1_get_Item_mB3B605AC24A4513568FED110F15DF956F7C6DE99_gshared (SyncList_1_t29CA46379BC44796B1623ED9B14BD30E91F9FC6D * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m815B414FDE989FA87F2AB3A34D58263A3814A9B3_gshared (SyncList_1_t29CA46379BC44796B1623ED9B14BD30E91F9FC6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA_gshared (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, uint32_t ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mC23762033A17EDAC8A8E3FEC2C4050DC7F2A29DE_gshared (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mACFFC0B4C716960264DDDB1FDDC37983D70D71A1_gshared (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, const RuntimeMethod* method);
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SyncList_1_get_Item_mA6E90B7088553B9EEF820CE00B06669FF13B7A03_gshared (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mAE4CD70CD6B47860740D67DA5FAC730925A90B90_gshared (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyMessage__ctor_m33278F44C1DF3D452B0B2284D7289114F63295B3 (EmptyMessage_t990328447D8322C4402AF67E1E2713FA8B8936D8 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkReader::ReadNetworkId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  NetworkReader_ReadNetworkId_m9C13DEFCCBD90811B29369D7113F92085E8CF7FB (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m54E9B404694C5205129571F6B9CA1F5E5E32839C (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.MessageBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735 (MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, uint32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkReader::ReadNetworkHash128()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  NetworkReader_ReadNetworkHash128_m74A62D583ECCDCBB78A55D76DF919D61FF350CAF (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Networking.NetworkReader::ReadVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkReader_ReadVector3_m8288D6931ECAE1654ACF4B799130F0E1D4F2B247 (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytesAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NetworkReader_ReadBytesAndSize_m9F969D85ABF21BB3E18177EB2DEADEC76AF67E11 (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkReader::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkReader_get_Length_m60E1BC8D41A473189E0CBC6C7B8F250804B6C10E (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_get_Position_m0B37F2D9870C8493B4FD9B3DD491771C0963781A (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Networking.NetworkReader::ReadQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  NetworkReader_ReadQuaternion_m207F55698143561CE71CB11B54B91BEE99516D7D (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkHash128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m11D2FC5777C2640AFF438BF32990145230A2095F (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m7936FBB9E9BA4C982E2A71B17892E625BA5A0091 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesFull(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesFull_m64921BEA6E5EE2D1538CA3F66A282ABFF48F9E1C (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mB7C6EF43A6F1D8DBBA890D833AADB206F6B3601A (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkReader::ReadSceneId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  NetworkReader_ReadSceneId_mBC5BED21B3C967ACE2157BA034E4398C5191047F (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkSceneId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mA1919E17E8BA79007610C9B650282565B853A812 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkReader::ReadBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkReader_ReadBoolean_m868948ABF6D56BFA99605A974760011C15FC8BC6 (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m82F0DC1639C0A93F0C0828015FAC2D94C21F95E9 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.NetworkReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkReader_ReadString_m6B0F4CE34F9CBB8C322AE6EE3C9617CBB33A447B (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::.ctor()
inline void List_1__ctor_m50CCB0BB383B44EF176D4DF65AB61DFA281A70B4 (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 *, const RuntimeMethod*))List_1__ctor_m50CCB0BB383B44EF176D4DF65AB61DFA281A70B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::Add(!0)
inline void List_1_Add_m583AE6E8CB7A3D6172C9A9518C39B483BB1CB994 (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * __this, PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 *, PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C , const RuntimeMethod*))List_1_Add_m583AE6E8CB7A3D6172C9A9518C39B483BB1CB994_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::ToArray()
inline PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* List_1_ToArray_mFEA7807DB15376F6F839594E7AC3F739FE8A3334 (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * __this, const RuntimeMethod* method)
{
	return ((  PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* (*) (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 *, const RuntimeMethod*))List_1_ToArray_mFEA7807DB15376F6F839594E7AC3F739FE8A3334_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m47E42D8FB4CDD406BD281959D6A9A7531571DE96 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.NetworkReader::ReadUInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228 (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerInfoMessage__ctor_mD07CE570261467D0213A3AB0CE38918A45801792 (PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m904D655CF43DE112DBF5E9C14C7DB200336F8448 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Networking.NetworkIdentity>()
inline NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * GameObject_GetComponent_TisNetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11_m7A920C0F32818CF103496FF74161FE7B6C2563AD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  NetworkIdentity_get_netId_mA85DDF92E96025B8A70349A25473AE2621889490_inline (NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.NetworkInstanceId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkInstanceId_ToString_mA619C62108F785F43D7616E36246F50F190A95B9 (NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesAndSize_m2BFB164E1CA976B69E5BFD4703C1F240FCEB339D (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncListBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool__ctor_mFA59400D08A8B132C62C4C7EF4F4482FCB635743 (SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
inline void SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, bool ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B *, bool, const RuntimeMethod*))SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
inline void SyncList_1_Clear_m1A4524883E9C29D9923DE8DD3C57692885C7558C (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B *, const RuntimeMethod*))SyncList_1_Clear_m1A4524883E9C29D9923DE8DD3C57692885C7558C_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
inline int32_t SyncList_1_get_Count_m42C4C5CD1E7B07F9C433B2AB4EEFC8FCC4F5F06B (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B *, const RuntimeMethod*))SyncList_1_get_Count_m42C4C5CD1E7B07F9C433B2AB4EEFC8FCC4F5F06B_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
inline bool SyncList_1_get_Item_m45AAB69E064A8247DECEF39E91039078310D050F (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  bool (*) (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m45AAB69E064A8247DECEF39E91039078310D050F_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
inline void SyncList_1__ctor_m55E3D3708C0BD9C545A7038C56CC200E33477BBE (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t022B66CF8A7B20EDA5583B9751A548F606A4C93B *, const RuntimeMethod*))SyncList_1__ctor_m55E3D3708C0BD9C545A7038C56CC200E33477BBE_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m045B38FC1E1A9C08488BB040EA4A16A052006922 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkReader::ReadSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkReader_ReadSingle_mBB8BBA028D9279958C1DCAE98CCD1DE5AFEFB32D (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncListFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat__ctor_m81E251483328274F1D65D735CCB069DF249D17FA (SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
inline void SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07 (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 *, float, const RuntimeMethod*))SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
inline void SyncList_1_Clear_mDDCAC9BAFFA158D984CADF03DC7D8D38DD80D2A9 (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 *, const RuntimeMethod*))SyncList_1_Clear_mDDCAC9BAFFA158D984CADF03DC7D8D38DD80D2A9_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
inline int32_t SyncList_1_get_Count_m69152AA83358E3732C99E6EE70DA4800AF6057E6 (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 *, const RuntimeMethod*))SyncList_1_get_Count_m69152AA83358E3732C99E6EE70DA4800AF6057E6_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
inline float SyncList_1_get_Item_m8BDE7C19037992940AFECA73EDAA5560BB8E7226 (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  float (*) (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m8BDE7C19037992940AFECA73EDAA5560BB8E7226_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
inline void SyncList_1__ctor_m74BBC1BE1F42C0C35721C7EAE7EA7418C461DB30 (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tC916ED0D5AB408318AB81CB812523F97698FC731 *, const RuntimeMethod*))SyncList_1__ctor_m74BBC1BE1F42C0C35721C7EAE7EA7418C461DB30_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.SyncListInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt__ctor_m09BC73B7ED4EC789C283EB42261DD8780826A6C9 (SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
inline void SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 *, int32_t, const RuntimeMethod*))SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
inline void SyncList_1_Clear_m9DF702C5EA68F98B4E1C37D4101A9C3747B2AAD2 (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 *, const RuntimeMethod*))SyncList_1_Clear_m9DF702C5EA68F98B4E1C37D4101A9C3747B2AAD2_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
inline int32_t SyncList_1_get_Count_mBE8B65CC1514DB122138180D6B24684C2C9BD716 (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 *, const RuntimeMethod*))SyncList_1_get_Count_mBE8B65CC1514DB122138180D6B24684C2C9BD716_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
inline int32_t SyncList_1_get_Item_m9575DC0114A9FDAFB6A37F9F97428A6709F5A7B8 (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m9575DC0114A9FDAFB6A37F9F97428A6709F5A7B8_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
inline void SyncList_1__ctor_mCB6B86B3D9E12C5BDE1E4B37437516DAD9C07875 (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t96865F13A9E1D62A7F0667236319CCD9C5E3ABB3 *, const RuntimeMethod*))SyncList_1__ctor_mCB6B86B3D9E12C5BDE1E4B37437516DAD9C07875_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.SyncListString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString__ctor_mBA22A8E16075D70B3EA83F6A230ACA9556FD6397 (SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.String>::AddInternal(T)
inline void SyncList_1_AddInternal_m2BEE119FFE52625568FC42B7E0F92074395B42C7 (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE *, String_t*, const RuntimeMethod*))SyncList_1_AddInternal_m2E69AC3C08E2E7B4062B432EE180F01F51810FAE_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.String>::Clear()
inline void SyncList_1_Clear_m7E6D353ED3D48FF328E15DEBE2628E0A9711DAC1 (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE *, const RuntimeMethod*))SyncList_1_Clear_mC8C977D54F1297FDEBACB4762FE0DB713EA62F25_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.String>::get_Count()
inline int32_t SyncList_1_get_Count_mC61C23EFFC476C12AB55EE817C9C0B3D351BF265 (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE *, const RuntimeMethod*))SyncList_1_get_Count_m32E98325609230AC7921F10EC44D2B2E0A8776C7_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.String>::get_Item(System.Int32)
inline String_t* SyncList_1_get_Item_mAA5FB72D31C45975CC8BEEAE4A1DB5FA01481371 (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE * __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_mB3B605AC24A4513568FED110F15DF956F7C6DE99_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.String>::.ctor()
inline void SyncList_1__ctor_m25675964A9726089386CA58A0B71BE653CF73082 (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tEF304B5E64160962608C7C0332D43602A04006CE *, const RuntimeMethod*))SyncList_1__ctor_m815B414FDE989FA87F2AB3A34D58263A3814A9B3_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.SyncListUInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt__ctor_mA1B918E2B1D38A3B898998535453E5F7C5DD1B59 (SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
inline void SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 *, uint32_t, const RuntimeMethod*))SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
inline void SyncList_1_Clear_mC23762033A17EDAC8A8E3FEC2C4050DC7F2A29DE (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 *, const RuntimeMethod*))SyncList_1_Clear_mC23762033A17EDAC8A8E3FEC2C4050DC7F2A29DE_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
inline int32_t SyncList_1_get_Count_mACFFC0B4C716960264DDDB1FDDC37983D70D71A1 (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 *, const RuntimeMethod*))SyncList_1_get_Count_mACFFC0B4C716960264DDDB1FDDC37983D70D71A1_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
inline uint32_t SyncList_1_get_Item_mA6E90B7088553B9EEF820CE00B06669FF13B7A03 (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 *, int32_t, const RuntimeMethod*))SyncList_1_get_Item_mA6E90B7088553B9EEF820CE00B06669FF13B7A03_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
inline void SyncList_1__ctor_mAE4CD70CD6B47860740D67DA5FAC730925A90B90 (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 * __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t5C8A016E3E86791B7275CA455E8A75EA249A4A10 *, const RuntimeMethod*))SyncList_1__ctor_mAE4CD70CD6B47860740D67DA5FAC730925A90B90_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnection__ctor_m31724235DDF03AA9A71A7F5496C83764B501DFEB (NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.LocalClient::InvokeHandlerOnClient(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalClient_InvokeHandlerOnClient_m090B7236C31A67B17297BB84590101CE0E64D77B (LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * __this, int16_t ___msgType0, MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * ___msg1, int32_t ___channelId2, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.LocalClient::InvokeBytesOnClient(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalClient_InvokeBytesOnClient_m635665D7615F89D564DA002425E558A548E8A5FB (LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___channelId1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.NetworkWriter::AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NetworkWriter_AsArray_mA86A0B455D02FC4A671964A233CB84B50C4D7F30 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeHandlerOnServer(UnityEngine.Networking.ULocalConnectionToServer,System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkServer_InvokeHandlerOnServer_m5C6A9DD7E5C6060F74146875090AC633E419F70A (NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * __this, ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * ___conn0, int16_t ___msgType1, MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * ___msg2, int32_t ___channelId3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.LogFilter::get_logError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogFilter_get_logError_mEF2BFEC9E98A9CDB1A567E6878567CD8BFC1C9A3 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeBytes(UnityEngine.Networking.ULocalConnectionToServer,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkServer_InvokeBytes_mF434CD0B32FC4558495A46EC24098C641075F480 (NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * __this, ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * ___conn0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___numBytes2, int32_t ___channelId3, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DotNetCompatibility::GetMethodName(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotNetCompatibility_GetMethodName_m9373E5DA42EFD244CDD724EA986C06F6ABEC0123 (Delegate_t * ___func0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.MsgType::MsgTypeToString(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MsgType_MsgTypeToString_m768D260E232A99E6986E1E247EC5A9AB70AC6ED5 (int16_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServerSimple::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServerSimple__ctor_m00805728E3F84815DC47FF7F3ED43478D60D8734 (NetworkServerSimple_t5EAC03B1C26816D470BF34A72B07A2D451FCDB5D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::GenerateConnectError(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_GenerateConnectError_m0C4523F39909E6D1DAB5E6BBCA3D56B84000C32F (NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * __this, int32_t ___error0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::GenerateDataError(UnityEngine.Networking.NetworkConnection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_GenerateDataError_m4C35398942EB1C24629444CFE7748868B0235B14 (NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, int32_t ___error1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::GenerateDisconnectError(UnityEngine.Networking.NetworkConnection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_GenerateDisconnectError_mE033A060EB9D8B512486008516C3B5E463A00D31 (NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, int32_t ___error1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::GenerateError(UnityEngine.Networking.NetworkConnection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_GenerateError_m6ABFFA753C13FE14CA8D2BFF3A6120FE4EBA8A57 (NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, int32_t ___error1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::OnConnected(UnityEngine.Networking.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_OnConnected_mEB205608677DDF3E3399A4948F09F237EFB0279C (NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::OnDisconnected(UnityEngine.Networking.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_OnDisconnected_mA26A990D4289D084915A29C67AE4C0E7B1A997B6 (NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_OnData_m11430DD5FA0B369FAEB4B31A04F1A0B3AC33D8B6 (NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, int32_t ___receivedSize1, int32_t ___channelId2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkSystem.NotReadyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotReadyMessage__ctor_mE4302198038221137D3E196E6015285947759E12 (NotReadyMessage_t83B510B1552A55C69E04EFA8B379E5AAACA05251 * __this, const RuntimeMethod* method)
{
	{
		EmptyMessage__ctor_m33278F44C1DF3D452B0B2284D7289114F63295B3(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyMessage_Deserialize_m44E46B586E2BC8A60903E13C8F74154092E84B4C (ObjectDestroyMessage_t5234A365BC076BB60E0E13A9C6AC0054413595A3 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1;
		L_1 = NetworkReader_ReadNetworkId_m9C13DEFCCBD90811B29369D7113F92085E8CF7FB(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyMessage_Serialize_mB8B78E94FC703C5CFD8172C78CFC3941073DFF25 (ObjectDestroyMessage_t5234A365BC076BB60E0E13A9C6AC0054413595A3 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write(netId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m54E9B404694C5205129571F6B9CA1F5E5E32839C(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyMessage__ctor_mBE241C6507F68177DB3340045BAE673887AFA920 (ObjectDestroyMessage_t5234A365BC076BB60E0E13A9C6AC0054413595A3 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage_Deserialize_mEEDF842BC7586FC0574D464270C496E1140EB200 (ObjectSpawnFinishedMessage_tD42DE3280BAA790DE51390215856AC606804619A * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// state = reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_0, /*hidden argument*/NULL);
		__this->set_state_0(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage_Serialize_mE19865CC299D3673278EC501136A866ED54C624A (ObjectSpawnFinishedMessage_tD42DE3280BAA790DE51390215856AC606804619A * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.WritePackedUInt32(state);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		uint32_t L_1 = __this->get_state_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage__ctor_m3BC05C4A429B048B39766FF8473916608C2130CE (ObjectSpawnFinishedMessage_tD42DE3280BAA790DE51390215856AC606804619A * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnMessage_Deserialize_mFA484CF40A70B4B69920CD2A158A33C1C98DA0B1 (ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1;
		L_1 = NetworkReader_ReadNetworkId_m9C13DEFCCBD90811B29369D7113F92085E8CF7FB(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		// assetId = reader.ReadNetworkHash128();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_2 = ___reader0;
		NullCheck(L_2);
		NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  L_3;
		L_3 = NetworkReader_ReadNetworkHash128_m74A62D583ECCDCBB78A55D76DF919D61FF350CAF(L_2, /*hidden argument*/NULL);
		__this->set_assetId_1(L_3);
		// position = reader.ReadVector3();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = NetworkReader_ReadVector3_m8288D6931ECAE1654ACF4B799130F0E1D4F2B247(L_4, /*hidden argument*/NULL);
		__this->set_position_2(L_5);
		// payload = reader.ReadBytesAndSize();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = NetworkReader_ReadBytesAndSize_m9F969D85ABF21BB3E18177EB2DEADEC76AF67E11(L_6, /*hidden argument*/NULL);
		__this->set_payload_3(L_7);
		// uint extraPayloadSize = sizeof(uint) * 4;
		V_0 = ((int32_t)16);
		// if ((reader.Length - reader.Position) >= extraPayloadSize)
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_8 = ___reader0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = NetworkReader_get_Length_m60E1BC8D41A473189E0CBC6C7B8F250804B6C10E(L_8, /*hidden argument*/NULL);
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_10 = ___reader0;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = NetworkReader_get_Position_m0B37F2D9870C8493B4FD9B3DD491771C0963781A(L_10, /*hidden argument*/NULL);
		uint32_t L_12 = V_0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)L_9)), (int64_t)((int64_t)((uint64_t)L_11))))) < ((int64_t)((int64_t)((uint64_t)L_12)))))
		{
			goto IL_0052;
		}
	}
	{
		// rotation = reader.ReadQuaternion();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_13 = ___reader0;
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = NetworkReader_ReadQuaternion_m207F55698143561CE71CB11B54B91BEE99516D7D(L_13, /*hidden argument*/NULL);
		__this->set_rotation_4(L_14);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnMessage_Serialize_m49EDF79F595B298084AC2BA45C1015AB04158DFA (ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write(netId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m54E9B404694C5205129571F6B9CA1F5E5E32839C(L_0, L_1, /*hidden argument*/NULL);
		// writer.Write(assetId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_2 = ___writer0;
		NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  L_3 = __this->get_assetId_1();
		NullCheck(L_2);
		NetworkWriter_Write_m11D2FC5777C2640AFF438BF32990145230A2095F(L_2, L_3, /*hidden argument*/NULL);
		// writer.Write(position);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_4 = ___writer0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_position_2();
		NullCheck(L_4);
		NetworkWriter_Write_m7936FBB9E9BA4C982E2A71B17892E625BA5A0091(L_4, L_5, /*hidden argument*/NULL);
		// writer.WriteBytesFull(payload);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_6 = ___writer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_payload_3();
		NullCheck(L_6);
		NetworkWriter_WriteBytesFull_m64921BEA6E5EE2D1538CA3F66A282ABFF48F9E1C(L_6, L_7, /*hidden argument*/NULL);
		// writer.Write(rotation);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_8 = ___writer0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = __this->get_rotation_4();
		NullCheck(L_8);
		NetworkWriter_Write_mB7C6EF43A6F1D8DBBA890D833AADB206F6B3601A(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnMessage__ctor_m077B80AE875DC628D84BF9282CE413DE6D61173E (ObjectSpawnMessage_t2D887BE830B05A139BF784FEE451AC6FBBDE9BC6 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnSceneMessage_Deserialize_mCC1D08A759C449240CC1350B42E0F2632BDA2560 (ObjectSpawnSceneMessage_tACE939AB6FE49062230207E1A45AA454E66FA11B * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1;
		L_1 = NetworkReader_ReadNetworkId_m9C13DEFCCBD90811B29369D7113F92085E8CF7FB(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		// sceneId = reader.ReadSceneId();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_2 = ___reader0;
		NullCheck(L_2);
		NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  L_3;
		L_3 = NetworkReader_ReadSceneId_mBC5BED21B3C967ACE2157BA034E4398C5191047F(L_2, /*hidden argument*/NULL);
		__this->set_sceneId_1(L_3);
		// position = reader.ReadVector3();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = NetworkReader_ReadVector3_m8288D6931ECAE1654ACF4B799130F0E1D4F2B247(L_4, /*hidden argument*/NULL);
		__this->set_position_2(L_5);
		// payload = reader.ReadBytesAndSize();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = NetworkReader_ReadBytesAndSize_m9F969D85ABF21BB3E18177EB2DEADEC76AF67E11(L_6, /*hidden argument*/NULL);
		__this->set_payload_3(L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnSceneMessage_Serialize_m53314095B06F1D6D41F6CE8308616F3ADA3865DC (ObjectSpawnSceneMessage_tACE939AB6FE49062230207E1A45AA454E66FA11B * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write(netId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m54E9B404694C5205129571F6B9CA1F5E5E32839C(L_0, L_1, /*hidden argument*/NULL);
		// writer.Write(sceneId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_2 = ___writer0;
		NetworkSceneId_tA36CFF0927FA9BA8ADCD472BCA4497629700B245  L_3 = __this->get_sceneId_1();
		NullCheck(L_2);
		NetworkWriter_Write_mA1919E17E8BA79007610C9B650282565B853A812(L_2, L_3, /*hidden argument*/NULL);
		// writer.Write(position);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_4 = ___writer0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_position_2();
		NullCheck(L_4);
		NetworkWriter_Write_m7936FBB9E9BA4C982E2A71B17892E625BA5A0091(L_4, L_5, /*hidden argument*/NULL);
		// writer.WriteBytesFull(payload);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_6 = ___writer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_payload_3();
		NullCheck(L_6);
		NetworkWriter_WriteBytesFull_m64921BEA6E5EE2D1538CA3F66A282ABFF48F9E1C(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnSceneMessage__ctor_m966BD8A881AC7E25B120A7A80C1B3B22E786EFED (ObjectSpawnSceneMessage_tACE939AB6FE49062230207E1A45AA454E66FA11B * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideTransformMessage_Deserialize_m092165E7BCEDC85E40E29C35D185C6D48387A260 (OverrideTransformMessage_t79E768877AE87FB3211BEC3448209F789507937A * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1;
		L_1 = NetworkReader_ReadNetworkId_m9C13DEFCCBD90811B29369D7113F92085E8CF7FB(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		// payload = reader.ReadBytesAndSize();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_2 = ___reader0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = NetworkReader_ReadBytesAndSize_m9F969D85ABF21BB3E18177EB2DEADEC76AF67E11(L_2, /*hidden argument*/NULL);
		__this->set_payload_1(L_3);
		// teleport = reader.ReadBoolean();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkReader_ReadBoolean_m868948ABF6D56BFA99605A974760011C15FC8BC6(L_4, /*hidden argument*/NULL);
		__this->set_teleport_2(L_5);
		// time = (int)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_6 = ___reader0;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_6, /*hidden argument*/NULL);
		__this->set_time_3(L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideTransformMessage_Serialize_m841598776E1F8FFDB69A6A101EA12DA85C57622F (OverrideTransformMessage_t79E768877AE87FB3211BEC3448209F789507937A * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write(netId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m54E9B404694C5205129571F6B9CA1F5E5E32839C(L_0, L_1, /*hidden argument*/NULL);
		// writer.WriteBytesFull(payload);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_2 = ___writer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_payload_1();
		NullCheck(L_2);
		NetworkWriter_WriteBytesFull_m64921BEA6E5EE2D1538CA3F66A282ABFF48F9E1C(L_2, L_3, /*hidden argument*/NULL);
		// writer.Write(teleport);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_4 = ___writer0;
		bool L_5 = __this->get_teleport_2();
		NullCheck(L_4);
		NetworkWriter_Write_m82F0DC1639C0A93F0C0828015FAC2D94C21F95E9(L_4, L_5, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)time);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_6 = ___writer0;
		int32_t L_7 = __this->get_time_3();
		NullCheck(L_6);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideTransformMessage__ctor_m645D37376D2D089A01B82A567F1EEB77B33DBC7A (OverrideTransformMessage_t79E768877AE87FB3211BEC3448209F789507937A * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerMessage_Deserialize_m2801046EE19AC41DEA224F50DB191CDE9C6F66D6 (OwnerMessage_tAB31B5261A7F05FB213057BFC3F238FDFFFB9F10 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1;
		L_1 = NetworkReader_ReadNetworkId_m9C13DEFCCBD90811B29369D7113F92085E8CF7FB(L_0, /*hidden argument*/NULL);
		__this->set_netId_0(L_1);
		// playerControllerId = (short)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_2, /*hidden argument*/NULL);
		__this->set_playerControllerId_1(((int16_t)((int16_t)L_3)));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerMessage_Serialize_m76036DBC27BF7BE3CA55C051C4CE5CC58E69B028 (OwnerMessage_tAB31B5261A7F05FB213057BFC3F238FDFFFB9F10 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write(netId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_1 = __this->get_netId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m54E9B404694C5205129571F6B9CA1F5E5E32839C(L_0, L_1, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)playerControllerId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_2 = ___writer0;
		int16_t L_3 = __this->get_playerControllerId_1();
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerMessage__ctor_m5F5302737C277499CC1DAC389EA73D4F866F77A4 (OwnerMessage_tAB31B5261A7F05FB213057BFC3F238FDFFFB9F10 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerAuthorityMessage_Deserialize_m01E291C5C79C65C58CED5F28F1FD08FC08EAC69E (PeerAuthorityMessage_t41784D50032652A0A09AA09E67ACBDE020FC06AC * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// connectionId = (int)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_0, /*hidden argument*/NULL);
		__this->set_connectionId_0(L_1);
		// netId = reader.ReadNetworkId();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_2 = ___reader0;
		NullCheck(L_2);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_3;
		L_3 = NetworkReader_ReadNetworkId_m9C13DEFCCBD90811B29369D7113F92085E8CF7FB(L_2, /*hidden argument*/NULL);
		__this->set_netId_1(L_3);
		// authorityState = reader.ReadBoolean();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkReader_ReadBoolean_m868948ABF6D56BFA99605A974760011C15FC8BC6(L_4, /*hidden argument*/NULL);
		__this->set_authorityState_2(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerAuthorityMessage_Serialize_mD4AFA329C3748396E5FA61B9C0CA588B9E247D09 (PeerAuthorityMessage_t41784D50032652A0A09AA09E67ACBDE020FC06AC * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.WritePackedUInt32((uint)connectionId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		int32_t L_1 = __this->get_connectionId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_0, L_1, /*hidden argument*/NULL);
		// writer.Write(netId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_2 = ___writer0;
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_3 = __this->get_netId_1();
		NullCheck(L_2);
		NetworkWriter_Write_m54E9B404694C5205129571F6B9CA1F5E5E32839C(L_2, L_3, /*hidden argument*/NULL);
		// writer.Write(authorityState);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_4 = ___writer0;
		bool L_5 = __this->get_authorityState_2();
		NullCheck(L_4);
		NetworkWriter_Write_m82F0DC1639C0A93F0C0828015FAC2D94C21F95E9(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerAuthorityMessage__ctor_mF564EE78661AC21816D3C5D8D0F661B09C9B76E8 (PeerAuthorityMessage_t41784D50032652A0A09AA09E67ACBDE020FC06AC * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerInfoMessage_Deserialize_mD4206A51AA074FADEB69DBFFE82D3BA74B3293D3 (PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m583AE6E8CB7A3D6172C9A9518C39B483BB1CB994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mFEA7807DB15376F6F839594E7AC3F739FE8A3334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m50CCB0BB383B44EF176D4DF65AB61DFA281A70B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9D140A08FB942235B9F31C470AEEC435BF441454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * V_1 = NULL;
	uint32_t V_2 = 0;
	PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// connectionId = (int)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_0, /*hidden argument*/NULL);
		__this->set_connectionId_0(L_1);
		// address = reader.ReadString();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_2 = ___reader0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NetworkReader_ReadString_m6B0F4CE34F9CBB8C322AE6EE3C9617CBB33A447B(L_2, /*hidden argument*/NULL);
		__this->set_address_1(L_3);
		// port = (int)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_4, /*hidden argument*/NULL);
		__this->set_port_2(L_5);
		// isHost = reader.ReadBoolean();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_6 = ___reader0;
		NullCheck(L_6);
		bool L_7;
		L_7 = NetworkReader_ReadBoolean_m868948ABF6D56BFA99605A974760011C15FC8BC6(L_6, /*hidden argument*/NULL);
		__this->set_isHost_3(L_7);
		// isYou = reader.ReadBoolean();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_8 = ___reader0;
		NullCheck(L_8);
		bool L_9;
		L_9 = NetworkReader_ReadBoolean_m868948ABF6D56BFA99605A974760011C15FC8BC6(L_8, /*hidden argument*/NULL);
		__this->set_isYou_4(L_9);
		// uint numPlayers = reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_10 = ___reader0;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// if (numPlayers > 0)
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) > ((uint32_t)0))))
		{
			goto IL_0087;
		}
	}
	{
		// List<PeerInfoPlayer> ids = new List<PeerInfoPlayer>();
		List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * L_13 = (List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 *)il2cpp_codegen_object_new(List_1_t9D140A08FB942235B9F31C470AEEC435BF441454_il2cpp_TypeInfo_var);
		List_1__ctor_m50CCB0BB383B44EF176D4DF65AB61DFA281A70B4(L_13, /*hidden argument*/List_1__ctor_m50CCB0BB383B44EF176D4DF65AB61DFA281A70B4_RuntimeMethod_var);
		V_1 = L_13;
		// for (uint i = 0; i < numPlayers; i++)
		V_2 = 0;
		goto IL_0077;
	}

IL_0051:
	{
		// info.netId = reader.ReadNetworkId();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_14 = ___reader0;
		NullCheck(L_14);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_15;
		L_15 = NetworkReader_ReadNetworkId_m9C13DEFCCBD90811B29369D7113F92085E8CF7FB(L_14, /*hidden argument*/NULL);
		(&V_3)->set_netId_0(L_15);
		// info.playerControllerId = (short)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_16 = ___reader0;
		NullCheck(L_16);
		uint32_t L_17;
		L_17 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_16, /*hidden argument*/NULL);
		(&V_3)->set_playerControllerId_1(((int16_t)((int16_t)L_17)));
		// ids.Add(info);
		List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * L_18 = V_1;
		PeerInfoPlayer_t593686F9F5F3A9CD172E32C3342AE072409F0A0C  L_19 = V_3;
		NullCheck(L_18);
		List_1_Add_m583AE6E8CB7A3D6172C9A9518C39B483BB1CB994(L_18, L_19, /*hidden argument*/List_1_Add_m583AE6E8CB7A3D6172C9A9518C39B483BB1CB994_RuntimeMethod_var);
		// for (uint i = 0; i < numPlayers; i++)
		uint32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0077:
	{
		// for (uint i = 0; i < numPlayers; i++)
		uint32_t L_21 = V_2;
		uint32_t L_22 = V_0;
		if ((!(((uint32_t)L_21) >= ((uint32_t)L_22))))
		{
			goto IL_0051;
		}
	}
	{
		// playerIds = ids.ToArray();
		List_1_t9D140A08FB942235B9F31C470AEEC435BF441454 * L_23 = V_1;
		NullCheck(L_23);
		PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* L_24;
		L_24 = List_1_ToArray_mFEA7807DB15376F6F839594E7AC3F739FE8A3334(L_23, /*hidden argument*/List_1_ToArray_mFEA7807DB15376F6F839594E7AC3F739FE8A3334_RuntimeMethod_var);
		__this->set_playerIds_5(L_24);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerInfoMessage_Serialize_mE074E4A4EDAA32D43A010AB891600BE0415F8FD6 (PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// writer.WritePackedUInt32((uint)connectionId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		int32_t L_1 = __this->get_connectionId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_0, L_1, /*hidden argument*/NULL);
		// writer.Write(address);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_2 = ___writer0;
		String_t* L_3 = __this->get_address_1();
		NullCheck(L_2);
		NetworkWriter_Write_m47E42D8FB4CDD406BD281959D6A9A7531571DE96(L_2, L_3, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)port);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_4 = ___writer0;
		int32_t L_5 = __this->get_port_2();
		NullCheck(L_4);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_4, L_5, /*hidden argument*/NULL);
		// writer.Write(isHost);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_6 = ___writer0;
		bool L_7 = __this->get_isHost_3();
		NullCheck(L_6);
		NetworkWriter_Write_m82F0DC1639C0A93F0C0828015FAC2D94C21F95E9(L_6, L_7, /*hidden argument*/NULL);
		// writer.Write(isYou);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_8 = ___writer0;
		bool L_9 = __this->get_isYou_4();
		NullCheck(L_8);
		NetworkWriter_Write_m82F0DC1639C0A93F0C0828015FAC2D94C21F95E9(L_8, L_9, /*hidden argument*/NULL);
		// if (playerIds == null)
		PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* L_10 = __this->get_playerIds_5();
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		// writer.WritePackedUInt32(0);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_11 = ___writer0;
		NullCheck(L_11);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_11, 0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004c:
	{
		// writer.WritePackedUInt32((uint)playerIds.Length);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_12 = ___writer0;
		PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* L_13 = __this->get_playerIds_5();
		NullCheck(L_13);
		NullCheck(L_12);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_12, ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), /*hidden argument*/NULL);
		// for (int i = 0; i < playerIds.Length; i++)
		V_0 = 0;
		goto IL_0090;
	}

IL_005e:
	{
		// writer.Write(playerIds[i].netId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_14 = ___writer0;
		PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* L_15 = __this->get_playerIds_5();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_netId_0();
		NullCheck(L_14);
		NetworkWriter_Write_m54E9B404694C5205129571F6B9CA1F5E5E32839C(L_14, L_17, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)playerIds[i].playerControllerId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_18 = ___writer0;
		PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* L_19 = __this->get_playerIds_5();
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int16_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_playerControllerId_1();
		NullCheck(L_18);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_18, L_21, /*hidden argument*/NULL);
		// for (int i = 0; i < playerIds.Length; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0090:
	{
		// for (int i = 0; i < playerIds.Length; i++)
		int32_t L_23 = V_0;
		PeerInfoPlayerU5BU5D_t5DE72B6244230DD9324DAA472EB577DF30A144A1* L_24 = __this->get_playerIds_5();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_005e;
		}
	}
	{
		// }
		return;
	}
}
// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PeerInfoMessage_ToString_mE292A5F5AF05B6F90D4949752C63B39FA9A0D9C7 (PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA1B0B295B02690FCCC1785649E50DC946A7CB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC449F5B2EAFA85049BADD7C4D0D1673C424E08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656E1DEE31CADB55B09AB66611AC4A9FB6282D9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA836067A0DF79A979E3B805D2F0E23310042F7D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "PeerInfo conn:" + connectionId + " addr:" + address + ":" + port + " host:" + isHost + " isYou:" + isYou;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1FA1B0B295B02690FCCC1785649E50DC946A7CB5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1FA1B0B295B02690FCCC1785649E50DC946A7CB5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		int32_t* L_3 = __this->get_address_of_connectionId_0();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral656E1DEE31CADB55B09AB66611AC4A9FB6282D9E);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral656E1DEE31CADB55B09AB66611AC4A9FB6282D9E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7 = __this->get_address_1();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		int32_t* L_10 = __this->get_address_of_port_2();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_9;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3EC449F5B2EAFA85049BADD7C4D0D1673C424E08);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3EC449F5B2EAFA85049BADD7C4D0D1673C424E08);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		bool* L_14 = __this->get_address_of_isHost_3();
		String_t* L_15;
		L_15 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralCA836067A0DF79A979E3B805D2F0E23310042F7D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralCA836067A0DF79A979E3B805D2F0E23310042F7D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		bool* L_18 = __this->get_address_of_isYou_4();
		String_t* L_19;
		L_19 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_19);
		String_t* L_20;
		L_20 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_17, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerInfoMessage__ctor_mD07CE570261467D0213A3AB0CE38918A45801792 (PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerListMessage_Deserialize_m7EFA269795637802A6D499036A13D28DAFB18774 (PeerListMessage_tB1481179670DE32A53E7F0F01F3E6A184417670E * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * V_2 = NULL;
	{
		// oldServerConnectionId = (int)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_0, /*hidden argument*/NULL);
		__this->set_oldServerConnectionId_1(L_1);
		// int numPeers = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_2 = ___reader0;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// peers = new PeerInfoMessage[numPeers];
		int32_t L_4 = V_0;
		PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A* L_5 = (PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A*)(PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A*)SZArrayNew(PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_peers_0(L_5);
		// for (int i = 0; i < peers.Length; ++i)
		V_1 = 0;
		goto IL_003d;
	}

IL_0023:
	{
		// var peerInfo = new PeerInfoMessage();
		PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * L_6 = (PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 *)il2cpp_codegen_object_new(PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822_il2cpp_TypeInfo_var);
		PeerInfoMessage__ctor_mD07CE570261467D0213A3AB0CE38918A45801792(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		// peerInfo.Deserialize(reader);
		PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * L_7 = V_2;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_8 = ___reader0;
		NullCheck(L_7);
		VirtActionInvoker1< NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(4 /* System.Void UnityEngine.Networking.MessageBase::Deserialize(UnityEngine.Networking.NetworkReader) */, L_7, L_8);
		// peers[i] = peerInfo;
		PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A* L_9 = __this->get_peers_0();
		int32_t L_10 = V_1;
		PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * L_11 = V_2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 *)L_11);
		// for (int i = 0; i < peers.Length; ++i)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003d:
	{
		// for (int i = 0; i < peers.Length; ++i)
		int32_t L_13 = V_1;
		PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A* L_14 = __this->get_peers_0();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerListMessage_Serialize_m42C1E738C1667D6F8F59921ACB8D9CD0B3E15AC1 (PeerListMessage_tB1481179670DE32A53E7F0F01F3E6A184417670E * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// writer.WritePackedUInt32((uint)oldServerConnectionId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		int32_t L_1 = __this->get_oldServerConnectionId_1();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_0, L_1, /*hidden argument*/NULL);
		// writer.Write((ushort)peers.Length);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_2 = ___writer0;
		PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A* L_3 = __this->get_peers_0();
		NullCheck(L_3);
		NullCheck(L_2);
		NetworkWriter_Write_m904D655CF43DE112DBF5E9C14C7DB200336F8448(L_2, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))), /*hidden argument*/NULL);
		// for (int i = 0; i < peers.Length; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_001f:
	{
		// peers[i].Serialize(writer);
		PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A* L_4 = __this->get_peers_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		PeerInfoMessage_tA590DD08E7C371D41D5C1536DC2D45BB8F45A822 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_8 = ___writer0;
		NullCheck(L_7);
		VirtActionInvoker1< NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * >::Invoke(5 /* System.Void UnityEngine.Networking.MessageBase::Serialize(UnityEngine.Networking.NetworkWriter) */, L_7, L_8);
		// for (int i = 0; i < peers.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0031:
	{
		// for (int i = 0; i < peers.Length; i++)
		int32_t L_10 = V_0;
		PeerInfoMessageU5BU5D_t80FABE57B63348BD531E5A0C1F9EFE4A1077A19A* L_11 = __this->get_peers_0();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerListMessage__ctor_mB777809D199A593BDD0FC6F675C28CBAB7F7E637 (PeerListMessage_tB1481179670DE32A53E7F0F01F3E6A184417670E * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_m9BB2EC3D22E372B9D403FA1724C12E6AE5C6B589 (PlayerController_tC346F9788A15DB87623DD99396C824504BE42F01 * __this, const RuntimeMethod* method)
{
	{
		// public short playerControllerId = -1;
		__this->set_playerControllerId_1((int16_t)(-1));
		// public PlayerController()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerController::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_get_IsValid_m7EC3B8A75F38F75A7634EB8E5338640EBB681808 (PlayerController_tC346F9788A15DB87623DD99396C824504BE42F01 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsValid { get { return playerControllerId != -1; } }
		int16_t L_0 = __this->get_playerControllerId_1();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Networking.PlayerController::.ctor(UnityEngine.GameObject,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mFBB5FAB05FFB1F8D1F16D33B96B19E759E7B1F84 (PlayerController_tC346F9788A15DB87623DD99396C824504BE42F01 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, int16_t ___playerControllerId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11_m7A920C0F32818CF103496FF74161FE7B6C2563AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public short playerControllerId = -1;
		__this->set_playerControllerId_1((int16_t)(-1));
		// internal PlayerController(GameObject go, short playerControllerId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// gameObject = go;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go0;
		__this->set_gameObject_3(L_0);
		// unetView = go.GetComponent<NetworkIdentity>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___go0;
		NullCheck(L_1);
		NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * L_2;
		L_2 = GameObject_GetComponent_TisNetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11_m7A920C0F32818CF103496FF74161FE7B6C2563AD(L_1, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11_m7A920C0F32818CF103496FF74161FE7B6C2563AD_RuntimeMethod_var);
		__this->set_unetView_2(L_2);
		// this.playerControllerId = playerControllerId;
		int16_t L_3 = ___playerControllerId1;
		__this->set_playerControllerId_1(L_3);
		// }
		return;
	}
}
// System.String UnityEngine.Networking.PlayerController::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerController_ToString_mA7989E743C04EBE64E6AF002382B0B190CC716E2 (PlayerController_tC346F9788A15DB87623DD99396C824504BE42F01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EAAA157D1F5D6977F519F039F9114FBEB79A704);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("ID={0} NetworkIdentity NetID={1} Player={2}", new object[] { playerControllerId, (unetView != null ? unetView.netId.ToString() : "null"), (gameObject != null ? gameObject.name : "null") });
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int16_t L_2 = __this->get_playerControllerId_1();
		int16_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * L_6 = __this->get_unetView_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = 1;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		G_B1_3 = _stringLiteral8EAAA157D1F5D6977F519F039F9114FBEB79A704;
		if (L_7)
		{
			G_B2_0 = 1;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			G_B2_3 = _stringLiteral8EAAA157D1F5D6977F519F039F9114FBEB79A704;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0049;
	}

IL_0030:
	{
		NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * L_8 = __this->get_unetView_2();
		NullCheck(L_8);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_9;
		L_9 = NetworkIdentity_get_netId_mA85DDF92E96025B8A70349A25473AE2621889490_inline(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = NetworkInstanceId_ToString_mA619C62108F785F43D7616E36246F50F190A95B9((NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0049:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = G_B3_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_gameObject_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B4_0 = 2;
		G_B4_1 = L_11;
		G_B4_2 = L_11;
		G_B4_3 = G_B3_4;
		if (L_13)
		{
			G_B5_0 = 2;
			G_B5_1 = L_11;
			G_B5_2 = L_11;
			G_B5_3 = G_B3_4;
			goto IL_0061;
		}
	}
	{
		G_B6_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_006c;
	}

IL_0061:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_gameObject_3();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_14, /*hidden argument*/NULL);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_006c:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		String_t* L_16;
		L_16 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_16;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkSystem.ReadyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadyMessage__ctor_m18192B06071F631D0A6CE6397D869539BC7BD2DC (ReadyMessage_tFE7B462238F70A58CBAE7F473501D6FD1200524D * __this, const RuntimeMethod* method)
{
	{
		EmptyMessage__ctor_m33278F44C1DF3D452B0B2284D7289114F63295B3(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectMessage_Deserialize_m0E5AFC25321243B84CA7E6B03040BE54BC0E67DA (ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// oldConnectionId = (int)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_0, /*hidden argument*/NULL);
		__this->set_oldConnectionId_0(L_1);
		// playerControllerId = (short)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_2, /*hidden argument*/NULL);
		__this->set_playerControllerId_1(((int16_t)((int16_t)L_3)));
		// netId = reader.ReadNetworkId();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_5;
		L_5 = NetworkReader_ReadNetworkId_m9C13DEFCCBD90811B29369D7113F92085E8CF7FB(L_4, /*hidden argument*/NULL);
		__this->set_netId_2(L_5);
		// msgData = reader.ReadBytesAndSize();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = NetworkReader_ReadBytesAndSize_m9F969D85ABF21BB3E18177EB2DEADEC76AF67E11(L_6, /*hidden argument*/NULL);
		__this->set_msgData_4(L_7);
		// msgSize = msgData.Length;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_msgData_4();
		NullCheck(L_8);
		__this->set_msgSize_3(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectMessage_Serialize_m9406C5F1F46F2216BAA48D4C96796D249B077457 (ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.WritePackedUInt32((uint)oldConnectionId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		int32_t L_1 = __this->get_oldConnectionId_0();
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_0, L_1, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)playerControllerId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_2 = ___writer0;
		int16_t L_3 = __this->get_playerControllerId_1();
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_2, L_3, /*hidden argument*/NULL);
		// writer.Write(netId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_4 = ___writer0;
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_5 = __this->get_netId_2();
		NullCheck(L_4);
		NetworkWriter_Write_m54E9B404694C5205129571F6B9CA1F5E5E32839C(L_4, L_5, /*hidden argument*/NULL);
		// writer.WriteBytesAndSize(msgData, msgSize);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_6 = ___writer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_msgData_4();
		int32_t L_8 = __this->get_msgSize_3();
		NullCheck(L_6);
		NetworkWriter_WriteBytesAndSize_m2BFB164E1CA976B69E5BFD4703C1F240FCEB339D(L_6, L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectMessage__ctor_m55F3AB08D747B9969D3BB2DF1433D5D6EEDD740D (ReconnectMessage_t51466797E3983F8FCE07D41F4EF434A27930D44F * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemovePlayerMessage_Deserialize_m9210B0BE8793A48CCEF9FDB5CFA52BEDA7782C14 (RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// playerControllerId = (short)reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		__this->set_playerControllerId_0(((int16_t)((int16_t)L_1)));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemovePlayerMessage_Serialize_mF66337597DEB7B2E69D00BAD7C484F379A16979C (RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write((ushort)playerControllerId);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		int16_t L_1 = __this->get_playerControllerId_0();
		NullCheck(L_0);
		NetworkWriter_Write_m904D655CF43DE112DBF5E9C14C7DB200336F8448(L_0, (uint16_t)((int32_t)((uint16_t)L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemovePlayerMessage__ctor_mC1EEAEB4EAB326AF02D4572734791B285BF83773 (RemovePlayerMessage_tE51D56F97F2F64AC0FE84431360512DF27B1F068 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.ServerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAttribute__ctor_m52DD2DC4F1F111211176A21F2E59F71266E0B16F (ServerAttribute_tFF42C2CCC4859D3FC6511283726E792828A5ACFB * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.ServerCallbackAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerCallbackAttribute__ctor_m13B51651A0E654D7959FDE8253B1E950B7311B67 (ServerCallbackAttribute_t29B69CF14A484B2D81D1E4713C8617ACC5FECD05 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.SpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnDelegate__ctor_mA294CF72231111563A32DDB924B61D26EA7A2A63 (SpawnDelegate_t9AD498A37502702B3DCA7F9015C95299B9817651 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpawnDelegate_Invoke_m2AE42B686D51DA0FBE73C6DF97FBC7E0D37D1022 (SpawnDelegate_t9AD498A37502702B3DCA7F9015C95299B9817651 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  ___assetId1, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___position0, ___assetId1, targetMethod);
			}
			else
			{
				// closed
				typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___assetId1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
					else
						result = GenericVirtFuncInvoker2< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___assetId1);
					else
						result = VirtFuncInvoker2< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___assetId1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (RuntimeObject*, NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___position0) - 1), ___assetId1, targetMethod);
				}
				else
				{
					typedef GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___assetId1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Networking.SpawnDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnDelegate_BeginInvoke_mF66A98EC45D0C78C09354CEDEBA173B257EF5097 (SpawnDelegate_t9AD498A37502702B3DCA7F9015C95299B9817651 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26  ___assetId1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(NetworkHash128_tD92DB4328785C99A0A36CF69383DE37A7E5DDC26_il2cpp_TypeInfo_var, &___assetId1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpawnDelegate_EndInvoke_m5D66C22516A1B3EF6BD3380FDE019AB29AEE027E (SpawnDelegate_t9AD498A37502702B3DCA7F9015C95299B9817651 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage__ctor_m775D8F3E44F3734E4DC730DB545BA4FAB7E1FCF9 (StringMessage_tB25C942D42FCD3555DA3EF77A6521FFB01CE33D0 * __this, const RuntimeMethod* method)
{
	{
		// public StringMessage()
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage__ctor_m26011582B6D316F6A154C72B78B208F24A4FD54E (StringMessage_tB25C942D42FCD3555DA3EF77A6521FFB01CE33D0 * __this, String_t* ___v0, const RuntimeMethod* method)
{
	{
		// public StringMessage(string v)
		MessageBase__ctor_mB687D22D36A4F4BAB03C9C4E27C271222ACA4735(__this, /*hidden argument*/NULL);
		// value = v;
		String_t* L_0 = ___v0;
		__this->set_value_0(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage_Deserialize_m34BE2367D8D1E407DF2F1781D745F0B94C8F3FD5 (StringMessage_tB25C942D42FCD3555DA3EF77A6521FFB01CE33D0 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// value = reader.ReadString();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = NetworkReader_ReadString_m6B0F4CE34F9CBB8C322AE6EE3C9617CBB33A447B(L_0, /*hidden argument*/NULL);
		__this->set_value_0(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage_Serialize_mDD4262EA79E3FFC9EBB6189AA32586996BF27AFC (StringMessage_tB25C942D42FCD3555DA3EF77A6521FFB01CE33D0 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write(value);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		String_t* L_1 = __this->get_value_0();
		NullCheck(L_0);
		NetworkWriter_Write_m47E42D8FB4CDD406BD281959D6A9A7531571DE96(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
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
// System.Void UnityEngine.Networking.SyncEventAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncEventAttribute__ctor_mB3CA3452C10BC25CD1F7D86DC008B5BB76AC58AB (SyncEventAttribute_t7346FF238D974E3D3E48D8AF89A5016CB5AF03F5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.SyncListBool::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool_SerializeItem_mD3C3B49CE35A2E0ADDC44C29AA7133B8AC3B8E08 (SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, bool ___item1, const RuntimeMethod* method)
{
	{
		// writer.Write(item);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		bool L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m82F0DC1639C0A93F0C0828015FAC2D94C21F95E9(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncListBool::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncListBool_DeserializeItem_m300B554AE6FF5CE6F532E04B64F4901E0A00CEB9 (SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// return reader.ReadBoolean();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkReader_ReadBoolean_m868948ABF6D56BFA99605A974760011C15FC8BC6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListBool UnityEngine.Networking.SyncListBool::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * SyncListBool_ReadInstance_mB26F5A8E204FDB3F15290EEA0BA8B27A3D91F42B (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var result = new SyncListBool();
		SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * L_2 = (SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF *)il2cpp_codegen_object_new(SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF_il2cpp_TypeInfo_var);
		SyncListBool__ctor_mFA59400D08A8B132C62C4C7EF4F4482FCB635743(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal(reader.ReadBoolean());
		SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * L_3 = V_1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkReader_ReadBoolean_m868948ABF6D56BFA99605A974760011C15FC8BC6(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListBool::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool_ReadReference_m72830F2350898CD62CA7F85AFC87CAF1669DD6F7 (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_m1A4524883E9C29D9923DE8DD3C57692885C7558C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m1A4524883E9C29D9923DE8DD3C57692885C7558C(L_2, /*hidden argument*/SyncList_1_Clear_m1A4524883E9C29D9923DE8DD3C57692885C7558C_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal(reader.ReadBoolean());
		SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * L_3 = ___syncList1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkReader_ReadBoolean_m868948ABF6D56BFA99605A974760011C15FC8BC6(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m13294C919C6A2A8499D8837A5A7339939BC6B70C_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListBool::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool_WriteInstance_mBF526B21F11C6C2D07E361E11AA34E4EBF3F8526 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_m42C4C5CD1E7B07F9C433B2AB4EEFC8FCC4F5F06B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_m45AAB69E064A8247DECEF39E91039078310D050F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_m42C4C5CD1E7B07F9C433B2AB4EEFC8FCC4F5F06B(L_1, /*hidden argument*/SyncList_1_get_Count_m42C4C5CD1E7B07F9C433B2AB4EEFC8FCC4F5F06B_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m904D655CF43DE112DBF5E9C14C7DB200336F8448(L_0, (uint16_t)((int32_t)((uint16_t)L_2)), /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.Write(items[i]);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_3 = ___writer0;
		SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = SyncList_1_get_Item_m45AAB69E064A8247DECEF39E91039078310D050F(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_m45AAB69E064A8247DECEF39E91039078310D050F_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_Write_m82F0DC1639C0A93F0C0828015FAC2D94C21F95E9(L_3, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_m42C4C5CD1E7B07F9C433B2AB4EEFC8FCC4F5F06B(L_9, /*hidden argument*/SyncList_1_get_Count_m42C4C5CD1E7B07F9C433B2AB4EEFC8FCC4F5F06B_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool__ctor_mFA59400D08A8B132C62C4C7EF4F4482FCB635743 (SyncListBool_t514D7675A1F1FDD80DF41966F0AFCAC2588621BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_m55E3D3708C0BD9C545A7038C56CC200E33477BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m55E3D3708C0BD9C545A7038C56CC200E33477BBE(__this, /*hidden argument*/SyncList_1__ctor_m55E3D3708C0BD9C545A7038C56CC200E33477BBE_RuntimeMethod_var);
		return;
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
// System.Void UnityEngine.Networking.SyncListFloat::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat_SerializeItem_m3D7C872CEC3B0EA0C5AC191D0365933842E33F01 (SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, float ___item1, const RuntimeMethod* method)
{
	{
		// writer.Write(item);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		float L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m045B38FC1E1A9C08488BB040EA4A16A052006922(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single UnityEngine.Networking.SyncListFloat::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SyncListFloat_DeserializeItem_m41E636A23261110174CE21C721A5B4362A178587 (SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// return reader.ReadSingle();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		float L_1;
		L_1 = NetworkReader_ReadSingle_mBB8BBA028D9279958C1DCAE98CCD1DE5AFEFB32D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListFloat UnityEngine.Networking.SyncListFloat::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * SyncListFloat_ReadInstance_mB85EDBD94656A150989C94ACE420CA2FC25B7672 (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var result = new SyncListFloat();
		SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * L_2 = (SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 *)il2cpp_codegen_object_new(SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1_il2cpp_TypeInfo_var);
		SyncListFloat__ctor_m81E251483328274F1D65D735CCB069DF249D17FA(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal(reader.ReadSingle());
		SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * L_3 = V_1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		float L_5;
		L_5 = NetworkReader_ReadSingle_mBB8BBA028D9279958C1DCAE98CCD1DE5AFEFB32D(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListFloat::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat_ReadReference_mF373CCEA9BDB486FF81CBB1EFF0FCB488FFF7496 (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_mDDCAC9BAFFA158D984CADF03DC7D8D38DD80D2A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_mDDCAC9BAFFA158D984CADF03DC7D8D38DD80D2A9(L_2, /*hidden argument*/SyncList_1_Clear_mDDCAC9BAFFA158D984CADF03DC7D8D38DD80D2A9_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal(reader.ReadSingle());
		SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * L_3 = ___syncList1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		float L_5;
		L_5 = NetworkReader_ReadSingle_mBB8BBA028D9279958C1DCAE98CCD1DE5AFEFB32D(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_mD5673AC23F6AD0E6AB9B7B8C0C7BF02C14832E07_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListFloat::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat_WriteInstance_mA24CA3AAF897EB9B84BD58F77AD624FE1136E038 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_m69152AA83358E3732C99E6EE70DA4800AF6057E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_m8BDE7C19037992940AFECA73EDAA5560BB8E7226_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_m69152AA83358E3732C99E6EE70DA4800AF6057E6(L_1, /*hidden argument*/SyncList_1_get_Count_m69152AA83358E3732C99E6EE70DA4800AF6057E6_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m904D655CF43DE112DBF5E9C14C7DB200336F8448(L_0, (uint16_t)((int32_t)((uint16_t)L_2)), /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.Write(items[i]);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_3 = ___writer0;
		SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		float L_6;
		L_6 = SyncList_1_get_Item_m8BDE7C19037992940AFECA73EDAA5560BB8E7226(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_m8BDE7C19037992940AFECA73EDAA5560BB8E7226_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_Write_m045B38FC1E1A9C08488BB040EA4A16A052006922(L_3, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_m69152AA83358E3732C99E6EE70DA4800AF6057E6(L_9, /*hidden argument*/SyncList_1_get_Count_m69152AA83358E3732C99E6EE70DA4800AF6057E6_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat__ctor_m81E251483328274F1D65D735CCB069DF249D17FA (SyncListFloat_t62E556EB3B61A56651C918CBD3D5F6E169E97FD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_m74BBC1BE1F42C0C35721C7EAE7EA7418C461DB30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m74BBC1BE1F42C0C35721C7EAE7EA7418C461DB30(__this, /*hidden argument*/SyncList_1__ctor_m74BBC1BE1F42C0C35721C7EAE7EA7418C461DB30_RuntimeMethod_var);
		return;
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
// System.Void UnityEngine.Networking.SyncListInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt_SerializeItem_m3CBB2C1E0B4CAA44BDD035FF43621E1E4BCA2CAE (SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, int32_t ___item1, const RuntimeMethod* method)
{
	{
		// writer.WritePackedUInt32((uint)item);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		int32_t L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncListInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncListInt_DeserializeItem_m4EF735C3989084F2FD0EFF71C0EDA96C033FABFC (SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// return (int)reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListInt UnityEngine.Networking.SyncListInt::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * SyncListInt_ReadInstance_m3BA5ED4C66A4C950978A45EE6AB08953C21C87BB (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var result = new SyncListInt();
		SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * L_2 = (SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 *)il2cpp_codegen_object_new(SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726_il2cpp_TypeInfo_var);
		SyncListInt__ctor_m09BC73B7ED4EC789C283EB42261DD8780826A6C9(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal((int)reader.ReadPackedUInt32());
		SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * L_3 = V_1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt_ReadReference_mDCFD9A0E34923FE476BEE5785ACDB2D56611A3F1 (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_m9DF702C5EA68F98B4E1C37D4101A9C3747B2AAD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m9DF702C5EA68F98B4E1C37D4101A9C3747B2AAD2(L_2, /*hidden argument*/SyncList_1_Clear_m9DF702C5EA68F98B4E1C37D4101A9C3747B2AAD2_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal((int)reader.ReadPackedUInt32());
		SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * L_3 = ___syncList1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m381A8320432CE28A0D63E68FB7F6DF38C34E2BBD_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt_WriteInstance_m79D67F81E003D84D0BF876AE93DB3A73088E5150 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_mBE8B65CC1514DB122138180D6B24684C2C9BD716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_m9575DC0114A9FDAFB6A37F9F97428A6709F5A7B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_mBE8B65CC1514DB122138180D6B24684C2C9BD716(L_1, /*hidden argument*/SyncList_1_get_Count_mBE8B65CC1514DB122138180D6B24684C2C9BD716_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m904D655CF43DE112DBF5E9C14C7DB200336F8448(L_0, (uint16_t)((int32_t)((uint16_t)L_2)), /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.WritePackedUInt32((uint)items[i]);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_3 = ___writer0;
		SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = SyncList_1_get_Item_m9575DC0114A9FDAFB6A37F9F97428A6709F5A7B8(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_m9575DC0114A9FDAFB6A37F9F97428A6709F5A7B8_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_3, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_mBE8B65CC1514DB122138180D6B24684C2C9BD716(L_9, /*hidden argument*/SyncList_1_get_Count_mBE8B65CC1514DB122138180D6B24684C2C9BD716_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt__ctor_m09BC73B7ED4EC789C283EB42261DD8780826A6C9 (SyncListInt_t5C28F86528D9CC608B504ECF713E368119137726 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_mCB6B86B3D9E12C5BDE1E4B37437516DAD9C07875_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_mCB6B86B3D9E12C5BDE1E4B37437516DAD9C07875(__this, /*hidden argument*/SyncList_1__ctor_mCB6B86B3D9E12C5BDE1E4B37437516DAD9C07875_RuntimeMethod_var);
		return;
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
// System.Void UnityEngine.Networking.SyncListString::SerializeItem(UnityEngine.Networking.NetworkWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString_SerializeItem_m2B75BE5232436B535E7BF37F0A839A84AEF02705 (SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, String_t* ___item1, const RuntimeMethod* method)
{
	{
		// writer.Write(item);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		String_t* L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m47E42D8FB4CDD406BD281959D6A9A7531571DE96(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UnityEngine.Networking.SyncListString::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SyncListString_DeserializeItem_mFEF3951B6FBAB87122365BC6CD34C5C5980B44BA (SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// return reader.ReadString();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = NetworkReader_ReadString_m6B0F4CE34F9CBB8C322AE6EE3C9617CBB33A447B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListString UnityEngine.Networking.SyncListString::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * SyncListString_ReadInstance_m06D203E8CBCA21247C2A40C9F4BF5C95E71710EA (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m2BEE119FFE52625568FC42B7E0F92074395B42C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var result = new SyncListString();
		SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * L_2 = (SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 *)il2cpp_codegen_object_new(SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5_il2cpp_TypeInfo_var);
		SyncListString__ctor_mBA22A8E16075D70B3EA83F6A230ACA9556FD6397(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal(reader.ReadString());
		SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * L_3 = V_1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = NetworkReader_ReadString_m6B0F4CE34F9CBB8C322AE6EE3C9617CBB33A447B(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m2BEE119FFE52625568FC42B7E0F92074395B42C7(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m2BEE119FFE52625568FC42B7E0F92074395B42C7_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListString::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString_ReadReference_m0291122DDE1ECACDF6258AD1632458BFF500C28C (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m2BEE119FFE52625568FC42B7E0F92074395B42C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_m7E6D353ED3D48FF328E15DEBE2628E0A9711DAC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m7E6D353ED3D48FF328E15DEBE2628E0A9711DAC1(L_2, /*hidden argument*/SyncList_1_Clear_m7E6D353ED3D48FF328E15DEBE2628E0A9711DAC1_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal(reader.ReadString());
		SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * L_3 = ___syncList1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = NetworkReader_ReadString_m6B0F4CE34F9CBB8C322AE6EE3C9617CBB33A447B(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m2BEE119FFE52625568FC42B7E0F92074395B42C7(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_m2BEE119FFE52625568FC42B7E0F92074395B42C7_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListString::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString_WriteInstance_mC5C5D81739102776AF5AE6A4CE4CA16E1DC75D38 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_mC61C23EFFC476C12AB55EE817C9C0B3D351BF265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_mAA5FB72D31C45975CC8BEEAE4A1DB5FA01481371_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_mC61C23EFFC476C12AB55EE817C9C0B3D351BF265(L_1, /*hidden argument*/SyncList_1_get_Count_mC61C23EFFC476C12AB55EE817C9C0B3D351BF265_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m904D655CF43DE112DBF5E9C14C7DB200336F8448(L_0, (uint16_t)((int32_t)((uint16_t)L_2)), /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.Write(items[i]);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_3 = ___writer0;
		SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = SyncList_1_get_Item_mAA5FB72D31C45975CC8BEEAE4A1DB5FA01481371(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_mAA5FB72D31C45975CC8BEEAE4A1DB5FA01481371_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_Write_m47E42D8FB4CDD406BD281959D6A9A7531571DE96(L_3, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_mC61C23EFFC476C12AB55EE817C9C0B3D351BF265(L_9, /*hidden argument*/SyncList_1_get_Count_mC61C23EFFC476C12AB55EE817C9C0B3D351BF265_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString__ctor_mBA22A8E16075D70B3EA83F6A230ACA9556FD6397 (SyncListString_tF978F7DD2A4EB8A43AE9B7C2BB53CE5AE32C23F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_m25675964A9726089386CA58A0B71BE653CF73082_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m25675964A9726089386CA58A0B71BE653CF73082(__this, /*hidden argument*/SyncList_1__ctor_m25675964A9726089386CA58A0B71BE653CF73082_RuntimeMethod_var);
		return;
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
// System.Void UnityEngine.Networking.SyncListUInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt_SerializeItem_m187199F74C5F5001C750838922063F86D77532B3 (SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, uint32_t ___item1, const RuntimeMethod* method)
{
	{
		// writer.WritePackedUInt32(item);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		uint32_t L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.UInt32 UnityEngine.Networking.SyncListUInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SyncListUInt_DeserializeItem_m141348137CFB868A6239E1EB01F4FDC0F659FBC2 (SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * __this, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	{
		// return reader.ReadPackedUInt32();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListUInt UnityEngine.Networking.SyncListUInt::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * SyncListUInt_ReadInstance_m6F5C3E8CF673A3C50FAB62E74ACAF53432C32FEF (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var result = new SyncListUInt();
		SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * L_2 = (SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 *)il2cpp_codegen_object_new(SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99_il2cpp_TypeInfo_var);
		SyncListUInt__ctor_mA1B918E2B1D38A3B898998535453E5F7C5DD1B59(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal(reader.ReadPackedUInt32());
		SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * L_3 = V_1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListUInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt_ReadReference_m167F53A75C032B48C8A13959F48997BD0040C44A (NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader0, SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * ___syncList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_mC23762033A17EDAC8A8E3FEC2C4050DC7F2A29DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m031F8E84AC38DC21B382E0975D6226D8DDBAD228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_mC23762033A17EDAC8A8E3FEC2C4050DC7F2A29DE(L_2, /*hidden argument*/SyncList_1_Clear_mC23762033A17EDAC8A8E3FEC2C4050DC7F2A29DE_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal(reader.ReadPackedUInt32());
		SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * L_3 = ___syncList1;
		NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_m26EA7FB51BE89CBAFBBDC68879F1A46DC3270B6E(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA(L_3, L_5, /*hidden argument*/SyncList_1_AddInternal_mBEBF61B65B299A854B5FBCF98DADD01EB44B9ACA_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListUInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt_WriteInstance_mA94889F0802D33F31CC4020611780BF385B39168 (NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_mACFFC0B4C716960264DDDB1FDDC37983D70D71A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_mA6E90B7088553B9EEF820CE00B06669FF13B7A03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_0 = ___writer0;
		SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_mACFFC0B4C716960264DDDB1FDDC37983D70D71A1(L_1, /*hidden argument*/SyncList_1_get_Count_mACFFC0B4C716960264DDDB1FDDC37983D70D71A1_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m904D655CF43DE112DBF5E9C14C7DB200336F8448(L_0, (uint16_t)((int32_t)((uint16_t)L_2)), /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.WritePackedUInt32(items[i]);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_3 = ___writer0;
		SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6;
		L_6 = SyncList_1_get_Item_mA6E90B7088553B9EEF820CE00B06669FF13B7A03(L_4, L_5, /*hidden argument*/SyncList_1_get_Item_mA6E90B7088553B9EEF820CE00B06669FF13B7A03_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_WritePackedUInt32_mED35B04EBE38C2678AE606F8C16E34E239B9A86F(L_3, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_mACFFC0B4C716960264DDDB1FDDC37983D70D71A1(L_9, /*hidden argument*/SyncList_1_get_Count_mACFFC0B4C716960264DDDB1FDDC37983D70D71A1_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListUInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt__ctor_mA1B918E2B1D38A3B898998535453E5F7C5DD1B59 (SyncListUInt_t0CD78F4D53E5E440EC20F27E1E4A093B607A8E99 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_mAE4CD70CD6B47860740D67DA5FAC730925A90B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_mAE4CD70CD6B47860740D67DA5FAC730925A90B90(__this, /*hidden argument*/SyncList_1__ctor_mAE4CD70CD6B47860740D67DA5FAC730925A90B90_RuntimeMethod_var);
		return;
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
// System.Void UnityEngine.Networking.SyncVarAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncVarAttribute__ctor_mC6A8362C2781FF072D825ADDF1DFBB11EA3847FB (SyncVarAttribute_t065CEB73E47DCF8C126143D97012DFAE2DE7CACF * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Networking.TargetRpcAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetRpcAttribute__ctor_mD4ED569E8B2863A6469E4F593420B60E9615B3C6 (TargetRpcAttribute_tA5EC079234310807266F5E9E387660E2B0F7E764 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::get_localClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * ULocalConnectionToClient_get_localClient_m59AF264FC10F95D83BBD69EE47003EB4D538F901 (ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * __this, const RuntimeMethod* method)
{
	{
		// public LocalClient localClient { get {  return m_LocalClient; } }
		LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * L_0 = __this->get_m_LocalClient_19();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.ULocalConnectionToClient::.ctor(UnityEngine.Networking.LocalClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULocalConnectionToClient__ctor_mEE39153F2ADD5763A786EAAB89158F2D2AB6A808 (ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * __this, LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * ___localClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F2A44A7ADA40A427BC93FD46CCD0BD5B7D3CB63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ULocalConnectionToClient(LocalClient localClient)
		NetworkConnection__ctor_m31724235DDF03AA9A71A7F5496C83764B501DFEB(__this, /*hidden argument*/NULL);
		// address = "localClient";
		((NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *)__this)->set_address_14(_stringLiteral0F2A44A7ADA40A427BC93FD46CCD0BD5B7D3CB63);
		// m_LocalClient = localClient;
		LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * L_0 = ___localClient0;
		__this->set_m_LocalClient_19(L_0);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_Send_m8227E7C70C9B669F56C3E94A55E22528AA2E54E4 (ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * __this, int16_t ___msgType0, MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * ___msg1, const RuntimeMethod* method)
{
	{
		// m_LocalClient.InvokeHandlerOnClient(msgType, msg, Channels.DefaultReliable);
		LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * L_0 = __this->get_m_LocalClient_19();
		int16_t L_1 = ___msgType0;
		MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * L_2 = ___msg1;
		NullCheck(L_0);
		LocalClient_InvokeHandlerOnClient_m090B7236C31A67B17297BB84590101CE0E64D77B(L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendUnreliable_m4464D13576B5AABFD6D65F73B54F584D52DFD52A (ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * __this, int16_t ___msgType0, MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * ___msg1, const RuntimeMethod* method)
{
	{
		// m_LocalClient.InvokeHandlerOnClient(msgType, msg, Channels.DefaultUnreliable);
		LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * L_0 = __this->get_m_LocalClient_19();
		int16_t L_1 = ___msgType0;
		MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * L_2 = ___msg1;
		NullCheck(L_0);
		LocalClient_InvokeHandlerOnClient_m090B7236C31A67B17297BB84590101CE0E64D77B(L_0, L_1, L_2, 1, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendByChannel_m079DBD0E6C346D5EB861BDEFAACCCF979D14B0B2 (ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * __this, int16_t ___msgType0, MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * ___msg1, int32_t ___channelId2, const RuntimeMethod* method)
{
	{
		// m_LocalClient.InvokeHandlerOnClient(msgType, msg, channelId);
		LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * L_0 = __this->get_m_LocalClient_19();
		int16_t L_1 = ___msgType0;
		MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * L_2 = ___msg1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		LocalClient_InvokeHandlerOnClient_m090B7236C31A67B17297BB84590101CE0E64D77B(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendBytes_m23AF01E50D3A24CC3477AE55D66C3F251D4B867F (ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const RuntimeMethod* method)
{
	{
		// m_LocalClient.InvokeBytesOnClient(bytes, channelId);
		LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * L_0 = __this->get_m_LocalClient_19();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___channelId2;
		NullCheck(L_0);
		LocalClient_InvokeBytesOnClient_m635665D7615F89D564DA002425E558A548E8A5FB(L_0, L_1, L_2, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendWriter_m9407EB26956544FFA7A7BB941A5B6FF523C62E70 (ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, int32_t ___channelId1, const RuntimeMethod* method)
{
	{
		// m_LocalClient.InvokeBytesOnClient(writer.AsArray(), channelId);
		LocalClient_t081298A19ACD4A5E9E52EB6B8DB40FF4BC67033A * L_0 = __this->get_m_LocalClient_19();
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_1 = ___writer0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = NetworkWriter_AsArray_mA86A0B455D02FC4A671964A233CB84B50C4D7F30(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___channelId1;
		NullCheck(L_0);
		LocalClient_InvokeBytesOnClient_m635665D7615F89D564DA002425E558A548E8A5FB(L_0, L_2, L_3, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.Networking.ULocalConnectionToClient::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULocalConnectionToClient_GetStatsOut_m46E34FF771380C242EC9F322EFCF838A49D7CED2 (ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * __this, int32_t* ___numMsgs0, int32_t* ___numBufferedMsgs1, int32_t* ___numBytes2, int32_t* ___lastBufferedPerSecond3, const RuntimeMethod* method)
{
	{
		// numMsgs = 0;
		int32_t* L_0 = ___numMsgs0;
		*((int32_t*)L_0) = (int32_t)0;
		// numBufferedMsgs = 0;
		int32_t* L_1 = ___numBufferedMsgs1;
		*((int32_t*)L_1) = (int32_t)0;
		// numBytes = 0;
		int32_t* L_2 = ___numBytes2;
		*((int32_t*)L_2) = (int32_t)0;
		// lastBufferedPerSecond = 0;
		int32_t* L_3 = ___lastBufferedPerSecond3;
		*((int32_t*)L_3) = (int32_t)0;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.ULocalConnectionToClient::GetStatsIn(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULocalConnectionToClient_GetStatsIn_mE60B986A0EE07BFEA03323CECDC8A492CF2ED5AE (ULocalConnectionToClient_tEE934AC7B2C27BC3BDD38EC991B11B5D5EF67FA6 * __this, int32_t* ___numMsgs0, int32_t* ___numBytes1, const RuntimeMethod* method)
{
	{
		// numMsgs = 0;
		int32_t* L_0 = ___numMsgs0;
		*((int32_t*)L_0) = (int32_t)0;
		// numBytes = 0;
		int32_t* L_1 = ___numBytes1;
		*((int32_t*)L_1) = (int32_t)0;
		// }
		return;
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
// System.Void UnityEngine.Networking.ULocalConnectionToServer::.ctor(UnityEngine.Networking.NetworkServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULocalConnectionToServer__ctor_m6E84DE1DE342366C3B5199180C9CD4A12960D76D (ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * __this, NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * ___localServer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral262AED41329D8AB781480AD68FC4DCBB3876F757);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ULocalConnectionToServer(NetworkServer localServer)
		NetworkConnection__ctor_m31724235DDF03AA9A71A7F5496C83764B501DFEB(__this, /*hidden argument*/NULL);
		// address = "localServer";
		((NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *)__this)->set_address_14(_stringLiteral262AED41329D8AB781480AD68FC4DCBB3876F757);
		// m_LocalServer = localServer;
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = ___localServer0;
		__this->set_m_LocalServer_19(L_0);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::Send(System.Int16,UnityEngine.Networking.MessageBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_Send_m61D52FBAFA01B412B19337725034A47AB86AC584 (ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * __this, int16_t ___msgType0, MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * ___msg1, const RuntimeMethod* method)
{
	{
		// return m_LocalServer.InvokeHandlerOnServer(this, msgType, msg, Channels.DefaultReliable);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_LocalServer_19();
		int16_t L_1 = ___msgType0;
		MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * L_2 = ___msg1;
		NullCheck(L_0);
		bool L_3;
		L_3 = NetworkServer_InvokeHandlerOnServer_m5C6A9DD7E5C6060F74146875090AC633E419F70A(L_0, __this, L_1, L_2, 0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendUnreliable_m80262A168BB9F0BCDAB5D52539B4971BE25035F8 (ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * __this, int16_t ___msgType0, MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * ___msg1, const RuntimeMethod* method)
{
	{
		// return m_LocalServer.InvokeHandlerOnServer(this, msgType, msg, Channels.DefaultUnreliable);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_LocalServer_19();
		int16_t L_1 = ___msgType0;
		MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * L_2 = ___msg1;
		NullCheck(L_0);
		bool L_3;
		L_3 = NetworkServer_InvokeHandlerOnServer_m5C6A9DD7E5C6060F74146875090AC633E419F70A(L_0, __this, L_1, L_2, 1, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendByChannel_mDF6814C1CDB92BDD96CFEE9B15F671375839BF7A (ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * __this, int16_t ___msgType0, MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * ___msg1, int32_t ___channelId2, const RuntimeMethod* method)
{
	{
		// return m_LocalServer.InvokeHandlerOnServer(this, msgType, msg, channelId);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_LocalServer_19();
		int16_t L_1 = ___msgType0;
		MessageBase_tCB4AC94456D4374FC78D4FF7208D04734977FD2E * L_2 = ___msg1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		bool L_4;
		L_4 = NetworkServer_InvokeHandlerOnServer_m5C6A9DD7E5C6060F74146875090AC633E419F70A(L_0, __this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendBytes_m80ECFA915F7DA909A01EFE0930D548EB41DE0E28 (ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogFilter_tE67E8F1E7D995A98F0B4E262337040B1E0A6A3C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91389CE6AD0166FC57A2D31316BDDB139D2599DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (numBytes <= 0)
		int32_t L_0 = ___numBytes1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("LocalConnection:SendBytes cannot send zero bytes"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_tE67E8F1E7D995A98F0B4E262337040B1E0A6A3C8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LogFilter_get_logError_mEF2BFEC9E98A9CDB1A567E6878567CD8BFC1C9A3(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("LocalConnection:SendBytes cannot send zero bytes"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral91389CE6AD0166FC57A2D31316BDDB139D2599DE, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// return m_LocalServer.InvokeBytes(this, bytes, numBytes, channelId);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_2 = __this->get_m_LocalServer_19();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		int32_t L_4 = ___numBytes1;
		int32_t L_5 = ___channelId2;
		NullCheck(L_2);
		bool L_6;
		L_6 = NetworkServer_InvokeBytes_mF434CD0B32FC4558495A46EC24098C641075F480(L_2, __this, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendWriter_m62329DBA7C6820ED9253B8A9FC9D1DDF2EB3E15A (ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * __this, NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * ___writer0, int32_t ___channelId1, const RuntimeMethod* method)
{
	{
		// return m_LocalServer.InvokeBytes(this, writer.AsArray(), (short)writer.AsArray().Length, channelId);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_LocalServer_19();
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_1 = ___writer0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = NetworkWriter_AsArray_mA86A0B455D02FC4A671964A233CB84B50C4D7F30(L_1, /*hidden argument*/NULL);
		NetworkWriter_tD0F0F2DCCE7FB1FE441E06A65C5DE920B60F609A * L_3 = ___writer0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = NetworkWriter_AsArray_mA86A0B455D02FC4A671964A233CB84B50C4D7F30(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = ___channelId1;
		NullCheck(L_0);
		bool L_6;
		L_6 = NetworkServer_InvokeBytes_mF434CD0B32FC4558495A46EC24098C641075F480(L_0, __this, L_2, ((int16_t)((int16_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.Networking.ULocalConnectionToServer::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULocalConnectionToServer_GetStatsOut_m4230EE128BDE3FE0089BAC392A28791F09B93FD4 (ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * __this, int32_t* ___numMsgs0, int32_t* ___numBufferedMsgs1, int32_t* ___numBytes2, int32_t* ___lastBufferedPerSecond3, const RuntimeMethod* method)
{
	{
		// numMsgs = 0;
		int32_t* L_0 = ___numMsgs0;
		*((int32_t*)L_0) = (int32_t)0;
		// numBufferedMsgs = 0;
		int32_t* L_1 = ___numBufferedMsgs1;
		*((int32_t*)L_1) = (int32_t)0;
		// numBytes = 0;
		int32_t* L_2 = ___numBytes2;
		*((int32_t*)L_2) = (int32_t)0;
		// lastBufferedPerSecond = 0;
		int32_t* L_3 = ___lastBufferedPerSecond3;
		*((int32_t*)L_3) = (int32_t)0;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.ULocalConnectionToServer::GetStatsIn(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULocalConnectionToServer_GetStatsIn_m0F31CEC978E2D38A969E070B3FD46518CF09A1AD (ULocalConnectionToServer_tECB33D2301DEC1875889DC010D87FA2D313B4713 * __this, int32_t* ___numMsgs0, int32_t* ___numBytes1, const RuntimeMethod* method)
{
	{
		// numMsgs = 0;
		int32_t* L_0 = ___numMsgs0;
		*((int32_t*)L_0) = (int32_t)0;
		// numBytes = 0;
		int32_t* L_1 = ___numBytes1;
		*((int32_t*)L_1) = (int32_t)0;
		// }
		return;
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
// System.Void UnityEngine.Networking.UnSpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate__ctor_m7091F17B6439B67B3D56B5FAC66F36BACE21F647 (UnSpawnDelegate_t93845B1366E6555FD1483505B03196788A2EA0D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.UnSpawnDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate_Invoke_mC8538B7DFB43F29EE8AC03EFAED520A2B2C447CB (UnSpawnDelegate_t93845B1366E6555FD1483505B03196788A2EA0D0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawned0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___spawned0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___spawned0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___spawned0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___spawned0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___spawned0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___spawned0);
					else
						GenericVirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___spawned0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___spawned0);
					else
						VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___spawned0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___spawned0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.UnSpawnDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnSpawnDelegate_BeginInvoke_m70E1885F7D914A733B60561CE773A2FF2B1C2B02 (UnSpawnDelegate_t93845B1366E6555FD1483505B03196788A2EA0D0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawned0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___spawned0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Networking.UnSpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate_EndInvoke_mE107EB6F353171D2AB0FBA5248E6637CB76A4EAF (UnSpawnDelegate_t93845B1366E6555FD1483505B03196788A2EA0D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.LocalClient/InternalMsg
IL2CPP_EXTERN_C void InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshal_pinvoke(const InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D& unmarshaled, InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshaled_pinvoke& marshaled)
{
	marshaled.___buffer_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_buffer_0());
	marshaled.___channelId_1 = unmarshaled.get_channelId_1();
}
IL2CPP_EXTERN_C void InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshal_pinvoke_back(const InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshaled_pinvoke& marshaled, InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_buffer_0((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___buffer_0));
	int32_t unmarshaled_channelId_temp_1 = 0;
	unmarshaled_channelId_temp_1 = marshaled.___channelId_1;
	unmarshaled.set_channelId_1(unmarshaled_channelId_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.LocalClient/InternalMsg
IL2CPP_EXTERN_C void InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshal_pinvoke_cleanup(InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___buffer_0);
	marshaled.___buffer_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Networking.LocalClient/InternalMsg
IL2CPP_EXTERN_C void InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshal_com(const InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D& unmarshaled, InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshaled_com& marshaled)
{
	marshaled.___buffer_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_buffer_0());
	marshaled.___channelId_1 = unmarshaled.get_channelId_1();
}
IL2CPP_EXTERN_C void InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshal_com_back(const InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshaled_com& marshaled, InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_buffer_0((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___buffer_0));
	int32_t unmarshaled_channelId_temp_1 = 0;
	unmarshaled_channelId_temp_1 = marshaled.___channelId_1;
	unmarshaled.set_channelId_1(unmarshaled_channelId_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.LocalClient/InternalMsg
IL2CPP_EXTERN_C void InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshal_com_cleanup(InternalMsg_tD0BD674BEA935EC816DEB9B03F5D8AA6E8F83C4D_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___buffer_0);
	marshaled.___buffer_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmdDelegate__ctor_m0E0C93EBAC31E0B09A685C409E18EF52596ABEDB (CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::Invoke(UnityEngine.Networking.NetworkBehaviour,UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmdDelegate_Invoke_m3FFF22D6B45D892A50F1B741F60BF6FEC66B0DC6 (CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3 * __this, NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * ___obj0, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___reader1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___reader1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(targetMethod, ___obj0, ___reader1);
					else
						GenericVirtActionInvoker1< NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(targetMethod, ___obj0, ___reader1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___reader1);
					else
						VirtActionInvoker1< NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___reader1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___reader1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(targetMethod, targetThis, ___obj0, ___reader1);
					else
						GenericVirtActionInvoker2< NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(targetMethod, targetThis, ___obj0, ___reader1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___reader1);
					else
						VirtActionInvoker2< NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___reader1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, ___reader1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___reader1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.NetworkBehaviour/CmdDelegate::BeginInvoke(UnityEngine.Networking.NetworkBehaviour,UnityEngine.Networking.NetworkReader,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CmdDelegate_BeginInvoke_mCDA6535B9C3194E7209983B611B24D38D6FA279F (CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3 * __this, NetworkBehaviour_t9A01DB4C98EA6A6FBA6FA0A7686A1FB7A3DE46F3 * ___obj0, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___reader1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmdDelegate_EndInvoke_m09E1DD943B76FD61E09C5FAC2A58ABDBEEF00392 (CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDelegate__ctor_mA842F855B890B79EA0F3A3271A2665D60307D626 (EventDelegate_t8E97F816D285A45E0CAA40FE6A75FF2D45E84C7A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::Invoke(System.Collections.Generic.List`1<System.Delegate>,UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDelegate_Invoke_m80A6FCA3D9ABD4142ADC915D0EA2203B5CC74846 (EventDelegate_t8E97F816D285A45E0CAA40FE6A75FF2D45E84C7A * __this, List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 * ___targets0, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___targets0, ___reader1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___targets0, ___reader1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(targetMethod, ___targets0, ___reader1);
					else
						GenericVirtActionInvoker1< NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(targetMethod, ___targets0, ___reader1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___targets0, ___reader1);
					else
						VirtActionInvoker1< NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___targets0, ___reader1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___targets0, ___reader1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(targetMethod, targetThis, ___targets0, ___reader1);
					else
						GenericVirtActionInvoker2< List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(targetMethod, targetThis, ___targets0, ___reader1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___targets0, ___reader1);
					else
						VirtActionInvoker2< List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___targets0, ___reader1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___targets0, ___reader1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 *, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___targets0, ___reader1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.NetworkBehaviour/EventDelegate::BeginInvoke(System.Collections.Generic.List`1<System.Delegate>,UnityEngine.Networking.NetworkReader,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventDelegate_BeginInvoke_m068386EBC938FFE6B75F1CEB704E0A00E53AE918 (EventDelegate_t8E97F816D285A45E0CAA40FE6A75FF2D45E84C7A * __this, List_1_tAB839B6AB8981A243C0A50009CDDAA8BB6FDB633 * ___targets0, NetworkReader_t90CCC47A1763206F2FFF55F65E43CEC817E80D4E * ___reader1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___targets0;
	__d_args[1] = ___reader1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDelegate_EndInvoke_mB4FF0CEEDD11B1051B811D0FDF0B14A0B7D56B68 (EventDelegate_t8E97F816D285A45E0CAA40FE6A75FF2D45E84C7A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Networking.NetworkBehaviour/Invoker::DebugString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Invoker_DebugString_mB63213569CF7E9C01DB894587BD87DC6E9738B7D (Invoker_t6C4BE6E583114F51A045E662DC7C2F1B1A9BF7B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UNetInvokeType_t69ED86ECF5DA78EF4214409EB9C07A4F4E1A3D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	Type_t * G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	{
		// return invokeType + ":" +
		//     invokeClass + ":" +
		//     invokeFunction.GetMethodName();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		int32_t* L_2 = __this->get_address_of_invokeType_0();
		RuntimeObject * L_3 = Box(UNetInvokeType_t69ED86ECF5DA78EF4214409EB9C07A4F4E1A3D18_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		*L_2 = *(int32_t*)UnBox(L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		Type_t * L_7 = __this->get_invokeClass_1();
		Type_t * L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = 2;
		G_B1_2 = L_6;
		G_B1_3 = L_6;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = 2;
			G_B2_2 = L_6;
			G_B2_3 = L_6;
			goto IL_0031;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0036;
	}

IL_0031:
	{
		NullCheck(G_B2_0);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0036:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = G_B3_3;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		CmdDelegate_t4C1F74DE185FCB7FA932E92774BAFC402A61ACD3 * L_12 = __this->get_invokeFunction_2();
		String_t* L_13;
		L_13 = DotNetCompatibility_GetMethodName_m9373E5DA42EFD244CDD724EA986C06F6ABEC0123(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_13);
		String_t* L_14;
		L_14 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_11, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void UnityEngine.Networking.NetworkBehaviour/Invoker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker__ctor_mB1A4C35110DB14B6C51D7ACE118AFA4546FAB003 (Invoker_t6C4BE6E583114F51A045E662DC7C2F1B1A9BF7B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkConnection/PacketStat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketStat__ctor_m6C705CF435E025D2A5A5A1F94D3A0FF072E14EF9 (PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31 * __this, const RuntimeMethod* method)
{
	{
		// public PacketStat()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// msgType = 0;
		__this->set_msgType_0((int16_t)0);
		// count = 0;
		__this->set_count_1(0);
		// bytes = 0;
		__this->set_bytes_2(0);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkConnection/PacketStat::.ctor(UnityEngine.Networking.NetworkConnection/PacketStat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketStat__ctor_m75656AF97075032400D6D0CE90F3944FDB3AA31C (PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31 * __this, PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31 * ___s0, const RuntimeMethod* method)
{
	{
		// public PacketStat(PacketStat s)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// msgType = s.msgType;
		PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31 * L_0 = ___s0;
		NullCheck(L_0);
		int16_t L_1 = L_0->get_msgType_0();
		__this->set_msgType_0(L_1);
		// count = s.count;
		PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31 * L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_count_1();
		__this->set_count_1(L_3);
		// bytes = s.bytes;
		PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31 * L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_bytes_2();
		__this->set_bytes_2(L_5);
		// }
		return;
	}
}
// System.String UnityEngine.Networking.NetworkConnection/PacketStat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PacketStat_ToString_m28083CA818B20C22C86572EAE441AADD3B8AF930 (PacketStat_t9C5955034969A476075A6CF1BD2EF38338EAEB31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MsgType_t357BAE15D77E0951CFC0B4392DDB8B71A7EA34A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25324807967F300674526431DBA0B29C1C9BE1F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D776C87A301B5AE7DD0A2421F9EBD7DD3406899);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MsgType.MsgTypeToString(msgType) + ": count=" + count + " bytes=" + bytes;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		int16_t L_2 = __this->get_msgType_0();
		IL2CPP_RUNTIME_CLASS_INIT(MsgType_t357BAE15D77E0951CFC0B4392DDB8B71A7EA34A4_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = MsgType_MsgTypeToString_m768D260E232A99E6986E1E247EC5A9AB70AC6ED5(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral4D776C87A301B5AE7DD0A2421F9EBD7DD3406899);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4D776C87A301B5AE7DD0A2421F9EBD7DD3406899);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		int32_t* L_6 = __this->get_address_of_count_1();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral25324807967F300674526431DBA0B29C1C9BE1F4);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral25324807967F300674526431DBA0B29C1C9BE1F4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		int32_t* L_10 = __this->get_address_of_bytes_2();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
		String_t* L_12;
		L_12 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		return L_12;
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
// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAuthorityCallback__ctor_m52C7D2513FBABB9FF08E255C6AB5328BF8CB7FC1 (ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::Invoke(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAuthorityCallback_Invoke_m21517E2C61282F4896F4C51F18584A7B1702F3B5 (ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * ___uv1, bool ___authorityState2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___conn0, ___uv1, ___authorityState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___conn0, ___uv1, ___authorityState2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool >::Invoke(targetMethod, ___conn0, ___uv1, ___authorityState2);
					else
						GenericVirtActionInvoker2< NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool >::Invoke(targetMethod, ___conn0, ___uv1, ___authorityState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___conn0, ___uv1, ___authorityState2);
					else
						VirtActionInvoker2< NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___conn0, ___uv1, ___authorityState2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___conn0, ___uv1, ___authorityState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool >::Invoke(targetMethod, targetThis, ___conn0, ___uv1, ___authorityState2);
					else
						GenericVirtActionInvoker3< NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool >::Invoke(targetMethod, targetThis, ___conn0, ___uv1, ___authorityState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___conn0, ___uv1, ___authorityState2);
					else
						VirtActionInvoker3< NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___conn0, ___uv1, ___authorityState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___conn0, ___uv1, ___authorityState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___conn0, ___uv1, ___authorityState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::BeginInvoke(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientAuthorityCallback_BeginInvoke_m9C8F7A81717F5C5221493E2BF3B314F50E3DAEF5 (ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * ___uv1, bool ___authorityState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___conn0;
	__d_args[1] = ___uv1;
	__d_args[2] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___authorityState2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAuthorityCallback_EndInvoke_mE872FFF644EB885F3F857BC95FB956F942A10069 (ClientAuthorityCallback_t2B980F192A5E7EDAC9B879E030F77F3EC6FA5293 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
IL2CPP_EXTERN_C void PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshal_pinvoke(const PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616& unmarshaled, PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshaled_pinvoke& marshaled)
{
	Exception_t* ___conn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'conn' of type 'PendingPlayer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___conn_0Exception, NULL);
}
IL2CPP_EXTERN_C void PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshal_pinvoke_back(const PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshaled_pinvoke& marshaled, PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616& unmarshaled)
{
	Exception_t* ___conn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'conn' of type 'PendingPlayer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___conn_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
IL2CPP_EXTERN_C void PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshal_pinvoke_cleanup(PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
IL2CPP_EXTERN_C void PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshal_com(const PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616& unmarshaled, PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshaled_com& marshaled)
{
	Exception_t* ___conn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'conn' of type 'PendingPlayer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___conn_0Exception, NULL);
}
IL2CPP_EXTERN_C void PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshal_com_back(const PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshaled_com& marshaled, PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616& unmarshaled)
{
	Exception_t* ___conn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'conn' of type 'PendingPlayer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___conn_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
IL2CPP_EXTERN_C void PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshal_com_cleanup(PendingPlayer_tC61A2CC5E14BE785D2CEB50358E010B3DB40F616_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
IL2CPP_EXTERN_C void ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshal_pinvoke(const ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4& unmarshaled, ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___players_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'players' of type 'ConnectionPendingPlayers'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___players_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshal_pinvoke_back(const ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshaled_pinvoke& marshaled, ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4& unmarshaled)
{
	Exception_t* ___players_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'players' of type 'ConnectionPendingPlayers'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___players_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
IL2CPP_EXTERN_C void ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshal_pinvoke_cleanup(ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
IL2CPP_EXTERN_C void ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshal_com(const ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4& unmarshaled, ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshaled_com& marshaled)
{
	Exception_t* ___players_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'players' of type 'ConnectionPendingPlayers'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___players_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshal_com_back(const ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshaled_com& marshaled, ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4& unmarshaled)
{
	Exception_t* ___players_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'players' of type 'ConnectionPendingPlayers'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___players_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
IL2CPP_EXTERN_C void ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshal_com_cleanup(ConnectionPendingPlayers_t7396E8B4CEA9A48782CAA7C0A6C950D7002116F4_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
IL2CPP_EXTERN_C void PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshal_pinvoke(const PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7& unmarshaled, PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___obj_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'PendingPlayerInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_2Exception, NULL);
}
IL2CPP_EXTERN_C void PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshal_pinvoke_back(const PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshaled_pinvoke& marshaled, PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7& unmarshaled)
{
	Exception_t* ___obj_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'PendingPlayerInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
IL2CPP_EXTERN_C void PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshal_pinvoke_cleanup(PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
IL2CPP_EXTERN_C void PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshal_com(const PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7& unmarshaled, PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshaled_com& marshaled)
{
	Exception_t* ___obj_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'PendingPlayerInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_2Exception, NULL);
}
IL2CPP_EXTERN_C void PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshal_com_back(const PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshaled_com& marshaled, PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7& unmarshaled)
{
	Exception_t* ___obj_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'PendingPlayerInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
IL2CPP_EXTERN_C void PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshal_com_cleanup(PendingPlayerInfo_t685133912EF8A226B7A7D661A00093DEBEB600B7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::.ctor(UnityEngine.Networking.NetworkServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSimpleWrapper__ctor_m6AA28880620515629338FF204136CAA3AA548218 (ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * __this, NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * ___server0, const RuntimeMethod* method)
{
	{
		// public ServerSimpleWrapper(NetworkServer server)
		NetworkServerSimple__ctor_m00805728E3F84815DC47FF7F3ED43478D60D8734(__this, /*hidden argument*/NULL);
		// m_Server = server;
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = ___server0;
		__this->set_m_Server_12(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnConnectError(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSimpleWrapper_OnConnectError_m97870F026EE60A57B47678DB40358AC598781980 (ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * __this, int32_t ___connectionId0, uint8_t ___error1, const RuntimeMethod* method)
{
	{
		// m_Server.GenerateConnectError(error);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_Server_12();
		uint8_t L_1 = ___error1;
		NullCheck(L_0);
		NetworkServer_GenerateConnectError_m0C4523F39909E6D1DAB5E6BBCA3D56B84000C32F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDataError(UnityEngine.Networking.NetworkConnection,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSimpleWrapper_OnDataError_m0BA9A9D638E36C71EF68B9C50768EA224BA90B95 (ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, uint8_t ___error1, const RuntimeMethod* method)
{
	{
		// m_Server.GenerateDataError(conn, error);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_Server_12();
		NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * L_1 = ___conn0;
		uint8_t L_2 = ___error1;
		NullCheck(L_0);
		NetworkServer_GenerateDataError_m4C35398942EB1C24629444CFE7748868B0235B14(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDisconnectError(UnityEngine.Networking.NetworkConnection,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSimpleWrapper_OnDisconnectError_mD24805F783EA34DE29C616E1AE5F560FC8EB7474 (ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, uint8_t ___error1, const RuntimeMethod* method)
{
	{
		// m_Server.GenerateDisconnectError(conn, error);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_Server_12();
		NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * L_1 = ___conn0;
		uint8_t L_2 = ___error1;
		NullCheck(L_0);
		NetworkServer_GenerateDisconnectError_mE033A060EB9D8B512486008516C3B5E463A00D31(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnError(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSimpleWrapper_OnError_mC801EEE17E2DC3D7DBCF234391BFF726B00B0553 (ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * __this, int32_t ___connectionId0, uint8_t ___error1, const RuntimeMethod* method)
{
	{
		// m_Server.GenerateError(null, error);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_Server_12();
		uint8_t L_1 = ___error1;
		NullCheck(L_0);
		NetworkServer_GenerateError_m6ABFFA753C13FE14CA8D2BFF3A6120FE4EBA8A57(L_0, (NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 *)NULL, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnConnected(UnityEngine.Networking.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSimpleWrapper_OnConnected_m4E0AC7799BA5FBEB12E8EA56ED46996F977062E3 (ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, const RuntimeMethod* method)
{
	{
		// m_Server.OnConnected(conn);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_Server_12();
		NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * L_1 = ___conn0;
		NullCheck(L_0);
		NetworkServer_OnConnected_mEB205608677DDF3E3399A4948F09F237EFB0279C(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDisconnected(UnityEngine.Networking.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSimpleWrapper_OnDisconnected_m68C96F8F621266DA2C2C95AAE19BAB41968075F5 (ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, const RuntimeMethod* method)
{
	{
		// m_Server.OnDisconnected(conn);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_Server_12();
		NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * L_1 = ___conn0;
		NullCheck(L_0);
		NetworkServer_OnDisconnected_mA26A990D4289D084915A29C67AE4C0E7B1A997B6(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSimpleWrapper_OnData_mC631C4A141F082049E8838C3D788E4258F8E83A3 (ServerSimpleWrapper_tFFB9159A98BE28972654FAE7B5D620D853169537 * __this, NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * ___conn0, int32_t ___receivedSize1, int32_t ___channelId2, const RuntimeMethod* method)
{
	{
		// m_Server.OnData(conn, receivedSize, channelId);
		NetworkServer_t58D8E227F95892D5696E70C29CE45C9251DE1CA2 * L_0 = __this->get_m_Server_12();
		NetworkConnection_tB063443D5B6E5081055F6408D24EA859C9D31840 * L_1 = ___conn0;
		int32_t L_2 = ___receivedSize1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		NetworkServer_OnData_m11430DD5FA0B369FAEB4B31A04F1A0B3AC33D8B6(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_ClientMoveCallback2D_t911DC0DB1AB635909B35DCED87733639A6A3EAD8 (ClientMoveCallback2D_t911DC0DB1AB635909B35DCED87733639A6A3EAD8 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___position0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___velocity1, float* ___rotation2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___position0, ___velocity1, ___rotation2);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMoveCallback2D__ctor_mADE999D0B8C8D693384A3605E33ABB4699F2AD15 (ClientMoveCallback2D_t911DC0DB1AB635909B35DCED87733639A6A3EAD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::Invoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientMoveCallback2D_Invoke_m43C33AC89F8023DA94C52EE5D0A2A38189D8E11C (ClientMoveCallback2D_t911DC0DB1AB635909B35DCED87733639A6A3EAD8 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___position0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___velocity1, float* ___rotation2, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef bool (*FunctionPointerType) (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___position0, ___velocity1, ___rotation2, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___velocity1, ___rotation2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< bool, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, float* >::Invoke(targetMethod, targetThis, ___position0, ___velocity1, ___rotation2);
					else
						result = GenericVirtFuncInvoker3< bool, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, float* >::Invoke(targetMethod, targetThis, ___position0, ___velocity1, ___rotation2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< bool, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___velocity1, ___rotation2);
					else
						result = VirtFuncInvoker3< bool, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___velocity1, ___rotation2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, float*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(___position0) - 1), ___velocity1, ___rotation2, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *, float*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___velocity1, ___rotation2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::BeginInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientMoveCallback2D_BeginInvoke_m6A85545F83EC716DA6ECE2C216AB5926D2D194A3 (ClientMoveCallback2D_t911DC0DB1AB635909B35DCED87733639A6A3EAD8 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___position0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___velocity1, float* ___rotation2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &*___position0);
	__d_args[1] = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &*___velocity1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &*___rotation2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::EndInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientMoveCallback2D_EndInvoke_m5CDB5AE896EE5406447BF90C4F7CD7DD5878FBAA (ClientMoveCallback2D_t911DC0DB1AB635909B35DCED87733639A6A3EAD8 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___position0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___velocity1, float* ___rotation2, RuntimeObject* ___result3, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___position0,
	___velocity1,
	___rotation2,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_ClientMoveCallback3D_t657FD08F0D0959E4593C3D5BE4C2EEC3996660D4 (ClientMoveCallback3D_t657FD08F0D0959E4593C3D5BE4C2EEC3996660D4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___velocity1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___position0, ___velocity1, ___rotation2);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMoveCallback3D__ctor_mB7F83FC8BF95FA06E989DBD7C7326671C6C21846 (ClientMoveCallback3D_t657FD08F0D0959E4593C3D5BE4C2EEC3996660D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::Invoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientMoveCallback3D_Invoke_m666CABFFE4DAD7D9CCD84DAD4CC7F1D78964617A (ClientMoveCallback3D_t657FD08F0D0959E4593C3D5BE4C2EEC3996660D4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___velocity1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef bool (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___position0, ___velocity1, ___rotation2, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___velocity1, ___rotation2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * >::Invoke(targetMethod, targetThis, ___position0, ___velocity1, ___rotation2);
					else
						result = GenericVirtFuncInvoker3< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * >::Invoke(targetMethod, targetThis, ___position0, ___velocity1, ___rotation2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___velocity1, ___rotation2);
					else
						result = VirtFuncInvoker3< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___velocity1, ___rotation2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(___position0) - 1), ___velocity1, ___rotation2, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___velocity1, ___rotation2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::BeginInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientMoveCallback3D_BeginInvoke_m434EA2350539CED4F378189325F94F1EBD29DF8C (ClientMoveCallback3D_t657FD08F0D0959E4593C3D5BE4C2EEC3996660D4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___velocity1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &*___position0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &*___velocity1);
	__d_args[2] = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &*___rotation2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::EndInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientMoveCallback3D_EndInvoke_m61835196E0D593939FBEEA5C115FD2F355B81BD5 (ClientMoveCallback3D_t657FD08F0D0959E4593C3D5BE4C2EEC3996660D4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___velocity1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, RuntimeObject* ___result3, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___position0,
	___velocity1,
	___rotation2,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  NetworkIdentity_get_netId_mA85DDF92E96025B8A70349A25473AE2621889490_inline (NetworkIdentity_tD4B98454B255912A80CC56FFE85D1858C3D05E11 * __this, const RuntimeMethod* method)
{
	{
		// public NetworkInstanceId netId { get { return m_NetId; } }
		NetworkInstanceId_t991B9FFB8420732E99A6A91162944C5F24CFFC51  L_0 = __this->get_m_NetId_11();
		return L_0;
	}
}
