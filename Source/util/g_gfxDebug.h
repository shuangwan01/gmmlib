//========================================================================
//         WARNING!            WARNING!               WARNING!            
//
// This file is automatically generated - do not modify it directly.      
// Make changes in gfxDebugGen.c and run CODEGEN.bat.
//========================================================================

//==============================================================================
// Copyright (c) Intel Corporation (2005-2013).                                /
//                                                                             /
// DISCLAIMER OF WARRANTY                                                      /
// NEITHER INTEL NOR ITS SUPPLIERS MAKE ANY REPRESENTATION OR WARRANTY OR      /
// CONDITION OF ANY KIND WHETHER EXPRESS OR IMPLIED (EITHER IN FACT OR BY      /
// OPERATION OF LAW) WITH RESPECT TO THE SOURCE CODE.  INTEL AND ITS SUPPLIERS /
// EXPRESSLY DISCLAIM ALL WARRANTIES OR CONDITIONS OF MERCHANTABILITY OR       /
// FITNESS FOR A PARTICULAR PURPOSE.  INTEL AND ITS SUPPLIERS DO NOT WARRANT   /
// THAT THE SOURCE CODE IS ERROR-FREE OR THAT OPERATION OF THE SOURCE CODE WILL/
// BE SECURE OR UNINTERRUPTED AND HEREBY DISCLAIM ANY AND ALL LIABILITY ON     /
// ACCOUNT THEREOF.  THERE IS ALSO NO IMPLIED WARRANTY OF NON-INFRINGEMENT.    /
// SOURCE CODE IS LICENSED TO LICENSEE ON AN 'AS IS' BASIS AND NEITHER INTEL   /
// NOR ITS SUPPLIERS WILL PROVIDE ANY SUPPORT, ASSISTANCE, INSTALLATION,       /
// TRAINING OR OTHER SERVICES.  INTEL AND ITS SUPPLIERS WILL NOT PROVIDE ANY   /
// UPDATES, ENHANCEMENTS OR EXTENSIONS.                                        /
//                                                                             /
//------------------------------------------------------------------------------

#ifndef _G_GFXDEBUG_H_
#define _G_GFXDEBUG_H_


//===================== Debug Message Levels========================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.

#define GFXDBG_OFF                   (0x00000000)
#define GFXDBG_CRITICAL              (0x00000001)
#define GFXDBG_NORMAL                (0x00000002)
#define GFXDBG_VERBOSE               (0x00000004)
#define GFXDBG_FUNCTION              (0x80000000)
#define GFXDBG_NONCRITICAL           (0x00000010)
#define GFXDBG_CRITICAL_DEBUG        (0x00000020)
#define GFXDBG_VERBOSE_VERBOSITY     (0x00000040)
#define GFXDBG_PROTOCAL              (0x00000100)
#define GFXDBG_FUNCTION_ENTRY        (0x80000000)
#define GFXDBG_FUNCTION_EXIT         (0x80000000)
#define GFXDBG_FUNCTION_ENTRY_VERBOSE (0x20000000)
#define GFXDBG_FUNCTION_EXIT_VERBOSE (0x20000000)

//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
#define DBG_OFF                        GFXDBG_OFF
#define DBG_CRITICAL                   GFXDBG_CRITICAL
#define DBG_NORMAL                     GFXDBG_NORMAL
#define DBG_VERBOSE                    GFXDBG_VERBOSE
#define DBG_FUNCTION                   GFXDBG_FUNCTION
#define DBG_NONCRITICAL                GFXDBG_NONCRITICAL
#define DBG_CRITICAL_DEBUG             GFXDBG_CRITICAL_DEBUG
#define DBG_VERBOSE_VERBOSITY          GFXDBG_VERBOSE_VERBOSITY
#define DBG_PROTOCAL                   GFXDBG_PROTOCAL
#define DBG_FUNCTION_ENTRY             GFXDBG_FUNCTION_ENTRY
#define DBG_FUNCTION_EXIT              GFXDBG_FUNCTION_EXIT
#define DBG_FUNCTION_ENTRY_VERBOSE     GFXDBG_FUNCTION_ENTRY_VERBOSE
#define DBG_FUNCTION_EXIT_VERBOSE      GFXDBG_FUNCTION_EXIT_VERBOSE

