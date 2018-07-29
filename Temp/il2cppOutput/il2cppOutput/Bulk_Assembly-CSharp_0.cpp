#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// CameraFeed
struct CameraFeed_t1617299256;
// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_t3109936861;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1588957063;
// Loom
struct Loom_t3759828253;
// Loom/DelayedQueueItem[]
struct DelayedQueueItemU5BU5D_t658540297;
// MK.Glow.MKGlowFree
struct MKGlowFree_t706824981;
// RecieveVideo
struct RecieveVideo_t2154278729;
// RecieveVideo/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t2422030019;
// RecieveVideo/<readFrameByteArray>c__AnonStorey1
struct U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445;
// SendVideo
struct SendVideo_t3564215223;
// SendVideo/<initAndWaitForCamImage>c__Iterator0
struct U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479;
// SendVideo/<senderCOR>c__Iterator1
struct U3CsenderCORU3Ec__Iterator1_t1265425902;
// SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2
struct U3CsenderCORU3Ec__AnonStorey2_t4050455982;
// SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey3
struct U3CsenderCORU3Ec__AnonStorey3_t1321572627;
// System.Action
struct Action_t1264377477;
// System.Action[]
struct ActionU5BU5D_t388269512;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t3593217305;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3630620928;
// System.Collections.Generic.IEnumerable`1<Loom/DelayedQueueItem>
struct IEnumerable_1_t7395825;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t244230366;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.List`1<Loom/DelayedQueueItem>
struct List_1_t2499617678;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2736452219;
// System.Collections.Generic.List`1<System.Net.Sockets.TcpClient>
struct List_1_t2294981119;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t905170877;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t386988881;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Queue
struct Queue_t3637523393;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Func`2<Loom/DelayedQueueItem,System.Boolean>
struct Func_2_t1573880443;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Net.IPAddress
struct IPAddress_t241777590;
// System.Net.Sockets.LingerOption
struct LingerOption_t2688985448;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t4071955934;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Net.Sockets.TcpClient
struct TcpClient_t822906377;
// System.Net.Sockets.TcpClient[]
struct TcpClientU5BU5D_t2557031348;
// System.Net.Sockets.TcpListener
struct TcpListener_t3499576757;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Threading.WaitCallback
struct WaitCallback_t2448485498;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.Void
struct Void_t1185182177;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// Vuforia.CameraDevice
struct CameraDevice_t960297568;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t283990539;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// Vuforia.IWebCam
struct IWebCam_t3734514901;
// Vuforia.Image
struct Image_t745056343;
// Vuforia.Trackable
struct Trackable_t2451999991;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t2198727358;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t1949122020;
// VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t1150221792;

extern RuntimeClass* Action_1_t269755560_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3593217305_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CameraDevice_t960297568_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1573880443_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Graphics_t783367614_il2cpp_TypeInfo_var;
extern RuntimeClass* IPAddress_t241777590_il2cpp_TypeInfo_var;
extern RuntimeClass* InitError_t3420749710_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2294981119_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2499617678_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2736452219_il2cpp_TypeInfo_var;
extern RuntimeClass* Loom_t3759828253_il2cpp_TypeInfo_var;
extern RuntimeClass* MKGlowFree_t706824981_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* PIXEL_FORMAT_t3209881435_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* SocketException_t3852068672_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TcpClient_t822906377_il2cpp_TypeInfo_var;
extern RuntimeClass* TcpListener_t3499576757_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartU3Ec__Iterator0_t2422030019_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CsenderCORU3Ec__AnonStorey2_t4050455982_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CsenderCORU3Ec__AnonStorey3_t1321572627_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CsenderCORU3Ec__Iterator1_t1265425902_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaARController_t1876945237_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitCallback_t2448485498_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0_FieldInfo_var;
extern String_t* _stringLiteral1108443480;
extern String_t* _stringLiteral1253325676;
extern String_t* _stringLiteral1323066547;
extern String_t* _stringLiteral1380323894;
extern String_t* _stringLiteral1431967569;
extern String_t* _stringLiteral1474944764;
extern String_t* _stringLiteral1498400317;
extern String_t* _stringLiteral1764204093;
extern String_t* _stringLiteral1984904383;
extern String_t* _stringLiteral2016908147;
extern String_t* _stringLiteral2072581803;
extern String_t* _stringLiteral2072975055;
extern String_t* _stringLiteral2186981479;
extern String_t* _stringLiteral2223864965;
extern String_t* _stringLiteral2280541164;
extern String_t* _stringLiteral229317972;
extern String_t* _stringLiteral2293327149;
extern String_t* _stringLiteral2387719440;
extern String_t* _stringLiteral2546630231;
extern String_t* _stringLiteral2642543365;
extern String_t* _stringLiteral2687317740;
extern String_t* _stringLiteral2699595194;
extern String_t* _stringLiteral2705711170;
extern String_t* _stringLiteral2746058527;
extern String_t* _stringLiteral2746077084;
extern String_t* _stringLiteral2755003859;
extern String_t* _stringLiteral2826150297;
extern String_t* _stringLiteral2926967687;
extern String_t* _stringLiteral2959890895;
extern String_t* _stringLiteral2974894664;
extern String_t* _stringLiteral306120475;
extern String_t* _stringLiteral3062781488;
extern String_t* _stringLiteral3073488411;
extern String_t* _stringLiteral3122929577;
extern String_t* _stringLiteral3183081100;
extern String_t* _stringLiteral3207430923;
extern String_t* _stringLiteral3279329212;
extern String_t* _stringLiteral3325583105;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral3453007782;
extern String_t* _stringLiteral3483481617;
extern String_t* _stringLiteral3483484711;
extern String_t* _stringLiteral3567432369;
extern String_t* _stringLiteral3609359227;
extern String_t* _stringLiteral3622617826;
extern String_t* _stringLiteral3626444962;
extern String_t* _stringLiteral3638475675;
extern String_t* _stringLiteral3735132611;
extern String_t* _stringLiteral3752705136;
extern String_t* _stringLiteral3797279721;
extern String_t* _stringLiteral3806174257;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral4095928500;
extern String_t* _stringLiteral464028422;
extern String_t* _stringLiteral491174246;
extern String_t* _stringLiteral569560965;
extern String_t* _stringLiteral868600955;
extern String_t* _stringLiteral912792620;
extern const RuntimeMethod* Action_1__ctor_m2079027267_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2713332384_RuntimeMethod_var;
extern const RuntimeMethod* CameraFeed_OnPause_m3477990339_RuntimeMethod_var;
extern const RuntimeMethod* CameraFeed_OnTrackablesUpdated_m1470020028_RuntimeMethod_var;
extern const RuntimeMethod* CameraFeed_OnVuforiaStarted_m4271355884_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisDelayedQueueItem_t1027542936_m4086968425_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1104083697_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m27856966_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m385718446_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1410164912_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2281580424_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2738576554_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1587659164_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2476266973_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4151988499_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m3835612240_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisCamera_t4157153871_m3447638008_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisLoom_t3759828253_m3262702326_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCamera_t4157153871_m3956151066_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m178148047_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3508878779_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m263651446_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2963593273_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3460642865_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2127924545_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3969294004_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m868649400_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2078161870_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2452381913_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m538907628_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m1127752898_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3178979345_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3850019872_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4152009313_RuntimeMethod_var;
extern const RuntimeMethod* Loom_RunAction_m2582464502_RuntimeMethod_var;
extern const RuntimeMethod* Loom_U3CUpdateU3Em__0_m951239159_RuntimeMethod_var;
extern const RuntimeMethod* RecieveVideo_U3CimageReceiverU3Em__0_m3389353562_RuntimeMethod_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m4012804800_RuntimeMethod_var;
extern const RuntimeMethod* U3CinitAndWaitForCamImageU3Ec__Iterator0_Reset_m1207102699_RuntimeMethod_var;
extern const RuntimeMethod* U3CreadFrameByteArrayU3Ec__AnonStorey1_U3CU3Em__0_m2310939376_RuntimeMethod_var;
extern const RuntimeMethod* U3CsenderCORU3Ec__AnonStorey2_U3CU3Em__0_m1488755619_RuntimeMethod_var;
extern const RuntimeMethod* U3CsenderCORU3Ec__AnonStorey3_U3CU3Em__0_m2670466354_RuntimeMethod_var;
extern const RuntimeMethod* U3CsenderCORU3Ec__Iterator1_Reset_m1860801394_RuntimeMethod_var;
extern const uint32_t CameraFeed_GetImage_m791337117_MetadataUsageId;
extern const uint32_t CameraFeed_OnPause_m3477990339_MetadataUsageId;
extern const uint32_t CameraFeed_OnTrackablesUpdated_m1470020028_MetadataUsageId;
extern const uint32_t CameraFeed_OnVuforiaStarted_m4271355884_MetadataUsageId;
extern const uint32_t CameraFeed_RegisterFormat_m2916050735_MetadataUsageId;
extern const uint32_t CameraFeed_Start_m2590105931_MetadataUsageId;
extern const uint32_t CameraFeed_UnregisterFormat_m345081511_MetadataUsageId;
extern const uint32_t CameraFeed__ctor_m2994253695_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnDestroy_m1080906236_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId;
extern const uint32_t DelayedQueueItem_t1027542936_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DelayedQueueItem_t1027542936_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Loom_Awake_m3546779126_MetadataUsageId;
extern const uint32_t Loom_Initialize_m647855750_MetadataUsageId;
extern const uint32_t Loom_OnDisable_m2869689973_MetadataUsageId;
extern const uint32_t Loom_QueueOnMainThread_m1417379532_MetadataUsageId;
extern const uint32_t Loom_QueueOnMainThread_m2710461419_MetadataUsageId;
extern const uint32_t Loom_RunAction_m2582464502_MetadataUsageId;
extern const uint32_t Loom_RunAsync_m3073108896_MetadataUsageId;
extern const uint32_t Loom_Update_m1664342559_MetadataUsageId;
extern const uint32_t Loom__cctor_m835196188_MetadataUsageId;
extern const uint32_t Loom__ctor_m3817918221_MetadataUsageId;
extern const uint32_t Loom_get_Current_m1133460506_MetadataUsageId;
extern const uint32_t MKGlowFree_Blur_m2374394553_MetadataUsageId;
extern const uint32_t MKGlowFree_Cleanup_m2550696459_MetadataUsageId;
extern const uint32_t MKGlowFree_FullScreenGlow_m3003909186_MetadataUsageId;
extern const uint32_t MKGlowFree_OnPostRender_m4207909457_MetadataUsageId;
extern const uint32_t MKGlowFree_SelectiveGlow_m364804102_MetadataUsageId;
extern const uint32_t MKGlowFree_SetupMaterials_m3506540674_MetadataUsageId;
extern const uint32_t MKGlowFree_SetupShaders_m4037307605_MetadataUsageId;
extern const uint32_t MKGlowFree__cctor_m2640631015_MetadataUsageId;
extern const uint32_t MKGlowFree_get_Cam_m1214962923_MetadataUsageId;
extern const uint32_t MKGlowFree_get_SelectiveGlowCameraObject_m1517722839_MetadataUsageId;
extern const uint32_t MKGlowFree_get_SelectiveGlowCamera_m774247276_MetadataUsageId;
extern const uint32_t MKGlowFree_set_BlurIterations_m2667914715_MetadataUsageId;
extern const uint32_t RecieveVideo_LOGWARNING_m551940706_MetadataUsageId;
extern const uint32_t RecieveVideo_LOG_m3478162098_MetadataUsageId;
extern const uint32_t RecieveVideo_OnApplicationQuit_m800952189_MetadataUsageId;
extern const uint32_t RecieveVideo_Start_m1725629100_MetadataUsageId;
extern const uint32_t RecieveVideo_U3CimageReceiverU3Em__0_m3389353562_MetadataUsageId;
extern const uint32_t RecieveVideo__ctor_m3636094346_MetadataUsageId;
extern const uint32_t RecieveVideo_byteLengthToFrameByteArray_m2901727512_MetadataUsageId;
extern const uint32_t RecieveVideo_frameByteArrayToByteLength_m2376151793_MetadataUsageId;
extern const uint32_t RecieveVideo_imageReceiver_m2444187831_MetadataUsageId;
extern const uint32_t RecieveVideo_readFrameByteArray_m1422475908_MetadataUsageId;
extern const uint32_t RecieveVideo_readImageByteSize_m1996922068_MetadataUsageId;
extern const uint32_t SendVideo_LOG_m628606818_MetadataUsageId;
extern const uint32_t SendVideo_OnDisable_m4280048278_MetadataUsageId;
extern const uint32_t SendVideo__ctor_m3380206145_MetadataUsageId;
extern const uint32_t SendVideo_byteLengthToFrameByteArray_m622216339_MetadataUsageId;
extern const uint32_t SendVideo_frameByteArrayToByteLength_m1611428697_MetadataUsageId;
extern const uint32_t SendVideo_initAndWaitForCamImage_m300583457_MetadataUsageId;
extern const uint32_t SendVideo_senderCOR_m1459968934_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m1096821543_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m4012804800_MetadataUsageId;
extern const uint32_t U3CinitAndWaitForCamImageU3Ec__Iterator0_MoveNext_m4097503874_MetadataUsageId;
extern const uint32_t U3CinitAndWaitForCamImageU3Ec__Iterator0_Reset_m1207102699_MetadataUsageId;
extern const uint32_t U3CsenderCORU3Ec__AnonStorey2_U3CU3Em__0_m1488755619_MetadataUsageId;
extern const uint32_t U3CsenderCORU3Ec__AnonStorey3_U3CU3Em__0_m2670466354_MetadataUsageId;
extern const uint32_t U3CsenderCORU3Ec__Iterator1_MoveNext_m1980529359_MetadataUsageId;
extern const uint32_t U3CsenderCORU3Ec__Iterator1_Reset_m1860801394_MetadataUsageId;
struct GUIStyleState_t1397964415_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct RectOffset_t1369453676_marshaled_com;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;
struct SingleU5BU5D_t1444911251;
struct CanvasU5BU5D_t682926938;
struct ColliderU5BU5D_t4234922487;
struct ColorU5BU5D_t941916413;
struct RendererU5BU5D_t3210418286;


#ifndef U3CMODULEU3E_T692745550_H
#define U3CMODULEU3E_T692745550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745550 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745550_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CSTARTU3EC__ITERATOR0_T2422030019_H
#define U3CSTARTU3EC__ITERATOR0_T2422030019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecieveVideo/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t2422030019  : public RuntimeObject
{
public:
	// RecieveVideo RecieveVideo/<Start>c__Iterator0::$this
	RecieveVideo_t2154278729 * ___U24this_0;
	// System.Object RecieveVideo/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean RecieveVideo/<Start>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 RecieveVideo/<Start>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2422030019, ___U24this_0)); }
	inline RecieveVideo_t2154278729 * get_U24this_0() const { return ___U24this_0; }
	inline RecieveVideo_t2154278729 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(RecieveVideo_t2154278729 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2422030019, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2422030019, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2422030019, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T2422030019_H
#ifndef U3CREADFRAMEBYTEARRAYU3EC__ANONSTOREY1_T1620704445_H
#define U3CREADFRAMEBYTEARRAYU3EC__ANONSTOREY1_T1620704445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecieveVideo/<readFrameByteArray>c__AnonStorey1
struct  U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445  : public RuntimeObject
{
public:
	// System.Byte[] RecieveVideo/<readFrameByteArray>c__AnonStorey1::imageBytes
	ByteU5BU5D_t4116647657* ___imageBytes_0;
	// System.Boolean RecieveVideo/<readFrameByteArray>c__AnonStorey1::readyToReadAgain
	bool ___readyToReadAgain_1;
	// RecieveVideo RecieveVideo/<readFrameByteArray>c__AnonStorey1::$this
	RecieveVideo_t2154278729 * ___U24this_2;

public:
	inline static int32_t get_offset_of_imageBytes_0() { return static_cast<int32_t>(offsetof(U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445, ___imageBytes_0)); }
	inline ByteU5BU5D_t4116647657* get_imageBytes_0() const { return ___imageBytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_imageBytes_0() { return &___imageBytes_0; }
	inline void set_imageBytes_0(ByteU5BU5D_t4116647657* value)
	{
		___imageBytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___imageBytes_0), value);
	}

	inline static int32_t get_offset_of_readyToReadAgain_1() { return static_cast<int32_t>(offsetof(U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445, ___readyToReadAgain_1)); }
	inline bool get_readyToReadAgain_1() const { return ___readyToReadAgain_1; }
	inline bool* get_address_of_readyToReadAgain_1() { return &___readyToReadAgain_1; }
	inline void set_readyToReadAgain_1(bool value)
	{
		___readyToReadAgain_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445, ___U24this_2)); }
	inline RecieveVideo_t2154278729 * get_U24this_2() const { return ___U24this_2; }
	inline RecieveVideo_t2154278729 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(RecieveVideo_t2154278729 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREADFRAMEBYTEARRAYU3EC__ANONSTOREY1_T1620704445_H
#ifndef U3CINITANDWAITFORCAMIMAGEU3EC__ITERATOR0_T4034798479_H
#define U3CINITANDWAITFORCAMIMAGEU3EC__ITERATOR0_T4034798479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SendVideo/<initAndWaitForCamImage>c__Iterator0
struct  U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479  : public RuntimeObject
{
public:
	// SendVideo SendVideo/<initAndWaitForCamImage>c__Iterator0::$this
	SendVideo_t3564215223 * ___U24this_0;
	// System.Object SendVideo/<initAndWaitForCamImage>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean SendVideo/<initAndWaitForCamImage>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 SendVideo/<initAndWaitForCamImage>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479, ___U24this_0)); }
	inline SendVideo_t3564215223 * get_U24this_0() const { return ___U24this_0; }
	inline SendVideo_t3564215223 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(SendVideo_t3564215223 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINITANDWAITFORCAMIMAGEU3EC__ITERATOR0_T4034798479_H
#ifndef U3CSENDERCORU3EC__ITERATOR1_T1265425902_H
#define U3CSENDERCORU3EC__ITERATOR1_T1265425902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SendVideo/<senderCOR>c__Iterator1
struct  U3CsenderCORU3Ec__Iterator1_t1265425902  : public RuntimeObject
{
public:
	// SendVideo SendVideo/<senderCOR>c__Iterator1::$this
	SendVideo_t3564215223 * ___U24this_0;
	// System.Object SendVideo/<senderCOR>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean SendVideo/<senderCOR>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 SendVideo/<senderCOR>c__Iterator1::$PC
	int32_t ___U24PC_3;
	// SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2 SendVideo/<senderCOR>c__Iterator1::$locvar0
	U3CsenderCORU3Ec__AnonStorey2_t4050455982 * ___U24locvar0_4;
	// SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey3 SendVideo/<senderCOR>c__Iterator1::$locvar1
	U3CsenderCORU3Ec__AnonStorey3_t1321572627 * ___U24locvar1_5;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__Iterator1_t1265425902, ___U24this_0)); }
	inline SendVideo_t3564215223 * get_U24this_0() const { return ___U24this_0; }
	inline SendVideo_t3564215223 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(SendVideo_t3564215223 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__Iterator1_t1265425902, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__Iterator1_t1265425902, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__Iterator1_t1265425902, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24locvar0_4() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__Iterator1_t1265425902, ___U24locvar0_4)); }
	inline U3CsenderCORU3Ec__AnonStorey2_t4050455982 * get_U24locvar0_4() const { return ___U24locvar0_4; }
	inline U3CsenderCORU3Ec__AnonStorey2_t4050455982 ** get_address_of_U24locvar0_4() { return &___U24locvar0_4; }
	inline void set_U24locvar0_4(U3CsenderCORU3Ec__AnonStorey2_t4050455982 * value)
	{
		___U24locvar0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_4), value);
	}

	inline static int32_t get_offset_of_U24locvar1_5() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__Iterator1_t1265425902, ___U24locvar1_5)); }
	inline U3CsenderCORU3Ec__AnonStorey3_t1321572627 * get_U24locvar1_5() const { return ___U24locvar1_5; }
	inline U3CsenderCORU3Ec__AnonStorey3_t1321572627 ** get_address_of_U24locvar1_5() { return &___U24locvar1_5; }
	inline void set_U24locvar1_5(U3CsenderCORU3Ec__AnonStorey3_t1321572627 * value)
	{
		___U24locvar1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDERCORU3EC__ITERATOR1_T1265425902_H
#ifndef U3CSENDERCORU3EC__ANONSTOREY2_T4050455982_H
#define U3CSENDERCORU3EC__ANONSTOREY2_T4050455982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2
struct  U3CsenderCORU3Ec__AnonStorey2_t4050455982  : public RuntimeObject
{
public:
	// System.Net.Sockets.TcpClient SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2::client
	TcpClient_t822906377 * ___client_0;
	// System.Boolean SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2::isConnected
	bool ___isConnected_1;
	// System.Net.Sockets.NetworkStream SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2::stream
	NetworkStream_t4071955934 * ___stream_2;
	// System.Byte[] SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2::frameBytesLength
	ByteU5BU5D_t4116647657* ___frameBytesLength_3;
	// System.Boolean SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2::readyToGetFrame
	bool ___readyToGetFrame_4;
	// SendVideo/<senderCOR>c__Iterator1 SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2::<>f__ref$1
	U3CsenderCORU3Ec__Iterator1_t1265425902 * ___U3CU3Ef__refU241_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__AnonStorey2_t4050455982, ___client_0)); }
	inline TcpClient_t822906377 * get_client_0() const { return ___client_0; }
	inline TcpClient_t822906377 ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(TcpClient_t822906377 * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((&___client_0), value);
	}

	inline static int32_t get_offset_of_isConnected_1() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__AnonStorey2_t4050455982, ___isConnected_1)); }
	inline bool get_isConnected_1() const { return ___isConnected_1; }
	inline bool* get_address_of_isConnected_1() { return &___isConnected_1; }
	inline void set_isConnected_1(bool value)
	{
		___isConnected_1 = value;
	}

	inline static int32_t get_offset_of_stream_2() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__AnonStorey2_t4050455982, ___stream_2)); }
	inline NetworkStream_t4071955934 * get_stream_2() const { return ___stream_2; }
	inline NetworkStream_t4071955934 ** get_address_of_stream_2() { return &___stream_2; }
	inline void set_stream_2(NetworkStream_t4071955934 * value)
	{
		___stream_2 = value;
		Il2CppCodeGenWriteBarrier((&___stream_2), value);
	}

	inline static int32_t get_offset_of_frameBytesLength_3() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__AnonStorey2_t4050455982, ___frameBytesLength_3)); }
	inline ByteU5BU5D_t4116647657* get_frameBytesLength_3() const { return ___frameBytesLength_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_frameBytesLength_3() { return &___frameBytesLength_3; }
	inline void set_frameBytesLength_3(ByteU5BU5D_t4116647657* value)
	{
		___frameBytesLength_3 = value;
		Il2CppCodeGenWriteBarrier((&___frameBytesLength_3), value);
	}

	inline static int32_t get_offset_of_readyToGetFrame_4() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__AnonStorey2_t4050455982, ___readyToGetFrame_4)); }
	inline bool get_readyToGetFrame_4() const { return ___readyToGetFrame_4; }
	inline bool* get_address_of_readyToGetFrame_4() { return &___readyToGetFrame_4; }
	inline void set_readyToGetFrame_4(bool value)
	{
		___readyToGetFrame_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_5() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__AnonStorey2_t4050455982, ___U3CU3Ef__refU241_5)); }
	inline U3CsenderCORU3Ec__Iterator1_t1265425902 * get_U3CU3Ef__refU241_5() const { return ___U3CU3Ef__refU241_5; }
	inline U3CsenderCORU3Ec__Iterator1_t1265425902 ** get_address_of_U3CU3Ef__refU241_5() { return &___U3CU3Ef__refU241_5; }
	inline void set_U3CU3Ef__refU241_5(U3CsenderCORU3Ec__Iterator1_t1265425902 * value)
	{
		___U3CU3Ef__refU241_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU241_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDERCORU3EC__ANONSTOREY2_T4050455982_H
#ifndef U3CSENDERCORU3EC__ANONSTOREY3_T1321572627_H
#define U3CSENDERCORU3EC__ANONSTOREY3_T1321572627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey3
struct  U3CsenderCORU3Ec__AnonStorey3_t1321572627  : public RuntimeObject
{
public:
	// System.Byte[] SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey3::pngBytes
	ByteU5BU5D_t4116647657* ___pngBytes_0;
	// SendVideo/<senderCOR>c__Iterator1 SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey3::<>f__ref$1
	U3CsenderCORU3Ec__Iterator1_t1265425902 * ___U3CU3Ef__refU241_1;
	// SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2 SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey3::<>f__ref$2
	U3CsenderCORU3Ec__AnonStorey2_t4050455982 * ___U3CU3Ef__refU242_2;

public:
	inline static int32_t get_offset_of_pngBytes_0() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__AnonStorey3_t1321572627, ___pngBytes_0)); }
	inline ByteU5BU5D_t4116647657* get_pngBytes_0() const { return ___pngBytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pngBytes_0() { return &___pngBytes_0; }
	inline void set_pngBytes_0(ByteU5BU5D_t4116647657* value)
	{
		___pngBytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___pngBytes_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__AnonStorey3_t1321572627, ___U3CU3Ef__refU241_1)); }
	inline U3CsenderCORU3Ec__Iterator1_t1265425902 * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CsenderCORU3Ec__Iterator1_t1265425902 ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CsenderCORU3Ec__Iterator1_t1265425902 * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU241_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU242_2() { return static_cast<int32_t>(offsetof(U3CsenderCORU3Ec__AnonStorey3_t1321572627, ___U3CU3Ef__refU242_2)); }
	inline U3CsenderCORU3Ec__AnonStorey2_t4050455982 * get_U3CU3Ef__refU242_2() const { return ___U3CU3Ef__refU242_2; }
	inline U3CsenderCORU3Ec__AnonStorey2_t4050455982 ** get_address_of_U3CU3Ef__refU242_2() { return &___U3CU3Ef__refU242_2; }
	inline void set_U3CU3Ef__refU242_2(U3CsenderCORU3Ec__AnonStorey2_t4050455982 * value)
	{
		___U3CU3Ef__refU242_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU242_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDERCORU3EC__ANONSTOREY3_T1321572627_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2499617678_H
#define LIST_1_T2499617678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Loom/DelayedQueueItem>
struct  List_1_t2499617678  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DelayedQueueItemU5BU5D_t658540297* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2499617678, ____items_1)); }
	inline DelayedQueueItemU5BU5D_t658540297* get__items_1() const { return ____items_1; }
	inline DelayedQueueItemU5BU5D_t658540297** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DelayedQueueItemU5BU5D_t658540297* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2499617678, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2499617678, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2499617678_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DelayedQueueItemU5BU5D_t658540297* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2499617678_StaticFields, ___EmptyArray_4)); }
	inline DelayedQueueItemU5BU5D_t658540297* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DelayedQueueItemU5BU5D_t658540297** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DelayedQueueItemU5BU5D_t658540297* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2499617678_H
#ifndef LIST_1_T2736452219_H
#define LIST_1_T2736452219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Action>
struct  List_1_t2736452219  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t388269512* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2736452219, ____items_1)); }
	inline ActionU5BU5D_t388269512* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t388269512** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t388269512* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2736452219, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2736452219, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2736452219_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ActionU5BU5D_t388269512* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2736452219_StaticFields, ___EmptyArray_4)); }
	inline ActionU5BU5D_t388269512* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ActionU5BU5D_t388269512** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ActionU5BU5D_t388269512* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2736452219_H
#ifndef LIST_1_T2294981119_H
#define LIST_1_T2294981119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Net.Sockets.TcpClient>
struct  List_1_t2294981119  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TcpClientU5BU5D_t2557031348* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2294981119, ____items_1)); }
	inline TcpClientU5BU5D_t2557031348* get__items_1() const { return ____items_1; }
	inline TcpClientU5BU5D_t2557031348** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TcpClientU5BU5D_t2557031348* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2294981119, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2294981119, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2294981119_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TcpClientU5BU5D_t2557031348* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2294981119_StaticFields, ___EmptyArray_4)); }
	inline TcpClientU5BU5D_t2557031348* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TcpClientU5BU5D_t2557031348** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TcpClientU5BU5D_t2557031348* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2294981119_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef TCPLISTENER_T3499576757_H
#define TCPLISTENER_T3499576757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpListener
struct  TcpListener_t3499576757  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.TcpListener::active
	bool ___active_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::server
	Socket_t1119025450 * ___server_1;
	// System.Net.EndPoint System.Net.Sockets.TcpListener::savedEP
	EndPoint_t982345378 * ___savedEP_2;

public:
	inline static int32_t get_offset_of_active_0() { return static_cast<int32_t>(offsetof(TcpListener_t3499576757, ___active_0)); }
	inline bool get_active_0() const { return ___active_0; }
	inline bool* get_address_of_active_0() { return &___active_0; }
	inline void set_active_0(bool value)
	{
		___active_0 = value;
	}

	inline static int32_t get_offset_of_server_1() { return static_cast<int32_t>(offsetof(TcpListener_t3499576757, ___server_1)); }
	inline Socket_t1119025450 * get_server_1() const { return ___server_1; }
	inline Socket_t1119025450 ** get_address_of_server_1() { return &___server_1; }
	inline void set_server_1(Socket_t1119025450 * value)
	{
		___server_1 = value;
		Il2CppCodeGenWriteBarrier((&___server_1), value);
	}

	inline static int32_t get_offset_of_savedEP_2() { return static_cast<int32_t>(offsetof(TcpListener_t3499576757, ___savedEP_2)); }
	inline EndPoint_t982345378 * get_savedEP_2() const { return ___savedEP_2; }
	inline EndPoint_t982345378 ** get_address_of_savedEP_2() { return &___savedEP_2; }
	inline void set_savedEP_2(EndPoint_t982345378 * value)
	{
		___savedEP_2 = value;
		Il2CppCodeGenWriteBarrier((&___savedEP_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPLISTENER_T3499576757_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
#ifndef U24ARRAYTYPEU3D44_T3630306107_H
#define U24ARRAYTYPEU3D44_T3630306107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=44
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D44_t3630306107 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D44_t3630306107__padding[44];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D44_T3630306107_H
#ifndef DELAYEDQUEUEITEM_T1027542936_H
#define DELAYEDQUEUEITEM_T1027542936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loom/DelayedQueueItem
struct  DelayedQueueItem_t1027542936 
{
public:
	// System.Single Loom/DelayedQueueItem::time
	float ___time_0;
	// System.Action Loom/DelayedQueueItem::action
	Action_t1264377477 * ___action_1;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(DelayedQueueItem_t1027542936, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(DelayedQueueItem_t1027542936, ___action_1)); }
	inline Action_t1264377477 * get_action_1() const { return ___action_1; }
	inline Action_t1264377477 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_t1264377477 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((&___action_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Loom/DelayedQueueItem
struct DelayedQueueItem_t1027542936_marshaled_pinvoke
{
	float ___time_0;
	Il2CppMethodPointer ___action_1;
};
// Native definition for COM marshalling of Loom/DelayedQueueItem
struct DelayedQueueItem_t1027542936_marshaled_com
{
	float ___time_0;
	Il2CppMethodPointer ___action_1;
};
#endif // DELAYEDQUEUEITEM_T1027542936_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUMERATOR_T330728800_H
#define ENUMERATOR_T330728800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Action>
struct  Enumerator_t330728800 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2736452219 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Action_t1264377477 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t330728800, ___l_0)); }
	inline List_1_t2736452219 * get_l_0() const { return ___l_0; }
	inline List_1_t2736452219 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2736452219 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t330728800, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t330728800, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t330728800, ___current_3)); }
	inline Action_t1264377477 * get_current_3() const { return ___current_3; }
	inline Action_t1264377477 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Action_t1264377477 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T330728800_H
#ifndef ENUMERATOR_T4184224996_H
#define ENUMERATOR_T4184224996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Net.Sockets.TcpClient>
struct  Enumerator_t4184224996 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2294981119 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TcpClient_t822906377 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t4184224996, ___l_0)); }
	inline List_1_t2294981119 * get_l_0() const { return ___l_0; }
	inline List_1_t2294981119 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2294981119 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t4184224996, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t4184224996, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4184224996, ___current_3)); }
	inline TcpClient_t822906377 * get_current_3() const { return ___current_3; }
	inline TcpClient_t822906377 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TcpClient_t822906377 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4184224996_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef VIDEOMODEDATA_T2066817255_H
#define VIDEOMODEDATA_T2066817255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t2066817255 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMODEDATA_T2066817255_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=44 <PrivateImplementationDetails>::$field-9E9626CE335E3388398C6289FE13AEB5F7604824
	U24ArrayTypeU3D44_t3630306107  ___U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0)); }
	inline U24ArrayTypeU3D44_t3630306107  get_U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0() const { return ___U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0; }
	inline U24ArrayTypeU3D44_t3630306107 * get_address_of_U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0() { return &___U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0; }
	inline void set_U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0(U24ArrayTypeU3D44_t3630306107  value)
	{
		___U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifndef GLOWTYPE_T2435606881_H
#define GLOWTYPE_T2435606881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MK.Glow.GlowType
struct  GlowType_t2435606881 
{
public:
	// System.Int32 MK.Glow.GlowType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GlowType_t2435606881, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOWTYPE_T2435606881_H
#ifndef ENUMERATOR_T93894259_H
#define ENUMERATOR_T93894259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Loom/DelayedQueueItem>
struct  Enumerator_t93894259 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2499617678 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DelayedQueueItem_t1027542936  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t93894259, ___l_0)); }
	inline List_1_t2499617678 * get_l_0() const { return ___l_0; }
	inline List_1_t2499617678 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2499617678 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t93894259, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t93894259, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t93894259, ___current_3)); }
	inline DelayedQueueItem_t1027542936  get_current_3() const { return ___current_3; }
	inline DelayedQueueItem_t1027542936 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DelayedQueueItem_t1027542936  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T93894259_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T1659085276_H
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef PROTOCOLTYPE_T303635025_H
#define PROTOCOLTYPE_T303635025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t303635025 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProtocolType_t303635025, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTOCOLTYPE_T303635025_H
#ifndef SOCKETTYPE_T2175930299_H
#define SOCKETTYPE_T2175930299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t2175930299 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketType_t2175930299, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETTYPE_T2175930299_H
#ifndef PROPERTIES_T2921633695_H
#define PROPERTIES_T2921633695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpClient/Properties
struct  Properties_t2921633695 
{
public:
	// System.UInt32 System.Net.Sockets.TcpClient/Properties::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Properties_t2921633695, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTIES_T2921633695_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef THREADSTATE_T2533302383_H
#define THREADSTATE_T2533302383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2533302383 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2533302383, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATE_T2533302383_H
#ifndef CAMERACLEARFLAGS_T2362496923_H
#define CAMERACLEARFLAGS_T2362496923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t2362496923 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t2362496923, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T2362496923_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef DEPTHTEXTUREMODE_T4161834719_H
#define DEPTHTEXTUREMODE_T4161834719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t4161834719 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4161834719, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHTEXTUREMODE_T4161834719_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T4250555765_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef RENDERTEXTUREFORMAT_T962350765_H
#define RENDERTEXTUREFORMAT_T962350765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t962350765 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t962350765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T962350765_H
#ifndef RENDERTEXTUREMEMORYLESS_T852891252_H
#define RENDERTEXTUREMEMORYLESS_T852891252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t852891252 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t852891252, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREMEMORYLESS_T852891252_H
#ifndef RENDERTEXTUREREADWRITE_T1793271918_H
#define RENDERTEXTUREREADWRITE_T1793271918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureReadWrite
struct  RenderTextureReadWrite_t1793271918 
{
public:
	// System.Int32 UnityEngine.RenderTextureReadWrite::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureReadWrite_t1793271918, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREREADWRITE_T1793271918_H
#ifndef RENDERINGPATH_T883966888_H
#define RENDERINGPATH_T883966888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderingPath
struct  RenderingPath_t883966888 
{
public:
	// System.Int32 UnityEngine.RenderingPath::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderingPath_t883966888, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERINGPATH_T883966888_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef VRTEXTUREUSAGE_T3142149582_H
#define VRTEXTUREUSAGE_T3142149582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3142149582 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3142149582, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRTEXTUREUSAGE_T3142149582_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef PIXEL_FORMAT_T3209881435_H
#define PIXEL_FORMAT_T3209881435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t3209881435 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t3209881435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIXEL_FORMAT_T3209881435_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDCENTERMODE_T3672819471_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef INITSTATE_T3374939742_H
#define INITSTATE_T3374939742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime/InitState
struct  InitState_t3374939742 
{
public:
	// System.Int32 Vuforia.VuforiaRuntime/InitState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitState_t3374939742, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITSTATE_T3374939742_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITERROR_T3420749710_H
#ifndef WIN32EXCEPTION_T3234146298_H
#define WIN32EXCEPTION_T3234146298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t3234146298  : public ExternalException_t3544951457
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::native_error_code
	int32_t ___native_error_code_11;

public:
	inline static int32_t get_offset_of_native_error_code_11() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298, ___native_error_code_11)); }
	inline int32_t get_native_error_code_11() const { return ___native_error_code_11; }
	inline int32_t* get_address_of_native_error_code_11() { return &___native_error_code_11; }
	inline void set_native_error_code_11(int32_t value)
	{
		___native_error_code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T3234146298_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef IPADDRESS_T241777590_H
#define IPADDRESS_T241777590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t241777590  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t3326319531* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_11;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Address_0)); }
	inline int64_t get_m_Address_0() const { return ___m_Address_0; }
	inline int64_t* get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(int64_t value)
	{
		___m_Address_0 = value;
	}

	inline static int32_t get_offset_of_m_Family_1() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Family_1)); }
	inline int32_t get_m_Family_1() const { return ___m_Family_1; }
	inline int32_t* get_address_of_m_Family_1() { return &___m_Family_1; }
	inline void set_m_Family_1(int32_t value)
	{
		___m_Family_1 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_2() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Numbers_2)); }
	inline UInt16U5BU5D_t3326319531* get_m_Numbers_2() const { return ___m_Numbers_2; }
	inline UInt16U5BU5D_t3326319531** get_address_of_m_Numbers_2() { return &___m_Numbers_2; }
	inline void set_m_Numbers_2(UInt16U5BU5D_t3326319531* value)
	{
		___m_Numbers_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_2), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_3() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_ScopeId_3)); }
	inline int64_t get_m_ScopeId_3() const { return ___m_ScopeId_3; }
	inline int64_t* get_address_of_m_ScopeId_3() { return &___m_ScopeId_3; }
	inline void set_m_ScopeId_3(int64_t value)
	{
		___m_ScopeId_3 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_11() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_HashCode_11)); }
	inline int32_t get_m_HashCode_11() const { return ___m_HashCode_11; }
	inline int32_t* get_address_of_m_HashCode_11() { return &___m_HashCode_11; }
	inline void set_m_HashCode_11(int32_t value)
	{
		___m_HashCode_11 = value;
	}
};

struct IPAddress_t241777590_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t241777590 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t241777590 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t241777590 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t241777590 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t241777590 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t241777590 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t241777590 * ___IPv6None_10;

public:
	inline static int32_t get_offset_of_Any_4() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Any_4)); }
	inline IPAddress_t241777590 * get_Any_4() const { return ___Any_4; }
	inline IPAddress_t241777590 ** get_address_of_Any_4() { return &___Any_4; }
	inline void set_Any_4(IPAddress_t241777590 * value)
	{
		___Any_4 = value;
		Il2CppCodeGenWriteBarrier((&___Any_4), value);
	}

	inline static int32_t get_offset_of_Broadcast_5() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Broadcast_5)); }
	inline IPAddress_t241777590 * get_Broadcast_5() const { return ___Broadcast_5; }
	inline IPAddress_t241777590 ** get_address_of_Broadcast_5() { return &___Broadcast_5; }
	inline void set_Broadcast_5(IPAddress_t241777590 * value)
	{
		___Broadcast_5 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_5), value);
	}

	inline static int32_t get_offset_of_Loopback_6() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Loopback_6)); }
	inline IPAddress_t241777590 * get_Loopback_6() const { return ___Loopback_6; }
	inline IPAddress_t241777590 ** get_address_of_Loopback_6() { return &___Loopback_6; }
	inline void set_Loopback_6(IPAddress_t241777590 * value)
	{
		___Loopback_6 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_6), value);
	}

	inline static int32_t get_offset_of_None_7() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___None_7)); }
	inline IPAddress_t241777590 * get_None_7() const { return ___None_7; }
	inline IPAddress_t241777590 ** get_address_of_None_7() { return &___None_7; }
	inline void set_None_7(IPAddress_t241777590 * value)
	{
		___None_7 = value;
		Il2CppCodeGenWriteBarrier((&___None_7), value);
	}

	inline static int32_t get_offset_of_IPv6Any_8() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Any_8)); }
	inline IPAddress_t241777590 * get_IPv6Any_8() const { return ___IPv6Any_8; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Any_8() { return &___IPv6Any_8; }
	inline void set_IPv6Any_8(IPAddress_t241777590 * value)
	{
		___IPv6Any_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_8), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_9() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Loopback_9)); }
	inline IPAddress_t241777590 * get_IPv6Loopback_9() const { return ___IPv6Loopback_9; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Loopback_9() { return &___IPv6Loopback_9; }
	inline void set_IPv6Loopback_9(IPAddress_t241777590 * value)
	{
		___IPv6Loopback_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_9), value);
	}

	inline static int32_t get_offset_of_IPv6None_10() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6None_10)); }
	inline IPAddress_t241777590 * get_IPv6None_10() const { return ___IPv6None_10; }
	inline IPAddress_t241777590 ** get_address_of_IPv6None_10() { return &___IPv6None_10; }
	inline void set_IPv6None_10(IPAddress_t241777590 * value)
	{
		___IPv6None_10 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T241777590_H
#ifndef NETWORKSTREAM_T4071955934_H
#define NETWORKSTREAM_T4071955934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t4071955934  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access_1;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t1119025450 * ___socket_2;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket_3;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable_4;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___socket_2)); }
	inline Socket_t1119025450 * get_socket_2() const { return ___socket_2; }
	inline Socket_t1119025450 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t1119025450 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((&___socket_2), value);
	}

	inline static int32_t get_offset_of_owns_socket_3() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___owns_socket_3)); }
	inline bool get_owns_socket_3() const { return ___owns_socket_3; }
	inline bool* get_address_of_owns_socket_3() { return &___owns_socket_3; }
	inline void set_owns_socket_3(bool value)
	{
		___owns_socket_3 = value;
	}

	inline static int32_t get_offset_of_readable_4() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___readable_4)); }
	inline bool get_readable_4() const { return ___readable_4; }
	inline bool* get_address_of_readable_4() { return &___readable_4; }
	inline void set_readable_4(bool value)
	{
		___readable_4 = value;
	}

	inline static int32_t get_offset_of_writeable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___writeable_5)); }
	inline bool get_writeable_5() const { return ___writeable_5; }
	inline bool* get_address_of_writeable_5() { return &___writeable_5; }
	inline void set_writeable_5(bool value)
	{
		___writeable_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTREAM_T4071955934_H
#ifndef SOCKET_T1119025450_H
#define SOCKET_T1119025450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t1119025450  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t3637523393 * ___readQ_0;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t3637523393 * ___writeQ_1;
	// System.Boolean System.Net.Sockets.Socket::islistening
	bool ___islistening_2;
	// System.Boolean System.Net.Sockets.Socket::useoverlappedIO
	bool ___useoverlappedIO_3;
	// System.Int32 System.Net.Sockets.Socket::MinListenPort
	int32_t ___MinListenPort_4;
	// System.Int32 System.Net.Sockets.Socket::MaxListenPort
	int32_t ___MaxListenPort_5;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_8;
	// System.IntPtr System.Net.Sockets.Socket::socket
	intptr_t ___socket_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::address_family
	int32_t ___address_family_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socket_type
	int32_t ___socket_type_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocol_type
	int32_t ___protocol_type_12;
	// System.Boolean System.Net.Sockets.Socket::blocking
	bool ___blocking_13;
	// System.Threading.Thread System.Net.Sockets.Socket::blocking_thread
	Thread_t2300836069 * ___blocking_thread_14;
	// System.Boolean System.Net.Sockets.Socket::isbound
	bool ___isbound_15;
	// System.Int32 System.Net.Sockets.Socket::max_bind_count
	int32_t ___max_bind_count_17;
	// System.Boolean System.Net.Sockets.Socket::connected
	bool ___connected_18;
	// System.Boolean System.Net.Sockets.Socket::closed
	bool ___closed_19;
	// System.Boolean System.Net.Sockets.Socket::disposed
	bool ___disposed_20;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t982345378 * ___seed_endpoint_21;

public:
	inline static int32_t get_offset_of_readQ_0() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___readQ_0)); }
	inline Queue_t3637523393 * get_readQ_0() const { return ___readQ_0; }
	inline Queue_t3637523393 ** get_address_of_readQ_0() { return &___readQ_0; }
	inline void set_readQ_0(Queue_t3637523393 * value)
	{
		___readQ_0 = value;
		Il2CppCodeGenWriteBarrier((&___readQ_0), value);
	}

	inline static int32_t get_offset_of_writeQ_1() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___writeQ_1)); }
	inline Queue_t3637523393 * get_writeQ_1() const { return ___writeQ_1; }
	inline Queue_t3637523393 ** get_address_of_writeQ_1() { return &___writeQ_1; }
	inline void set_writeQ_1(Queue_t3637523393 * value)
	{
		___writeQ_1 = value;
		Il2CppCodeGenWriteBarrier((&___writeQ_1), value);
	}

	inline static int32_t get_offset_of_islistening_2() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___islistening_2)); }
	inline bool get_islistening_2() const { return ___islistening_2; }
	inline bool* get_address_of_islistening_2() { return &___islistening_2; }
	inline void set_islistening_2(bool value)
	{
		___islistening_2 = value;
	}

	inline static int32_t get_offset_of_useoverlappedIO_3() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___useoverlappedIO_3)); }
	inline bool get_useoverlappedIO_3() const { return ___useoverlappedIO_3; }
	inline bool* get_address_of_useoverlappedIO_3() { return &___useoverlappedIO_3; }
	inline void set_useoverlappedIO_3(bool value)
	{
		___useoverlappedIO_3 = value;
	}

	inline static int32_t get_offset_of_MinListenPort_4() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___MinListenPort_4)); }
	inline int32_t get_MinListenPort_4() const { return ___MinListenPort_4; }
	inline int32_t* get_address_of_MinListenPort_4() { return &___MinListenPort_4; }
	inline void set_MinListenPort_4(int32_t value)
	{
		___MinListenPort_4 = value;
	}

	inline static int32_t get_offset_of_MaxListenPort_5() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___MaxListenPort_5)); }
	inline int32_t get_MaxListenPort_5() const { return ___MaxListenPort_5; }
	inline int32_t* get_address_of_MaxListenPort_5() { return &___MaxListenPort_5; }
	inline void set_MaxListenPort_5(int32_t value)
	{
		___MaxListenPort_5 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_8() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___linger_timeout_8)); }
	inline int32_t get_linger_timeout_8() const { return ___linger_timeout_8; }
	inline int32_t* get_address_of_linger_timeout_8() { return &___linger_timeout_8; }
	inline void set_linger_timeout_8(int32_t value)
	{
		___linger_timeout_8 = value;
	}

	inline static int32_t get_offset_of_socket_9() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socket_9)); }
	inline intptr_t get_socket_9() const { return ___socket_9; }
	inline intptr_t* get_address_of_socket_9() { return &___socket_9; }
	inline void set_socket_9(intptr_t value)
	{
		___socket_9 = value;
	}

	inline static int32_t get_offset_of_address_family_10() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___address_family_10)); }
	inline int32_t get_address_family_10() const { return ___address_family_10; }
	inline int32_t* get_address_of_address_family_10() { return &___address_family_10; }
	inline void set_address_family_10(int32_t value)
	{
		___address_family_10 = value;
	}

	inline static int32_t get_offset_of_socket_type_11() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socket_type_11)); }
	inline int32_t get_socket_type_11() const { return ___socket_type_11; }
	inline int32_t* get_address_of_socket_type_11() { return &___socket_type_11; }
	inline void set_socket_type_11(int32_t value)
	{
		___socket_type_11 = value;
	}

	inline static int32_t get_offset_of_protocol_type_12() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___protocol_type_12)); }
	inline int32_t get_protocol_type_12() const { return ___protocol_type_12; }
	inline int32_t* get_address_of_protocol_type_12() { return &___protocol_type_12; }
	inline void set_protocol_type_12(int32_t value)
	{
		___protocol_type_12 = value;
	}

	inline static int32_t get_offset_of_blocking_13() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___blocking_13)); }
	inline bool get_blocking_13() const { return ___blocking_13; }
	inline bool* get_address_of_blocking_13() { return &___blocking_13; }
	inline void set_blocking_13(bool value)
	{
		___blocking_13 = value;
	}

	inline static int32_t get_offset_of_blocking_thread_14() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___blocking_thread_14)); }
	inline Thread_t2300836069 * get_blocking_thread_14() const { return ___blocking_thread_14; }
	inline Thread_t2300836069 ** get_address_of_blocking_thread_14() { return &___blocking_thread_14; }
	inline void set_blocking_thread_14(Thread_t2300836069 * value)
	{
		___blocking_thread_14 = value;
		Il2CppCodeGenWriteBarrier((&___blocking_thread_14), value);
	}

	inline static int32_t get_offset_of_isbound_15() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___isbound_15)); }
	inline bool get_isbound_15() const { return ___isbound_15; }
	inline bool* get_address_of_isbound_15() { return &___isbound_15; }
	inline void set_isbound_15(bool value)
	{
		___isbound_15 = value;
	}

	inline static int32_t get_offset_of_max_bind_count_17() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___max_bind_count_17)); }
	inline int32_t get_max_bind_count_17() const { return ___max_bind_count_17; }
	inline int32_t* get_address_of_max_bind_count_17() { return &___max_bind_count_17; }
	inline void set_max_bind_count_17(int32_t value)
	{
		___max_bind_count_17 = value;
	}

	inline static int32_t get_offset_of_connected_18() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___connected_18)); }
	inline bool get_connected_18() const { return ___connected_18; }
	inline bool* get_address_of_connected_18() { return &___connected_18; }
	inline void set_connected_18(bool value)
	{
		___connected_18 = value;
	}

	inline static int32_t get_offset_of_closed_19() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___closed_19)); }
	inline bool get_closed_19() const { return ___closed_19; }
	inline bool* get_address_of_closed_19() { return &___closed_19; }
	inline void set_closed_19(bool value)
	{
		___closed_19 = value;
	}

	inline static int32_t get_offset_of_disposed_20() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___disposed_20)); }
	inline bool get_disposed_20() const { return ___disposed_20; }
	inline bool* get_address_of_disposed_20() { return &___disposed_20; }
	inline void set_disposed_20(bool value)
	{
		___disposed_20 = value;
	}

	inline static int32_t get_offset_of_seed_endpoint_21() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___seed_endpoint_21)); }
	inline EndPoint_t982345378 * get_seed_endpoint_21() const { return ___seed_endpoint_21; }
	inline EndPoint_t982345378 ** get_address_of_seed_endpoint_21() { return &___seed_endpoint_21; }
	inline void set_seed_endpoint_21(EndPoint_t982345378 * value)
	{
		___seed_endpoint_21 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_21), value);
	}
};

struct Socket_t1119025450_StaticFields
{
public:
	// System.Int32 System.Net.Sockets.Socket::ipv4Supported
	int32_t ___ipv4Supported_6;
	// System.Int32 System.Net.Sockets.Socket::ipv6Supported
	int32_t ___ipv6Supported_7;
	// System.Int32 System.Net.Sockets.Socket::current_bind_count
	int32_t ___current_bind_count_16;
	// System.Reflection.MethodInfo System.Net.Sockets.Socket::check_socket_policy
	MethodInfo_t * ___check_socket_policy_22;

public:
	inline static int32_t get_offset_of_ipv4Supported_6() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ipv4Supported_6)); }
	inline int32_t get_ipv4Supported_6() const { return ___ipv4Supported_6; }
	inline int32_t* get_address_of_ipv4Supported_6() { return &___ipv4Supported_6; }
	inline void set_ipv4Supported_6(int32_t value)
	{
		___ipv4Supported_6 = value;
	}

	inline static int32_t get_offset_of_ipv6Supported_7() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ipv6Supported_7)); }
	inline int32_t get_ipv6Supported_7() const { return ___ipv6Supported_7; }
	inline int32_t* get_address_of_ipv6Supported_7() { return &___ipv6Supported_7; }
	inline void set_ipv6Supported_7(int32_t value)
	{
		___ipv6Supported_7 = value;
	}

	inline static int32_t get_offset_of_current_bind_count_16() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___current_bind_count_16)); }
	inline int32_t get_current_bind_count_16() const { return ___current_bind_count_16; }
	inline int32_t* get_address_of_current_bind_count_16() { return &___current_bind_count_16; }
	inline void set_current_bind_count_16(int32_t value)
	{
		___current_bind_count_16 = value;
	}

	inline static int32_t get_offset_of_check_socket_policy_22() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___check_socket_policy_22)); }
	inline MethodInfo_t * get_check_socket_policy_22() const { return ___check_socket_policy_22; }
	inline MethodInfo_t ** get_address_of_check_socket_policy_22() { return &___check_socket_policy_22; }
	inline void set_check_socket_policy_22(MethodInfo_t * value)
	{
		___check_socket_policy_22 = value;
		Il2CppCodeGenWriteBarrier((&___check_socket_policy_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T1119025450_H
#ifndef TCPCLIENT_T822906377_H
#define TCPCLIENT_T822906377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpClient
struct  TcpClient_t822906377  : public RuntimeObject
{
public:
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::stream
	NetworkStream_t4071955934 * ___stream_0;
	// System.Boolean System.Net.Sockets.TcpClient::active
	bool ___active_1;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::client
	Socket_t1119025450 * ___client_2;
	// System.Boolean System.Net.Sockets.TcpClient::disposed
	bool ___disposed_3;
	// System.Net.Sockets.TcpClient/Properties System.Net.Sockets.TcpClient::values
	uint32_t ___values_4;
	// System.Int32 System.Net.Sockets.TcpClient::recv_timeout
	int32_t ___recv_timeout_5;
	// System.Int32 System.Net.Sockets.TcpClient::send_timeout
	int32_t ___send_timeout_6;
	// System.Int32 System.Net.Sockets.TcpClient::recv_buffer_size
	int32_t ___recv_buffer_size_7;
	// System.Int32 System.Net.Sockets.TcpClient::send_buffer_size
	int32_t ___send_buffer_size_8;
	// System.Net.Sockets.LingerOption System.Net.Sockets.TcpClient::linger_state
	LingerOption_t2688985448 * ___linger_state_9;
	// System.Boolean System.Net.Sockets.TcpClient::no_delay
	bool ___no_delay_10;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___stream_0)); }
	inline NetworkStream_t4071955934 * get_stream_0() const { return ___stream_0; }
	inline NetworkStream_t4071955934 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(NetworkStream_t4071955934 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___stream_0), value);
	}

	inline static int32_t get_offset_of_active_1() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___active_1)); }
	inline bool get_active_1() const { return ___active_1; }
	inline bool* get_address_of_active_1() { return &___active_1; }
	inline void set_active_1(bool value)
	{
		___active_1 = value;
	}

	inline static int32_t get_offset_of_client_2() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___client_2)); }
	inline Socket_t1119025450 * get_client_2() const { return ___client_2; }
	inline Socket_t1119025450 ** get_address_of_client_2() { return &___client_2; }
	inline void set_client_2(Socket_t1119025450 * value)
	{
		___client_2 = value;
		Il2CppCodeGenWriteBarrier((&___client_2), value);
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_values_4() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___values_4)); }
	inline uint32_t get_values_4() const { return ___values_4; }
	inline uint32_t* get_address_of_values_4() { return &___values_4; }
	inline void set_values_4(uint32_t value)
	{
		___values_4 = value;
	}

	inline static int32_t get_offset_of_recv_timeout_5() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___recv_timeout_5)); }
	inline int32_t get_recv_timeout_5() const { return ___recv_timeout_5; }
	inline int32_t* get_address_of_recv_timeout_5() { return &___recv_timeout_5; }
	inline void set_recv_timeout_5(int32_t value)
	{
		___recv_timeout_5 = value;
	}

	inline static int32_t get_offset_of_send_timeout_6() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___send_timeout_6)); }
	inline int32_t get_send_timeout_6() const { return ___send_timeout_6; }
	inline int32_t* get_address_of_send_timeout_6() { return &___send_timeout_6; }
	inline void set_send_timeout_6(int32_t value)
	{
		___send_timeout_6 = value;
	}

	inline static int32_t get_offset_of_recv_buffer_size_7() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___recv_buffer_size_7)); }
	inline int32_t get_recv_buffer_size_7() const { return ___recv_buffer_size_7; }
	inline int32_t* get_address_of_recv_buffer_size_7() { return &___recv_buffer_size_7; }
	inline void set_recv_buffer_size_7(int32_t value)
	{
		___recv_buffer_size_7 = value;
	}

	inline static int32_t get_offset_of_send_buffer_size_8() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___send_buffer_size_8)); }
	inline int32_t get_send_buffer_size_8() const { return ___send_buffer_size_8; }
	inline int32_t* get_address_of_send_buffer_size_8() { return &___send_buffer_size_8; }
	inline void set_send_buffer_size_8(int32_t value)
	{
		___send_buffer_size_8 = value;
	}

	inline static int32_t get_offset_of_linger_state_9() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___linger_state_9)); }
	inline LingerOption_t2688985448 * get_linger_state_9() const { return ___linger_state_9; }
	inline LingerOption_t2688985448 ** get_address_of_linger_state_9() { return &___linger_state_9; }
	inline void set_linger_state_9(LingerOption_t2688985448 * value)
	{
		___linger_state_9 = value;
		Il2CppCodeGenWriteBarrier((&___linger_state_9), value);
	}

	inline static int32_t get_offset_of_no_delay_10() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___no_delay_10)); }
	inline bool get_no_delay_10() const { return ___no_delay_10; }
	inline bool* get_address_of_no_delay_10() { return &___no_delay_10; }
	inline void set_no_delay_10(bool value)
	{
		___no_delay_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPCLIENT_T822906377_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t1748372627 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___ec_to_set_37)); }
	inline ExecutionContext_t1748372627 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t1748372627 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t1748372627 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1853889766 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1853889766 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1853889766 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1853889766 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2843939325* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t1748372627 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2843939325* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2843939325** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2843939325* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t1748372627 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t1748372627 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t1748372627 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_5), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t2129269699 * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t2129269699 * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_13;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_14;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_13)); }
	inline bool get_showKeyboardFocus_13() const { return ___showKeyboardFocus_13; }
	inline bool* get_address_of_showKeyboardFocus_13() { return &___showKeyboardFocus_13; }
	inline void set_showKeyboardFocus_13(bool value)
	{
		___showKeyboardFocus_13 = value;
	}

	inline static int32_t get_offset_of_s_None_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_14)); }
	inline GUIStyle_t3956901511 * get_s_None_14() const { return ___s_None_14; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_14() { return &___s_None_14; }
	inline void set_s_None_14(GUIStyle_t3956901511 * value)
	{
		___s_None_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
};
#endif // GUISTYLE_T3956901511_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef CAMERADEVICE_T960297568_H
#define CAMERADEVICE_T960297568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_t960297568  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDevice::mCameraImages
	Dictionary_2_t3630620928 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDevice::mForcedCameraFormats
	List_1_t386988881 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDevice::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDevice::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDevice::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDevice::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDevice::mCameraActive
	bool ___mCameraActive_12;
	// System.Boolean Vuforia.CameraDevice::mIsCameraMocked
	bool ___mIsCameraMocked_13;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraImages_1)); }
	inline Dictionary_2_t3630620928 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t3630620928 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t3630620928 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraImages_1), value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mForcedCameraFormats_2)); }
	inline List_1_t386988881 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_t386988881 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_t386988881 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___mForcedCameraFormats_2), value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeData_9)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}

	inline static int32_t get_offset_of_mIsCameraMocked_13() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsCameraMocked_13)); }
	inline bool get_mIsCameraMocked_13() const { return ___mIsCameraMocked_13; }
	inline bool* get_address_of_mIsCameraMocked_13() { return &___mIsCameraMocked_13; }
	inline void set_mIsCameraMocked_13(bool value)
	{
		___mIsCameraMocked_13 = value;
	}
};

struct CameraDevice_t960297568_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_t960297568 * ___mInstance_0;
	// Vuforia.IWebCam Vuforia.CameraDevice::mWebCam
	RuntimeObject* ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mInstance_0)); }
	inline CameraDevice_t960297568 * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_t960297568 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_t960297568 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}

	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mWebCam_3)); }
	inline RuntimeObject* get_mWebCam_3() const { return ___mWebCam_3; }
	inline RuntimeObject** get_address_of_mWebCam_3() { return &___mWebCam_3; }
	inline void set_mWebCam_3(RuntimeObject* value)
	{
		___mWebCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_T960297568_H
#ifndef IMAGE_T745056343_H
#define IMAGE_T745056343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image
struct  Image_t745056343  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Image::mWidth
	int32_t ___mWidth_0;
	// System.Int32 Vuforia.Image::mHeight
	int32_t ___mHeight_1;
	// System.Int32 Vuforia.Image::mStride
	int32_t ___mStride_2;
	// System.Int32 Vuforia.Image::mBufferWidth
	int32_t ___mBufferWidth_3;
	// System.Int32 Vuforia.Image::mBufferHeight
	int32_t ___mBufferHeight_4;
	// Vuforia.Image/PIXEL_FORMAT Vuforia.Image::mPixelFormat
	int32_t ___mPixelFormat_5;
	// System.Byte[] Vuforia.Image::mData
	ByteU5BU5D_t4116647657* ___mData_6;
	// System.IntPtr Vuforia.Image::mUnmanagedData
	intptr_t ___mUnmanagedData_7;
	// System.Boolean Vuforia.Image::mDataSet
	bool ___mDataSet_8;
	// UnityEngine.Color32[] Vuforia.Image::mPixel32
	Color32U5BU5D_t3850468773* ___mPixel32_9;

public:
	inline static int32_t get_offset_of_mWidth_0() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mWidth_0)); }
	inline int32_t get_mWidth_0() const { return ___mWidth_0; }
	inline int32_t* get_address_of_mWidth_0() { return &___mWidth_0; }
	inline void set_mWidth_0(int32_t value)
	{
		___mWidth_0 = value;
	}

	inline static int32_t get_offset_of_mHeight_1() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mHeight_1)); }
	inline int32_t get_mHeight_1() const { return ___mHeight_1; }
	inline int32_t* get_address_of_mHeight_1() { return &___mHeight_1; }
	inline void set_mHeight_1(int32_t value)
	{
		___mHeight_1 = value;
	}

	inline static int32_t get_offset_of_mStride_2() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mStride_2)); }
	inline int32_t get_mStride_2() const { return ___mStride_2; }
	inline int32_t* get_address_of_mStride_2() { return &___mStride_2; }
	inline void set_mStride_2(int32_t value)
	{
		___mStride_2 = value;
	}

	inline static int32_t get_offset_of_mBufferWidth_3() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferWidth_3)); }
	inline int32_t get_mBufferWidth_3() const { return ___mBufferWidth_3; }
	inline int32_t* get_address_of_mBufferWidth_3() { return &___mBufferWidth_3; }
	inline void set_mBufferWidth_3(int32_t value)
	{
		___mBufferWidth_3 = value;
	}

	inline static int32_t get_offset_of_mBufferHeight_4() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferHeight_4)); }
	inline int32_t get_mBufferHeight_4() const { return ___mBufferHeight_4; }
	inline int32_t* get_address_of_mBufferHeight_4() { return &___mBufferHeight_4; }
	inline void set_mBufferHeight_4(int32_t value)
	{
		___mBufferHeight_4 = value;
	}

	inline static int32_t get_offset_of_mPixelFormat_5() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixelFormat_5)); }
	inline int32_t get_mPixelFormat_5() const { return ___mPixelFormat_5; }
	inline int32_t* get_address_of_mPixelFormat_5() { return &___mPixelFormat_5; }
	inline void set_mPixelFormat_5(int32_t value)
	{
		___mPixelFormat_5 = value;
	}

	inline static int32_t get_offset_of_mData_6() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mData_6)); }
	inline ByteU5BU5D_t4116647657* get_mData_6() const { return ___mData_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_mData_6() { return &___mData_6; }
	inline void set_mData_6(ByteU5BU5D_t4116647657* value)
	{
		___mData_6 = value;
		Il2CppCodeGenWriteBarrier((&___mData_6), value);
	}

	inline static int32_t get_offset_of_mUnmanagedData_7() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mUnmanagedData_7)); }
	inline intptr_t get_mUnmanagedData_7() const { return ___mUnmanagedData_7; }
	inline intptr_t* get_address_of_mUnmanagedData_7() { return &___mUnmanagedData_7; }
	inline void set_mUnmanagedData_7(intptr_t value)
	{
		___mUnmanagedData_7 = value;
	}

	inline static int32_t get_offset_of_mDataSet_8() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mDataSet_8)); }
	inline bool get_mDataSet_8() const { return ___mDataSet_8; }
	inline bool* get_address_of_mDataSet_8() { return &___mDataSet_8; }
	inline void set_mDataSet_8(bool value)
	{
		___mDataSet_8 = value;
	}

	inline static int32_t get_offset_of_mPixel32_9() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixel32_9)); }
	inline Color32U5BU5D_t3850468773* get_mPixel32_9() const { return ___mPixel32_9; }
	inline Color32U5BU5D_t3850468773** get_address_of_mPixel32_9() { return &___mPixel32_9; }
	inline void set_mPixel32_9(Color32U5BU5D_t3850468773* value)
	{
		___mPixel32_9 = value;
		Il2CppCodeGenWriteBarrier((&___mPixel32_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T745056343_H
#ifndef VUFORIAARCONTROLLER_T1876945237_H
#define VUFORIAARCONTROLLER_T1876945237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t1876945237  : public ARController_t116632334
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t905170877 * ___mVideoBgEventHandlers_9;
	// System.Action Vuforia.VuforiaARController::mOnBeforeVuforiaTrackersInitialized
	Action_t1264377477 * ___mOnBeforeVuforiaTrackersInitialized_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t1264377477 * ___mOnVuforiaInitialized_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t1264377477 * ___mOnVuforiaStarted_12;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t1264377477 * ___mOnVuforiaDeinitialized_13;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t1264377477 * ___mOnTrackablesUpdated_14;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t1264377477 * ___mRenderOnUpdate_15;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_t269755560 * ___mOnPause_16;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_17;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t1264377477 * ___mOnBackgroundTextureChanged_18;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_19;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_20;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_21;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mEyewearBehaviour_22;
	// Vuforia.VideoBackgroundManager Vuforia.VuforiaARController::mVideoBackgroundMgr
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundMgr_23;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_24;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_t340375123 * ___mClearMaterial_25;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_26;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_27;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_28;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_29;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_30;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_31;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_8), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBgEventHandlers_9)); }
	inline List_1_t905170877 * get_mVideoBgEventHandlers_9() const { return ___mVideoBgEventHandlers_9; }
	inline List_1_t905170877 ** get_address_of_mVideoBgEventHandlers_9() { return &___mVideoBgEventHandlers_9; }
	inline void set_mVideoBgEventHandlers_9(List_1_t905170877 * value)
	{
		___mVideoBgEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_9), value);
	}

	inline static int32_t get_offset_of_mOnBeforeVuforiaTrackersInitialized_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBeforeVuforiaTrackersInitialized_10)); }
	inline Action_t1264377477 * get_mOnBeforeVuforiaTrackersInitialized_10() const { return ___mOnBeforeVuforiaTrackersInitialized_10; }
	inline Action_t1264377477 ** get_address_of_mOnBeforeVuforiaTrackersInitialized_10() { return &___mOnBeforeVuforiaTrackersInitialized_10; }
	inline void set_mOnBeforeVuforiaTrackersInitialized_10(Action_t1264377477 * value)
	{
		___mOnBeforeVuforiaTrackersInitialized_10 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBeforeVuforiaTrackersInitialized_10), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaInitialized_11)); }
	inline Action_t1264377477 * get_mOnVuforiaInitialized_11() const { return ___mOnVuforiaInitialized_11; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaInitialized_11() { return &___mOnVuforiaInitialized_11; }
	inline void set_mOnVuforiaInitialized_11(Action_t1264377477 * value)
	{
		___mOnVuforiaInitialized_11 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_11), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaStarted_12)); }
	inline Action_t1264377477 * get_mOnVuforiaStarted_12() const { return ___mOnVuforiaStarted_12; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaStarted_12() { return &___mOnVuforiaStarted_12; }
	inline void set_mOnVuforiaStarted_12(Action_t1264377477 * value)
	{
		___mOnVuforiaStarted_12 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_12), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaDeinitialized_13)); }
	inline Action_t1264377477 * get_mOnVuforiaDeinitialized_13() const { return ___mOnVuforiaDeinitialized_13; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaDeinitialized_13() { return &___mOnVuforiaDeinitialized_13; }
	inline void set_mOnVuforiaDeinitialized_13(Action_t1264377477 * value)
	{
		___mOnVuforiaDeinitialized_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaDeinitialized_13), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnTrackablesUpdated_14)); }
	inline Action_t1264377477 * get_mOnTrackablesUpdated_14() const { return ___mOnTrackablesUpdated_14; }
	inline Action_t1264377477 ** get_address_of_mOnTrackablesUpdated_14() { return &___mOnTrackablesUpdated_14; }
	inline void set_mOnTrackablesUpdated_14(Action_t1264377477 * value)
	{
		___mOnTrackablesUpdated_14 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_14), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mRenderOnUpdate_15)); }
	inline Action_t1264377477 * get_mRenderOnUpdate_15() const { return ___mRenderOnUpdate_15; }
	inline Action_t1264377477 ** get_address_of_mRenderOnUpdate_15() { return &___mRenderOnUpdate_15; }
	inline void set_mRenderOnUpdate_15(Action_t1264377477 * value)
	{
		___mRenderOnUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_15), value);
	}

	inline static int32_t get_offset_of_mOnPause_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnPause_16)); }
	inline Action_1_t269755560 * get_mOnPause_16() const { return ___mOnPause_16; }
	inline Action_1_t269755560 ** get_address_of_mOnPause_16() { return &___mOnPause_16; }
	inline void set_mOnPause_16(Action_1_t269755560 * value)
	{
		___mOnPause_16 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_16), value);
	}

	inline static int32_t get_offset_of_mPaused_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mPaused_17)); }
	inline bool get_mPaused_17() const { return ___mPaused_17; }
	inline bool* get_address_of_mPaused_17() { return &___mPaused_17; }
	inline void set_mPaused_17(bool value)
	{
		___mPaused_17 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBackgroundTextureChanged_18)); }
	inline Action_t1264377477 * get_mOnBackgroundTextureChanged_18() const { return ___mOnBackgroundTextureChanged_18; }
	inline Action_t1264377477 ** get_address_of_mOnBackgroundTextureChanged_18() { return &___mOnBackgroundTextureChanged_18; }
	inline void set_mOnBackgroundTextureChanged_18(Action_t1264377477 * value)
	{
		___mOnBackgroundTextureChanged_18 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_18), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mStartHasBeenInvoked_19)); }
	inline bool get_mStartHasBeenInvoked_19() const { return ___mStartHasBeenInvoked_19; }
	inline bool* get_address_of_mStartHasBeenInvoked_19() { return &___mStartHasBeenInvoked_19; }
	inline void set_mStartHasBeenInvoked_19(bool value)
	{
		___mStartHasBeenInvoked_19 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStarted_20)); }
	inline bool get_mHasStarted_20() const { return ___mHasStarted_20; }
	inline bool* get_address_of_mHasStarted_20() { return &___mHasStarted_20; }
	inline void set_mHasStarted_20(bool value)
	{
		___mHasStarted_20 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCameraConfiguration_21)); }
	inline RuntimeObject* get_mCameraConfiguration_21() const { return ___mCameraConfiguration_21; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_21() { return &___mCameraConfiguration_21; }
	inline void set_mCameraConfiguration_21(RuntimeObject* value)
	{
		___mCameraConfiguration_21 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_21), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mEyewearBehaviour_22)); }
	inline DigitalEyewearARController_t1054226036 * get_mEyewearBehaviour_22() const { return ___mEyewearBehaviour_22; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mEyewearBehaviour_22() { return &___mEyewearBehaviour_22; }
	inline void set_mEyewearBehaviour_22(DigitalEyewearARController_t1054226036 * value)
	{
		___mEyewearBehaviour_22 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_22), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBackgroundMgr_23)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundMgr_23() const { return ___mVideoBackgroundMgr_23; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundMgr_23() { return &___mVideoBackgroundMgr_23; }
	inline void set_mVideoBackgroundMgr_23(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundMgr_23 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundMgr_23), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCheckStopCamera_24)); }
	inline bool get_mCheckStopCamera_24() const { return ___mCheckStopCamera_24; }
	inline bool* get_address_of_mCheckStopCamera_24() { return &___mCheckStopCamera_24; }
	inline void set_mCheckStopCamera_24(bool value)
	{
		___mCheckStopCamera_24 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mClearMaterial_25)); }
	inline Material_t340375123 * get_mClearMaterial_25() const { return ___mClearMaterial_25; }
	inline Material_t340375123 ** get_address_of_mClearMaterial_25() { return &___mClearMaterial_25; }
	inline void set_mClearMaterial_25(Material_t340375123 * value)
	{
		___mClearMaterial_25 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_25), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMetalRendering_26)); }
	inline bool get_mMetalRendering_26() const { return ___mMetalRendering_26; }
	inline bool* get_address_of_mMetalRendering_26() { return &___mMetalRendering_26; }
	inline void set_mMetalRendering_26(bool value)
	{
		___mMetalRendering_26 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStartedOnce_27)); }
	inline bool get_mHasStartedOnce_27() const { return ___mHasStartedOnce_27; }
	inline bool* get_address_of_mHasStartedOnce_27() { return &___mHasStartedOnce_27; }
	inline void set_mHasStartedOnce_27(bool value)
	{
		___mHasStartedOnce_27 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWasEnabledBeforePause_28)); }
	inline bool get_mWasEnabledBeforePause_28() const { return ___mWasEnabledBeforePause_28; }
	inline bool* get_address_of_mWasEnabledBeforePause_28() { return &___mWasEnabledBeforePause_28; }
	inline void set_mWasEnabledBeforePause_28(bool value)
	{
		___mWasEnabledBeforePause_28 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforePause_29)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_29() const { return ___mObjectTrackerWasActiveBeforePause_29; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_29() { return &___mObjectTrackerWasActiveBeforePause_29; }
	inline void set_mObjectTrackerWasActiveBeforePause_29(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_29 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforeDisabling_30)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_30() const { return ___mObjectTrackerWasActiveBeforeDisabling_30; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_30() { return &___mObjectTrackerWasActiveBeforeDisabling_30; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_30(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_30 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mLastUpdatedFrame_31)); }
	inline int32_t get_mLastUpdatedFrame_31() const { return ___mLastUpdatedFrame_31; }
	inline int32_t* get_address_of_mLastUpdatedFrame_31() { return &___mLastUpdatedFrame_31; }
	inline void set_mLastUpdatedFrame_31(int32_t value)
	{
		___mLastUpdatedFrame_31 = value;
	}
};

struct VuforiaARController_t1876945237_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t1876945237 * ___mInstance_32;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_33;

public:
	inline static int32_t get_offset_of_mInstance_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mInstance_32)); }
	inline VuforiaARController_t1876945237 * get_mInstance_32() const { return ___mInstance_32; }
	inline VuforiaARController_t1876945237 ** get_address_of_mInstance_32() { return &___mInstance_32; }
	inline void set_mInstance_32(VuforiaARController_t1876945237 * value)
	{
		___mInstance_32 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_32), value);
	}

	inline static int32_t get_offset_of_mPadlock_33() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mPadlock_33)); }
	inline RuntimeObject * get_mPadlock_33() const { return ___mPadlock_33; }
	inline RuntimeObject ** get_address_of_mPadlock_33() { return &___mPadlock_33; }
	inline void set_mPadlock_33(RuntimeObject * value)
	{
		___mPadlock_33 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAARCONTROLLER_T1876945237_H
#ifndef GENERICVUFORIACONFIGURATION_T3697830469_H
#define GENERICVUFORIACONFIGURATION_T3697830469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3697830469  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_9;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::version
	String_t* ___version_10;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}

	inline static int32_t get_offset_of_version_10() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___version_10)); }
	inline String_t* get_version_10() const { return ___version_10; }
	inline String_t** get_address_of_version_10() { return &___version_10; }
	inline void set_version_10(String_t* value)
	{
		___version_10 = value;
		Il2CppCodeGenWriteBarrier((&___version_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICVUFORIACONFIGURATION_T3697830469_H
#ifndef VUFORIARUNTIME_T1949122020_H
#define VUFORIARUNTIME_T1949122020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t1949122020  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t3593217305 * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// Vuforia.VuforiaRuntime/InitState Vuforia.VuforiaRuntime::mInitState
	int32_t ___mInitState_4;
	// System.Boolean Vuforia.VuforiaRuntime::mInitThreadReturned
	bool ___mInitThreadReturned_5;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mReturnedError
	int32_t ___mReturnedError_6;
	// System.Boolean Vuforia.VuforiaRuntime::mAppIsQuitting
	bool ___mAppIsQuitting_9;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mOnVuforiaInitError_1)); }
	inline Action_1_t3593217305 * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_t3593217305 ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_t3593217305 * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_1), value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mInitState_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitState_4)); }
	inline int32_t get_mInitState_4() const { return ___mInitState_4; }
	inline int32_t* get_address_of_mInitState_4() { return &___mInitState_4; }
	inline void set_mInitState_4(int32_t value)
	{
		___mInitState_4 = value;
	}

	inline static int32_t get_offset_of_mInitThreadReturned_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitThreadReturned_5)); }
	inline bool get_mInitThreadReturned_5() const { return ___mInitThreadReturned_5; }
	inline bool* get_address_of_mInitThreadReturned_5() { return &___mInitThreadReturned_5; }
	inline void set_mInitThreadReturned_5(bool value)
	{
		___mInitThreadReturned_5 = value;
	}

	inline static int32_t get_offset_of_mReturnedError_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mReturnedError_6)); }
	inline int32_t get_mReturnedError_6() const { return ___mReturnedError_6; }
	inline int32_t* get_address_of_mReturnedError_6() { return &___mReturnedError_6; }
	inline void set_mReturnedError_6(int32_t value)
	{
		___mReturnedError_6 = value;
	}

	inline static int32_t get_offset_of_mAppIsQuitting_9() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mAppIsQuitting_9)); }
	inline bool get_mAppIsQuitting_9() const { return ___mAppIsQuitting_9; }
	inline bool* get_address_of_mAppIsQuitting_9() { return &___mAppIsQuitting_9; }
	inline void set_mAppIsQuitting_9(bool value)
	{
		___mAppIsQuitting_9 = value;
	}
};

struct VuforiaRuntime_t1949122020_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t1949122020 * ___mInstance_7;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_8;

public:
	inline static int32_t get_offset_of_mInstance_7() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mInstance_7)); }
	inline VuforiaRuntime_t1949122020 * get_mInstance_7() const { return ___mInstance_7; }
	inline VuforiaRuntime_t1949122020 ** get_address_of_mInstance_7() { return &___mInstance_7; }
	inline void set_mInstance_7(VuforiaRuntime_t1949122020 * value)
	{
		___mInstance_7 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_7), value);
	}

	inline static int32_t get_offset_of_mPadlock_8() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mPadlock_8)); }
	inline RuntimeObject * get_mPadlock_8() const { return ___mPadlock_8; }
	inline RuntimeObject ** get_address_of_mPadlock_8() { return &___mPadlock_8; }
	inline void set_mPadlock_8(RuntimeObject * value)
	{
		___mPadlock_8 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIME_T1949122020_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_1_T269755560_H
#define ACTION_1_T269755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t269755560  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T269755560_H
#ifndef ACTION_1_T3593217305_H
#define ACTION_1_T3593217305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct  Action_1_t3593217305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3593217305_H
#ifndef FUNC_2_T1573880443_H
#define FUNC_2_T1573880443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<Loom/DelayedQueueItem,System.Boolean>
struct  Func_2_t1573880443  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1573880443_H
#ifndef SOCKETEXCEPTION_T3852068672_H
#define SOCKETEXCEPTION_T3852068672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketException
struct  SocketException_t3852068672  : public Win32Exception_t3234146298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETEXCEPTION_T3852068672_H
#ifndef WAITCALLBACK_T2448485498_H
#define WAITCALLBACK_T2448485498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t2448485498  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T2448485498_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_6;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_7;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_8;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_9;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_10;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_11;

public:
	inline static int32_t get_offset_of_vuforia_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_6)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_6() const { return ___vuforia_6; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_6() { return &___vuforia_6; }
	inline void set_vuforia_6(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_6 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_6), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_7)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_7() const { return ___digitalEyewear_7; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_7() { return &___digitalEyewear_7; }
	inline void set_digitalEyewear_7(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_7 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_7), value);
	}

	inline static int32_t get_offset_of_videoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_8)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_8() const { return ___videoBackground_8; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_8() { return &___videoBackground_8; }
	inline void set_videoBackground_8(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_8 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_8), value);
	}

	inline static int32_t get_offset_of_deviceTracker_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_9)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_9() const { return ___deviceTracker_9; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_9() { return &___deviceTracker_9; }
	inline void set_deviceTracker_9(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_9 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_9), value);
	}

	inline static int32_t get_offset_of_smartTerrain_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_10)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_10() const { return ___smartTerrain_10; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_10() { return &___smartTerrain_10; }
	inline void set_smartTerrain_10(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_10 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_10), value);
	}

	inline static int32_t get_offset_of_webcam_11() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_11)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_11() const { return ___webcam_11; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_11() { return &___webcam_11; }
	inline void set_webcam_11(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_11 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_11), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_4;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_5;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_4)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_4), value);
	}

	inline static int32_t get_offset_of_mPadlock_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_5)); }
	inline RuntimeObject * get_mPadlock_5() const { return ___mPadlock_5; }
	inline RuntimeObject ** get_address_of_mPadlock_5() { return &___mPadlock_5; }
	inline void set_mPadlock_5(RuntimeObject * value)
	{
		___mPadlock_5 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERAFEED_T1617299256_H
#define CAMERAFEED_T1617299256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFeed
struct  CameraFeed_t1617299256  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Renderer CameraFeed::rend
	Renderer_t2627027031 * ___rend_4;
	// UnityEngine.Vector3 CameraFeed::videoTexSize
	Vector3_t3722313464  ___videoTexSize_5;
	// Vuforia.Image CameraFeed::image
	Image_t745056343 * ___image_6;
	// Vuforia.Image/PIXEL_FORMAT CameraFeed::mPixelFormat
	int32_t ___mPixelFormat_7;
	// System.Boolean CameraFeed::mAccessCameraImage
	bool ___mAccessCameraImage_8;
	// System.Boolean CameraFeed::mFormatRegistered
	bool ___mFormatRegistered_9;

public:
	inline static int32_t get_offset_of_rend_4() { return static_cast<int32_t>(offsetof(CameraFeed_t1617299256, ___rend_4)); }
	inline Renderer_t2627027031 * get_rend_4() const { return ___rend_4; }
	inline Renderer_t2627027031 ** get_address_of_rend_4() { return &___rend_4; }
	inline void set_rend_4(Renderer_t2627027031 * value)
	{
		___rend_4 = value;
		Il2CppCodeGenWriteBarrier((&___rend_4), value);
	}

	inline static int32_t get_offset_of_videoTexSize_5() { return static_cast<int32_t>(offsetof(CameraFeed_t1617299256, ___videoTexSize_5)); }
	inline Vector3_t3722313464  get_videoTexSize_5() const { return ___videoTexSize_5; }
	inline Vector3_t3722313464 * get_address_of_videoTexSize_5() { return &___videoTexSize_5; }
	inline void set_videoTexSize_5(Vector3_t3722313464  value)
	{
		___videoTexSize_5 = value;
	}

	inline static int32_t get_offset_of_image_6() { return static_cast<int32_t>(offsetof(CameraFeed_t1617299256, ___image_6)); }
	inline Image_t745056343 * get_image_6() const { return ___image_6; }
	inline Image_t745056343 ** get_address_of_image_6() { return &___image_6; }
	inline void set_image_6(Image_t745056343 * value)
	{
		___image_6 = value;
		Il2CppCodeGenWriteBarrier((&___image_6), value);
	}

	inline static int32_t get_offset_of_mPixelFormat_7() { return static_cast<int32_t>(offsetof(CameraFeed_t1617299256, ___mPixelFormat_7)); }
	inline int32_t get_mPixelFormat_7() const { return ___mPixelFormat_7; }
	inline int32_t* get_address_of_mPixelFormat_7() { return &___mPixelFormat_7; }
	inline void set_mPixelFormat_7(int32_t value)
	{
		___mPixelFormat_7 = value;
	}

	inline static int32_t get_offset_of_mAccessCameraImage_8() { return static_cast<int32_t>(offsetof(CameraFeed_t1617299256, ___mAccessCameraImage_8)); }
	inline bool get_mAccessCameraImage_8() const { return ___mAccessCameraImage_8; }
	inline bool* get_address_of_mAccessCameraImage_8() { return &___mAccessCameraImage_8; }
	inline void set_mAccessCameraImage_8(bool value)
	{
		___mAccessCameraImage_8 = value;
	}

	inline static int32_t get_offset_of_mFormatRegistered_9() { return static_cast<int32_t>(offsetof(CameraFeed_t1617299256, ___mFormatRegistered_9)); }
	inline bool get_mFormatRegistered_9() const { return ___mFormatRegistered_9; }
	inline bool* get_address_of_mFormatRegistered_9() { return &___mFormatRegistered_9; }
	inline void set_mFormatRegistered_9(bool value)
	{
		___mFormatRegistered_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAFEED_T1617299256_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_4;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef LOOM_T3759828253_H
#define LOOM_T3759828253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loom
struct  Loom_t3759828253  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Loom::_count
	int32_t ____count_7;
	// System.Collections.Generic.List`1<System.Action> Loom::_actions
	List_1_t2736452219 * ____actions_9;
	// System.Collections.Generic.List`1<Loom/DelayedQueueItem> Loom::_delayed
	List_1_t2499617678 * ____delayed_10;
	// System.Collections.Generic.List`1<Loom/DelayedQueueItem> Loom::_currentDelayed
	List_1_t2499617678 * ____currentDelayed_11;
	// System.Collections.Generic.List`1<System.Action> Loom::_currentActions
	List_1_t2736452219 * ____currentActions_12;

