#ifndef _JEVENT_H_
#define _JEVENT_H_

//#include <SFML/Audio.hpp>
//#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class jEventHandler {
public:
	jEventHandler();

	void OnEvent(sf::Event* Event);

};


#endif