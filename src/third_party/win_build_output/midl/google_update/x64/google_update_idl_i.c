

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../google_update/google_update_idl.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.xx.xxxx 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IGoogleUpdate3,0x6DB17455,0x4E85,0x46e7,0x9D,0x23,0xE5,0x55,0xE4,0xB0,0x05,0xAF);


MIDL_DEFINE_GUID(IID, IID_IAppBundle,0xfe908cdd,0x22bb,0x472a,0x98,0x70,0x1a,0x03,0x90,0xe4,0x2f,0x36);


MIDL_DEFINE_GUID(IID, IID_IApp,0x76F7B787,0xA67C,0x4c73,0x82,0xC7,0x31,0xF5,0xE3,0xAA,0xBC,0x5C);


MIDL_DEFINE_GUID(IID, IID_IApp2,0x084D78A8,0xB084,0x4E14,0xA6,0x29,0xA2,0xC4,0x19,0xB0,0xE3,0xD9);


MIDL_DEFINE_GUID(IID, IID_IAppCommand,0x4DE778FE,0xF195,0x4ee3,0x9D,0xAB,0xFE,0x44,0x6C,0x23,0x92,0x21);


MIDL_DEFINE_GUID(IID, IID_IAppCommand2,0x3D05F64F,0x71E3,0x48A5,0xBF,0x6B,0x83,0x31,0x5B,0xC8,0xAE,0x1F);


MIDL_DEFINE_GUID(IID, IID_IAppVersion,0xBCDCB538,0x01C0,0x46d1,0xA6,0xA7,0x52,0xF4,0xD0,0x21,0xC2,0x72);


MIDL_DEFINE_GUID(IID, IID_IPackage,0xDCAB8386,0x4F03,0x4dbd,0xA3,0x66,0xD9,0x0B,0xC9,0xF6,0x8D,0xE6);


MIDL_DEFINE_GUID(IID, IID_ICurrentState,0x247954F9,0x9EDC,0x4E68,0x8C,0xC3,0x15,0x0C,0x2B,0x89,0xEA,0xDF);


MIDL_DEFINE_GUID(IID, IID_IRegistrationUpdateHook,0x4E223325,0xC16B,0x4eeb,0xAE,0xDC,0x19,0xAA,0x99,0xA2,0x37,0xFA);


MIDL_DEFINE_GUID(IID, IID_ICredentialDialog,0xb3a47570,0x0a85,0x4aea,0x82,0x70,0x52,0x9d,0x47,0x89,0x96,0x03);


MIDL_DEFINE_GUID(IID, IID_IPolicyStatus,0xF63F6F8B,0xACD5,0x413C,0xA4,0x4B,0x04,0x09,0x13,0x6D,0x26,0xCB);


MIDL_DEFINE_GUID(IID, IID_IPolicyStatusValue,0x27634814,0x8E41,0x4C35,0x85,0x77,0x98,0x01,0x34,0xA9,0x65,0x44);


MIDL_DEFINE_GUID(IID, IID_IPolicyStatus2,0x34527502,0xD3DB,0x4205,0xA6,0x9B,0x78,0x9B,0x27,0xEE,0x04,0x14);


MIDL_DEFINE_GUID(IID, IID_IGoogleUpdate3Web,0x494B20CF,0x282E,0x4BDD,0x9F,0x5D,0xB7,0x0C,0xB0,0x9D,0x35,0x1E);


MIDL_DEFINE_GUID(IID, IID_IGoogleUpdate3WebSecurity,0x2D363682,0x561D,0x4c3a,0x81,0xC6,0xF2,0xF8,0x21,0x07,0x56,0x2A);


MIDL_DEFINE_GUID(IID, IID_IAppBundleWeb,0xDD42475D,0x6D46,0x496a,0x92,0x4E,0xBD,0x56,0x30,0xB4,0xCB,0xBA);


MIDL_DEFINE_GUID(IID, IID_IAppWeb,0x18D0F672,0x18B4,0x48e6,0xAD,0x36,0x6E,0x6B,0xF0,0x1D,0xBB,0xC4);


MIDL_DEFINE_GUID(IID, IID_IAppCommandWeb,0x8476CE12,0xAE1F,0x4198,0x80,0x5C,0xBA,0x0F,0x9B,0x78,0x3F,0x57);


