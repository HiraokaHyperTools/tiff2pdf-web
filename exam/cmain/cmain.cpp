#include <stdio.h>
#include <cstring>

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#endif

#ifndef __EMSCRIPTEN__ 
#define EMSCRIPTEN_KEEPALIVE
#endif

EMSCRIPTEN_KEEPALIVE
int main(int argc, char **argv) {
	printf("argc = %d\n", argc);
	for (int y=0; y<argc; y++) {
		printf("argv[%d] = %s\n", y, argv[y]);
	}
	return 0;
}

