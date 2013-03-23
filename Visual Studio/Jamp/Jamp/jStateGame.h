#ifndef _JSTATEGAME_H_
#define _JSTATEGAME_H_

#include "jState.h"
#include "jPlayer.h"

class jStateGame : public jState {
private:
	static jStateGame Instance;
	jPlayer Player;


	jStateGame();

public:
	void OnKeyDown(sf::Keyboard::Key);
	void OnKeyUp(sf::Keyboard::Key);

	void OnActivate();
	void OnDeactivate();
	void OnLoop();
	void OnRender(sf::RenderWindow* Window);
	static jStateGame* GetInstance();
};

#endif