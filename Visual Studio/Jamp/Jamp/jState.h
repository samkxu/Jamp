#ifndef __JSTATE_H__
#define __JSTATE_H__

#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

class jState {
public:
	jState();

	void OnActivate();

	void OnDeactivate();

	void OnLoop();

	void OnRender(sf::Window* Window);

	void OnEvent(sf::Event* Event, sf::Window* Window);

};

#endif
