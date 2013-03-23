#ifndef _JENTITY_H_
#define _JENTITY_H_

#include <vector>
#include <SFML\Graphics.hpp>
#include "jFPS.h"
#include "jAnimation.h"
#include "jArea.h"
#include "jCamera.h"


enum {
	ENTITY_TYPE_GENERIC = 0,
	ENTITY_TYPE_PLAYER = 1
};

enum {
	ENTITY_FLAG_NONE = 0,
	ENTITY_FLAG_GRAVITY = 0x00000001,
	ENTITY_FLAG_GHOST = 0x00000002,
	ENTITY_FLAG_MAPONLY = 0x00000004
};

class jEntity {
public:
	static std::vector<jEntity*> EntityList;
	static std::vector<int> EntityIDList;
	jAnimation Anim_Control;
	int ID;
	float X;
	float Y;
	int Width;
	int Height;
	bool MoveLeft;
	bool MoveRight;
	bool MoveDown;
	bool MoveUp;

	int Type;
	int Flags;
	float SpeedX;
	float SpeedY;
	float AccelX;
	float AccelY;
	float MaxSpeedX;
	float MaxSpeedY;
	
	int CurrentFrameCol;
	int CurrentFrameRow;
	int Col_X;
	int Col_Y;
	int Col_Width;
	int Col_Height;

	jEntity();
	~jEntity();

	//needs update
	bool OnLoad(char* File);
	void OnLoop();
	void OnRender(sf::RenderWindow* Window);
	void OnCleanup();
	void OnAnimate();
	bool OnCollision(jEntity* Entity);

	void OnMove(float MoveX, float MoveY);
	void StopXMove();
	void StopYMove();

	bool Collides(int X, int Y, int W, int H);

private:
	bool PosValid(int NewX, int NewY);
	bool PosValidTile(jTile* Tile);
	bool PosValidEntity(jEntity* Entity, int NewX, int NewY);
};

class jEntityCol {
public:
	static std::vector<jEntityCol> EntityColList;

	jEntity* EntityA;
	jEntity* EntityB;

	jEntityCol();
};
#endif