public:
	inline static int32_t get_offset_of__count_7() { return static_cast<int32_t>(offsetof(Loom_t3759828253, ____count_7)); }
	inline int32_t get__count_7() const { return ____count_7; }
	inline int32_t* get_address_of__count_7() { return &____count_7; }
	inline void set__count_7(int32_t value)
	{
		____count_7 = value;
	}

	inline static int32_t get_offset_of__actions_9() { return static_cast<int32_t>(offsetof(Loom_t3759828253, ____actions_9)); }
	inline List_1_t2736452219 * get__actions_9() const { return ____actions_9; }
	inline List_1_t2736452219 ** get_address_of__actions_9() { return &____actions_9; }
	inline void set__actions_9(List_1_t2736452219 * value)
	{
		____actions_9 = value;
		Il2CppCodeGenWriteBarrier((&____actions_9), value);
	}

	inline static int32_t get_offset_of__delayed_10() { return static_cast<int32_t>(offsetof(Loom_t3759828253, ____delayed_10)); }
	inline List_1_t2499617678 * get__delayed_10() const { return ____delayed_10; }
	inline List_1_t2499617678 ** get_address_of__delayed_10() { return &____delayed_10; }
	inline void set__delayed_10(List_1_t2499617678 * value)
	{
		____delayed_10 = value;
		Il2CppCodeGenWriteBarrier((&____delayed_10), value);
	}

	inline static int32_t get_offset_of__currentDelayed_11() { return static_cast<int32_t>(offsetof(Loom_t3759828253, ____currentDelayed_11)); }
	inline List_1_t2499617678 * get__currentDelayed_11() const { return ____currentDelayed_11; }
	inline List_1_t2499617678 ** get_address_of__currentDelayed_11() { return &____currentDelayed_11; }
	inline void set__currentDelayed_11(List_1_t2499617678 * value)
	{
		____currentDelayed_11 = value;
		Il2CppCodeGenWriteBarrier((&____currentDelayed_11), value);
	}

	inline static int32_t get_offset_of__currentActions_12() { return static_cast<int32_t>(offsetof(Loom_t3759828253, ____currentActions_12)); }
	inline List_1_t2736452219 * get__currentActions_12() const { return ____currentActions_12; }
	inline List_1_t2736452219 ** get_address_of__currentActions_12() { return &____currentActions_12; }
	inline void set__currentActions_12(List_1_t2736452219 * value)
	{
		____currentActions_12 = value;
		Il2CppCodeGenWriteBarrier((&____currentActions_12), value);
	}
};

