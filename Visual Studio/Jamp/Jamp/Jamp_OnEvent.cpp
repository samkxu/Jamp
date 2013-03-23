#include "Jamp.h"

void Jamp::OnEvent(sf::Event* Event, sf::RenderWindow* Window) {
	//JEvent(Event);
	if(Event->type == sf::Event::Closed) {
		Window->close();
	}
}