//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
#define DBG_KCH_OFF                    GFXDBG_OFF
#define DBG_KCH_CRITICAL               GFXDBG_CRITICAL
#define DBG_KCH_NORMAL                 GFXDBG_NORMAL
#define DBG_KCH_VERBOSE                GFXDBG_VERBOSE
#define DBG_KCH_FUNCTION               GFXDBG_FUNCTION
#define DBG_KCH_NONCRITICAL            GFXDBG_NONCRITICAL
#define DBG_KCH_CRITICAL_DEBUG         GFXDBG_CRITICAL_DEBUG
#define DBG_KCH_VERBOSE_VERBOSITY      GFXDBG_VERBOSE_VERBOSITY
#define DBG_KCH_PROTOCAL               GFXDBG_PROTOCAL
#define DBG_KCH_FUNCTION_ENTRY         GFXDBG_FUNCTION_ENTRY
#define DBG_KCH_FUNCTION_EXIT          GFXDBG_FUNCTION_EXIT
#define DBG_KCH_FUNCTION_ENTRY_VERBOSE   GFXDBG_FUNCTION_ENTRY_VERBOSE
#define DBG_KCH_FUNCTION_EXIT_VERBOSE   GFXDBG_FUNCTION_EXIT_VERBOSE

//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
#define DBG_GRM_OFF                    GFXDBG_OFF
#define DBG_GRM_CRITICAL               GFXDBG_CRITICAL
#define DBG_GRM_NORMAL                 GFXDBG_NORMAL
#define DBG_GRM_VERBOSE                GFXDBG_VERBOSE
#define DBG_GRM_FUNCTION               GFXDBG_FUNCTION
#define DBG_GRM_NONCRITICAL            GFXDBG_NONCRITICAL
#define DBG_GRM_CRITICAL_DEBUG         GFXDBG_CRITICAL_DEBUG
#define DBG_GRM_VERBOSE_VERBOSITY      GFXDBG_VERBOSE_VERBOSITY
#define DBG_GRM_PROTOCAL               GFXDBG_PROTOCAL
#define DBG_GRM_FUNCTION_ENTRY         GFXDBG_FUNCTION_ENTRY
#define DBG_GRM_FUNCTION_EXIT          GFXDBG_FUNCTION_EXIT
#define DBG_GRM_FUNCTION_ENTRY_VERBOSE   GFXDBG_FUNCTION_ENTRY_VERBOSE
#define DBG_GRM_FUNCTION_EXIT_VERBOSE   GFXDBG_FUNCTION_EXIT_VERBOSE

//=============== Additonal macros for specific component ==========
#ifdef _DEBUG                                                       
#define KCHDISPDBG(arg)                 KchDebugMessage arg 
#else 
#define KCHDISPDBG(arg)  
#endif 

#define DBG_SB_PROTOCOL_COMM            GFXDBG_PROTOCAL

//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
// This enum is used by DebugControlUI
// Use #define GFXDBG_<LEVEL> to specify debug level in driver code.

enum
{
    GFXDBG_ML_OFF                   =  0,
    GFXDBG_ML_CRITICAL              =  1,
    GFXDBG_ML_NORMAL                =  2,
    GFXDBG_ML_VERBOSE               =  3,
    GFXDBG_ML_FUNCTION              =  4,
    GFXDBG_ML_COUNT                 =  5,
};

//===================== Component ID's =============================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.

enum
{
    GFX_COMPONENT_KMD               =  0,
    GFX_COMPONENT_MINIPORT          =  1,
    GFX_COMPONENT_GMM               =  2,
    GFX_COMPONENT_D3D               =  3,
    GFX_COMPONENT_OGL               =  4,
    GFX_COMPONENT_KCH               =  5,
    GFX_COMPONENT_RESOURCEMANAGER   =  6,
    GFX_COMPONENT_SOFTBIOS          =  7,
    GFX_COMPONENT_AIM               =  8,
    GFX_COMPONENT_GHAL3D            =  9,
    GFX_COMPONENT_PWRCONS           = 10,
    GFX_COMPONENT_KMD_CP            = 11,
    GFX_COMPONENT_COUNT             = 12,
};

//===================== Component Masks ============================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.