MIDL_DEFINE_GUID(IID, IID_IAppVersionWeb,0x0CD01D1E,0x4A1C,0x489d,0x93,0xB9,0x9B,0x66,0x72,0x87,0x7C,0x57);


MIDL_DEFINE_GUID(IID, IID_ICoCreateAsyncStatus,0x2E629606,0x312A,0x482f,0x9B,0x12,0x2C,0x4A,0xBF,0x6F,0x0B,0x6D);


MIDL_DEFINE_GUID(IID, IID_ICoCreateAsync,0xDAB1D343,0x1B2A,0x47f9,0xB4,0x45,0x93,0xDC,0x50,0x70,0x4B,0xFE);


MIDL_DEFINE_GUID(IID, IID_IBrowserHttpRequest2,0x5B25A8DC,0x1780,0x4178,0xA6,0x29,0x6B,0xE8,0xB8,0xDE,0xFA,0xA2);


MIDL_DEFINE_GUID(IID, IID_IProcessLauncher,0x128C2DA6,0x2BC0,0x44c0,0xB3,0xF6,0x4E,0xC2,0x2E,0x64,0x79,0x64);


MIDL_DEFINE_GUID(IID, IID_IProcessLauncher2,0xD106AB5F,0xA70E,0x400E,0xA2,0x1B,0x96,0x20,0x8C,0x1D,0x8D,0xBB);


MIDL_DEFINE_GUID(IID, IID_IProgressWndEvents,0x1C642CED,0xCA3B,0x4013,0xA9,0xDF,0xCA,0x6C,0xE5,0xFF,0x65,0x03);


MIDL_DEFINE_GUID(IID, IID_IJobObserver,0x49D7563B,0x2DDB,0x4831,0x88,0xC8,0x76,0x8A,0x53,0x83,0x38,0x37);


MIDL_DEFINE_GUID(IID, IID_IJobObserver2,0x19692F10,0xADD2,0x4EFF,0xBE,0x54,0xE6,0x1C,0x62,0xE4,0x0D,0x13);


MIDL_DEFINE_GUID(IID, IID_IGoogleUpdate,0x31AC3F11,0xE5EA,0x4a85,0x8A,0x3D,0x8E,0x09,0x5A,0x39,0xC2,0x7B);


MIDL_DEFINE_GUID(IID, IID_IGoogleUpdateCore,0x909489C2,0x85A6,0x4322,0xAA,0x56,0xD2,0x52,0x78,0x64,0x9D,0x67);


MIDL_DEFINE_GUID(IID, LIBID_GoogleUpdate3Lib,0x655DD85A,0x3C0D,0x4674,0x9C,0x58,0xAF,0x71,0x68,0xC5,0x86,0x1E);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleUpdate3UserClass,0x022105BD,0x948A,0x40c9,0xAB,0x42,0xA3,0x30,0x0D,0xDF,0x09,0x7F);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleUpdate3ServiceClass,0x4EB61BAC,0xA3B6,0x4760,0x95,0x81,0x65,0x50,0x41,0xEF,0x4D,0x69);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleUpdate3WebUserClass,0x22181302,0xA8A6,0x4f84,0xA5,0x41,0xE5,0xCB,0xFC,0x70,0xCC,0x43);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleUpdate3WebMachineClass,0x8A1D4361,0x2C08,0x4700,0xA3,0x51,0x3E,0xAA,0x9C,0xBF,0xF5,0xE4);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleUpdate3WebServiceClass,0x534F5323,0x3569,0x4f42,0x91,0x9D,0x1E,0x1C,0xF9,0x3E,0x5B,0xF6);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleUpdate3WebMachineFallbackClass,0x598FE0E5,0xE02D,0x465d,0x9A,0x9D,0x37,0x97,0x4A,0x28,0xFD,0x42);


MIDL_DEFINE_GUID(CLSID, CLSID_CurrentStateUserClass,0xE8CF3E55,0xF919,0x49d9,0xAB,0xC0,0x94,0x8E,0x6C,0xB3,0x4B,0x9F);


