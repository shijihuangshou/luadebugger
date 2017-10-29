#include "debughelper.h"

extern "C"{
    #include "lua.h"
    #include "lauxlib.h"
    #include "lualib.h"
}

int main()
{
    lua_State* pState = luaL_newstate();
    luaL_openlibs(pState);

    CDebugHelper::instance()->regDebug(pState);

    luaL_loadfile(pState, "debug_test.lua");
    //所有的返回结果都会压栈
    lua_pcall(pState, 0, LUA_MULTRET, 0);
    
    CDebugHelper::instance()->unRegDebug(pState);
    
    lua_close(pState);

    return 0;
}