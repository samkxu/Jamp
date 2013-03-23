#ifndef _JMAP_H_
#define _JAMP_H_

#include <SFML\Graphics.hpp>
#include "jTile.h"
#include <vector>

class jMap {
private:
	std::vector<jTile> TileList;

public:
	sf::Texture* Tileset;

	jMap();
	bool OnLoad(char* File);
	void OnRender(sf::RenderWindow* Window, int MapX, int MapY);
	jTile* GetTile(int X, int Y);
};
#endif