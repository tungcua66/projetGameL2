
#ifndef COMMON_FUNCTION_H_
#define COMMON_FUNCTION_H_

#include <Windows.h>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>

#define GA_FAILED -1
#define GA_SUCCESS 0;


//Screen
const int WIDTH_BACKGROUND = 4800;
const int HEIGHT_BACKGROUND = 600;
const int SCREEN_WIDTH = 1200;
const int SCREEN_HEIGHT = 600;
const int SCREEN_BPP = 32;
const int SPEED_SCREEN = 2;

//Main
const int POS_X_START_MAIN_OBJ = 100;
const int POS_Y_START_MAIN_OBJ = 200;
const int SPEED_MAIN_OBJECT = 10;
const int SPEED_BULLET_MAIN = 20;

//Threats

const int SPEED_THREAT = 5;
const int NUM_THREATS = 3;
const int SPEED_BULLET_THREATS = 10;
const int VAL_OFFSET_START_POST_THREATS = 400;
const int UNDER_LIMIT_THREAT = 200;

static SDL_Surface* g_screen = NULL;
static SDL_Surface* g_bkground = NULL;
static SDL_Event g_even;

static Mix_Chunk* g_sound_bullet[2];
static Mix_Chunk* g_sound_exp[2];


static char g_name_bk_ground[] = { "img/bk2.png" };

static char g_name_main_obj[] = { "img/plane_fly.png" };
static char g_name_exp_main[] = { "img/exp_main.png" };
static char g_name_bullet_main_laser[] = { "img/laser.png" };
static char g_name_bullet_main_fire[] = { "img/sphere.png" };
static char g_name_audio_bullet_main[] = { "audio/Laser.wav" };
static char g_name_audio_bullet_main2[] = { "audio/Fire1.wav" };
static char g_name_audio_exp_main[] = { "audio/Bomb1.wav" };


//define threats
static char g_name_exp_threats[] = { "img/exp.png" };
static char g_name_threats[] = { "img/enemy.png" };
static char g_name_bullet_threats[] = { "img/sphere2.png" };
static char g_name_audio_exp_threats[] = { "audio/Explosion+1.wav" };

namespace SDLCommonFunc
{
	SDL_Surface* LoadImage(std::string file_path);
	void CleanUp();
	void ApplySurface(SDL_Surface* src, SDL_Surface* des, int x, int y);
	void ApplySurfaceClip(SDL_Surface* src, SDL_Surface* des, SDL_Rect* clip, int x, int y);
	bool CheckCollision(const SDL_Rect& object1, const SDL_Rect& object2);
	int MakeRandValue(const int& div_val = 400);
}


#endif