struct Loom_t3759828253_StaticFields
{
public:
	// System.Int32 Loom::maxThreads
	int32_t ___maxThreads_4;
	// System.Int32 Loom::numThreads
	int32_t ___numThreads_5;
	// Loom Loom::_current
	Loom_t3759828253 * ____current_6;
	// System.Boolean Loom::initialized
	bool ___initialized_8;
	// System.Threading.WaitCallback Loom::<>f__mg$cache0
	WaitCallback_t2448485498 * ___U3CU3Ef__mgU24cache0_13;
	// System.Func`2<Loom/DelayedQueueItem,System.Boolean> Loom::<>f__am$cache0
	Func_2_t1573880443 * ___U3CU3Ef__amU24cache0_14;

public:
	inline static int32_t get_offset_of_maxThreads_4() { return static_cast<int32_t>(offsetof(Loom_t3759828253_StaticFields, ___maxThreads_4)); }
	inline int32_t get_maxThreads_4() const { return ___maxThreads_4; }
	inline int32_t* get_address_of_maxThreads_4() { return &___maxThreads_4; }
	inline void set_maxThreads_4(int32_t value)
	{
		___maxThreads_4 = value;
	}

	inline static int32_t get_offset_of_numThreads_5() { return static_cast<int32_t>(offsetof(Loom_t3759828253_StaticFields, ___numThreads_5)); }
	inline int32_t get_numThreads_5() const { return ___numThreads_5; }
	inline int32_t* get_address_of_numThreads_5() { return &___numThreads_5; }
	inline void set_numThreads_5(int32_t value)
	{
		___numThreads_5 = value;
	}

