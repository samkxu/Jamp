#ifndef _JAMP_H_
#define _JAMP_H_

//#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "jStateHandler.h"
#include "jFPS.h"


class Jamp {
	
private:
	bool Running;
public:
	Jamp();
	int OnExecute(sf::RenderWindow* Window);
	bool OnInit();
	void OnEvent(sf::Event* Event, sf::RenderWindow* Window);
	void OnLoop();
	void OnRender();
	void OnCleanup();
};


#endif