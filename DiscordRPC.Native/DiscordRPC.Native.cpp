// DiscordRPC.Native.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DiscordRPC.Native.h"


// This is an example of an exported variable
DISCORDRPCNATIVE_API int nDiscordRPCNative=0;

// This is an example of an exported function.
DISCORDRPCNATIVE_API int fnDiscordRPCNative(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see DiscordRPC.Native.h for the class definition
CDiscordRPCNative::CDiscordRPCNative()
{
    return;
}