MIDL_DEFINE_GUID(CLSID, CLSID_CurrentStateMachineClass,0x9D6AA569,0x9F30,0x41ad,0x88,0x5A,0x34,0x66,0x85,0xC7,0x49,0x28);


MIDL_DEFINE_GUID(CLSID, CLSID_CoCreateAsyncClass,0x7DE94008,0x8AFD,0x4c70,0x97,0x28,0xC6,0xFB,0xFF,0xF6,0xA7,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_CredentialDialogUserClass,0xe67be843,0xbbbe,0x4484,0x95,0xfb,0x05,0x27,0x1a,0xe8,0x67,0x50);


MIDL_DEFINE_GUID(CLSID, CLSID_CredentialDialogMachineClass,0x25461599,0x633d,0x42b1,0x84,0xfb,0x7c,0xd6,0x8d,0x02,0x6e,0x53);


MIDL_DEFINE_GUID(CLSID, CLSID_PolicyStatusValueUserClass,0x85D8EE2F,0x794F,0x41F0,0xBB,0x03,0x49,0xD5,0x6A,0x23,0xBE,0xF4);


MIDL_DEFINE_GUID(CLSID, CLSID_PolicyStatusValueMachineClass,0xC6271107,0xA214,0x4F11,0x98,0xC0,0x3F,0x16,0xBC,0x67,0x0D,0x28);


MIDL_DEFINE_GUID(CLSID, CLSID_PolicyStatusUserClass,0x6DDCE70D,0xA4AE,0x4E97,0x90,0x8C,0xBE,0x7B,0x2D,0xB7,0x50,0xAD);


MIDL_DEFINE_GUID(CLSID, CLSID_PolicyStatusMachineClass,0x521FDB42,0x7130,0x4806,0x82,0x2A,0xFC,0x51,0x63,0xFA,0xD9,0x83);


MIDL_DEFINE_GUID(CLSID, CLSID_PolicyStatusMachineServiceClass,0x1C4CDEFF,0x756A,0x4804,0x9E,0x77,0x3E,0x8E,0xB9,0x36,0x10,0x16);


MIDL_DEFINE_GUID(CLSID, CLSID_PolicyStatusMachineFallbackClass,0xADDF22CF,0x3E9B,0x4CD7,0x91,0x39,0x81,0x69,0xEA,0x66,0x36,0xE4);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleComProxyMachineClass,0x02B24573,0x5230,0x485A,0x87,0x87,0xAD,0x56,0xB2,0x0E,0x8A,0xDB);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleComProxyUserClass,0xD89179AA,0xB869,0x4491,0xAC,0x5F,0x61,0x5D,0x2B,0x10,0x69,0x6E);


MIDL_DEFINE_GUID(CLSID, CLSID_ProcessLauncherClass,0xABC01078,0xF197,0x4b0b,0xAD,0xBC,0xCF,0xE6,0x84,0xB3,0x9C,0x82);


MIDL_DEFINE_GUID(CLSID, CLSID_OnDemandUserAppsClass,0x2F0E2680,0x9FF5,0x43c0,0xB7,0x6E,0x11,0x4A,0x56,0xE9,0x35,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_OnDemandMachineAppsClass,0x6F8BD55B,0xE83D,0x4a47,0x85,0xBE,0x81,0xFF,0xA8,0x05,0x7A,0x69);


MIDL_DEFINE_GUID(CLSID, CLSID_OnDemandMachineAppsServiceClass,0x9465B4B4,0x5216,0x4042,0x9A,0x2C,0x75,0x4D,0x3B,0xCD,0xC4,0x10);


MIDL_DEFINE_GUID(CLSID, CLSID_OnDemandMachineAppsFallbackClass,0xB3D28DBD,0x0DFA,0x40e4,0x80,0x71,0x52,0x07,0x67,0xBA,0xDC,0x7E);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleUpdateCoreClass,0xE225E692,0x4B47,0x4777,0x9B,0xED,0x4F,0xD7,0xFE,0x25,0x7F,0x0E);


MIDL_DEFINE_GUID(CLSID, CLSID_GoogleUpdateCoreMachineClass,0x9B2340A0,0x4068,0x43d6,0xB4,0x04,0x32,0xE2,0x72,0x17,0x85,0x9D);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