	inline static int32_t get_offset_of__current_6() { return static_cast<int32_t>(offsetof(Loom_t3759828253_StaticFields, ____current_6)); }
	inline Loom_t3759828253 * get__current_6() const { return ____current_6; }
	inline Loom_t3759828253 ** get_address_of__current_6() { return &____current_6; }
	inline void set__current_6(Loom_t3759828253 * value)
	{
		____current_6 = value;
		Il2CppCodeGenWriteBarrier((&____current_6), value);
	}

	inline static int32_t get_offset_of_initialized_8() { return static_cast<int32_t>(offsetof(Loom_t3759828253_StaticFields, ___initialized_8)); }
	inline bool get_initialized_8() const { return ___initialized_8; }
	inline bool* get_address_of_initialized_8() { return &___initialized_8; }
	inline void set_initialized_8(bool value)
	{
		___initialized_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_13() { return static_cast<int32_t>(offsetof(Loom_t3759828253_StaticFields, ___U3CU3Ef__mgU24cache0_13)); }
	inline WaitCallback_t2448485498 * get_U3CU3Ef__mgU24cache0_13() const { return ___U3CU3Ef__mgU24cache0_13; }
	inline WaitCallback_t2448485498 ** get_address_of_U3CU3Ef__mgU24cache0_13() { return &___U3CU3Ef__mgU24cache0_13; }
	inline void set_U3CU3Ef__mgU24cache0_13(WaitCallback_t2448485498 * value)
	{
		___U3CU3Ef__mgU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_14() { return static_cast<int32_t>(offsetof(Loom_t3759828253_StaticFields, ___U3CU3Ef__amU24cache0_14)); }
	inline Func_2_t1573880443 * get_U3CU3Ef__amU24cache0_14() const { return ___U3CU3Ef__amU24cache0_14; }
	inline Func_2_t1573880443 ** get_address_of_U3CU3Ef__amU24cache0_14() { return &___U3CU3Ef__amU24cache0_14; }
	inline void set_U3CU3Ef__amU24cache0_14(Func_2_t1573880443 * value)
	{
		___U3CU3Ef__amU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOM_T3759828253_H
#ifndef MKGLOWFREE_T706824981_H
#define MKGLOWFREE_T706824981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MK.Glow.MKGlowFree
struct  MKGlowFree_t706824981  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RenderTextureFormat MK.Glow.MKGlowFree::rtFormat
	int32_t ___rtFormat_8;
	// UnityEngine.Shader MK.Glow.MKGlowFree::blurShader
	Shader_t4151988712 * ___blurShader_9;
	// UnityEngine.Shader MK.Glow.MKGlowFree::compositeShader
	Shader_t4151988712 * ___compositeShader_10;
	// UnityEngine.Shader MK.Glow.MKGlowFree::selectiveRenderShader
	Shader_t4151988712 * ___selectiveRenderShader_11;
	// UnityEngine.Material MK.Glow.MKGlowFree::compositeMaterial
	Material_t340375123 * ___compositeMaterial_12;
	// UnityEngine.Material MK.Glow.MKGlowFree::blurMaterial
	Material_t340375123 * ___blurMaterial_13;
	// UnityEngine.LayerMask MK.Glow.MKGlowFree::glowLayer
	LayerMask_t3493934918  ___glowLayer_14;
	// MK.Glow.GlowType MK.Glow.MKGlowFree::glowType
	int32_t ___glowType_15;
	// UnityEngine.Color MK.Glow.MKGlowFree::glowTint
	Color_t2555686324  ___glowTint_16;
	// System.Single MK.Glow.MKGlowFree::blurSpreadInner
	float ___blurSpreadInner_17;
	// System.Int32 MK.Glow.MKGlowFree::blurIterations
	int32_t ___blurIterations_18;
	// System.Single MK.Glow.MKGlowFree::glowIntensityInner
	float ___glowIntensityInner_19;
	// System.Int32 MK.Glow.MKGlowFree::samples
	int32_t ___samples_20;
	// UnityEngine.Camera MK.Glow.MKGlowFree::selectiveGlowCamera
	Camera_t4157153871 * ___selectiveGlowCamera_21;
	// UnityEngine.GameObject MK.Glow.MKGlowFree::selectiveGlowCameraObject
	GameObject_t1113636619 * ___selectiveGlowCameraObject_22;
	// UnityEngine.RenderTexture MK.Glow.MKGlowFree::glowTexRaw
	RenderTexture_t2108887433 * ___glowTexRaw_23;
	// System.Int32 MK.Glow.MKGlowFree::srcWidth
	int32_t ___srcWidth_24;
	// System.Int32 MK.Glow.MKGlowFree::srcHeight
	int32_t ___srcHeight_25;
	// UnityEngine.VRTextureUsage MK.Glow.MKGlowFree::srcVRUsage
	int32_t ___srcVRUsage_26;

public:
	inline static int32_t get_offset_of_rtFormat_8() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___rtFormat_8)); }
	inline int32_t get_rtFormat_8() const { return ___rtFormat_8; }
	inline int32_t* get_address_of_rtFormat_8() { return &___rtFormat_8; }
	inline void set_rtFormat_8(int32_t value)
	{
		___rtFormat_8 = value;
	}

	inline static int32_t get_offset_of_blurShader_9() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___blurShader_9)); }
	inline Shader_t4151988712 * get_blurShader_9() const { return ___blurShader_9; }
	inline Shader_t4151988712 ** get_address_of_blurShader_9() { return &___blurShader_9; }
	inline void set_blurShader_9(Shader_t4151988712 * value)
	{
		___blurShader_9 = value;
		Il2CppCodeGenWriteBarrier((&___blurShader_9), value);
	}

	inline static int32_t get_offset_of_compositeShader_10() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___compositeShader_10)); }
	inline Shader_t4151988712 * get_compositeShader_10() const { return ___compositeShader_10; }
	inline Shader_t4151988712 ** get_address_of_compositeShader_10() { return &___compositeShader_10; }
	inline void set_compositeShader_10(Shader_t4151988712 * value)
	{
		___compositeShader_10 = value;
		Il2CppCodeGenWriteBarrier((&___compositeShader_10), value);
	}

	inline static int32_t get_offset_of_selectiveRenderShader_11() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___selectiveRenderShader_11)); }
	inline Shader_t4151988712 * get_selectiveRenderShader_11() const { return ___selectiveRenderShader_11; }
	inline Shader_t4151988712 ** get_address_of_selectiveRenderShader_11() { return &___selectiveRenderShader_11; }
	inline void set_selectiveRenderShader_11(Shader_t4151988712 * value)
	{
		___selectiveRenderShader_11 = value;
		Il2CppCodeGenWriteBarrier((&___selectiveRenderShader_11), value);
	}

	inline static int32_t get_offset_of_compositeMaterial_12() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___compositeMaterial_12)); }
	inline Material_t340375123 * get_compositeMaterial_12() const { return ___compositeMaterial_12; }
	inline Material_t340375123 ** get_address_of_compositeMaterial_12() { return &___compositeMaterial_12; }
	inline void set_compositeMaterial_12(Material_t340375123 * value)
	{
		___compositeMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((&___compositeMaterial_12), value);
	}

	inline static int32_t get_offset_of_blurMaterial_13() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___blurMaterial_13)); }
	inline Material_t340375123 * get_blurMaterial_13() const { return ___blurMaterial_13; }
	inline Material_t340375123 ** get_address_of_blurMaterial_13() { return &___blurMaterial_13; }
	inline void set_blurMaterial_13(Material_t340375123 * value)
	{
		___blurMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((&___blurMaterial_13), value);
	}

	inline static int32_t get_offset_of_glowLayer_14() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___glowLayer_14)); }
	inline LayerMask_t3493934918  get_glowLayer_14() const { return ___glowLayer_14; }
	inline LayerMask_t3493934918 * get_address_of_glowLayer_14() { return &___glowLayer_14; }
	inline void set_glowLayer_14(LayerMask_t3493934918  value)
	{
		___glowLayer_14 = value;
	}

	inline static int32_t get_offset_of_glowType_15() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___glowType_15)); }
	inline int32_t get_glowType_15() const { return ___glowType_15; }
	inline int32_t* get_address_of_glowType_15() { return &___glowType_15; }
	inline void set_glowType_15(int32_t value)
	{
		___glowType_15 = value;
	}

	inline static int32_t get_offset_of_glowTint_16() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___glowTint_16)); }
	inline Color_t2555686324  get_glowTint_16() const { return ___glowTint_16; }
	inline Color_t2555686324 * get_address_of_glowTint_16() { return &___glowTint_16; }
	inline void set_glowTint_16(Color_t2555686324  value)
	{
		___glowTint_16 = value;
	}

	inline static int32_t get_offset_of_blurSpreadInner_17() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___blurSpreadInner_17)); }
	inline float get_blurSpreadInner_17() const { return ___blurSpreadInner_17; }
	inline float* get_address_of_blurSpreadInner_17() { return &___blurSpreadInner_17; }
	inline void set_blurSpreadInner_17(float value)
	{
		___blurSpreadInner_17 = value;
	}

	inline static int32_t get_offset_of_blurIterations_18() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___blurIterations_18)); }
	inline int32_t get_blurIterations_18() const { return ___blurIterations_18; }
	inline int32_t* get_address_of_blurIterations_18() { return &___blurIterations_18; }
	inline void set_blurIterations_18(int32_t value)
	{
		___blurIterations_18 = value;
	}

	inline static int32_t get_offset_of_glowIntensityInner_19() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___glowIntensityInner_19)); }
	inline float get_glowIntensityInner_19() const { return ___glowIntensityInner_19; }
	inline float* get_address_of_glowIntensityInner_19() { return &___glowIntensityInner_19; }
	inline void set_glowIntensityInner_19(float value)
	{
		___glowIntensityInner_19 = value;
	}

	inline static int32_t get_offset_of_samples_20() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___samples_20)); }
	inline int32_t get_samples_20() const { return ___samples_20; }
	inline int32_t* get_address_of_samples_20() { return &___samples_20; }
	inline void set_samples_20(int32_t value)
	{
		___samples_20 = value;
	}

	inline static int32_t get_offset_of_selectiveGlowCamera_21() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___selectiveGlowCamera_21)); }
	inline Camera_t4157153871 * get_selectiveGlowCamera_21() const { return ___selectiveGlowCamera_21; }
	inline Camera_t4157153871 ** get_address_of_selectiveGlowCamera_21() { return &___selectiveGlowCamera_21; }
	inline void set_selectiveGlowCamera_21(Camera_t4157153871 * value)
	{
		___selectiveGlowCamera_21 = value;
		Il2CppCodeGenWriteBarrier((&___selectiveGlowCamera_21), value);
	}

	inline static int32_t get_offset_of_selectiveGlowCameraObject_22() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___selectiveGlowCameraObject_22)); }
	inline GameObject_t1113636619 * get_selectiveGlowCameraObject_22() const { return ___selectiveGlowCameraObject_22; }
	inline GameObject_t1113636619 ** get_address_of_selectiveGlowCameraObject_22() { return &___selectiveGlowCameraObject_22; }
	inline void set_selectiveGlowCameraObject_22(GameObject_t1113636619 * value)
	{
		___selectiveGlowCameraObject_22 = value;
		Il2CppCodeGenWriteBarrier((&___selectiveGlowCameraObject_22), value);
	}

	inline static int32_t get_offset_of_glowTexRaw_23() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___glowTexRaw_23)); }
	inline RenderTexture_t2108887433 * get_glowTexRaw_23() const { return ___glowTexRaw_23; }
	inline RenderTexture_t2108887433 ** get_address_of_glowTexRaw_23() { return &___glowTexRaw_23; }
	inline void set_glowTexRaw_23(RenderTexture_t2108887433 * value)
	{
		___glowTexRaw_23 = value;
		Il2CppCodeGenWriteBarrier((&___glowTexRaw_23), value);
	}

	inline static int32_t get_offset_of_srcWidth_24() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___srcWidth_24)); }
	inline int32_t get_srcWidth_24() const { return ___srcWidth_24; }
	inline int32_t* get_address_of_srcWidth_24() { return &___srcWidth_24; }
	inline void set_srcWidth_24(int32_t value)
	{
		___srcWidth_24 = value;
	}

	inline static int32_t get_offset_of_srcHeight_25() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___srcHeight_25)); }
	inline int32_t get_srcHeight_25() const { return ___srcHeight_25; }
	inline int32_t* get_address_of_srcHeight_25() { return &___srcHeight_25; }
	inline void set_srcHeight_25(int32_t value)
	{
		___srcHeight_25 = value;
	}

	inline static int32_t get_offset_of_srcVRUsage_26() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981, ___srcVRUsage_26)); }
	inline int32_t get_srcVRUsage_26() const { return ___srcVRUsage_26; }
	inline int32_t* get_address_of_srcVRUsage_26() { return &___srcVRUsage_26; }
	inline void set_srcVRUsage_26(int32_t value)
	{
		___srcVRUsage_26 = value;
	}
};

struct MKGlowFree_t706824981_StaticFields
{
public:
	// System.Single[] MK.Glow.MKGlowFree::gaussFilter
	SingleU5BU5D_t1444911251* ___gaussFilter_4;

public:
	inline static int32_t get_offset_of_gaussFilter_4() { return static_cast<int32_t>(offsetof(MKGlowFree_t706824981_StaticFields, ___gaussFilter_4)); }
	inline SingleU5BU5D_t1444911251* get_gaussFilter_4() const { return ___gaussFilter_4; }
	inline SingleU5BU5D_t1444911251** get_address_of_gaussFilter_4() { return &___gaussFilter_4; }
	inline void set_gaussFilter_4(SingleU5BU5D_t1444911251* value)
	{
		___gaussFilter_4 = value;
		Il2CppCodeGenWriteBarrier((&___gaussFilter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MKGLOWFREE_T706824981_H
#ifndef RECIEVEVIDEO_T2154278729_H
#define RECIEVEVIDEO_T2154278729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecieveVideo
struct  RecieveVideo_t2154278729  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material RecieveVideo::material
	Material_t340375123 * ___material_4;
	// System.Boolean RecieveVideo::enableLog
	bool ___enableLog_5;
	// System.String RecieveVideo::phoneIP
	String_t* ___phoneIP_7;
	// System.Net.Sockets.TcpClient RecieveVideo::client
	TcpClient_t822906377 * ___client_8;
	// UnityEngine.Texture2D RecieveVideo::tex
	Texture2D_t3840446185 * ___tex_9;
	// System.Boolean RecieveVideo::stop
	bool ___stop_10;

public:
	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(RecieveVideo_t2154278729, ___material_4)); }
	inline Material_t340375123 * get_material_4() const { return ___material_4; }
	inline Material_t340375123 ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_t340375123 * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier((&___material_4), value);
	}

	inline static int32_t get_offset_of_enableLog_5() { return static_cast<int32_t>(offsetof(RecieveVideo_t2154278729, ___enableLog_5)); }
	inline bool get_enableLog_5() const { return ___enableLog_5; }
	inline bool* get_address_of_enableLog_5() { return &___enableLog_5; }
	inline void set_enableLog_5(bool value)
	{
		___enableLog_5 = value;
	}

	inline static int32_t get_offset_of_phoneIP_7() { return static_cast<int32_t>(offsetof(RecieveVideo_t2154278729, ___phoneIP_7)); }
	inline String_t* get_phoneIP_7() const { return ___phoneIP_7; }
	inline String_t** get_address_of_phoneIP_7() { return &___phoneIP_7; }
	inline void set_phoneIP_7(String_t* value)
	{
		___phoneIP_7 = value;
		Il2CppCodeGenWriteBarrier((&___phoneIP_7), value);
	}

	inline static int32_t get_offset_of_client_8() { return static_cast<int32_t>(offsetof(RecieveVideo_t2154278729, ___client_8)); }
	inline TcpClient_t822906377 * get_client_8() const { return ___client_8; }
	inline TcpClient_t822906377 ** get_address_of_client_8() { return &___client_8; }
	inline void set_client_8(TcpClient_t822906377 * value)
	{
		___client_8 = value;
		Il2CppCodeGenWriteBarrier((&___client_8), value);
	}

	inline static int32_t get_offset_of_tex_9() { return static_cast<int32_t>(offsetof(RecieveVideo_t2154278729, ___tex_9)); }
	inline Texture2D_t3840446185 * get_tex_9() const { return ___tex_9; }
	inline Texture2D_t3840446185 ** get_address_of_tex_9() { return &___tex_9; }
	inline void set_tex_9(Texture2D_t3840446185 * value)
	{
		___tex_9 = value;
		Il2CppCodeGenWriteBarrier((&___tex_9), value);
	}

	inline static int32_t get_offset_of_stop_10() { return static_cast<int32_t>(offsetof(RecieveVideo_t2154278729, ___stop_10)); }
	inline bool get_stop_10() const { return ___stop_10; }
	inline bool* get_address_of_stop_10() { return &___stop_10; }
	inline void set_stop_10(bool value)
	{
		___stop_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECIEVEVIDEO_T2154278729_H
#ifndef SENDVIDEO_T3564215223_H
#define SENDVIDEO_T3564215223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SendVideo
struct  SendVideo_t3564215223  : public MonoBehaviour_t3962482529
{
public:
	// CameraFeed SendVideo::cameraFeed
	CameraFeed_t1617299256 * ___cameraFeed_4;
	// System.Boolean SendVideo::enableLog
	bool ___enableLog_5;
	// UnityEngine.Texture2D SendVideo::currentTexture
	Texture2D_t3840446185 * ___currentTexture_6;
	// System.Net.Sockets.TcpListener SendVideo::listner
	TcpListener_t3499576757 * ___listner_7;
	// System.Boolean SendVideo::stop
	bool ___stop_9;
	// System.Collections.Generic.List`1<System.Net.Sockets.TcpClient> SendVideo::clients
	List_1_t2294981119 * ___clients_10;
	// UnityEngine.WaitForEndOfFrame SendVideo::endOfFrame
	WaitForEndOfFrame_t1314943911 * ___endOfFrame_12;

public:
	inline static int32_t get_offset_of_cameraFeed_4() { return static_cast<int32_t>(offsetof(SendVideo_t3564215223, ___cameraFeed_4)); }
	inline CameraFeed_t1617299256 * get_cameraFeed_4() const { return ___cameraFeed_4; }
	inline CameraFeed_t1617299256 ** get_address_of_cameraFeed_4() { return &___cameraFeed_4; }
	inline void set_cameraFeed_4(CameraFeed_t1617299256 * value)
	{
		___cameraFeed_4 = value;
		Il2CppCodeGenWriteBarrier((&___cameraFeed_4), value);
	}

	inline static int32_t get_offset_of_enableLog_5() { return static_cast<int32_t>(offsetof(SendVideo_t3564215223, ___enableLog_5)); }
	inline bool get_enableLog_5() const { return ___enableLog_5; }
	inline bool* get_address_of_enableLog_5() { return &___enableLog_5; }
	inline void set_enableLog_5(bool value)
	{
		___enableLog_5 = value;
	}

	inline static int32_t get_offset_of_currentTexture_6() { return static_cast<int32_t>(offsetof(SendVideo_t3564215223, ___currentTexture_6)); }
	inline Texture2D_t3840446185 * get_currentTexture_6() const { return ___currentTexture_6; }
	inline Texture2D_t3840446185 ** get_address_of_currentTexture_6() { return &___currentTexture_6; }
	inline void set_currentTexture_6(Texture2D_t3840446185 * value)
	{
		___currentTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentTexture_6), value);
	}

	inline static int32_t get_offset_of_listner_7() { return static_cast<int32_t>(offsetof(SendVideo_t3564215223, ___listner_7)); }
	inline TcpListener_t3499576757 * get_listner_7() const { return ___listner_7; }
	inline TcpListener_t3499576757 ** get_address_of_listner_7() { return &___listner_7; }
	inline void set_listner_7(TcpListener_t3499576757 * value)
	{
		___listner_7 = value;
		Il2CppCodeGenWriteBarrier((&___listner_7), value);
	}

	inline static int32_t get_offset_of_stop_9() { return static_cast<int32_t>(offsetof(SendVideo_t3564215223, ___stop_9)); }
	inline bool get_stop_9() const { return ___stop_9; }
	inline bool* get_address_of_stop_9() { return &___stop_9; }
	inline void set_stop_9(bool value)
	{
		___stop_9 = value;
	}

	inline static int32_t get_offset_of_clients_10() { return static_cast<int32_t>(offsetof(SendVideo_t3564215223, ___clients_10)); }
	inline List_1_t2294981119 * get_clients_10() const { return ___clients_10; }
	inline List_1_t2294981119 ** get_address_of_clients_10() { return &___clients_10; }
	inline void set_clients_10(List_1_t2294981119 * value)
	{
		___clients_10 = value;
		Il2CppCodeGenWriteBarrier((&___clients_10), value);
	}

	inline static int32_t get_offset_of_endOfFrame_12() { return static_cast<int32_t>(offsetof(SendVideo_t3564215223, ___endOfFrame_12)); }
	inline WaitForEndOfFrame_t1314943911 * get_endOfFrame_12() const { return ___endOfFrame_12; }
	inline WaitForEndOfFrame_t1314943911 ** get_address_of_endOfFrame_12() { return &___endOfFrame_12; }
	inline void set_endOfFrame_12(WaitForEndOfFrame_t1314943911 * value)
	{
		___endOfFrame_12 = value;
		Il2CppCodeGenWriteBarrier((&___endOfFrame_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDVIDEO_T3564215223_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_7;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_8;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_10;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_11;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_12;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_4), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_7)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_7() const { return ___bodyStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_7() { return &___bodyStyle_7; }
	inline void set_bodyStyle_7(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_7), value);
	}

