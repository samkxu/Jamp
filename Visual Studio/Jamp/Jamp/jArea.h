#ifndef _JAREA_H_
#define _JAREA_H_

#include "jMap.h"

class jArea {
public:
	static jArea AreaControl;
	
	std::vector<jMap> MapList;

	jArea();

	bool OnLoad(char* File);
	void OnRender(sf::RenderWindow WIndow, int CameraX, int CameraY);
	void OnCleanup();
	jMap* GetMap(int X, int Y);
	jTile* GetTile(int X, int Y);

private:
	int AreaSize;
	sf::Texture* Tileset;
};

#endif