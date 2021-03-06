#ifndef __ModuleTime_H__
#define __ModuleTime_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"
#include "p2Point.h"
#include "p2Qeue.h"
#include "ModuleMusic.h"


struct SDL_Texture;

class ModuleUI : public Module
{
public:

	ModuleUI();
	~ModuleUI();

	bool Start();
	update_status Update();
	bool CleanUp();

	bool Timer();
	bool DrawLife();
	void Score();
	bool WinLose(float, float, int);
	void ChangeScene(int, int);
	void ResetSceneChange();
	void DebugRounds();

public:
	//Shape for Timer
	SDL_Rect timerbackground;

	//Textures and font sprites
	SDL_Texture* graphics;
	SDL_Texture* titles;
	SDL_Rect timetext;
	SDL_Rect health;
	SDL_Rect healthp2;
	SDL_Rect nohealth;
	SDL_Rect redhealth;
	SDL_Rect point;
	SDL_Rect pointred;
	SDL_Rect pointblack;
	SDL_Rect andybogard;
	SDL_Rect terrybogard;

	Animation redlife;
	Animation pointscored;

	//TITLES
	SDL_Rect fight;
	SDL_Rect roundone;
	SDL_Rect roundtwo;
	SDL_Rect roundthree;
	SDL_Rect timeup;
	SDL_Rect ready;
	SDL_Rect youwin;
	SDL_Rect youlose;
	


	int countdown = -1;
	int scorefont = -1;
	int healthwidth = 0;
	
	bool change1 = true;
	bool change2 = true;
	bool change3 = true;
	bool winactive = false;
	bool p1canwin = false;
	bool p1win = false;
	bool p2canwin = false;
	bool p2win = false;

	//Sound and FX
	Mix_Chunk* finalcountdown;
	Mix_Chunk* timeout;
	Mix_Chunk* readyfx;
	Mix_Chunk* fightfx;

	//Timer
	int start_delay = 2000;
	int starting = 0;
	uint time;
	uint starttime;
	bool enabletime = false;

	char time_text[10];
	
	char p1score[10];
	char p2score[10];
};

#endif