enum
{
    GFX_KMD_MASK             = (1 << GFX_COMPONENT_KMD),
    GFX_MINIPORT_MASK        = (1 << GFX_COMPONENT_MINIPORT),
    GFX_GMM_MASK             = (1 << GFX_COMPONENT_GMM),
    GFX_D3D_MASK             = (1 << GFX_COMPONENT_D3D),
    GFX_OGL_MASK             = (1 << GFX_COMPONENT_OGL),
    GFX_KCH_MASK             = (1 << GFX_COMPONENT_KCH),
    GFX_RESOURCEMANAGER_MASK = (1 << GFX_COMPONENT_RESOURCEMANAGER),
    GFX_SOFTBIOS_MASK        = (1 << GFX_COMPONENT_SOFTBIOS),
    GFX_AIM_MASK             = (1 << GFX_COMPONENT_AIM),
    GFX_GHAL3D_MASK          = (1 << GFX_COMPONENT_GHAL3D),
    GFX_PWRCONS_MASK         = (1 << GFX_COMPONENT_PWRCONS),
    GFX_KMD_CP_MASK          = (1 << GFX_COMPONENT_KMD_CP),
};

//================= Component Memory Allocation Tags ===============
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
//
// Tags are 4 byte ASCII character codes in the range 0-127 decimal.
// The leading @ character is to provide Intel unique tags.
// Passed in calls to ExAllocatePoolWithTag/ExFreePoolWithTag.
// Useful for pool tracking.
//

#define GFX_COMPONENT_KMD_TAG                   'DMK@'
#define GFX_COMPONENT_MINIPORT_TAG              ' PM@'
#define GFX_COMPONENT_GMM_TAG                   'MMG@'
#define GFX_COMPONENT_D3D_TAG                   'D3D@'
#define GFX_COMPONENT_OGL_TAG                   'LGO@'
#define GFX_COMPONENT_KCH_TAG                   'HCK@'
#define GFX_COMPONENT_RESOURCEMANAGER_TAG       ' MR@'
#define GFX_COMPONENT_SOFTBIOS_TAG              ' BS@'
#define GFX_COMPONENT_AIM_TAG                   'MIA@'
#define GFX_COMPONENT_GHAL3D_TAG                'G3D@'
#define GFX_COMPONENT_PWRCONS_TAG               ' CP@'
#define GFX_COMPONENT_KMD_CP_TAG                ' PC@'
#define GFX_DEFAULT_TAG                         'CTNI'

//======================= Component ALLOC_TAG ======================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.

#ifdef __MINIPORT
#define REG_ASSERT_ENABLE_MASK                  L"z AssertEnableMask"
#define REG_DEBUG_ENABLE_MASK                   L"z DebugEnableMask"
#define REG_RINGBUF_DEBUG_MASK                  L"z RingBufDbgMask"
#define REG_REPORT_ASSERT_ENABLE                L"z ReportAssertEnable"
#define REG_ASSERT_BREAK_DISABLE                L"z AssertBreakDisable"
#define REG_GFX_COMPONENT_KMD                   L"z KMD_Debug_Lvl"
#define REG_GFX_COMPONENT_MINIPORT              L"z MINIPORT_Debug_Lvl"
#define REG_GFX_COMPONENT_GMM                   L"z GMM_Debug_Lvl"
#define REG_GFX_COMPONENT_D3D                   L"z D3D_Debug_Lvl"
#define REG_GFX_COMPONENT_OGL                   L"z OGL_Debug_Lvl"
#define REG_GFX_COMPONENT_KCH                   L"z KCH_Debug_Lvl"
#define REG_GFX_COMPONENT_RESOURCEMANAGER       L"z RESOURCEMANAGER_Debug_Lvl"
#define REG_GFX_COMPONENT_SOFTBIOS              L"z SOFTBIOS_Debug_Lvl"
#define REG_GFX_COMPONENT_AIM                   L"z AIM_Debug_Lvl"
#define REG_GFX_COMPONENT_GHAL3D                L"z GHAL3D_Debug_Lvl"
#define REG_GFX_COMPONENT_PWRCONS               L"z PWRCONS_Debug_Lvl"
#define REG_GFX_COMPONENT_KMD_CP                L"z KmdCp_Debug_Lvl"

#endif

//======================= Component ALLOC_TAG ======================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.

