#include "Portal2.hpp"

#include "Game.hpp"
#include "Offsets.hpp"

Portal2::Portal2()
{
    this->version = SourceGame_Portal2;
}
void Portal2::LoadOffsets()
{
    using namespace Offsets;

#ifdef _WIN32

    // engine.dll

    InternalSetValue = 12; // ConVar
    InternalSetFloatValue = 13; // ConVar
    InternalSetIntValue = 14; // ConVar
    ClientCmd = 7; // CEngineClient
    GetClientStateFunction = 4; // CEngineClient::ClientCmd
    Cbuf_AddText = 46; // CEngineClient::ClientCmd
    s_CommandBuffer = 82; // Cbuf_AddText
    CCommandBufferSize = 9556; // Cbuf_AddText
    m_bWaitEnabled = 8265; // CCommandBuffer::AddText
    GetActiveSplitScreenPlayerSlot = 127; // CEngineClient
    SetSignonState = 15; // CClientState
    HostState_OnClientConnected = 684; // CClientState::SetSignonState
    hoststate = 1; // HostState_OnClientConnected
    AutoCompletionFunc = 66; // listdemo_CompletionFunc
    ClientCommand = 39; // CVEngineServer
    TraceRay = 5; // IEngineTrace
    NextParticleSystem = 54; //IClientTools
    ProcessMovement = 1; // CGameMovement
    m_nTickBase = 3792; // CBaseEntity
    m_bDucking = 2272; // CBaseEntity
    m_hUseEntity = 2960; // CBaseEntity
    GetScreenSize = 5; // CEngineClient
    PrecacheModel = 62; // IEngineTool

    // client.dll

    GetHud = 125; // cc_leaderboard_enable
    FindElement = 135; // cc_leaderboard_enable
    ChatPrintf = 22; // CBaseHudChat
    RenderView = 26;

    // server.dll
    m_hActiveWeapon = 2140; // CBaseEntity
    m_bCanFirePortal1 = 1500; // CBaseEntity
    UTIL_PlayerByIndex = 39; // CServerGameDLL::Think
    gpGlobals = 14; // UTIL_PlayerByIndex
    Think = 31; // CServerGameDLL
    m_hGroundEntity = 344; // CBaseEntity
    m_iHealth = 528; // CBaseEntity
    GetIServerEntity = 1; // CServerTools
    m_EntPtrArray = 61; // CServerTools::GetIServerEntity
    //CBaseEntityActivate = 37;

    // vstdlib.dll

    RegisterConCommand = 9; // CCVar
    UnregisterConCommand = 10; // CCvar
    FindCommandBase = 13; // CCVar
    m_pConCommandList = 48; // CCvar

    // vscript.dll

    CreateVM = 8;

    // vgui2.dll

    GetIScheme = 8; // CSchemeManager
    GetFont = 3; // CScheme

    // vguimatsurface.dll

    DrawSetColor = 14; // CMatSystemSurface
    DrawFilledRect = 15; // CMatSystemSurface
    DrawLine = 18; // CMatSystemSurface
    DrawSetTextFont = 22; // CMatSystemSurface
    DrawSetTextColor = 23; // CMatSystemSurface
    GetFontTall = 72; // CMatSystemSurface
    PaintTraverseEx = 117; // CMatSystemSurface
    StartDrawing = 127; // CMatSystemSurface::PaintTraverseEx
    FinishDrawing = 603; // CMatSystemSurface::PaintTraverseEx
    DrawColoredText = 160; // CMatSystemSurface
    DrawTextLen = 163; // CMatSystemSurface
    DisableClipping = 156; // CMatSystemSurface
    Paint = 14; // CEngineVGui

    DrawSetTextureFile = 35; // CMatSystemSurface
    DrawSetTextureRGBA = 36; // CMatSystemSurface
    DrawSetTexture = 37; // CMatSystemSurface
    DrawGetTextureSize = 38; // CMatSystemSurface
    DrawTexturedRect = 39; // CMatSystemSurface
    IsTextureIDValid = 40; // CMatSystemSurface
    CreateNewTextureID = 41; // CMatSystemSurface

#else

    // engine.so

    InternalSetValue = 19; // ConVar
    InternalSetFloatValue = 20; // ConVar
    InternalSetIntValue = 21; // ConVar
    ClientCmd = 7; // CEngineClient
    GetClientStateFunction = 9; // CEngineClient::ClientCmd
    Cbuf_AddText = 35; // CEngineClient::ClientCmd
    s_CommandBuffer = 52; // Cbuf_AddText
    CCommandBufferSize = 9556; // Cbuf_AddText
    m_bWaitEnabled = 8265; // CCommandBuffer::AddText
    GetActiveSplitScreenPlayerSlot = 127; // CEngineClient
    SetSignonState = 36; // CClientState
    HostState_OnClientConnected = 1275; // CClientState::SetSignonState
    hoststate = 28; // HostState_OnClientConnected
    AutoCompletionFunc = 46; // listdemo_CompletionFunc
    ClientCommand = 39; // CVEngineServer
    TraceRay = 5; // IEngineTrace
    NextParticleSystem = 54; //IClientTools
    ProcessMovement = 2; // CGameMovement
    m_nTickBase = 3816; // CBaseEntity
    m_bDucking = 81; // CBaseEntity
    m_hUseEntity = 2984; // CBaseEntity
    GetScreenSize = 5; // CEngineClient
    PrecacheModel = 63; // IEngineTool

    // client.so

    GetHud = 130; // cc_leaderboard_enable
    FindElement = 143; // cc_leaderboard_enable
    ChatPrintf = 25; // CBaseHudChat
    RenderView = 26;

    // server.so
    m_hActiveWeapon = 2164; // CBaseEntity
    m_bCanFirePortal1 = 1524; // CBaseEntity
    UTIL_PlayerByIndex = 53; // CServerGameDLL::Think
    gpGlobals = 9; // UTIL_PlayerByIndex
    Think = 31; // CServerGameDLL
    m_hGroundEntity = 352; // CBaseEntity
    m_iHealth = 536; // CBaseEntity
    GetIServerEntity = 2; // CServerTools
    m_EntPtrArray = 48; // CServerTools::GetIServerEntity
    //CBaseEntityActivate = ;

    // libvstdlib.so

    RegisterConCommand = 9; // CCVar
    UnregisterConCommand = 10; // CCvar
    FindCommandBase = 13; // CCVar
    m_pConCommandList = 48; // CCvar

    // vscript.so

    CreateVM = 8;

    // vgui2.so

    GetIScheme = 9; // CSchemeManager
    GetFont = 4; // CScheme

    // vguimatsurface.so

    DrawSetColor = 13; // CMatSystemSurface
    DrawFilledRect = 15; // CMatSystemSurface
    DrawLine = 18; // CMatSystemSurface
    DrawSetTextFont = 22; // CMatSystemSurface
    DrawSetTextColor = 24; // CMatSystemSurface
    GetFontTall = 72; // CMatSystemSurface
    PaintTraverseEx = 117; // CMatSystemSurface
    StartDrawing = 1341; // CMatSystemSurface::PaintTraverseEx
    FinishDrawing = 355; // CMatSystemSurface::PaintTraverseEx
    DrawColoredText = 160; // CMatSystemSurface
    DrawTextLen = 163; // CMatSystemSurface
    DisableClipping = 156; // CMatSystemSurface
    Paint = 15; // CEngineVGui

    DrawSetTextureFile = 35; // CMatSystemSurface
    DrawSetTextureRGBA = 36; // CMatSystemSurface
    DrawSetTexture = 37; // CMatSystemSurface
    DrawGetTextureSize = 38; // CMatSystemSurface
    DrawTexturedRect = 39; // CMatSystemSurface
    IsTextureIDValid = 40; // CMatSystemSurface
    CreateNewTextureID = 41; // CMatSystemSurface

#endif
}
const char* Portal2::Version()
{
    return "Portal 2 (7054)";
}
const char* Portal2::Process()
{
#ifdef _WIN32
    return "portal2.exe";
#else
    return "portal2_linux";
#endif
}
