#include "info.h"

#if SDL_VERSION_ATLEAST(2,0,4)
#define NUM_HINTS 27
#elif SDL_VERSION_ATLEAST(2,0,2)
#define NUM_HINTS 25
#elif SDL_VERSION_ATLEAST(2,0,1)
#define NUM_HINTS 19
#elif SDL_VERSION_ATLEAST(2,0,0)
#define NUM_HINTS 17
#endif

void printHints()
{
	//Header
	printf("\nSDL Hints\n");
	char *hints[NUM_HINTS] = {
#if SDL_VERSION_ATLEAST(2,0,4)
		"SDL_WINDOWS_ENABLE_MESSAGELOOP",
		"SDL_WINDOW_FRAME_USABLE_WHILE_CURSOR_HIDDEN",
#else
#warning "SDL2 library not up to date. SDL 2.0.4+ required for some hints"
#endif
#if SDL_VERSION_ATLEAST(2,0,2)
		"SDL_HINT_ACCELEROMETER_AS_JOYSTICK ",
		"SDL_HINT_MAC_CTRL_CLICK_EMULATE_RIGHT_CLICK ",
		"SDL_HINT_MOUSE_RELATIVE_MODE_WARP",
		"SDL_HINT_VIDEO_ALLOW_SCREENSAVER",
		"SDL_HINT_VIDEO_MAC_FULLSCREEN_SPACES",
		"SDL_HINT_VIDEO_WIN_D3DCOMPILER",
		"SDL_HINT_VIDEO_WINDOW_SHARE_PIXEL_FORMAT",
#else
#warning "SDL2 library not up to date. SDL 2.0.2+ required for some hints"
#endif
#if SDL_VERSION_ATLEAST(2,0,1)
		"SDL_HINT_VIDEO_HIGHDPI_DISABLED",
		"SDL_HINT_RENDER_DIRECT3D_THREADSAFE",
#else
#warning "SDL2 library not up to date. SDL 2.0.1+ required for some hints"
#endif
		"SDL_HINT_FRAMEBUFFER_ACCELERATION ",
		"SDL_HINT_GAMECONTROLLERCONFIG",
		"SDL_HINT_GRAB_KEYBOARD",
		"SDL_HINT_IDLE_TIMER_DISABLED",
		"SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS",
		"SDL_HINT_ORIENTATIONS",
		"SDL_HINT_RENDER_DRIVER",
		"SDL_HINT_RENDER_OPENGL_SHADERS",
		"SDL_HINT_RENDER_SCALE_QUALITY",
		"SDL_HINT_RENDER_VSYNC",
		"SDL_HINT_TIMER_RESOLUTION",
		"SDL_HINT_VIDEO_MINIMIZE_ON_FOCUS_LOSS",
		"SDL_HINT_VIDEO_X11_XINERAMA",
		"SDL_HINT_VIDEO_X11_XRANDR",
		"SDL_HINT_VIDEO_X11_XVIDMODE",
		"SDL_HINT_XINPUT_ENABLED"
	};
	
	for (int i = 0; i < NUM_HINTS; i++)
	{
		printf("\t%s : %s\n", hints[i], SDL_GetHint(hints[i]));
	}
}