#if defined(__MINIPORT)
#define ALLOC_TAG               GFX_COMPONENT_MINIPORT_TAG
#elif defined(__SOFTBIOS)
#define ALLOC_TAG               GFX_COMPONENT_SOFTBIOS_TAG
#elif defined(__KCH)
#define ALLOC_TAG               GFX_COMPONENT_KCH_TAG
#elif defined(__AIM)
#define ALLOC_TAG               GFX_COMPONENT_AIM_TAG
#else
#define ALLOC_TAG               GFX_DEFAULT_TAG
#endif

//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
#ifdef __GFXDEBUG_C__    // Only to be defined by "gfxDebug.c" file.

    // Define the array of component ID strings. Note that the sequence
    // of these strings must match the component ID's listed above.

    char *ComponentIdStrings[] = {
        "INTC KMD: ",
        "INTC MINIPORT: ",
        "INTC GMM: ",
        "INTC D3D: ",
        "INTC OGL: ",
        "INTC KCH: ",
        "INTC RESOURCEMANAGER: ",
        "INTC SOFTBIOS: ",
        "INTC AIM: ",
        "INTC GHAL3D: ",
        "INTC PWRCONS: ",
        "INTC KMCP: ",
    };

#endif /* __GFXDEBUG_C__ */

//================ Prototype for print routines ====================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.

#ifdef __cplusplus 
extern "C" { 
#endif 
void kmPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void MiniportPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void GMMPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void D3DPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void glPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void KchPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void GrmPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void SoftbiosPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void AIMPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void GHAL3DPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void PwrConsPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);
void KmCpPrintMessage(ULONG DebugLevel, const char *DebugMessageFmt, ...);


#ifdef __cplusplus 
}
#endif 
//==================== Generate debug routines =====================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
//
// Debug routines either map into the base PrintMessage
// routine or they map into nothing. A code segment such as
// 'DebugPrint(args)' gets converted to '(args)' which
// is converted to nothing by the C compiler.

#if __DEBUG_MESSAGE
    #define kmDebugMessage              kmPrintMessage
    #define MiniportDebugMessage        MiniportPrintMessage
    #define GMMDebugMessage             GMMPrintMessage
    #define D3DDebugMessage             D3DPrintMessage
    #define glDebugMessage              glPrintMessage
    #define KchDebugMessage             KchPrintMessage
    #define GrmDebugMessage             GrmPrintMessage
    #define SoftbiosDebugMessage        SoftbiosPrintMessage
    #define AIMDebugMessage             AIMPrintMessage
    #define GHAL3DDebugMessage          GHAL3DPrintMessage
    #define PwrConsDebugMessage         PwrConsPrintMessage
    #define KmCpDebugMessage            KmCpPrintMessage
#elif defined(MP_SB_ETW_LOGGING) && LHDM
    #define kmDebugMessage(...) 
#if _RELEASE_INTERNAL
    #define MiniportDebugMessage         MiniportLogMessage
#else
#define MiniportDebugMessage(...) 
#endif
#define GMMDebugMessage(...) 
#define D3DDebugMessage(...) 
#define glDebugMessage(...) 
#define KchDebugMessage(...) 
#define GrmDebugMessage(...) 
#if _RELEASE_INTERNAL
    #define SoftbiosDebugMessage          SoftbiosLogMessage
#else
    #define SoftbiosDebugMessage(...)
#endif
#define AIMDebugMessage(...) 
#define GHAL3DDebugMessage(...) 
#define PwrConsDebugMessage(...) 
#define KmCpDebugMessage(...) 
#else
    #define kmDebugMessage(...) 
    #define MiniportDebugMessage(...) 
    #define GMMDebugMessage(...) 
    #define D3DDebugMessage(...) 
    #define glDebugMessage(...) 
    #define KchDebugMessage(...) 
    #define GrmDebugMessage(...) 
    #define SoftbiosDebugMessage(...) 
    #define AIMDebugMessage(...) 
    #define GHAL3DDebugMessage(...) 
    #define PwrConsDebugMessage(...) 
    #define KmCpDebugMessage(...) 
#endif /* __DEBUG_MESSSAGE */

//=================== Generate release routines ====================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
//
// Release routines either map into the base PrintMessage
// routine or they map into nothing. A code segment such as
// 'ReleasePrint(args)' gets converted to '(args)' which
// is converted to nothing by the C compiler.

