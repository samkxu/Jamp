#ifndef _JSTATEMENU_H_
#define _JSTATEMENU_H_

#include "jState.h"

class jStateMenu : public jState {
private:
	static jStateMenu Instance;
	jStateMenu();

public:
	void OnEvent(sf::Event* Event, sf::RenderWindow* Window);
	void OnActivate();
	void OnDeactivate();
	void OnKeyDown(sf::Keyboard::Key);
	void OnLoop();
	void OnRender(sf::RenderWindow* Window);
	static jStateMenu* GetInstance();
};

#endif