	inline static int32_t get_offset_of_headerStyle_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_8)); }
	inline GUIStyle_t3956901511 * get_headerStyle_8() const { return ___headerStyle_8; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_8() { return &___headerStyle_8; }
	inline void set_headerStyle_8(GUIStyle_t3956901511 * value)
	{
		___headerStyle_8 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_8), value);
	}

	inline static int32_t get_offset_of_footerStyle_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_9)); }
	inline GUIStyle_t3956901511 * get_footerStyle_9() const { return ___footerStyle_9; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_9() { return &___footerStyle_9; }
	inline void set_footerStyle_9(GUIStyle_t3956901511 * value)
	{
		___footerStyle_9 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_9), value);
	}

	inline static int32_t get_offset_of_bodyTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_10)); }
	inline Texture2D_t3840446185 * get_bodyTexture_10() const { return ___bodyTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_10() { return &___bodyTexture_10; }
	inline void set_bodyTexture_10(Texture2D_t3840446185 * value)
	{
		___bodyTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_10), value);
	}

	inline static int32_t get_offset_of_headerTexture_11() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_11)); }
	inline Texture2D_t3840446185 * get_headerTexture_11() const { return ___headerTexture_11; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_11() { return &___headerTexture_11; }
	inline void set_headerTexture_11(Texture2D_t3840446185 * value)
	{
		___headerTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_11), value);
	}

	inline static int32_t get_offset_of_footerTexture_12() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_12)); }
	inline Texture2D_t3840446185 * get_footerTexture_12() const { return ___footerTexture_12; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_12() { return &___footerTexture_12; }
	inline void set_footerTexture_12(Texture2D_t3840446185 * value)
	{
		___footerTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_4;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_5;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_6;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_8;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_9;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_11;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_5), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_6)); }
	inline bool get_mPreserveChildSize_6() const { return ___mPreserveChildSize_6; }
	inline bool* get_address_of_mPreserveChildSize_6() { return &___mPreserveChildSize_6; }
	inline void set_mPreserveChildSize_6(bool value)
	{
		___mPreserveChildSize_6 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_8)); }
	inline Vector3_t3722313464  get_mPreviousScale_8() const { return ___mPreviousScale_8; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_8() { return &___mPreviousScale_8; }
	inline void set_mPreviousScale_8(Vector3_t3722313464  value)
	{
		___mPreviousScale_8 = value;
	}

	inline static int32_t get_offset_of_mStatus_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_9)); }
	inline int32_t get_mStatus_9() const { return ___mStatus_9; }
	inline int32_t* get_address_of_mStatus_9() { return &___mStatus_9; }
	inline void set_mStatus_9(int32_t value)
	{
		___mStatus_9 = value;
	}

	inline static int32_t get_offset_of_mTrackable_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_10)); }
	inline RuntimeObject* get_mTrackable_10() const { return ___mTrackable_10; }
	inline RuntimeObject** get_address_of_mTrackable_10() { return &___mTrackable_10; }
	inline void set_mTrackable_10(RuntimeObject* value)
	{
		___mTrackable_10 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_10), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_11)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_11() const { return ___mTrackableEventHandlers_11; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_11() { return &___mTrackableEventHandlers_11; }
	inline void set_mTrackableEventHandlers_11(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t3310196443 * m_Items[1];

public:
	inline Canvas_t3310196443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t3310196443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m2079027267_gshared (Action_1_t269755560 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m2713332384_gshared (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Loom/DelayedQueueItem>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3178979345_gshared (List_1_t2499617678 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Loom/DelayedQueueItem>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2963593273_gshared (List_1_t2499617678 * __this, DelayedQueueItem_t1027542936  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Loom/DelayedQueueItem>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m2127924545_gshared (List_1_t2499617678 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Loom/DelayedQueueItem,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m3835612240_gshared (Func_2_t1573880443 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<Loom/DelayedQueueItem>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisDelayedQueueItem_t1027542936_m4086968425_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t1573880443 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Loom/DelayedQueueItem>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m178148047_gshared (List_1_t2499617678 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Loom/DelayedQueueItem>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t93894259  List_1_GetEnumerator_m2078161870_gshared (List_1_t2499617678 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Loom/DelayedQueueItem>::get_Current()
extern "C" IL2CPP_METHOD_ATTR DelayedQueueItem_t1027542936  Enumerator_get_Current_m1587659164_gshared (Enumerator_t93894259 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Loom/DelayedQueueItem>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m1127752898_gshared (List_1_t2499617678 * __this, DelayedQueueItem_t1027542936  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Loom/DelayedQueueItem>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2281580424_gshared (Enumerator_t93894259 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Loom/DelayedQueueItem>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1104083697_gshared (Enumerator_t93894259 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t2627027031 * Component_GetComponent_TisRenderer_t2627027031_m2222376672 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaARController_t1876945237 * VuforiaARController_get_Instance_m1100644214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::RegisterVuforiaStartedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_RegisterVuforiaStartedCallback_m3258152770 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::RegisterTrackablesUpdatedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_RegisterTrackablesUpdatedCallback_m2341042762 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2079027267 (Action_1_t269755560 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t269755560 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2079027267_gshared)(__this, p0, p1, method);
}
// System.Void Vuforia.VuforiaARController::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_RegisterOnPauseCallback_m1833237148 (VuforiaARController_t1876945237 * __this, Action_1_t269755560 * p0, const RuntimeMethod* method);
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C" IL2CPP_METHOD_ATTR CameraDevice_t960297568 * CameraDevice_get_Instance_m2002290155 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::SetFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_SetFrameFormat_m1111586459 (CameraDevice_t960297568 * __this, int32_t p0, bool p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Vuforia.Image Vuforia.CameraDevice::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C" IL2CPP_METHOD_ATTR Image_t745056343 * CameraDevice_GetCameraImage_m151166382 (CameraDevice_t960297568 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void CameraFeed::UnregisterFormat()
extern "C" IL2CPP_METHOD_ATTR void CameraFeed_UnregisterFormat_m345081511 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method);
// System.Void CameraFeed::RegisterFormat()
extern "C" IL2CPP_METHOD_ATTR void CameraFeed_RegisterFormat_m2916050735 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method);
// System.Int32 Vuforia.Image::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t Image_get_Width_m3459292501 (Image_t745056343 * __this, const RuntimeMethod* method);
// System.Int32 Vuforia.Image::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t Image_get_Height_m1593747350 (Image_t745056343 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void Vuforia.Image::CopyToTexture(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void Image_CopyToTexture_m524838193 (Image_t745056343 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method);
// System.Void VuforiaMonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_m348562674 (VuforiaMonoBehaviour_t1150221792 * __this, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method);
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaRuntime_t1949122020 * VuforiaRuntime_get_Instance_m1058251676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2713332384 (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3593217305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2713332384_gshared)(__this, p0, p1, method);
}
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  GUI_Window_m1088326791 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m2223708732 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
extern "C" IL2CPP_METHOD_ATTR void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C" IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_productName()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_productName_m2401755738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C" IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t3697830469 * VuforiaConfiguration_get_Vuforia_m1588208597 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method);
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
extern "C" IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m2270076687 (GenericVuforiaConfiguration_t3697830469 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
extern "C" IL2CPP_METHOD_ATTR float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
inline Font_t1956802104 * Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  Font_t1956802104 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_font_m2490449107 (GUIStyle_t3956901511 * __this, Font_t1956802104 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m3302456044 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
inline TrackableBehaviour_t1113559212 * Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" IL2CPP_METHOD_ATTR void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" IL2CPP_METHOD_ATTR bool TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" IL2CPP_METHOD_ATTR String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_t3210418286* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
inline ColliderU5BU5D_t4234922487* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
inline CanvasU5BU5D_t682926938* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_m3850019872 (List_1_t2736452219 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2736452219 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Loom/DelayedQueueItem>::.ctor()
inline void List_1__ctor_m3178979345 (List_1_t2499617678 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2499617678 *, const RuntimeMethod*))List_1__ctor_m3178979345_gshared)(__this, method);
}
// System.Void Loom::Initialize()
extern "C" IL2CPP_METHOD_ATTR void Loom_Initialize_m647855750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Loom>()
inline Loom_t3759828253 * GameObject_AddComponent_TisLoom_t3759828253_m3262702326 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Loom_t3759828253 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method);
}
// System.Void Loom::QueueOnMainThread(System.Action,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Loom_QueueOnMainThread_m2710461419 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___action0, float ___time1, const RuntimeMethod* method);
// Loom Loom::get_Current()
extern "C" IL2CPP_METHOD_ATTR Loom_t3759828253 * Loom_get_Current_m1133460506 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Loom/DelayedQueueItem>::Add(!0)
inline void List_1_Add_m2963593273 (List_1_t2499617678 * __this, DelayedQueueItem_t1027542936  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2499617678 *, DelayedQueueItem_t1027542936 , const RuntimeMethod*))List_1_Add_m2963593273_gshared)(__this, p0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m263651446 (List_1_t2736452219 * __this, Action_t1264377477 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2736452219 *, Action_t1264377477 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Thread_Sleep_m483098292 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3548166048 (RuntimeObject * __this /* static, unused */, int32_t* p0, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WaitCallback__ctor_m1893321019 (WaitCallback_t2448485498 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m1526970260 (RuntimeObject * __this /* static, unused */, WaitCallback_t2448485498 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_m899158053 (RuntimeObject * __this /* static, unused */, int32_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_m3969294004 (List_1_t2736452219 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2736452219 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m3508878779 (List_1_t2736452219 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2736452219 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Action>::GetEnumerator()
inline Enumerator_t330728800  List_1_GetEnumerator_m538907628 (List_1_t2736452219 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t330728800  (*) (List_1_t2736452219 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Action>::get_Current()
inline Action_t1264377477 * Enumerator_get_Current_m4151988499 (Enumerator_t330728800 * __this, const RuntimeMethod* method)
{
	return ((  Action_t1264377477 * (*) (Enumerator_t330728800 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action>::MoveNext()
inline bool Enumerator_MoveNext_m2738576554 (Enumerator_t330728800 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t330728800 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action>::Dispose()
inline void Enumerator_Dispose_m385718446 (Enumerator_t330728800 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t330728800 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Loom/DelayedQueueItem>::Clear()
inline void List_1_Clear_m2127924545 (List_1_t2499617678 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2499617678 *, const RuntimeMethod*))List_1_Clear_m2127924545_gshared)(__this, method);
}
// System.Void System.Func`2<Loom/DelayedQueueItem,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3835612240 (Func_2_t1573880443 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1573880443 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3835612240_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<Loom/DelayedQueueItem>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisDelayedQueueItem_t1027542936_m4086968425 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t1573880443 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t1573880443 *, const RuntimeMethod*))Enumerable_Where_TisDelayedQueueItem_t1027542936_m4086968425_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<Loom/DelayedQueueItem>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m178148047 (List_1_t2499617678 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2499617678 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m178148047_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Loom/DelayedQueueItem>::GetEnumerator()
inline Enumerator_t93894259  List_1_GetEnumerator_m2078161870 (List_1_t2499617678 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t93894259  (*) (List_1_t2499617678 *, const RuntimeMethod*))List_1_GetEnumerator_m2078161870_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Loom/DelayedQueueItem>::get_Current()
inline DelayedQueueItem_t1027542936  Enumerator_get_Current_m1587659164 (Enumerator_t93894259 * __this, const RuntimeMethod* method)
{
	return ((  DelayedQueueItem_t1027542936  (*) (Enumerator_t93894259 *, const RuntimeMethod*))Enumerator_get_Current_m1587659164_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Loom/DelayedQueueItem>::Remove(!0)
inline bool List_1_Remove_m1127752898 (List_1_t2499617678 * __this, DelayedQueueItem_t1027542936  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2499617678 *, DelayedQueueItem_t1027542936 , const RuntimeMethod*))List_1_Remove_m1127752898_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Loom/DelayedQueueItem>::MoveNext()
inline bool Enumerator_MoveNext_m2281580424 (Enumerator_t93894259 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t93894259 *, const RuntimeMethod*))Enumerator_MoveNext_m2281580424_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Loom/DelayedQueueItem>::Dispose()
inline void Enumerator_Dispose_m1104083697 (Enumerator_t93894259 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t93894259 *, const RuntimeMethod*))Enumerator_Dispose_m1104083697_gshared)(__this, method);
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LayerMask_t3493934918  LayerMask_op_Implicit_m90232283 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t4157153871 * Component_GetComponent_TisCamera_t4157153871_m1557787507 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void MK.Glow.MKGlowFree::GlowInitialize()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_GlowInitialize_m3382109123 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method);
// System.Void MK.Glow.MKGlowFree::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_Cleanup_m2550696459 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method);
// System.Void MK.Glow.MKGlowFree::SetupShaders()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_SetupShaders_m4037307605 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method);
// System.Void MK.Glow.MKGlowFree::SetupMaterials()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_SetupMaterials_m3506540674 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.GameObject MK.Glow.MKGlowFree::get_SelectiveGlowCameraObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * MKGlowFree_get_SelectiveGlowCameraObject_m1517722839 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32,UnityEngine.RenderTextureMemoryless,UnityEngine.VRTextureUsage)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * RenderTexture_GetTemporary_m1591556707 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, int32_t p7, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m3226510453 (Material_t340375123 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m890955694 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_t4157153871 * GameObject_AddComponent_TisCamera_t4157153871_m3447638008 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t4157153871 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method);
}
// UnityEngine.Camera MK.Glow.MKGlowFree::get_SelectiveGlowCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * MKGlowFree_get_SelectiveGlowCamera_m774247276 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_orthographic_m2855749523 (Camera_t4157153871 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_renderingPath_m3563375443 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_t4157153871 * GameObject_GetComponent_TisCamera_t4157153871_m3956151066 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t4157153871 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// UnityEngine.Camera MK.Glow.MKGlowFree::get_Cam()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * MKGlowFree_get_Cam_m1214962923 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void Camera_CopyFrom_m3501145412 (Camera_t4157153871 * __this, Camera_t4157153871 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_m754977860 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m3148311140 (Camera_t4157153871 * __this, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m2207032996 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_rect_m521006799 (Camera_t4157153871 * __this, Rect_t2360479859  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m1332346802 (Camera_t4157153871 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m3296792737 (RuntimeObject * __this /* static, unused */, LayerMask_t3493934918  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m1402455777 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m1336850842 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, const RuntimeMethod* method);
// System.Void MK.Glow.MKGlowFree::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_Blur_m2374394553 (MKGlowFree_t706824981 * __this, RenderTexture_t2108887433 * ___main0, RenderTexture_t2108887433 * ___tmpMain1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTexture_m1829349465 (Material_t340375123 * __this, String_t* p0, Texture_t3661962703 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m4126770912 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m1110053668 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m722276884 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void MK.Glow.MKGlowFree::SetupGlowCamera()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_SetupGlowCamera_m3234042267 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
extern "C" IL2CPP_METHOD_ATTR void Camera_RenderWithShader_m3316153747 (Camera_t4157153871 * __this, Shader_t4151988712 * p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_stereoEnabled()
extern "C" IL2CPP_METHOD_ATTR bool Camera_get_stereoEnabled_m1370638140 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_SetColor_m2020215303 (Material_t340375123 * __this, String_t* p0, Color_t2555686324  p1, const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_m3846871418 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// UnityEngine.VRTextureUsage UnityEngine.RenderTexture::get_vrUsage()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTexture_get_vrUsage_m1378911425 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture MK.Glow.MKGlowFree::GetTemporaryRT(System.Int32,System.Int32,UnityEngine.VRTextureUsage)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * MKGlowFree_GetTemporaryRT_m3712898819 (MKGlowFree_t706824981 * __this, int32_t ___width0, int32_t ___height1, int32_t ___vrUsage2, const RuntimeMethod* method);
// System.Void MK.Glow.MKGlowFree::SelectiveGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_SelectiveGlow_m364804102 (MKGlowFree_t706824981 * __this, RenderTexture_t2108887433 * ___src0, RenderTexture_t2108887433 * ___dest1, RenderTexture_t2108887433 * ___glowTexInner2, RenderTexture_t2108887433 * ___tmpGlowTex3, const RuntimeMethod* method);
// System.Void MK.Glow.MKGlowFree::FullScreenGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_FullScreenGlow_m3003909186 (MKGlowFree_t706824981 * __this, RenderTexture_t2108887433 * ___src0, RenderTexture_t2108887433 * ___dest1, RenderTexture_t2108887433 * ___glowTexInner2, RenderTexture_t2108887433 * ___tmpGlowTex3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Void RecieveVideo/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m1209416241 (U3CStartU3Ec__Iterator0_t2422030019 * __this, const RuntimeMethod* method);
// System.Threading.Thread Loom::RunAsync(System.Action)
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Loom_RunAsync_m3073108896 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___a0, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Clear_m2231608178 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverter_GetBytes_m1040762521 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_CopyTo_m225704097 (RuntimeArray * __this, RuntimeArray * p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m1089563119 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C" IL2CPP_METHOD_ATTR NetworkStream_t4071955934 * TcpClient_GetStream_m960745678 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Int32 RecieveVideo::frameByteArrayToByteLength(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR int32_t RecieveVideo_frameByteArrayToByteLength_m2376151793 (RecieveVideo_t2154278729 * __this, ByteU5BU5D_t4116647657* ___frameBytesLength0, const RuntimeMethod* method);
// System.Void RecieveVideo/<readFrameByteArray>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CreadFrameByteArrayU3Ec__AnonStorey1__ctor_m3121698181 (U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * __this, const RuntimeMethod* method);
// System.Void Loom::QueueOnMainThread(System.Action)
extern "C" IL2CPP_METHOD_ATTR void Loom_QueueOnMainThread_m1417379532 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___action0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m2182108104 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, ByteU5BU5D_t4116647657* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTexture_m544811714 (Material_t340375123 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void RecieveVideo::LOGWARNING(System.String)
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_LOGWARNING_m551940706 (RecieveVideo_t2154278729 * __this, String_t* ___messsage0, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
extern "C" IL2CPP_METHOD_ATTR Socket_t1119025450 * TcpClient_get_Client_m139203108 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
extern "C" IL2CPP_METHOD_ATTR void Socket_Close_m3289097516 (Socket_t1119025450 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C" IL2CPP_METHOD_ATTR void TcpClient_Close_m3817529922 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Int32 RecieveVideo::readImageByteSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t RecieveVideo_readImageByteSize_m1996922068 (RecieveVideo_t2154278729 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void RecieveVideo::readFrameByteArray(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_readFrameByteArray_m1422475908 (RecieveVideo_t2154278729 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Application_set_runInBackground_m2169704730 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TcpClient__ctor_m1992471411 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR IPAddress_t241777590 * IPAddress_Parse_m2200822423 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TcpClient_Connect_m4269241863 (TcpClient_t822906377 * __this, IPAddress_t241777590 * p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
extern "C" IL2CPP_METHOD_ATTR bool TcpClient_get_Connected_m4171740171 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Void RecieveVideo::imageReceiver()
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_imageReceiver_m2444187831 (RecieveVideo_t2154278729 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void RecieveVideo::displayReceivedImage(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_displayReceivedImage_m4122561076 (RecieveVideo_t2154278729 * __this, ByteU5BU5D_t4116647657* ___receivedImageBytes0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Net.Sockets.TcpClient>::.ctor()
inline void List_1__ctor_m4152009313 (List_1_t2294981119 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2294981119 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator SendVideo::initAndWaitForCamImage()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SendVideo_initAndWaitForCamImage_m300583457 (SendVideo_t3564215223 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void SendVideo/<initAndWaitForCamImage>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CinitAndWaitForCamImageU3Ec__Iterator0__ctor_m4016634656 (U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * __this, const RuntimeMethod* method);
// System.Void SendVideo/<senderCOR>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__Iterator1__ctor_m2704875754 (U3CsenderCORU3Ec__Iterator1_t1265425902 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Stop()
extern "C" IL2CPP_METHOD_ATTR void TcpListener_Stop_m996961764 (TcpListener_t3499576757 * __this, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::get_Server()
extern "C" IL2CPP_METHOD_ATTR Socket_t1119025450 * TcpListener_get_Server_m1824887598 (TcpListener_t3499576757 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Net.Sockets.TcpClient>::GetEnumerator()
inline Enumerator_t4184224996  List_1_GetEnumerator_m2452381913 (List_1_t2294981119 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4184224996  (*) (List_1_t2294981119 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Net.Sockets.TcpClient>::get_Current()
inline TcpClient_t822906377 * Enumerator_get_Current_m2476266973 (Enumerator_t4184224996 * __this, const RuntimeMethod* method)
{
	return ((  TcpClient_t822906377 * (*) (Enumerator_t4184224996 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Net.Sockets.TcpClient>::MoveNext()
inline bool Enumerator_MoveNext_m1410164912 (Enumerator_t4184224996 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4184224996 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Net.Sockets.TcpClient>::Dispose()
inline void Enumerator_Dispose_m27856966 (Enumerator_t4184224996 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4184224996 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Net.Sockets.TcpClient>::Clear()
inline void List_1_Clear_m868649400 (List_1_t2294981119 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2294981119 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TcpListener__ctor_m2307803501 (TcpListener_t3499576757 * __this, IPAddress_t241777590 * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Start()
extern "C" IL2CPP_METHOD_ATTR void TcpListener_Start_m1510900909 (TcpListener_t3499576757 * __this, const RuntimeMethod* method);
// System.Boolean CameraFeed::GetImageAvailable()
extern "C" IL2CPP_METHOD_ATTR bool CameraFeed_GetImageAvailable_m2367629798 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method);
// System.Int32 CameraFeed::getWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraFeed_getWidth_m1164001957 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method);
// System.Int32 CameraFeed::getHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraFeed_getHeight_m2499397298 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator SendVideo::senderCOR()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SendVideo_senderCOR_m1459968934 (SendVideo_t3564215223 * __this, const RuntimeMethod* method);
// System.Void SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__AnonStorey2__ctor_m3010061461 (U3CsenderCORU3Ec__AnonStorey2_t4050455982 * __this, const RuntimeMethod* method);
// System.Void SendVideo::LOG(System.String)
extern "C" IL2CPP_METHOD_ATTR void SendVideo_LOG_m628606818 (SendVideo_t3564215223 * __this, String_t* ___messsage0, const RuntimeMethod* method);
// System.Void SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__AnonStorey3__ctor_m4048801378 (U3CsenderCORU3Ec__AnonStorey3_t1321572627 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D CameraFeed::GetImage()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * CameraFeed_GetImage_m791337117 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* Texture2D_GetPixels_m2081641574 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m3008871897 (Texture2D_t3840446185 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ImageConversion_EncodeToJPG_m2489668130 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, int32_t p1, const RuntimeMethod* method);
// System.Void SendVideo::byteLengthToFrameByteArray(System.Int32,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SendVideo_byteLengthToFrameByteArray_m622216339 (SendVideo_t3564215223 * __this, int32_t ___byteLength0, ByteU5BU5D_t4116647657* ___fullBytes1, const RuntimeMethod* method);
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
extern "C" IL2CPP_METHOD_ATTR TcpClient_t822906377 * TcpListener_AcceptTcpClient_m2475574153 (TcpListener_t3499576757 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Net.Sockets.TcpClient>::Add(!0)
inline void List_1_Add_m3460642865 (List_1_t2294981119 * __this, TcpClient_t822906377 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2294981119 *, TcpClient_t822906377 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraFeed::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CameraFeed__ctor_m2994253695 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFeed__ctor_m2994253695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_videoTexSize_5(L_0);
		__this->set_mAccessCameraImage_8((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFeed::Start()
extern "C" IL2CPP_METHOD_ATTR void CameraFeed_Start_m2590105931 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFeed_Start_m2590105931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t2627027031 * L_0 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		__this->set_rend_4(L_0);
		__this->set_mPixelFormat_7(2);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_1 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)CameraFeed_OnVuforiaStarted_m4271355884_RuntimeMethod_var;
		Action_t1264377477 * L_3 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_1, L_3, /*hidden argument*/NULL);
		VuforiaARController_t1876945237 * L_4 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)CameraFeed_OnTrackablesUpdated_m1470020028_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VuforiaARController_RegisterTrackablesUpdatedCallback_m2341042762(L_4, L_6, /*hidden argument*/NULL);
		VuforiaARController_t1876945237 * L_7 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_8 = (intptr_t)CameraFeed_OnPause_m3477990339_RuntimeMethod_var;
		Action_1_t269755560 * L_9 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m2079027267(L_9, __this, L_8, /*hidden argument*/Action_1__ctor_m2079027267_RuntimeMethod_var);
		NullCheck(L_7);
		VuforiaARController_RegisterOnPauseCallback_m1833237148(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFeed::OnVuforiaStarted()
extern "C" IL2CPP_METHOD_ATTR void CameraFeed_OnVuforiaStarted_m4271355884 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFeed_OnVuforiaStarted_m4271355884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_mPixelFormat_7();
		NullCheck(L_0);
		bool L_2 = CameraDevice_SetFrameFormat_m1111586459(L_0, L_1, (bool)1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_3 = __this->get_address_of_mPixelFormat_7();
		RuntimeObject * L_4 = Box(PIXEL_FORMAT_t3209881435_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		*L_3 = *(int32_t*)UnBox(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1323066547, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->set_mFormatRegistered_9((bool)1);
		goto IL_006e;
	}

IL_0042:
	{
		int32_t* L_7 = __this->get_address_of_mPixelFormat_7();
		RuntimeObject * L_8 = Box(PIXEL_FORMAT_t3209881435_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		*L_7 = *(int32_t*)UnBox(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral464028422, L_9, _stringLiteral2186981479, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		__this->set_mFormatRegistered_9((bool)0);
	}

IL_006e:
	{
		return;
	}
}
// System.Void CameraFeed::OnTrackablesUpdated()
extern "C" IL2CPP_METHOD_ATTR void CameraFeed_OnTrackablesUpdated_m1470020028 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFeed_OnTrackablesUpdated_m1470020028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mFormatRegistered_9();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		bool L_1 = __this->get_mAccessCameraImage_8();
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_2 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_mPixelFormat_7();
		NullCheck(L_2);
		Image_t745056343 * L_4 = CameraDevice_GetCameraImage_m151166382(L_2, L_3, /*hidden argument*/NULL);
		__this->set_image_6(L_4);
	}

IL_002c:
	{
		return;
	}
}
// System.Void CameraFeed::OnPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CameraFeed_OnPause_m3477990339 (CameraFeed_t1617299256 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFeed_OnPause_m3477990339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___paused0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2546630231, /*hidden argument*/NULL);
		CameraFeed_UnregisterFormat_m345081511(__this, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1764204093, /*hidden argument*/NULL);
		CameraFeed_RegisterFormat_m2916050735(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void CameraFeed::RegisterFormat()
extern "C" IL2CPP_METHOD_ATTR void CameraFeed_RegisterFormat_m2916050735 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFeed_RegisterFormat_m2916050735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_mPixelFormat_7();
		NullCheck(L_0);
		bool L_2 = CameraDevice_SetFrameFormat_m1111586459(L_0, L_1, (bool)1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_3 = __this->get_address_of_mPixelFormat_7();
		RuntimeObject * L_4 = Box(PIXEL_FORMAT_t3209881435_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		*L_3 = *(int32_t*)UnBox(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral569560965, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->set_mFormatRegistered_9((bool)1);
		goto IL_0069;
	}

IL_0042:
	{
		int32_t* L_7 = __this->get_address_of_mPixelFormat_7();
		RuntimeObject * L_8 = Box(PIXEL_FORMAT_t3209881435_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		*L_7 = *(int32_t*)UnBox(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2387719440, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		__this->set_mFormatRegistered_9((bool)0);
	}

IL_0069:
	{
		return;
	}
}
// System.Void CameraFeed::UnregisterFormat()
extern "C" IL2CPP_METHOD_ATTR void CameraFeed_UnregisterFormat_m345081511 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFeed_UnregisterFormat_m345081511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get_address_of_mPixelFormat_7();
		RuntimeObject * L_1 = Box(PIXEL_FORMAT_t3209881435_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		*L_0 = *(int32_t*)UnBox(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral912792620, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_mPixelFormat_7();
		NullCheck(L_4);
		CameraDevice_SetFrameFormat_m1111586459(L_4, L_5, (bool)0, /*hidden argument*/NULL);
		__this->set_mFormatRegistered_9((bool)0);
		return;
	}
}
// UnityEngine.Texture2D CameraFeed::GetImage()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * CameraFeed_GetImage_m791337117 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFeed_GetImage_m791337117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Image_t745056343 * L_0 = __this->get_image_6();
		NullCheck(L_0);
		int32_t L_1 = Image_get_Width_m3459292501(L_0, /*hidden argument*/NULL);
		Image_t745056343 * L_2 = __this->get_image_6();
		NullCheck(L_2);
		int32_t L_3 = Image_get_Height_m1593747350(L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Image_t745056343 * L_5 = __this->get_image_6();
		Texture2D_t3840446185 * L_6 = V_0;
		NullCheck(L_5);
		Image_CopyToTexture_m524838193(L_5, L_6, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_7 = V_0;
		return L_7;
	}
}
// System.Int32 CameraFeed::getWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraFeed_getWidth_m1164001957 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	{
		Image_t745056343 * L_0 = __this->get_image_6();
		NullCheck(L_0);
		int32_t L_1 = Image_get_Width_m3459292501(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 CameraFeed::getHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraFeed_getHeight_m2499397298 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	{
		Image_t745056343 * L_0 = __this->get_image_6();
		NullCheck(L_0);
		int32_t L_1 = Image_get_Height_m1593747350(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CameraFeed::GetImageAvailable()
extern "C" IL2CPP_METHOD_ATTR bool CameraFeed_GetImageAvailable_m2367629798 (CameraFeed_t1617299256 * __this, const RuntimeMethod* method)
{
	{
		Image_t745056343 * L_0 = __this->get_image_6();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		return (bool)0;
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
// System.Void DefaultInitializationErrorHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler__ctor_m2145257936 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_mErrorText_4(L_0);
		VuforiaMonoBehaviour__ctor_m348562674(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_m599033302(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Awake_m1713298888 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Start_m2498604264 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnGUI_m2338842741 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_5();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Window_m1088326791(NULL /*static, unused*/, 0, L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnDestroy_m3668093536 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_DrawWindowContent_m2208378571 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_2), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_9 = V_0;
		GUIStyle_t3956901511 * L_10 = __this->get_headerStyle_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2420537077(NULL /*static, unused*/, L_9, _stringLiteral2016908147, L_10, /*hidden argument*/NULL);
		Rect_t2360479859  L_11 = V_1;
		String_t* L_12 = __this->get_mErrorText_4();
		GUIStyle_t3956901511 * L_13 = __this->get_bodyStyle_7();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		Rect_t2360479859  L_14 = V_2;
		GUIStyle_t3956901511 * L_15 = __this->get_footerStyle_9();
		bool L_16 = GUI_Button_m2223708732(NULL /*static, unused*/, L_14, _stringLiteral3483484711, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00eb;
			}
			case 9:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0036:
	{
		__this->set_mErrorText_4(_stringLiteral3279329212);
		goto IL_010b;
	}

IL_0046:
	{
		__this->set_mErrorText_4(_stringLiteral3325583105);
		goto IL_010b;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1253325676, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_2);
		goto IL_010b;
	}

IL_0071:
	{
		__this->set_mErrorText_4(_stringLiteral2959890895);
		goto IL_010b;
	}

IL_0081:
	{
		__this->set_mErrorText_4(_stringLiteral2293327149);
		goto IL_010b;
	}

IL_0091:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2746077084, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_4);
		goto IL_010b;
	}

IL_00ac:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2746058527, L_5, _stringLiteral491174246, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_6);
		goto IL_010b;
	}

IL_00cc:
	{
		String_t* L_7 = Application_get_productName_m2401755738(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3183081100, L_7, _stringLiteral868600955, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_8);
		goto IL_010b;
	}

IL_00eb:
	{
		__this->set_mErrorText_4(_stringLiteral3122929577);
		goto IL_010b;
	}

IL_00fb:
	{
		__this->set_mErrorText_4(_stringLiteral3567432369);
		goto IL_010b;
	}

IL_010b:
	{
		RuntimeObject * L_9 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1273907647(L_10, _stringLiteral3452614641, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_mErrorText_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral229317972, L_11, _stringLiteral2072581803, L_12, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_13);
		String_t* L_14 = __this->get_mErrorText_4();
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral229317972, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m1273907647(L_16, _stringLiteral2642543365, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral3752705136);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3752705136);
		ObjectU5BU5D_t2843939325* L_21 = L_20;
		int32_t L_22 = ___errorCode0;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_24);
		ObjectU5BU5D_t2843939325* L_25 = L_21;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral3453007782);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3453007782);
		ObjectU5BU5D_t2843939325* L_26 = L_25;
		String_t* L_27 = V_0;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_27);
		String_t* L_28 = String_Concat_m2971454694(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_5(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C" IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1431967569);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_7;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3797279721);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		String_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = String_Substring_m1610150815(L_14, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral1108443480);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		String_t* L_18 = V_0;
		String_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_21 = String_Substring_m1610150815(L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		ObjectU5BU5D_t2843939325* L_22 = L_17;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral2072975055);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m2971454694(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		goto IL_00af;
	}

IL_0079:
	{
		ObjectU5BU5D_t2843939325* L_24 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral1431967569);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_26 = L_25;
		String_t* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_26;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral1498400317);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_32 = L_31;
		String_t* L_33 = V_0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_33);
		ObjectU5BU5D_t2843939325* L_34 = L_32;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral2072975055);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m2971454694(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
	}

IL_00af:
	{
		String_t* L_36 = V_1;
		return L_36;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0019:
	{
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		float L_5 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_4)))/(float)L_5));
		float L_6 = V_1;
		if ((!(((float)L_6) > ((float)(4.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_003a;
	}

IL_0039:
	{
		G_B6_0 = 1;
	}

IL_003a:
	{
		V_2 = G_B6_0;
		Color_t2555686324  L_7 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_7, /*hidden argument*/NULL);
		__this->set_bodyTexture_10(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_10 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_11 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m286683560((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_13 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_12, /*hidden argument*/NULL);
		__this->set_headerTexture_11(L_13);
		float L_14 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_15 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_16 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Color__ctor_m286683560((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_18 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_17, /*hidden argument*/NULL);
		__this->set_footerTexture_12(L_18);
		GUIStyle_t3956901511 * L_19 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_19, /*hidden argument*/NULL);
		__this->set_bodyStyle_7(L_19);
		GUIStyle_t3956901511 * L_20 = __this->get_bodyStyle_7();
		NullCheck(L_20);
		GUIStyleState_t1397964415 * L_21 = GUIStyle_get_normal_m729441812(L_20, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_22 = __this->get_bodyTexture_10();
		NullCheck(L_21);
		GUIStyleState_set_background_m369476077(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_23 = __this->get_bodyStyle_7();
		Font_t1956802104 * L_24 = Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(NULL /*static, unused*/, _stringLiteral2974894664, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var);
		NullCheck(L_23);
		GUIStyle_set_font_m2490449107(L_23, L_24, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_25 = __this->get_bodyStyle_7();
		int32_t L_26 = V_2;
		float L_27 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		GUIStyle_set_fontSize_m1566850023(L_25, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_26))))), (float)L_27))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_28 = __this->get_bodyStyle_7();
		NullCheck(L_28);
		GUIStyleState_t1397964415 * L_29 = GUIStyle_get_normal_m729441812(L_28, /*hidden argument*/NULL);
		Color_t2555686324  L_30 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m1105876047(L_29, L_30, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_31 = __this->get_bodyStyle_7();
		NullCheck(L_31);
		GUIStyle_set_wordWrap_m1419501823(L_31, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_32 = __this->get_bodyStyle_7();
		NullCheck(L_32);
		GUIStyle_set_alignment_m3944619660(L_32, 4, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_33 = __this->get_bodyStyle_7();
		RectOffset_t1369453676 * L_34 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_34, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_set_padding_m3302456044(L_33, L_34, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_35 = __this->get_bodyStyle_7();
		GUIStyle_t3956901511 * L_36 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_36, L_35, /*hidden argument*/NULL);
		__this->set_headerStyle_8(L_36);
		GUIStyle_t3956901511 * L_37 = __this->get_headerStyle_8();
		NullCheck(L_37);
		GUIStyleState_t1397964415 * L_38 = GUIStyle_get_normal_m729441812(L_37, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_39 = __this->get_headerTexture_11();
		NullCheck(L_38);
		GUIStyleState_set_background_m369476077(L_38, L_39, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_40 = __this->get_headerStyle_8();
		int32_t L_41 = V_2;
		float L_42 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		GUIStyle_set_fontSize_m1566850023(L_40, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_41))))), (float)L_42))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_43 = __this->get_bodyStyle_7();
		GUIStyle_t3956901511 * L_44 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_44, L_43, /*hidden argument*/NULL);
		__this->set_footerStyle_9(L_44);
		GUIStyle_t3956901511 * L_45 = __this->get_footerStyle_9();
		NullCheck(L_45);
		GUIStyleState_t1397964415 * L_46 = GUIStyle_get_normal_m729441812(L_45, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_47 = __this->get_footerTexture_12();
		NullCheck(L_46);
		GUIStyleState_set_background_m369476077(L_46, L_47, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_48 = __this->get_footerStyle_9();
		NullCheck(L_48);
		GUIStyleState_t1397964415 * L_49 = GUIStyle_get_normal_m729441812(L_48, /*hidden argument*/NULL);
		Color_t2555686324  L_50 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyleState_set_textColor_m1105876047(L_49, L_50, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_51 = __this->get_footerStyle_9();
		int32_t L_52 = V_2;
		float L_53 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_51);
		GUIStyle_set_fontSize_m1566850023(L_51, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_52))))), (float)L_53))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		Color_t2555686324  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m2984741184(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = V_0;
		NullCheck(L_3);
		Texture2D_Apply_m2271746283(L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
		return L_4;
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
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler__ctor_m2856359002 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_Start_m796446126 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_4(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnDestroy_m1080906236 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnDestroy_m1080906236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_2 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_2);
		TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614(L_2, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111 (DefaultTrackableEventHandler_t1588957063 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___newStatus1;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___newStatus1;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___newStatus1;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_003f;
		}
	}

IL_0015:
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_3);
		String_t* L_4 = TrackableBehaviour_get_TrackableName_m3644057705(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_4, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		goto IL_007c;
	}

IL_003f:
	{
		int32_t L_6 = ___previousStatus0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_7 = ___newStatus1;
		if (L_7)
		{
			goto IL_0076;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_8 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_8);
		String_t* L_9 = TrackableBehaviour_get_TrackableName_m3644057705(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_9, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		goto IL_007c;
	}

IL_0076:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
	}

IL_007c:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingFound_m4202593607 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)1, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)1, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)1, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingLost_m424172778 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)0, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
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
// System.Void Loom::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Loom__ctor_m3817918221 (Loom_t3759828253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom__ctor_m3817918221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2736452219 * L_0 = (List_1_t2736452219 *)il2cpp_codegen_object_new(List_1_t2736452219_il2cpp_TypeInfo_var);
		List_1__ctor_m3850019872(L_0, /*hidden argument*/List_1__ctor_m3850019872_RuntimeMethod_var);
		__this->set__actions_9(L_0);
		List_1_t2499617678 * L_1 = (List_1_t2499617678 *)il2cpp_codegen_object_new(List_1_t2499617678_il2cpp_TypeInfo_var);
		List_1__ctor_m3178979345(L_1, /*hidden argument*/List_1__ctor_m3178979345_RuntimeMethod_var);
		__this->set__delayed_10(L_1);
		List_1_t2499617678 * L_2 = (List_1_t2499617678 *)il2cpp_codegen_object_new(List_1_t2499617678_il2cpp_TypeInfo_var);
		List_1__ctor_m3178979345(L_2, /*hidden argument*/List_1__ctor_m3178979345_RuntimeMethod_var);
		__this->set__currentDelayed_11(L_2);
		List_1_t2736452219 * L_3 = (List_1_t2736452219 *)il2cpp_codegen_object_new(List_1_t2736452219_il2cpp_TypeInfo_var);
		List_1__ctor_m3850019872(L_3, /*hidden argument*/List_1__ctor_m3850019872_RuntimeMethod_var);
		__this->set__currentActions_12(L_3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Loom Loom::get_Current()
extern "C" IL2CPP_METHOD_ATTR Loom_t3759828253 * Loom_get_Current_m1133460506 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom_get_Current_m1133460506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_Initialize_m647855750(NULL /*static, unused*/, /*hidden argument*/NULL);
		Loom_t3759828253 * L_0 = ((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get__current_6();
		return L_0;
	}
}
// System.Void Loom::Awake()
extern "C" IL2CPP_METHOD_ATTR void Loom_Awake_m3546779126 (Loom_t3759828253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom_Awake_m3546779126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->set__current_6(__this);
		((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->set_initialized_8((bool)1);
		return;
	}
}
// System.Void Loom::Initialize()
extern "C" IL2CPP_METHOD_ATTR void Loom_Initialize_m647855750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom_Initialize_m647855750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		bool L_0 = ((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get_initialized_8();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		bool L_1 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->set_initialized_8((bool)1);
		GameObject_t1113636619 * L_2 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_2, _stringLiteral2755003859, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Loom_t3759828253 * L_4 = GameObject_AddComponent_TisLoom_t3759828253_m3262702326(L_3, /*hidden argument*/GameObject_AddComponent_TisLoom_t3759828253_m3262702326_RuntimeMethod_var);
		((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->set__current_6(L_4);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Loom::QueueOnMainThread(System.Action)
extern "C" IL2CPP_METHOD_ATTR void Loom_QueueOnMainThread_m1417379532 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom_QueueOnMainThread_m1417379532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t1264377477 * L_0 = ___action0;
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_QueueOnMainThread_m2710461419(NULL /*static, unused*/, L_0, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Loom::QueueOnMainThread(System.Action,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Loom_QueueOnMainThread_m2710461419 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___action0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom_QueueOnMainThread_m2710461419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	DelayedQueueItem_t1027542936  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		float L_0 = ___time1;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_t3759828253 * L_1 = Loom_get_Current_m1133460506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_t2499617678 * L_2 = L_1->get__delayed_10();
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_t3759828253 * L_4 = Loom_get_Current_m1133460506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_t2499617678 * L_5 = L_4->get__delayed_10();
		il2cpp_codegen_initobj((&V_1), sizeof(DelayedQueueItem_t1027542936 ));
		float L_6 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = ___time1;
		(&V_1)->set_time_0(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		Action_t1264377477 * L_8 = ___action0;
		(&V_1)->set_action_1(L_8);
		DelayedQueueItem_t1027542936  L_9 = V_1;
		NullCheck(L_5);
		List_1_Add_m2963593273(L_5, L_9, /*hidden argument*/List_1_Add_m2963593273_RuntimeMethod_var);
		IL2CPP_LEAVE(0x56, FINALLY_004f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		goto IL_0088;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_t3759828253 * L_11 = Loom_get_Current_m1133460506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_t2736452219 * L_12 = L_11->get__actions_9();
		V_2 = L_12;
		RuntimeObject * L_13 = V_2;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_t3759828253 * L_14 = Loom_get_Current_m1133460506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_t2736452219 * L_15 = L_14->get__actions_9();
		Action_t1264377477 * L_16 = ___action0;
		NullCheck(L_15);
		List_1_Add_m263651446(L_15, L_16, /*hidden argument*/List_1_Add_m263651446_RuntimeMethod_var);
		IL2CPP_LEAVE(0x88, FINALLY_0081);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		RuntimeObject * L_17 = V_2;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(129)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_JUMP_TBL(0x88, IL_0088)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0088:
	{
		return;
	}
}
// System.Threading.Thread Loom::RunAsync(System.Action)
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Loom_RunAsync_m3073108896 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom_RunAsync_m3073108896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_Initialize_m647855750(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0010;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_Sleep_m483098292(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get_numThreads_5();
		int32_t L_1 = ((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get_maxThreads_4();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Interlocked_Increment_m3548166048(NULL /*static, unused*/, (int32_t*)(((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get_address_of_numThreads_5()), /*hidden argument*/NULL);
		WaitCallback_t2448485498 * L_2 = ((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_13();
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		intptr_t L_3 = (intptr_t)Loom_RunAction_m2582464502_RuntimeMethod_var;
		WaitCallback_t2448485498 * L_4 = (WaitCallback_t2448485498 *)il2cpp_codegen_object_new(WaitCallback_t2448485498_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m1893321019(L_4, NULL, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_13(L_4);
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		WaitCallback_t2448485498 * L_5 = ((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_13();
		Action_t1264377477 * L_6 = ___a0;
		ThreadPool_QueueUserWorkItem_m1526970260(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return (Thread_t2300836069 *)NULL;
	}
}
// System.Void Loom::RunAction(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Loom_RunAction_m2582464502 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom_RunAction_m2582464502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			RuntimeObject * L_0 = ___action0;
			NullCheck(((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_0, Action_t1264377477_il2cpp_TypeInfo_var)));
			Action_Invoke_m937035532(((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_0, Action_t1264377477_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x22, FINALLY_0016);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0010;
			throw e;
		}

CATCH_0010:
		{ // begin catch(System.Object)
			IL2CPP_LEAVE(0x22, FINALLY_0016);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Interlocked_Decrement_m899158053(NULL /*static, unused*/, (int32_t*)(((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get_address_of_numThreads_5()), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0022:
	{
		return;
	}
}
// System.Void Loom::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void Loom_OnDisable_m2869689973 (Loom_t3759828253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom_OnDisable_m2869689973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_t3759828253 * L_0 = ((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get__current_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->set__current_6((Loom_t3759828253 *)NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Loom::Update()
extern "C" IL2CPP_METHOD_ATTR void Loom_Update_m1664342559 (Loom_t3759828253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom_Update_m1664342559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Action_t1264377477 * V_1 = NULL;
	Enumerator_t330728800  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	DelayedQueueItem_t1027542936  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Enumerator_t93894259  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DelayedQueueItem_t1027542936  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Enumerator_t93894259  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	List_1_t2499617678 * G_B12_0 = NULL;
	List_1_t2499617678 * G_B12_1 = NULL;
	List_1_t2499617678 * G_B11_0 = NULL;
	List_1_t2499617678 * G_B11_1 = NULL;
	{
		List_1_t2736452219 * L_0 = __this->get__actions_9();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		List_1_t2736452219 * L_2 = __this->get__currentActions_12();
		NullCheck(L_2);
		List_1_Clear_m3969294004(L_2, /*hidden argument*/List_1_Clear_m3969294004_RuntimeMethod_var);
		List_1_t2736452219 * L_3 = __this->get__currentActions_12();
		List_1_t2736452219 * L_4 = __this->get__actions_9();
		NullCheck(L_3);
		List_1_AddRange_m3508878779(L_3, L_4, /*hidden argument*/List_1_AddRange_m3508878779_RuntimeMethod_var);
		List_1_t2736452219 * L_5 = __this->get__actions_9();
		NullCheck(L_5);
		List_1_Clear_m3969294004(L_5, /*hidden argument*/List_1_Clear_m3969294004_RuntimeMethod_var);
		IL2CPP_LEAVE(0x40, FINALLY_0039);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0040:
	{
		List_1_t2736452219 * L_7 = __this->get__currentActions_12();
		NullCheck(L_7);
		Enumerator_t330728800  L_8 = List_1_GetEnumerator_m538907628(L_7, /*hidden argument*/List_1_GetEnumerator_m538907628_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_0051:
		{
			Action_t1264377477 * L_9 = Enumerator_get_Current_m4151988499((Enumerator_t330728800 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m4151988499_RuntimeMethod_var);
			V_1 = L_9;
			Action_t1264377477 * L_10 = V_1;
			NullCheck(L_10);
			Action_Invoke_m937035532(L_10, /*hidden argument*/NULL);
		}

IL_005f:
		{
			bool L_11 = Enumerator_MoveNext_m2738576554((Enumerator_t330728800 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2738576554_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0051;
			}
		}

IL_006b:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m385718446((Enumerator_t330728800 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m385718446_RuntimeMethod_var);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007e:
	{
		List_1_t2499617678 * L_12 = __this->get__delayed_10();
		V_3 = L_12;
		RuntimeObject * L_13 = V_3;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			List_1_t2499617678 * L_14 = __this->get__currentDelayed_11();
			NullCheck(L_14);
			List_1_Clear_m2127924545(L_14, /*hidden argument*/List_1_Clear_m2127924545_RuntimeMethod_var);
			List_1_t2499617678 * L_15 = __this->get__currentDelayed_11();
			List_1_t2499617678 * L_16 = __this->get__delayed_10();
			IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
			Func_2_t1573880443 * L_17 = ((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_14();
			G_B11_0 = L_16;
			G_B11_1 = L_15;
			if (L_17)
			{
				G_B12_0 = L_16;
				G_B12_1 = L_15;
				goto IL_00ba;
			}
		}

IL_00a9:
		{
			intptr_t L_18 = (intptr_t)Loom_U3CUpdateU3Em__0_m951239159_RuntimeMethod_var;
			Func_2_t1573880443 * L_19 = (Func_2_t1573880443 *)il2cpp_codegen_object_new(Func_2_t1573880443_il2cpp_TypeInfo_var);
			Func_2__ctor_m3835612240(L_19, NULL, L_18, /*hidden argument*/Func_2__ctor_m3835612240_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
			((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_14(L_19);
			G_B12_0 = G_B11_0;
			G_B12_1 = G_B11_1;
		}

IL_00ba:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
			Func_2_t1573880443 * L_20 = ((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_14();
			RuntimeObject* L_21 = Enumerable_Where_TisDelayedQueueItem_t1027542936_m4086968425(NULL /*static, unused*/, G_B12_0, L_20, /*hidden argument*/Enumerable_Where_TisDelayedQueueItem_t1027542936_m4086968425_RuntimeMethod_var);
			NullCheck(G_B12_1);
			List_1_AddRange_m178148047(G_B12_1, L_21, /*hidden argument*/List_1_AddRange_m178148047_RuntimeMethod_var);
			List_1_t2499617678 * L_22 = __this->get__currentDelayed_11();
			NullCheck(L_22);
			Enumerator_t93894259  L_23 = List_1_GetEnumerator_m2078161870(L_22, /*hidden argument*/List_1_GetEnumerator_m2078161870_RuntimeMethod_var);
			V_5 = L_23;
		}

IL_00d6:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00f2;
			}

IL_00db:
			{
				DelayedQueueItem_t1027542936  L_24 = Enumerator_get_Current_m1587659164((Enumerator_t93894259 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m1587659164_RuntimeMethod_var);
				V_4 = L_24;
				List_1_t2499617678 * L_25 = __this->get__delayed_10();
				DelayedQueueItem_t1027542936  L_26 = V_4;
				NullCheck(L_25);
				List_1_Remove_m1127752898(L_25, L_26, /*hidden argument*/List_1_Remove_m1127752898_RuntimeMethod_var);
			}

IL_00f2:
			{
				bool L_27 = Enumerator_MoveNext_m2281580424((Enumerator_t93894259 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m2281580424_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_00db;
				}
			}

IL_00fe:
			{
				IL2CPP_LEAVE(0x111, FINALLY_0103);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0103;
		}

FINALLY_0103:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1104083697((Enumerator_t93894259 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m1104083697_RuntimeMethod_var);
			IL2CPP_END_FINALLY(259)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(259)
		{
			IL2CPP_JUMP_TBL(0x111, IL_0111)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0111:
		{
			IL2CPP_LEAVE(0x11D, FINALLY_0116);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0116;
	}

FINALLY_0116:
	{ // begin finally (depth: 1)
		RuntimeObject * L_28 = V_3;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(278)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(278)
	{
		IL2CPP_JUMP_TBL(0x11D, IL_011d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_011d:
	{
		List_1_t2499617678 * L_29 = __this->get__currentDelayed_11();
		NullCheck(L_29);
		Enumerator_t93894259  L_30 = List_1_GetEnumerator_m2078161870(L_29, /*hidden argument*/List_1_GetEnumerator_m2078161870_RuntimeMethod_var);
		V_7 = L_30;
	}

IL_012a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0144;
		}

IL_012f:
		{
			DelayedQueueItem_t1027542936  L_31 = Enumerator_get_Current_m1587659164((Enumerator_t93894259 *)(&V_7), /*hidden argument*/Enumerator_get_Current_m1587659164_RuntimeMethod_var);
			V_6 = L_31;
			Action_t1264377477 * L_32 = (&V_6)->get_action_1();
			NullCheck(L_32);
			Action_Invoke_m937035532(L_32, /*hidden argument*/NULL);
		}

IL_0144:
		{
			bool L_33 = Enumerator_MoveNext_m2281580424((Enumerator_t93894259 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m2281580424_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_012f;
			}
		}

IL_0150:
		{
			IL2CPP_LEAVE(0x163, FINALLY_0155);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0155;
	}

FINALLY_0155:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1104083697((Enumerator_t93894259 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m1104083697_RuntimeMethod_var);
		IL2CPP_END_FINALLY(341)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(341)
	{
		IL2CPP_JUMP_TBL(0x163, IL_0163)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0163:
	{
		return;
	}
}
// System.Void Loom::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Loom__cctor_m835196188 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loom__cctor_m835196188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Loom_t3759828253_StaticFields*)il2cpp_codegen_static_fields_for(Loom_t3759828253_il2cpp_TypeInfo_var))->set_maxThreads_4(8);
		return;
	}
}
// System.Boolean Loom::<Update>m__0(Loom/DelayedQueueItem)
extern "C" IL2CPP_METHOD_ATTR bool Loom_U3CUpdateU3Em__0_m951239159 (RuntimeObject * __this /* static, unused */, DelayedQueueItem_t1027542936  ___d0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___d0)->get_time_0();
		float L_1 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)((!(((float)L_0) <= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// Conversion methods for marshalling of: Loom/DelayedQueueItem
extern "C" void DelayedQueueItem_t1027542936_marshal_pinvoke(const DelayedQueueItem_t1027542936& unmarshaled, DelayedQueueItem_t1027542936_marshaled_pinvoke& marshaled)
{
	marshaled.___time_0 = unmarshaled.get_time_0();
	marshaled.___action_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_action_1()));
}
extern "C" void DelayedQueueItem_t1027542936_marshal_pinvoke_back(const DelayedQueueItem_t1027542936_marshaled_pinvoke& marshaled, DelayedQueueItem_t1027542936& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelayedQueueItem_t1027542936_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float unmarshaled_time_temp_0 = 0.0f;
	unmarshaled_time_temp_0 = marshaled.___time_0;
	unmarshaled.set_time_0(unmarshaled_time_temp_0);
	unmarshaled.set_action_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_t1264377477>(marshaled.___action_1, Action_t1264377477_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Loom/DelayedQueueItem
extern "C" void DelayedQueueItem_t1027542936_marshal_pinvoke_cleanup(DelayedQueueItem_t1027542936_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Loom/DelayedQueueItem
extern "C" void DelayedQueueItem_t1027542936_marshal_com(const DelayedQueueItem_t1027542936& unmarshaled, DelayedQueueItem_t1027542936_marshaled_com& marshaled)
{
	marshaled.___time_0 = unmarshaled.get_time_0();
	marshaled.___action_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_action_1()));
}
extern "C" void DelayedQueueItem_t1027542936_marshal_com_back(const DelayedQueueItem_t1027542936_marshaled_com& marshaled, DelayedQueueItem_t1027542936& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelayedQueueItem_t1027542936_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float unmarshaled_time_temp_0 = 0.0f;
	unmarshaled_time_temp_0 = marshaled.___time_0;
	unmarshaled.set_time_0(unmarshaled_time_temp_0);
	unmarshaled.set_action_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_t1264377477>(marshaled.___action_1, Action_t1264377477_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Loom/DelayedQueueItem
extern "C" void DelayedQueueItem_t1027542936_marshal_com_cleanup(DelayedQueueItem_t1027542936_marshaled_com& marshaled)
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
// System.Void MK.Glow.MKGlowFree::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree__ctor_m914182528 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		__this->set_rtFormat_8(7);
		LayerMask_t3493934918  L_0 = LayerMask_op_Implicit_m90232283(NULL /*static, unused*/, (-1), /*hidden argument*/NULL);
		__this->set_glowLayer_14(L_0);
		Color_t2555686324  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m2943235014((&L_1), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_glowTint_16(L_1);
		__this->set_blurSpreadInner_17((0.6f));
		__this->set_blurIterations_18(5);
		__this->set_glowIntensityInner_19((0.4f));
		__this->set_samples_20(2);
		__this->set_srcVRUsage_26(2);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Camera MK.Glow.MKGlowFree::get_Cam()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * MKGlowFree_get_Cam_m1214962923 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_get_Cam_m1214962923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.LayerMask MK.Glow.MKGlowFree::get_GlowLayer()
extern "C" IL2CPP_METHOD_ATTR LayerMask_t3493934918  MKGlowFree_get_GlowLayer_m3168156763 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		LayerMask_t3493934918  L_0 = __this->get_glowLayer_14();
		return L_0;
	}
}
// System.Void MK.Glow.MKGlowFree::set_GlowLayer(UnityEngine.LayerMask)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_set_GlowLayer_m169544412 (MKGlowFree_t706824981 * __this, LayerMask_t3493934918  ___value0, const RuntimeMethod* method)
{
	{
		LayerMask_t3493934918  L_0 = ___value0;
		__this->set_glowLayer_14(L_0);
		return;
	}
}
// MK.Glow.GlowType MK.Glow.MKGlowFree::get_GlowType()
extern "C" IL2CPP_METHOD_ATTR int32_t MKGlowFree_get_GlowType_m2655665126 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_glowType_15();
		return L_0;
	}
}
// System.Void MK.Glow.MKGlowFree::set_GlowType(MK.Glow.GlowType)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_set_GlowType_m3178178083 (MKGlowFree_t706824981 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_glowType_15(L_0);
		return;
	}
}
// UnityEngine.Color MK.Glow.MKGlowFree::get_GlowTint()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  MKGlowFree_get_GlowTint_m729955894 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = __this->get_glowTint_16();
		return L_0;
	}
}
// System.Void MK.Glow.MKGlowFree::set_GlowTint(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_set_GlowTint_m1459777209 (MKGlowFree_t706824981 * __this, Color_t2555686324  ___value0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___value0;
		__this->set_glowTint_16(L_0);
		return;
	}
}
// System.Int32 MK.Glow.MKGlowFree::get_Samples()
extern "C" IL2CPP_METHOD_ATTR int32_t MKGlowFree_get_Samples_m1045851452 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_samples_20();
		return L_0;
	}
}
// System.Void MK.Glow.MKGlowFree::set_Samples(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_set_Samples_m2465629656 (MKGlowFree_t706824981 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_samples_20(L_0);
		return;
	}
}
// System.Int32 MK.Glow.MKGlowFree::get_BlurIterations()
extern "C" IL2CPP_METHOD_ATTR int32_t MKGlowFree_get_BlurIterations_m1580542733 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_blurIterations_18();
		return L_0;
	}
}
// System.Void MK.Glow.MKGlowFree::set_BlurIterations(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_set_BlurIterations_m2667914715 (MKGlowFree_t706824981 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_set_BlurIterations_m2667914715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_0, 0, ((int32_t)10), /*hidden argument*/NULL);
		__this->set_blurIterations_18(L_1);
		return;
	}
}
// System.Single MK.Glow.MKGlowFree::get_GlowIntensityInner()
extern "C" IL2CPP_METHOD_ATTR float MKGlowFree_get_GlowIntensityInner_m2801832886 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_glowIntensityInner_19();
		return L_0;
	}
}
// System.Void MK.Glow.MKGlowFree::set_GlowIntensityInner(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_set_GlowIntensityInner_m2353716768 (MKGlowFree_t706824981 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_glowIntensityInner_19(L_0);
		return;
	}
}
// System.Single MK.Glow.MKGlowFree::get_BlurSpreadInner()
extern "C" IL2CPP_METHOD_ATTR float MKGlowFree_get_BlurSpreadInner_m3880929291 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_blurSpreadInner_17();
		return L_0;
	}
}
// System.Void MK.Glow.MKGlowFree::set_BlurSpreadInner(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_set_BlurSpreadInner_m3198213376 (MKGlowFree_t706824981 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_blurSpreadInner_17(L_0);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::Reset()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_Reset_m1415570109 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		MKGlowFree_GlowInitialize_m3382109123(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::Awake()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_Awake_m3802054441 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		MKGlowFree_GlowInitialize_m3382109123(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::GlowInitialize()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_GlowInitialize_m3382109123 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		MKGlowFree_Cleanup_m2550696459(__this, /*hidden argument*/NULL);
		MKGlowFree_SetupShaders_m4037307605(__this, /*hidden argument*/NULL);
		MKGlowFree_SetupMaterials_m3506540674(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::SetupShaders()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_SetupShaders_m4037307605 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_SetupShaders_m4037307605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Shader_t4151988712 * L_0 = __this->get_blurShader_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		Shader_t4151988712 * L_2 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3622617826, /*hidden argument*/NULL);
		__this->set_blurShader_9(L_2);
	}

IL_0020:
	{
		Shader_t4151988712 * L_3 = __this->get_compositeShader_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		Shader_t4151988712 * L_5 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral2705711170, /*hidden argument*/NULL);
		__this->set_compositeShader_10(L_5);
	}

IL_0040:
	{
		Shader_t4151988712 * L_6 = __this->get_selectiveRenderShader_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		Shader_t4151988712 * L_8 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3609359227, /*hidden argument*/NULL);
		__this->set_selectiveRenderShader_11(L_8);
	}

IL_0060:
	{
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_Cleanup_m2550696459 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_Cleanup_m2550696459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = __this->get_selectiveGlowCamera_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = MKGlowFree_get_SelectiveGlowCameraObject_m1517722839(__this, /*hidden argument*/NULL);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_OnEnable_m3278552767 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		MKGlowFree_GlowInitialize_m3382109123(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_OnDisable_m2851426901 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		MKGlowFree_Cleanup_m2550696459(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_OnDestroy_m3870020097 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		MKGlowFree_Cleanup_m2550696459(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RenderTexture MK.Glow.MKGlowFree::GetTemporaryRT(System.Int32,System.Int32,UnityEngine.VRTextureUsage)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * MKGlowFree_GetTemporaryRT_m3712898819 (MKGlowFree_t706824981 * __this, int32_t ___width0, int32_t ___height1, int32_t ___vrUsage2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = __this->get_rtFormat_8();
		int32_t L_3 = ___vrUsage2;
		RenderTexture_t2108887433 * L_4 = RenderTexture_GetTemporary_m1591556707(NULL /*static, unused*/, L_0, L_1, 0, L_2, 0, 1, 0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void MK.Glow.MKGlowFree::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_Blur_m2374394553 (MKGlowFree_t706824981 * __this, RenderTexture_t2108887433 * ___main0, RenderTexture_t2108887433 * ___tmpMain1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_Blur_m2374394553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 1;
		goto IL_0071;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		float L_1 = __this->get_blurSpreadInner_17();
		int32_t L_2 = __this->get_blurIterations_18();
		int32_t L_3 = __this->get_samples_20();
		V_1 = ((float)((float)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_0))), (float)((float)il2cpp_codegen_multiply((float)L_1, (float)(10.0f)))))/(float)(((float)((float)L_2)))))/(float)(((float)((float)L_3)))));
		float L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(MKGlowFree_t706824981_il2cpp_TypeInfo_var);
		SingleU5BU5D_t1444911251* L_5 = ((MKGlowFree_t706824981_StaticFields*)il2cpp_codegen_static_fields_for(MKGlowFree_t706824981_il2cpp_TypeInfo_var))->get_gaussFilter_4();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_8));
		Material_t340375123 * L_9 = __this->get_blurMaterial_13();
		float L_10 = V_1;
		NullCheck(L_9);
		Material_SetFloat_m3226510453(L_9, _stringLiteral2687317740, L_10, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_11 = ___main0;
		RenderTexture_t2108887433 * L_12 = ___tmpMain1;
		Material_t340375123 * L_13 = __this->get_blurMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		Material_t340375123 * L_14 = __this->get_blurMaterial_13();
		float L_15 = V_1;
		NullCheck(L_14);
		Material_SetFloat_m3226510453(L_14, _stringLiteral2687317740, L_15, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_16 = ___tmpMain1;
		RenderTexture_t2108887433 * L_17 = ___main0;
		Material_t340375123 * L_18 = __this->get_blurMaterial_13();
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0071:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = __this->get_blurIterations_18();
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::SetupMaterials()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_SetupMaterials_m3506540674 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_SetupMaterials_m3506540674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t340375123 * L_0 = __this->get_blurMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t4151988712 * L_2 = __this->get_blurShader_9();
		Material_t340375123 * L_3 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_3, L_2, /*hidden argument*/NULL);
		__this->set_blurMaterial_13(L_3);
		Material_t340375123 * L_4 = __this->get_blurMaterial_13();
		NullCheck(L_4);
		Object_set_hideFlags_m1648752846(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002f:
	{
		Material_t340375123 * L_5 = __this->get_compositeMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		Shader_t4151988712 * L_7 = __this->get_compositeShader_10();
		Material_t340375123 * L_8 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_8, L_7, /*hidden argument*/NULL);
		__this->set_compositeMaterial_12(L_8);
		Material_t340375123 * L_9 = __this->get_compositeMaterial_12();
		NullCheck(L_9);
		Object_set_hideFlags_m1648752846(L_9, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// UnityEngine.GameObject MK.Glow.MKGlowFree::get_SelectiveGlowCameraObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * MKGlowFree_get_SelectiveGlowCameraObject_m1517722839 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_get_SelectiveGlowCameraObject_m1517722839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_selectiveGlowCameraObject_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_006a;
		}
	}
	{
		GameObject_t1113636619 * L_2 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_2, _stringLiteral2223864965, /*hidden argument*/NULL);
		__this->set_selectiveGlowCameraObject_22(L_2);
		GameObject_t1113636619 * L_3 = __this->get_selectiveGlowCameraObject_22();
		NullCheck(L_3);
		GameObject_AddComponent_TisCamera_t4157153871_m3447638008(L_3, /*hidden argument*/GameObject_AddComponent_TisCamera_t4157153871_m3447638008_RuntimeMethod_var);
		GameObject_t1113636619 * L_4 = __this->get_selectiveGlowCameraObject_22();
		NullCheck(L_4);
		Object_set_hideFlags_m1648752846(L_4, ((int32_t)61), /*hidden argument*/NULL);
		Camera_t4157153871 * L_5 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_orthographic_m2855749523(L_5, (bool)0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_6 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Behaviour_set_enabled_m20417929(L_6, (bool)0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_7 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Camera_set_renderingPath_m3563375443(L_7, 0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_8 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_set_hideFlags_m1648752846(L_8, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_006a:
	{
		GameObject_t1113636619 * L_9 = __this->get_selectiveGlowCameraObject_22();
		return L_9;
	}
}
// UnityEngine.Camera MK.Glow.MKGlowFree::get_SelectiveGlowCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * MKGlowFree_get_SelectiveGlowCamera_m774247276 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_get_SelectiveGlowCamera_m774247276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = __this->get_selectiveGlowCamera_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t1113636619 * L_2 = MKGlowFree_get_SelectiveGlowCameraObject_m1517722839(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_t4157153871 * L_3 = GameObject_GetComponent_TisCamera_t4157153871_m3956151066(L_2, /*hidden argument*/GameObject_GetComponent_TisCamera_t4157153871_m3956151066_RuntimeMethod_var);
		__this->set_selectiveGlowCamera_21(L_3);
	}

IL_0022:
	{
		Camera_t4157153871 * L_4 = __this->get_selectiveGlowCamera_21();
		return L_4;
	}
}
// System.Void MK.Glow.MKGlowFree::SetupGlowCamera()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_SetupGlowCamera_m3234042267 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_1 = MKGlowFree_get_Cam_m1214962923(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Camera_CopyFrom_m3501145412(L_0, L_1, /*hidden argument*/NULL);
		Camera_t4157153871 * L_2 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_depthTextureMode_m754977860(L_2, 0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_3 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_4 = __this->get_glowTexRaw_23();
		NullCheck(L_3);
		Camera_set_targetTexture_m3148311140(L_3, L_4, /*hidden argument*/NULL);
		Camera_t4157153871 * L_5 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_clearFlags_m2207032996(L_5, 2, /*hidden argument*/NULL);
		Camera_t4157153871 * L_6 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		Rect_t2360479859  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Rect__ctor_m2614021312((&L_7), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Camera_set_rect_m521006799(L_6, L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_8 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		Color_t2555686324  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Color__ctor_m2943235014((&L_9), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_backgroundColor_m1332346802(L_8, L_9, /*hidden argument*/NULL);
		Camera_t4157153871 * L_10 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_11 = __this->get_glowLayer_14();
		int32_t L_12 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Camera_set_cullingMask_m1402455777(L_10, L_12, /*hidden argument*/NULL);
		Camera_t4157153871 * L_13 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Camera_set_renderingPath_m3563375443(L_13, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::FullScreenGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_FullScreenGlow_m3003909186 (MKGlowFree_t706824981 * __this, RenderTexture_t2108887433 * ___src0, RenderTexture_t2108887433 * ___dest1, RenderTexture_t2108887433 * ___glowTexInner2, RenderTexture_t2108887433 * ___tmpGlowTex3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_FullScreenGlow_m3003909186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = ___src0;
		RenderTexture_t2108887433 * L_1 = ___glowTexInner2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_2 = ___glowTexInner2;
		RenderTexture_t2108887433 * L_3 = ___tmpGlowTex3;
		MKGlowFree_Blur_m2374394553(__this, L_2, L_3, /*hidden argument*/NULL);
		Material_t340375123 * L_4 = __this->get_compositeMaterial_12();
		RenderTexture_t2108887433 * L_5 = ___glowTexInner2;
		NullCheck(L_4);
		Material_SetTexture_m1829349465(L_4, _stringLiteral2699595194, L_5, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_6 = ___src0;
		RenderTexture_t2108887433 * L_7 = ___dest1;
		Material_t340375123 * L_8 = __this->get_compositeMaterial_12();
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_6, L_7, L_8, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::SelectiveGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_SelectiveGlow_m364804102 (MKGlowFree_t706824981 * __this, RenderTexture_t2108887433 * ___src0, RenderTexture_t2108887433 * ___dest1, RenderTexture_t2108887433 * ___glowTexInner2, RenderTexture_t2108887433 * ___tmpGlowTex3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_SelectiveGlow_m364804102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = __this->get_glowTexRaw_23();
		RenderTexture_t2108887433 * L_1 = ___glowTexInner2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_2 = ___glowTexInner2;
		RenderTexture_t2108887433 * L_3 = ___tmpGlowTex3;
		MKGlowFree_Blur_m2374394553(__this, L_2, L_3, /*hidden argument*/NULL);
		Material_t340375123 * L_4 = __this->get_compositeMaterial_12();
		RenderTexture_t2108887433 * L_5 = ___glowTexInner2;
		NullCheck(L_4);
		Material_SetTexture_m1829349465(L_4, _stringLiteral2699595194, L_5, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_6 = ___src0;
		RenderTexture_t2108887433 * L_7 = ___dest1;
		Material_t340375123 * L_8 = __this->get_compositeMaterial_12();
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::OnPostRender()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_OnPostRender_m4207909457 (MKGlowFree_t706824981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree_OnPostRender_m4207909457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B7_0 = NULL;
	Material_t340375123 * G_B7_1 = NULL;
	String_t* G_B6_0 = NULL;
	Material_t340375123 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	String_t* G_B8_1 = NULL;
	Material_t340375123 * G_B8_2 = NULL;
	float G_B10_0 = 0.0f;
	String_t* G_B10_1 = NULL;
	Material_t340375123 * G_B10_2 = NULL;
	float G_B9_0 = 0.0f;
	String_t* G_B9_1 = NULL;
	Material_t340375123 * G_B9_2 = NULL;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	String_t* G_B11_2 = NULL;
	Material_t340375123 * G_B11_3 = NULL;
	{
		int32_t L_0 = __this->get_glowType_15();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_008a;
	}

IL_0019:
	{
		RenderTexture_t2108887433 * L_3 = __this->get_glowTexRaw_23();
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Camera_t4157153871 * L_4 = MKGlowFree_get_Cam_m1214962923(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Camera_get_pixelWidth_m1110053668(L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_samples_20();
		Camera_t4157153871 * L_7 = MKGlowFree_get_Cam_m1214962923(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = Camera_get_pixelHeight_m722276884(L_7, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_samples_20();
		int32_t L_10 = __this->get_rtFormat_8();
		int32_t L_11 = __this->get_srcVRUsage_26();
		RenderTexture_t2108887433 * L_12 = RenderTexture_GetTemporary_m1591556707(NULL /*static, unused*/, ((int32_t)((int32_t)L_5/(int32_t)L_6)), ((int32_t)((int32_t)L_8/(int32_t)L_9)), ((int32_t)16), L_10, 0, 1, 0, L_11, /*hidden argument*/NULL);
		__this->set_glowTexRaw_23(L_12);
		MKGlowFree_SetupGlowCamera_m3234042267(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_13 = MKGlowFree_get_SelectiveGlowCamera_m774247276(__this, /*hidden argument*/NULL);
		Shader_t4151988712 * L_14 = __this->get_selectiveRenderShader_11();
		NullCheck(L_13);
		Camera_RenderWithShader_m3316153747(L_13, L_14, _stringLiteral3626444962, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_0085:
	{
		goto IL_008a;
	}

IL_008a:
	{
		Material_t340375123 * L_15 = __this->get_blurMaterial_13();
		Camera_t4157153871 * L_16 = MKGlowFree_get_Cam_m1214962923(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17 = Camera_get_stereoEnabled_m1370638140(L_16, /*hidden argument*/NULL);
		G_B6_0 = _stringLiteral1380323894;
		G_B6_1 = L_15;
		if (!L_17)
		{
			G_B7_0 = _stringLiteral1380323894;
			G_B7_1 = L_15;
			goto IL_00af;
		}
	}
	{
		G_B8_0 = (0.5f);
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_00b4;
	}

IL_00af:
	{
		G_B8_0 = (1.0f);
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_00b4:
	{
		NullCheck(G_B8_2);
		Material_SetFloat_m3226510453(G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		Material_t340375123 * L_18 = __this->get_compositeMaterial_12();
		float L_19 = __this->get_glowIntensityInner_19();
		int32_t L_20 = __this->get_glowType_15();
		G_B9_0 = L_19;
		G_B9_1 = _stringLiteral3735132611;
		G_B9_2 = L_18;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			G_B10_0 = L_19;
			G_B10_1 = _stringLiteral3735132611;
			G_B10_2 = L_18;
			goto IL_00e7;
		}
	}
	{
		float L_21 = __this->get_blurSpreadInner_17();
		G_B11_0 = ((float)il2cpp_codegen_multiply((float)(12.5f), (float)L_21));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_00ec;
	}

IL_00e7:
	{
		G_B11_0 = (10.0f);
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_00ec:
	{
		NullCheck(G_B11_3);
		Material_SetFloat_m3226510453(G_B11_3, G_B11_2, ((float)il2cpp_codegen_multiply((float)G_B11_1, (float)G_B11_0)), /*hidden argument*/NULL);
		Material_t340375123 * L_22 = __this->get_compositeMaterial_12();
		Color_t2555686324  L_23 = __this->get_glowTint_16();
		NullCheck(L_22);
		Material_SetColor_m2020215303(L_22, _stringLiteral306120475, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree_OnRenderImage_m3186840377 (MKGlowFree_t706824981 * __this, RenderTexture_t2108887433 * ___src0, RenderTexture_t2108887433 * ___dest1, const RuntimeMethod* method)
{
	RenderTexture_t2108887433 * V_0 = NULL;
	RenderTexture_t2108887433 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		RenderTexture_t2108887433 * L_0 = ___src0;
		NullCheck(L_0);
		int32_t L_1 = RenderTexture_get_format_m3846871418(L_0, /*hidden argument*/NULL);
		__this->set_rtFormat_8(L_1);
		RenderTexture_t2108887433 * L_2 = ___src0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		int32_t L_4 = __this->get_samples_20();
		__this->set_srcWidth_24(((int32_t)((int32_t)L_3/(int32_t)L_4)));
		RenderTexture_t2108887433 * L_5 = ___src0;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		int32_t L_7 = __this->get_samples_20();
		__this->set_srcHeight_25(((int32_t)((int32_t)L_6/(int32_t)L_7)));
		RenderTexture_t2108887433 * L_8 = ___src0;
		NullCheck(L_8);
		int32_t L_9 = RenderTexture_get_vrUsage_m1378911425(L_8, /*hidden argument*/NULL);
		__this->set_srcVRUsage_26(L_9);
		int32_t L_10 = __this->get_srcWidth_24();
		int32_t L_11 = __this->get_srcHeight_25();
		RenderTexture_t2108887433 * L_12 = ___src0;
		NullCheck(L_12);
		int32_t L_13 = RenderTexture_get_vrUsage_m1378911425(L_12, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_14 = MKGlowFree_GetTemporaryRT_m3712898819(__this, L_10, L_11, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = __this->get_srcWidth_24();
		int32_t L_16 = __this->get_srcHeight_25();
		RenderTexture_t2108887433 * L_17 = ___src0;
		NullCheck(L_17);
		int32_t L_18 = RenderTexture_get_vrUsage_m1378911425(L_17, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_19 = MKGlowFree_GetTemporaryRT_m3712898819(__this, L_15, L_16, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		int32_t L_20 = __this->get_glowType_15();
		V_2 = L_20;
		int32_t L_21 = V_2;
		if (!L_21)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)1)))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00a7;
	}

IL_0089:
	{
		RenderTexture_t2108887433 * L_23 = ___src0;
		RenderTexture_t2108887433 * L_24 = ___dest1;
		RenderTexture_t2108887433 * L_25 = V_0;
		RenderTexture_t2108887433 * L_26 = V_1;
		MKGlowFree_SelectiveGlow_m364804102(__this, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_0098:
	{
		RenderTexture_t2108887433 * L_27 = ___src0;
		RenderTexture_t2108887433 * L_28 = ___dest1;
		RenderTexture_t2108887433 * L_29 = V_0;
		RenderTexture_t2108887433 * L_30 = V_1;
		MKGlowFree_FullScreenGlow_m3003909186(__this, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_00a7:
	{
		RenderTexture_t2108887433 * L_31 = V_0;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_32 = V_1;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MK.Glow.MKGlowFree::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MKGlowFree__cctor_m2640631015 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MKGlowFree__cctor_m2640631015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_t1444911251* L_0 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		SingleU5BU5D_t1444911251* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2D9E9626CE335E3388398C6289FE13AEB5F7604824_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((MKGlowFree_t706824981_StaticFields*)il2cpp_codegen_static_fields_for(MKGlowFree_t706824981_il2cpp_TypeInfo_var))->set_gaussFilter_4(L_1);
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
// System.Void RecieveVideo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo__ctor_m3636094346 (RecieveVideo_t2154278729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo__ctor_m3636094346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_phoneIP_7(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator RecieveVideo::Start()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RecieveVideo_Start_m1725629100 (RecieveVideo_t2154278729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_Start_m1725629100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__Iterator0_t2422030019 * V_0 = NULL;
	{
		U3CStartU3Ec__Iterator0_t2422030019 * L_0 = (U3CStartU3Ec__Iterator0_t2422030019 *)il2cpp_codegen_object_new(U3CStartU3Ec__Iterator0_t2422030019_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator0__ctor_m1209416241(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t2422030019 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CStartU3Ec__Iterator0_t2422030019 * L_2 = V_0;
		return L_2;
	}
}
// System.Void RecieveVideo::imageReceiver()
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_imageReceiver_m2444187831 (RecieveVideo_t2154278729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_imageReceiver_m2444187831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)RecieveVideo_U3CimageReceiverU3Em__0_m3389353562_RuntimeMethod_var;
		Action_t1264377477 * L_1 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_RunAsync_m3073108896(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RecieveVideo::byteLengthToFrameByteArray(System.Int32,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_byteLengthToFrameByteArray_m2901727512 (RecieveVideo_t2154278729 * __this, int32_t ___byteLength0, ByteU5BU5D_t4116647657* ___fullBytes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_byteLengthToFrameByteArray_m2901727512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___fullBytes1;
		ByteU5BU5D_t4116647657* L_1 = ___fullBytes1;
		NullCheck(L_1);
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		int32_t L_2 = ___byteLength0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_3 = BitConverter_GetBytes_m1040762521(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ByteU5BU5D_t4116647657* L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = ___fullBytes1;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		Array_CopyTo_m225704097((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 RecieveVideo::frameByteArrayToByteLength(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR int32_t RecieveVideo_frameByteArrayToByteLength_m2376151793 (RecieveVideo_t2154278729 * __this, ByteU5BU5D_t4116647657* ___frameBytesLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_frameByteArrayToByteLength_m2376151793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___frameBytesLength0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int32_t L_1 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 RecieveVideo::readImageByteSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t RecieveVideo_readImageByteSize_m1996922068 (RecieveVideo_t2154278729 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_readImageByteSize_m1996922068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	NetworkStream_t4071955934 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = (bool)0;
		TcpClient_t822906377 * L_0 = __this->get_client_8();
		NullCheck(L_0);
		NetworkStream_t4071955934 * L_1 = TcpClient_GetStream_m960745678(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = ___size0;
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		V_3 = 0;
	}

IL_0017:
	{
		NetworkStream_t4071955934 * L_4 = V_1;
		ByteU5BU5D_t4116647657* L_5 = V_2;
		int32_t L_6 = V_3;
		int32_t L_7 = ___size0;
		int32_t L_8 = V_3;
		NullCheck(L_4);
		int32_t L_9 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)));
		V_4 = L_9;
		int32_t L_10 = V_4;
		if (L_10)
		{
			goto IL_0032;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_003e;
	}

IL_0032:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		int32_t L_13 = V_3;
		int32_t L_14 = ___size0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0017;
		}
	}

IL_003e:
	{
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_004c;
		}
	}
	{
		V_5 = (-1);
		goto IL_0055;
	}

IL_004c:
	{
		ByteU5BU5D_t4116647657* L_16 = V_2;
		int32_t L_17 = RecieveVideo_frameByteArrayToByteLength_m2376151793(__this, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
	}

IL_0055:
	{
		V_2 = (ByteU5BU5D_t4116647657*)NULL;
		int32_t L_18 = V_5;
		return L_18;
	}
}
// System.Void RecieveVideo::readFrameByteArray(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_readFrameByteArray_m1422475908 (RecieveVideo_t2154278729 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_readFrameByteArray_m1422475908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * V_0 = NULL;
	bool V_1 = false;
	NetworkStream_t4071955934 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * L_0 = (U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 *)il2cpp_codegen_object_new(U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445_il2cpp_TypeInfo_var);
		U3CreadFrameByteArrayU3Ec__AnonStorey1__ctor_m3121698181(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		V_1 = (bool)0;
		TcpClient_t822906377 * L_2 = __this->get_client_8();
		NullCheck(L_2);
		NetworkStream_t4071955934 * L_3 = TcpClient_GetStream_m960745678(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * L_4 = V_0;
		int32_t L_5 = ___size0;
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_5);
		NullCheck(L_4);
		L_4->set_imageBytes_0(L_6);
		V_3 = 0;
	}

IL_0029:
	{
		NetworkStream_t4071955934 * L_7 = V_2;
		U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = L_8->get_imageBytes_0();
		int32_t L_10 = V_3;
		int32_t L_11 = ___size0;
		int32_t L_12 = V_3;
		NullCheck(L_7);
		int32_t L_13 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_7, L_9, L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)));
		V_4 = L_13;
		int32_t L_14 = V_4;
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0055;
	}

IL_0049:
	{
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		int32_t L_17 = V_3;
		int32_t L_18 = ___size0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0029;
		}
	}

IL_0055:
	{
		U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * L_19 = V_0;
		NullCheck(L_19);
		L_19->set_readyToReadAgain_1((bool)0);
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_0073;
		}
	}
	{
		U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * L_21 = V_0;
		intptr_t L_22 = (intptr_t)U3CreadFrameByteArrayU3Ec__AnonStorey1_U3CU3Em__0_m2310939376_RuntimeMethod_var;
		Action_t1264377477 * L_23 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_23, L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_QueueOnMainThread_m1417379532(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
	}

IL_0073:
	{
		goto IL_007e;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_Sleep_m483098292(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_007e:
	{
		U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = L_24->get_readyToReadAgain_1();
		if (!L_25)
		{
			goto IL_0078;
		}
	}
	{
		return;
	}
}
// System.Void RecieveVideo::displayReceivedImage(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_displayReceivedImage_m4122561076 (RecieveVideo_t2154278729 * __this, ByteU5BU5D_t4116647657* ___receivedImageBytes0, const RuntimeMethod* method)
{
	{
		Texture2D_t3840446185 * L_0 = __this->get_tex_9();
		ByteU5BU5D_t4116647657* L_1 = ___receivedImageBytes0;
		ImageConversion_LoadImage_m2182108104(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Material_t340375123 * L_2 = __this->get_material_4();
		Texture2D_t3840446185 * L_3 = __this->get_tex_9();
		NullCheck(L_2);
		Material_set_mainTexture_m544811714(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RecieveVideo::LOG(System.String)
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_LOG_m3478162098 (RecieveVideo_t2154278729 * __this, String_t* ___messsage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_LOG_m3478162098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_enableLog_5();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___messsage0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void RecieveVideo::LOGWARNING(System.String)
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_LOGWARNING_m551940706 (RecieveVideo_t2154278729 * __this, String_t* ___messsage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_LOGWARNING_m551940706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_enableLog_5();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___messsage0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void RecieveVideo::OnApplicationQuit()
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_OnApplicationQuit_m800952189 (RecieveVideo_t2154278729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_OnApplicationQuit_m800952189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecieveVideo_LOGWARNING_m551940706(__this, _stringLiteral2926967687, /*hidden argument*/NULL);
		__this->set_stop_10((bool)1);
		TcpClient_t822906377 * L_0 = __this->get_client_8();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		TcpClient_t822906377 * L_1 = __this->get_client_8();
		NullCheck(L_1);
		Socket_t1119025450 * L_2 = TcpClient_get_Client_m139203108(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Socket_Close_m3289097516(L_2, /*hidden argument*/NULL);
		TcpClient_t822906377 * L_3 = __this->get_client_8();
		NullCheck(L_3);
		TcpClient_Close_m3817529922(L_3, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void RecieveVideo::<imageReceiver>m__0()
extern "C" IL2CPP_METHOD_ATTR void RecieveVideo_U3CimageReceiverU3Em__0_m3389353562 (RecieveVideo_t2154278729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveVideo_U3CimageReceiverU3Em__0_m3389353562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		goto IL_002b;
	}

IL_0005:
	{
		int32_t L_0 = RecieveVideo_readImageByteSize_m1996922068(__this, ((int32_t)15), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1474944764, L_3, /*hidden argument*/NULL);
		RecieveVideo_LOGWARNING_m551940706(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		RecieveVideo_readFrameByteArray_m1422475908(__this, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		bool L_6 = __this->get_stop_10();
		if (!L_6)
		{
			goto IL_0005;
		}
	}
	{
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
// System.Void RecieveVideo/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m1209416241 (U3CStartU3Ec__Iterator0_t2422030019 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RecieveVideo/<Start>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m1096821543 (U3CStartU3Ec__Iterator0_t2422030019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m1096821543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	SocketException_t3852068672 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00c2;
			}
		}
	}
	{
		goto IL_00f9;
	}

IL_0021:
	{
		Application_set_runInBackground_m2169704730(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		RecieveVideo_t2154278729 * L_2 = __this->get_U24this_0();
		Texture2D_t3840446185 * L_3 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_3, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_tex_9(L_3);
		RecieveVideo_t2154278729 * L_4 = __this->get_U24this_0();
		TcpClient_t822906377 * L_5 = (TcpClient_t822906377 *)il2cpp_codegen_object_new(TcpClient_t822906377_il2cpp_TypeInfo_var);
		TcpClient__ctor_m1992471411(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_client_8(L_5);
		goto IL_00c2;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		RecieveVideo_t2154278729 * L_6 = __this->get_U24this_0();
		NullCheck(L_6);
		RecieveVideo_LOGWARNING_m551940706(L_6, _stringLiteral2826150297, /*hidden argument*/NULL);
		RecieveVideo_t2154278729 * L_7 = __this->get_U24this_0();
		NullCheck(L_7);
		TcpClient_t822906377 * L_8 = L_7->get_client_8();
		RecieveVideo_t2154278729 * L_9 = __this->get_U24this_0();
		NullCheck(L_9);
		String_t* L_10 = L_9->get_phoneIP_7();
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t241777590_il2cpp_TypeInfo_var);
		IPAddress_t241777590 * L_11 = IPAddress_Parse_m2200822423(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		TcpClient_Connect_m4269241863(L_8, L_11, ((int32_t)1999), /*hidden argument*/NULL);
		goto IL_009e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t3852068672_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0088;
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_1 = ((SocketException_t3852068672 *)__exception_local);
		SocketException_t3852068672 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3062781488, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_009e;
	} // end catch (depth: 1)

IL_009e:
	{
		WaitForSeconds_t1699091251 * L_14 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_14, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_14);
		bool L_15 = __this->get_U24disposing_2();
		if (L_15)
		{
			goto IL_00bd;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_00bd:
	{
		goto IL_00fb;
	}

IL_00c2:
	{
		RecieveVideo_t2154278729 * L_16 = __this->get_U24this_0();
		NullCheck(L_16);
		TcpClient_t822906377 * L_17 = L_16->get_client_8();
		NullCheck(L_17);
		bool L_18 = TcpClient_get_Connected_m4171740171(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_004e;
		}
	}
	{
		RecieveVideo_t2154278729 * L_19 = __this->get_U24this_0();
		NullCheck(L_19);
		RecieveVideo_LOGWARNING_m551940706(L_19, _stringLiteral1984904383, /*hidden argument*/NULL);
		RecieveVideo_t2154278729 * L_20 = __this->get_U24this_0();
		NullCheck(L_20);
		RecieveVideo_imageReceiver_m2444187831(L_20, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00f9:
	{
		return (bool)0;
	}

IL_00fb:
	{
		return (bool)1;
	}
}
// System.Object RecieveVideo/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3075324406 (U3CStartU3Ec__Iterator0_t2422030019 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object RecieveVideo/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3895951555 (U3CStartU3Ec__Iterator0_t2422030019 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void RecieveVideo/<Start>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m166847145 (U3CStartU3Ec__Iterator0_t2422030019 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void RecieveVideo/<Start>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m4012804800 (U3CStartU3Ec__Iterator0_t2422030019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m4012804800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m4012804800_RuntimeMethod_var);
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
// System.Void RecieveVideo/<readFrameByteArray>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CreadFrameByteArrayU3Ec__AnonStorey1__ctor_m3121698181 (U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RecieveVideo/<readFrameByteArray>c__AnonStorey1::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CreadFrameByteArrayU3Ec__AnonStorey1_U3CU3Em__0_m2310939376 (U3CreadFrameByteArrayU3Ec__AnonStorey1_t1620704445 * __this, const RuntimeMethod* method)
{
	{
		RecieveVideo_t2154278729 * L_0 = __this->get_U24this_2();
		ByteU5BU5D_t4116647657* L_1 = __this->get_imageBytes_0();
		NullCheck(L_0);
		RecieveVideo_displayReceivedImage_m4122561076(L_0, L_1, /*hidden argument*/NULL);
		__this->set_readyToReadAgain_1((bool)1);
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
// System.Void SendVideo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SendVideo__ctor_m3380206145 (SendVideo_t3564215223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendVideo__ctor_m3380206145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2294981119 * L_0 = (List_1_t2294981119 *)il2cpp_codegen_object_new(List_1_t2294981119_il2cpp_TypeInfo_var);
		List_1__ctor_m4152009313(L_0, /*hidden argument*/List_1__ctor_m4152009313_RuntimeMethod_var);
		__this->set_clients_10(L_0);
		WaitForEndOfFrame_t1314943911 * L_1 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_1, /*hidden argument*/NULL);
		__this->set_endOfFrame_12(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SendVideo::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void SendVideo_OnEnable_m417900328 (SendVideo_t3564215223 * __this, const RuntimeMethod* method)
{
	{
		Application_set_runInBackground_m2169704730(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_0 = SendVideo_initAndWaitForCamImage_m300583457(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SendVideo::byteLengthToFrameByteArray(System.Int32,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SendVideo_byteLengthToFrameByteArray_m622216339 (SendVideo_t3564215223 * __this, int32_t ___byteLength0, ByteU5BU5D_t4116647657* ___fullBytes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendVideo_byteLengthToFrameByteArray_m622216339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___fullBytes1;
		ByteU5BU5D_t4116647657* L_1 = ___fullBytes1;
		NullCheck(L_1);
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		int32_t L_2 = ___byteLength0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_3 = BitConverter_GetBytes_m1040762521(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ByteU5BU5D_t4116647657* L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = ___fullBytes1;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		Array_CopyTo_m225704097((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SendVideo::frameByteArrayToByteLength(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR int32_t SendVideo_frameByteArrayToByteLength_m1611428697 (SendVideo_t3564215223 * __this, ByteU5BU5D_t4116647657* ___frameBytesLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendVideo_frameByteArrayToByteLength_m1611428697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___frameBytesLength0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int32_t L_1 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator SendVideo::initAndWaitForCamImage()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SendVideo_initAndWaitForCamImage_m300583457 (SendVideo_t3564215223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendVideo_initAndWaitForCamImage_m300583457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * V_0 = NULL;
	{
		U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * L_0 = (U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 *)il2cpp_codegen_object_new(U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479_il2cpp_TypeInfo_var);
		U3CinitAndWaitForCamImageU3Ec__Iterator0__ctor_m4016634656(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator SendVideo::senderCOR()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SendVideo_senderCOR_m1459968934 (SendVideo_t3564215223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendVideo_senderCOR_m1459968934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CsenderCORU3Ec__Iterator1_t1265425902 * V_0 = NULL;
	{
		U3CsenderCORU3Ec__Iterator1_t1265425902 * L_0 = (U3CsenderCORU3Ec__Iterator1_t1265425902 *)il2cpp_codegen_object_new(U3CsenderCORU3Ec__Iterator1_t1265425902_il2cpp_TypeInfo_var);
		U3CsenderCORU3Ec__Iterator1__ctor_m2704875754(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CsenderCORU3Ec__Iterator1_t1265425902 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CsenderCORU3Ec__Iterator1_t1265425902 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SendVideo::LOG(System.String)
extern "C" IL2CPP_METHOD_ATTR void SendVideo_LOG_m628606818 (SendVideo_t3564215223 * __this, String_t* ___messsage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendVideo_LOG_m628606818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_enableLog_5();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___messsage0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void SendVideo::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void SendVideo_OnDisable_m4280048278 (SendVideo_t3564215223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendVideo_OnDisable_m4280048278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TcpClient_t822906377 * V_0 = NULL;
	Enumerator_t4184224996  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->set_stop_9((bool)1);
		TcpListener_t3499576757 * L_0 = __this->get_listner_7();
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		TcpListener_t3499576757 * L_1 = __this->get_listner_7();
		NullCheck(L_1);
		TcpListener_Stop_m996961764(L_1, /*hidden argument*/NULL);
		TcpListener_t3499576757 * L_2 = __this->get_listner_7();
		NullCheck(L_2);
		Socket_t1119025450 * L_3 = TcpListener_get_Server_m1824887598(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Socket_Close_m3289097516(L_3, /*hidden argument*/NULL);
		__this->set_listner_7((TcpListener_t3499576757 *)NULL);
	}

IL_0034:
	{
		List_1_t2294981119 * L_4 = __this->get_clients_10();
		NullCheck(L_4);
		Enumerator_t4184224996  L_5 = List_1_GetEnumerator_m2452381913(L_4, /*hidden argument*/List_1_GetEnumerator_m2452381913_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_0045:
		{
			TcpClient_t822906377 * L_6 = Enumerator_get_Current_m2476266973((Enumerator_t4184224996 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2476266973_RuntimeMethod_var);
			V_0 = L_6;
			TcpClient_t822906377 * L_7 = V_0;
			NullCheck(L_7);
			Socket_t1119025450 * L_8 = TcpClient_get_Client_m139203108(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			Socket_Close_m3289097516(L_8, /*hidden argument*/NULL);
			TcpClient_t822906377 * L_9 = V_0;
			NullCheck(L_9);
			TcpClient_Close_m3817529922(L_9, /*hidden argument*/NULL);
		}

IL_005e:
		{
			bool L_10 = Enumerator_MoveNext_m1410164912((Enumerator_t4184224996 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1410164912_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0045;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_006f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m27856966((Enumerator_t4184224996 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m27856966_RuntimeMethod_var);
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		List_1_t2294981119 * L_11 = __this->get_clients_10();
		NullCheck(L_11);
		List_1_Clear_m868649400(L_11, /*hidden argument*/List_1_Clear_m868649400_RuntimeMethod_var);
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
// System.Void SendVideo/<initAndWaitForCamImage>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CinitAndWaitForCamImageU3Ec__Iterator0__ctor_m4016634656 (U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SendVideo/<initAndWaitForCamImage>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CinitAndWaitForCamImageU3Ec__Iterator0_MoveNext_m4097503874 (U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CinitAndWaitForCamImageU3Ec__Iterator0_MoveNext_m4097503874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0074;
			}
		}
	}
	{
		goto IL_00e1;
	}

IL_0021:
	{
		SendVideo_t3564215223 * L_2 = __this->get_U24this_0();
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t241777590_il2cpp_TypeInfo_var);
		IPAddress_t241777590 * L_3 = ((IPAddress_t241777590_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t241777590_il2cpp_TypeInfo_var))->get_Any_4();
		TcpListener_t3499576757 * L_4 = (TcpListener_t3499576757 *)il2cpp_codegen_object_new(TcpListener_t3499576757_il2cpp_TypeInfo_var);
		TcpListener__ctor_m2307803501(L_4, L_3, ((int32_t)1999), /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_listner_7(L_4);
		SendVideo_t3564215223 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		TcpListener_t3499576757 * L_6 = L_5->get_listner_7();
		NullCheck(L_6);
		TcpListener_Start_m1510900909(L_6, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0050:
	{
		WaitForSeconds_t1699091251 * L_7 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_7, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_7);
		bool L_8 = __this->get_U24disposing_2();
		if (L_8)
		{
			goto IL_006f;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_006f:
	{
		goto IL_00e3;
	}

IL_0074:
	{
		SendVideo_t3564215223 * L_9 = __this->get_U24this_0();
		NullCheck(L_9);
		CameraFeed_t1617299256 * L_10 = L_9->get_cameraFeed_4();
		NullCheck(L_10);
		bool L_11 = CameraFeed_GetImageAvailable_m2367629798(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		SendVideo_t3564215223 * L_12 = __this->get_U24this_0();
		SendVideo_t3564215223 * L_13 = __this->get_U24this_0();
		NullCheck(L_13);
		CameraFeed_t1617299256 * L_14 = L_13->get_cameraFeed_4();
		NullCheck(L_14);
		int32_t L_15 = CameraFeed_getWidth_m1164001957(L_14, /*hidden argument*/NULL);
		SendVideo_t3564215223 * L_16 = __this->get_U24this_0();
		NullCheck(L_16);
		CameraFeed_t1617299256 * L_17 = L_16->get_cameraFeed_4();
		NullCheck(L_17);
		int32_t L_18 = CameraFeed_getHeight_m2499397298(L_17, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_19 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_19, L_15, L_18, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_currentTexture_6(L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3207430923, /*hidden argument*/NULL);
		SendVideo_t3564215223 * L_20 = __this->get_U24this_0();
		SendVideo_t3564215223 * L_21 = __this->get_U24this_0();
		NullCheck(L_21);
		RuntimeObject* L_22 = SendVideo_senderCOR_m1459968934(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		MonoBehaviour_StartCoroutine_m3411253000(L_20, L_22, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00e1:
	{
		return (bool)0;
	}

IL_00e3:
	{
		return (bool)1;
	}
}
// System.Object SendVideo/<initAndWaitForCamImage>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CinitAndWaitForCamImageU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2180185065 (U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object SendVideo/<initAndWaitForCamImage>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CinitAndWaitForCamImageU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3911598164 (U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void SendVideo/<initAndWaitForCamImage>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CinitAndWaitForCamImageU3Ec__Iterator0_Dispose_m2738989376 (U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void SendVideo/<initAndWaitForCamImage>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CinitAndWaitForCamImageU3Ec__Iterator0_Reset_m1207102699 (U3CinitAndWaitForCamImageU3Ec__Iterator0_t4034798479 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CinitAndWaitForCamImageU3Ec__Iterator0_Reset_m1207102699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CinitAndWaitForCamImageU3Ec__Iterator0_Reset_m1207102699_RuntimeMethod_var);
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
// System.Void SendVideo/<senderCOR>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__Iterator1__ctor_m2704875754 (U3CsenderCORU3Ec__Iterator1_t1265425902 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SendVideo/<senderCOR>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CsenderCORU3Ec__Iterator1_MoveNext_m1980529359 (U3CsenderCORU3Ec__Iterator1_t1265425902 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsenderCORU3Ec__Iterator1_MoveNext_m1980529359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_009b;
			}
			case 2:
			{
				goto IL_012b;
			}
			case 3:
			{
				goto IL_01e3;
			}
		}
	}
	{
		goto IL_020a;
	}

IL_0029:
	{
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_2 = (U3CsenderCORU3Ec__AnonStorey2_t4050455982 *)il2cpp_codegen_object_new(U3CsenderCORU3Ec__AnonStorey2_t4050455982_il2cpp_TypeInfo_var);
		U3CsenderCORU3Ec__AnonStorey2__ctor_m3010061461(L_2, /*hidden argument*/NULL);
		__this->set_U24locvar0_4(L_2);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_3 = __this->get_U24locvar0_4();
		NullCheck(L_3);
		L_3->set_U3CU3Ef__refU241_5(__this);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_4 = __this->get_U24locvar0_4();
		NullCheck(L_4);
		L_4->set_isConnected_1((bool)0);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_5 = __this->get_U24locvar0_4();
		NullCheck(L_5);
		L_5->set_client_0((TcpClient_t822906377 *)NULL);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_6 = __this->get_U24locvar0_4();
		NullCheck(L_6);
		L_6->set_stream_2((NetworkStream_t4071955934 *)NULL);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_7 = __this->get_U24locvar0_4();
		intptr_t L_8 = (intptr_t)U3CsenderCORU3Ec__AnonStorey2_U3CU3Em__0_m1488755619_RuntimeMethod_var;
		Action_t1264377477 * L_9 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_RunAsync_m3073108896(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_0080:
	{
		__this->set_U24current_1(NULL);
		bool L_10 = __this->get_U24disposing_2();
		if (L_10)
		{
			goto IL_0096;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0096:
	{
		goto IL_020c;
	}

IL_009b:
	{
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_11 = __this->get_U24locvar0_4();
		NullCheck(L_11);
		bool L_12 = L_11->get_isConnected_1();
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		SendVideo_t3564215223 * L_13 = __this->get_U24this_0();
		NullCheck(L_13);
		SendVideo_LOG_m628606818(L_13, _stringLiteral1984904383, /*hidden argument*/NULL);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_14 = __this->get_U24locvar0_4();
		NullCheck(L_14);
		L_14->set_readyToGetFrame_4((bool)1);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_15 = __this->get_U24locvar0_4();
		ByteU5BU5D_t4116647657* L_16 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		NullCheck(L_15);
		L_15->set_frameBytesLength_3(L_16);
		goto IL_01f3;
	}

IL_00de:
	{
		U3CsenderCORU3Ec__AnonStorey3_t1321572627 * L_17 = (U3CsenderCORU3Ec__AnonStorey3_t1321572627 *)il2cpp_codegen_object_new(U3CsenderCORU3Ec__AnonStorey3_t1321572627_il2cpp_TypeInfo_var);
		U3CsenderCORU3Ec__AnonStorey3__ctor_m4048801378(L_17, /*hidden argument*/NULL);
		__this->set_U24locvar1_5(L_17);
		U3CsenderCORU3Ec__AnonStorey3_t1321572627 * L_18 = __this->get_U24locvar1_5();
		NullCheck(L_18);
		L_18->set_U3CU3Ef__refU241_1(__this);
		U3CsenderCORU3Ec__AnonStorey3_t1321572627 * L_19 = __this->get_U24locvar1_5();
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_20 = __this->get_U24locvar0_4();
		NullCheck(L_19);
		L_19->set_U3CU3Ef__refU242_2(L_20);
		SendVideo_t3564215223 * L_21 = __this->get_U24this_0();
		NullCheck(L_21);
		WaitForEndOfFrame_t1314943911 * L_22 = L_21->get_endOfFrame_12();
		__this->set_U24current_1(L_22);
		bool L_23 = __this->get_U24disposing_2();
		if (L_23)
		{
			goto IL_0126;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_0126:
	{
		goto IL_020c;
	}

IL_012b:
	{
		SendVideo_t3564215223 * L_24 = __this->get_U24this_0();
		NullCheck(L_24);
		Texture2D_t3840446185 * L_25 = L_24->get_currentTexture_6();
		SendVideo_t3564215223 * L_26 = __this->get_U24this_0();
		NullCheck(L_26);
		CameraFeed_t1617299256 * L_27 = L_26->get_cameraFeed_4();
		NullCheck(L_27);
		Texture2D_t3840446185 * L_28 = CameraFeed_GetImage_m791337117(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		ColorU5BU5D_t941916413* L_29 = Texture2D_GetPixels_m2081641574(L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		Texture2D_SetPixels_m3008871897(L_25, L_29, /*hidden argument*/NULL);
		U3CsenderCORU3Ec__AnonStorey3_t1321572627 * L_30 = __this->get_U24locvar1_5();
		SendVideo_t3564215223 * L_31 = __this->get_U24this_0();
		NullCheck(L_31);
		Texture2D_t3840446185 * L_32 = L_31->get_currentTexture_6();
		ByteU5BU5D_t4116647657* L_33 = ImageConversion_EncodeToJPG_m2489668130(NULL /*static, unused*/, L_32, ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_30);
		L_30->set_pngBytes_0(L_33);
		SendVideo_t3564215223 * L_34 = __this->get_U24this_0();
		U3CsenderCORU3Ec__AnonStorey3_t1321572627 * L_35 = __this->get_U24locvar1_5();
		NullCheck(L_35);
		ByteU5BU5D_t4116647657* L_36 = L_35->get_pngBytes_0();
		NullCheck(L_36);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_37 = __this->get_U24locvar0_4();
		NullCheck(L_37);
		ByteU5BU5D_t4116647657* L_38 = L_37->get_frameBytesLength_3();
		NullCheck(L_34);
		SendVideo_byteLengthToFrameByteArray_m622216339(L_34, (((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))), L_38, /*hidden argument*/NULL);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_39 = __this->get_U24locvar0_4();
		NullCheck(L_39);
		L_39->set_readyToGetFrame_4((bool)0);
		U3CsenderCORU3Ec__AnonStorey3_t1321572627 * L_40 = __this->get_U24locvar1_5();
		intptr_t L_41 = (intptr_t)U3CsenderCORU3Ec__AnonStorey3_U3CU3Em__0_m2670466354_RuntimeMethod_var;
		Action_t1264377477 * L_42 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_42, L_40, L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Loom_t3759828253_il2cpp_TypeInfo_var);
		Loom_RunAsync_m3073108896(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		goto IL_01e3;
	}

IL_01b8:
	{
		SendVideo_t3564215223 * L_43 = __this->get_U24this_0();
		NullCheck(L_43);
		SendVideo_LOG_m628606818(L_43, _stringLiteral3638475675, /*hidden argument*/NULL);
		__this->set_U24current_1(NULL);
		bool L_44 = __this->get_U24disposing_2();
		if (L_44)
		{
			goto IL_01de;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_01de:
	{
		goto IL_020c;
	}

IL_01e3:
	{
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_45 = __this->get_U24locvar0_4();
		NullCheck(L_45);
		bool L_46 = L_45->get_readyToGetFrame_4();
		if (!L_46)
		{
			goto IL_01b8;
		}
	}

IL_01f3:
	{
		SendVideo_t3564215223 * L_47 = __this->get_U24this_0();
		NullCheck(L_47);
		bool L_48 = L_47->get_stop_9();
		if (!L_48)
		{
			goto IL_00de;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_020a:
	{
		return (bool)0;
	}

IL_020c:
	{
		return (bool)1;
	}
}
// System.Object SendVideo/<senderCOR>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CsenderCORU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3203467825 (U3CsenderCORU3Ec__Iterator1_t1265425902 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object SendVideo/<senderCOR>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CsenderCORU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1348221841 (U3CsenderCORU3Ec__Iterator1_t1265425902 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void SendVideo/<senderCOR>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__Iterator1_Dispose_m308847409 (U3CsenderCORU3Ec__Iterator1_t1265425902 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void SendVideo/<senderCOR>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__Iterator1_Reset_m1860801394 (U3CsenderCORU3Ec__Iterator1_t1265425902 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsenderCORU3Ec__Iterator1_Reset_m1860801394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CsenderCORU3Ec__Iterator1_Reset_m1860801394_RuntimeMethod_var);
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
// System.Void SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__AnonStorey2__ctor_m3010061461 (U3CsenderCORU3Ec__AnonStorey2_t4050455982 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey2::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__AnonStorey2_U3CU3Em__0_m1488755619 (U3CsenderCORU3Ec__AnonStorey2_t4050455982 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsenderCORU3Ec__AnonStorey2_U3CU3Em__0_m1488755619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0068;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3806174257, /*hidden argument*/NULL);
		U3CsenderCORU3Ec__Iterator1_t1265425902 * L_0 = __this->get_U3CU3Ef__refU241_5();
		NullCheck(L_0);
		SendVideo_t3564215223 * L_1 = L_0->get_U24this_0();
		NullCheck(L_1);
		TcpListener_t3499576757 * L_2 = L_1->get_listner_7();
		NullCheck(L_2);
		TcpClient_t822906377 * L_3 = TcpListener_AcceptTcpClient_m2475574153(L_2, /*hidden argument*/NULL);
		__this->set_client_0(L_3);
		TcpClient_t822906377 * L_4 = __this->get_client_0();
		if (!L_4)
		{
			goto IL_0068;
		}
	}
	{
		U3CsenderCORU3Ec__Iterator1_t1265425902 * L_5 = __this->get_U3CU3Ef__refU241_5();
		NullCheck(L_5);
		SendVideo_t3564215223 * L_6 = L_5->get_U24this_0();
		NullCheck(L_6);
		List_1_t2294981119 * L_7 = L_6->get_clients_10();
		TcpClient_t822906377 * L_8 = __this->get_client_0();
		NullCheck(L_7);
		List_1_Add_m3460642865(L_7, L_8, /*hidden argument*/List_1_Add_m3460642865_RuntimeMethod_var);
		__this->set_isConnected_1((bool)1);
		TcpClient_t822906377 * L_9 = __this->get_client_0();
		NullCheck(L_9);
		NetworkStream_t4071955934 * L_10 = TcpClient_GetStream_m960745678(L_9, /*hidden argument*/NULL);
		__this->set_stream_2(L_10);
	}

IL_0068:
	{
		TcpClient_t822906377 * L_11 = __this->get_client_0();
		if (!L_11)
		{
			goto IL_0005;
		}
	}
	{
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
// System.Void SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__AnonStorey3__ctor_m4048801378 (U3CsenderCORU3Ec__AnonStorey3_t1321572627 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SendVideo/<senderCOR>c__Iterator1/<senderCOR>c__AnonStorey3::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CsenderCORU3Ec__AnonStorey3_U3CU3Em__0_m2670466354 (U3CsenderCORU3Ec__AnonStorey3_t1321572627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsenderCORU3Ec__AnonStorey3_U3CU3Em__0_m2670466354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_0 = __this->get_U3CU3Ef__refU242_2();
		NullCheck(L_0);
		NetworkStream_t4071955934 * L_1 = L_0->get_stream_2();
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_2 = __this->get_U3CU3Ef__refU242_2();
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = L_2->get_frameBytesLength_3();
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_4 = __this->get_U3CU3Ef__refU242_2();
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = L_4->get_frameBytesLength_3();
		NullCheck(L_5);
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_3, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		U3CsenderCORU3Ec__Iterator1_t1265425902 * L_6 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_6);
		SendVideo_t3564215223 * L_7 = L_6->get_U24this_0();
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_8 = __this->get_U3CU3Ef__refU242_2();
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = L_8->get_frameBytesLength_3();
		NullCheck(L_9);
		int32_t L_10 = (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))));
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral4095928500, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		SendVideo_LOG_m628606818(L_7, L_12, /*hidden argument*/NULL);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_13 = __this->get_U3CU3Ef__refU242_2();
		NullCheck(L_13);
		NetworkStream_t4071955934 * L_14 = L_13->get_stream_2();
		ByteU5BU5D_t4116647657* L_15 = __this->get_pngBytes_0();
		ByteU5BU5D_t4116647657* L_16 = __this->get_pngBytes_0();
		NullCheck(L_16);
		NullCheck(L_14);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))));
		U3CsenderCORU3Ec__Iterator1_t1265425902 * L_17 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_17);
		SendVideo_t3564215223 * L_18 = L_17->get_U24this_0();
		ByteU5BU5D_t4116647657* L_19 = __this->get_pngBytes_0();
		NullCheck(L_19);
		int32_t L_20 = (((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length))));
		RuntimeObject * L_21 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2280541164, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		SendVideo_LOG_m628606818(L_18, L_22, /*hidden argument*/NULL);
		U3CsenderCORU3Ec__AnonStorey2_t4050455982 * L_23 = __this->get_U3CU3Ef__refU242_2();
		NullCheck(L_23);
		L_23->set_readyToGetFrame_4((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