#if __RELEASE_MESSAGE
    #define kmReleaseMessage              kmPrintMessage
    #define MiniportReleaseMessage        MiniportPrintMessage
    #define GMMReleaseMessage             GMMPrintMessage
    #define D3DReleaseMessage             D3DPrintMessage
    #define glReleaseMessage              glPrintMessage
    #define KchReleaseMessage             KchPrintMessage
    #define GrmReleaseMessage             GrmPrintMessage
    #define SoftbiosReleaseMessage        SoftbiosPrintMessage
    #define AIMReleaseMessage             AIMPrintMessage
    #define GHAL3DReleaseMessage          GHAL3DPrintMessage
    #define PwrConsReleaseMessage         PwrConsPrintMessage
    #define KmCpReleaseMessage            KmCpPrintMessage    
#else
    #define kmReleaseMessage(...) 
    #define MiniportReleaseMessage(...) 
    #define GMMReleaseMessage(...) 
    #define D3DReleaseMessage(...) 
    #define glReleaseMessage(...) 
    #define KchReleaseMessage(...) 
    #define GrmReleaseMessage(...) 
    #define SoftbiosReleaseMessage(...) 
    #define AIMReleaseMessage(...) 
    #define GHAL3DReleaseMessage(...) 
    #define PwrConsReleaseMessage(...) 
    #define KmCpReleaseMessage(...) 
#endif /* __RELEASE_MESSSAGE */

//=================== Generate ASSERT macros  ======================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.

#define KM_ASSERT(expr)      __ASSERT(pDebugControl, GFX_COMPONENT_KMD, GFX_KMD_MASK, expr)
#define NTSYSASSERT(expr)    __ASSERT(pDebugControl, GFX_COMPONENT_MINIPORT, GFX_MINIPORT_MASK, expr)
#define GMMASSERT(expr)      __ASSERT(pDebugControl, GFX_COMPONENT_GMM, GFX_GMM_MASK, expr)
#define D3DASSERT(expr)      __ASSERT(pDebugControl, GFX_COMPONENT_D3D, GFX_D3D_MASK, expr)
#define GL_ASSERT(expr)      __ASSERT(pDebugControl, GFX_COMPONENT_OGL, GFX_OGL_MASK, expr)
#define KCHASSERT(expr)      __ASSERT(pDebugControl, GFX_COMPONENT_KCH, GFX_KCH_MASK, expr)
#define GRMASSERT(expr)      __ASSERT(pDebugControl, GFX_COMPONENT_RESOURCEMANAGER, GFX_RESOURCEMANAGER_MASK, expr)
#define SOFTBIOSASSERT(expr) __ASSERT(pDebugControl, GFX_COMPONENT_SOFTBIOS, GFX_SOFTBIOS_MASK, expr)
#define AIMASSERT(expr)      __ASSERT(pDebugControl, GFX_COMPONENT_AIM, GFX_AIM_MASK, expr)
#define GHAL3DASSERT(expr)   __ASSERT(pDebugControl, GFX_COMPONENT_GHAL3D, GFX_GHAL3D_MASK, expr)
#define PWRCONS_ASSERT(expr) __ASSERT(pDebugControl, GFX_COMPONENT_PWRCONS, GFX_PWRCONS_MASK, expr)
#define KMDCP_ASSERT(expr)   __ASSERT(pDebugControl, GFX_COMPONENT_KMD_CP, GFX_KMD_CP_MASK, expr)

#define SOFTBIOSRELEASEASSERT(expr) __RELEASEASSERT(pDebugControl, GFX_SOFTBIOS_MASK, expr)

