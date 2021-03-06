#include "info.h"

void printCPUInfo()
{
	//header
	printf("\nCPU Info\n");
	//Info
	printf("\tCache Size : %dKB\n", SDL_GetCPUCacheLineSize());
	printf("\tLogical Core Count : %d\n", SDL_GetCPUCount());
	//CPU features
}

void printCPUFeatures()
{
	//header
	printf("\nCPU Features\n");

	printf("\tHas 3DNow : %s\n", BOOL(SDL_Has3DNow()));
#if SDL_VERSION_ATLEAST(2,0,2)	
	printf("\tHas AVX : %s\n", BOOL(SDL_HasAVX()));
#else
#pragma SDL2 library not up to date. SDL 2.0.2+ required for SDL_HasAVX
#endif
	printf("\tHas AltiVec : %s\n", BOOL(SDL_HasAltiVec()));
	printf("\tHas MMX : %s\n", BOOL(SDL_HasMMX()));
	printf("\tHas RDTSC : %s\n", BOOL(SDL_HasRDTSC()));
	printf("\tHas SSE : %s\n", BOOL(SDL_HasSSE()));
	printf("\tHas SSE 2 : %s\n", BOOL(SDL_HasSSE2()));
	printf("\tHas SSE 3 : %s\n", BOOL(SDL_HasSSE3()));
	printf("\tHas SSE 4.1 : %s\n", BOOL(SDL_HasSSE41()));
	printf("\tHas SSE 4.2 : %s\n", BOOL(SDL_HasSSE42()));
}

void printSysInfo()
{
	//Header
	printf("\nSystem Info\n");
#if SDL_VERSION_ATLEAST(2,0,1)
	printf("\tRAM : %dMB\n",SDL_GetSystemRAM());
#else
#pragma SDL2 library not up to date. SDL 2.0.1+ required for SDL_GetSystemRAM
#endif
	printf("\tPlatform : %s\n", SDL_GetPlatform());
	printf("\tByte Order : %s\n", (SDL_BYTEORDER == SDL_LIL_ENDIAN ? "Little Endian" : "Big Endian" ) );
}
