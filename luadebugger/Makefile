CC=g++
RM=rm 

CFLAGS= -O2
LUA= -ldl -llua -L/home/jh/3rd/lua-5.2.2/src/ -I /home/jh/3rd/lua-5.2.2/src/

all:
	$(CC) -o debug.out lua_test.cpp  debughelper.cpp $(CFLAGS) $(LUA)

clean:
	$(RM) -rf *.out *.o