//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
#define KM_ASSERTPTR(expr, ret)      __ASSERTPTR(pDebugControl, GFX_COMPONENT_KMD, GFX_KMD_MASK, expr, ret)
#define NTSYSASSERTPTR(expr, ret)    __ASSERTPTR(pDebugControl, GFX_COMPONENT_MINIPORT, GFX_MINIPORT_MASK, expr, ret)
#define GMMASSERTPTR(expr, ret)      __ASSERTPTR(pDebugControl, GFX_COMPONENT_GMM, GFX_GMM_MASK, expr, ret)
#define D3DASSERTPTR(expr, ret)      __ASSERTPTR(pDebugControl, GFX_COMPONENT_D3D, GFX_D3D_MASK, expr, ret)
#define GL_ASSERTPTR(expr, ret)      __ASSERTPTR(pDebugControl, GFX_COMPONENT_OGL, GFX_OGL_MASK, expr, ret)
#define KCHASSERTPTR(expr, ret)      __ASSERTPTR(pDebugControl, GFX_COMPONENT_KCH, GFX_KCH_MASK, expr, ret)
#define GRMASSERTPTR(expr, ret)      __ASSERTPTR(pDebugControl, GFX_COMPONENT_RESOURCEMANAGER, GFX_RESOURCEMANAGER_MASK, expr, ret)
#define SOFTBIOSASSERTPTR(expr, ret) __ASSERTPTR(pDebugControl, GFX_COMPONENT_SOFTBIOS, GFX_SOFTBIOS_MASK, expr, ret)
#define AIMASSERTPTR(expr, ret)      __ASSERTPTR(pDebugControl, GFX_COMPONENT_AIM, GFX_AIM_MASK, expr, ret)
#define GHAL3DASSERTPTR(expr, ret)   __ASSERTPTR(pDebugControl, GFX_COMPONENT_GHAL3D, GFX_GHAL3D_MASK, expr, ret)
#define PWRCONS_ASSERTPTR(expr, ret) __ASSERTPTR(pDebugControl, GFX_COMPONENT_PWRCONS, GFX_PWRCONS_MASK, expr, ret)
#define KMDCP_ASSERTPTR(expr, ret)   __ASSERTPTR(pDebugControl, GFX_COMPONENT_KMD_CP, GFX_KMD_CP_MASK, expr, ret)


//=========== void return value for ASSERPTR macros  ==========================
#define VOIDRETURN 

//============= Generate Message printing routines =================
//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.

#ifdef __GFXDEBUG_C__    // Only to be defined by "gfxDebug.c" file.

  #ifdef __MINIPORT
     MESSAGE_FUNCTION(kmPrintMessage, GFX_COMPONENT_KMD);
  #endif /* __MINIPORT */

  #ifdef __MINIPORT
     MESSAGE_FUNCTION(MiniportPrintMessage, GFX_COMPONENT_MINIPORT);
  #endif /* __MINIPORT */

  #ifdef __GMM
     MESSAGE_FUNCTION(GMMPrintMessage, GFX_COMPONENT_GMM);
  #endif /* __GMM */

  #ifdef __D3D
     MESSAGE_FUNCTION(D3DPrintMessage, GFX_COMPONENT_D3D);
  #endif /* __D3D */

  #ifdef __GL
     MESSAGE_FUNCTION(glPrintMessage, GFX_COMPONENT_OGL);
  #endif /* __GL */

  #ifdef __MINIPORT
     MESSAGE_FUNCTION(KchPrintMessage, GFX_COMPONENT_KCH);
  #endif /* __MINIPORT */

  #ifdef __MINIPORT
     MESSAGE_FUNCTION(GrmPrintMessage, GFX_COMPONENT_RESOURCEMANAGER);
  #endif /* __MINIPORT */

  #ifdef __MINIPORT
     MESSAGE_FUNCTION(SoftbiosPrintMessage, GFX_COMPONENT_SOFTBIOS);
  #endif /* __MINIPORT */

  #ifdef __MINIPORT
     MESSAGE_FUNCTION(AIMPrintMessage, GFX_COMPONENT_AIM);
  #endif /* __MINIPORT */

  #ifdef __GHAL3D
     MESSAGE_FUNCTION(GHAL3DPrintMessage, GFX_COMPONENT_GHAL3D);
  #endif /* __GHAL3D */

  #ifdef __MINIPORT
     MESSAGE_FUNCTION(PwrConsPrintMessage, GFX_COMPONENT_PWRCONS);
  #endif /* __MINIPORT */

  #ifdef __MINIPORT
     MESSAGE_FUNCTION(KmCpPrintMessage, GFX_COMPONENT_KMD_CP);
  #endif /* __MINIPORT */

//  WARNING!!! DO NOT MODIFY this file - see detail above copyright.
#endif /* __GFXDEBUG_C__  */

#endif //_G_GFXDEBUG_H_