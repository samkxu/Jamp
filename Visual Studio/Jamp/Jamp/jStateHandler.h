#ifndef __JSTATEHANDLER_H__
#define __JSTATEHANDLER_H__

#include "jState.h"

enum {
	JSTATE_NONE,
	JSTATE_MENU,
	JSTATE_GAME
};

class jStateHandler {
private:
	static jState* ActiveState;

public:
	static void OnEvent(sf::Event* Event, sf::RenderWindow* Window);

	static void OnLoop();

	static void OnRender(sf::RenderWindow* Window);

	static void SetActiveState(int StateID);

	static jState* GetActiveState();

};


#endif