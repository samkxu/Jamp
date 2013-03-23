#include "Jamp.h"

Jamp::Jamp() {
	Running = true;
};

int Jamp::OnExecute(sf::RenderWindow* Window) {

	if(OnInit() == false) {
		return EXIT_FAILURE;
	}
	sf::Event Event;
	while(Running) {
		while (Window->pollEvent(Event)) {
			OnEvent(&Event);
		}
		OnLoop();
		OnRender();
	}
	OnCleanup();
	return EXIT_SUCCESS;
}


int main()
{
	Jamp JampGame;
	
	sf::RenderWindow splash(sf::VideoMode(640, 125), "splash", sf::Style::None);
    sf::Clock clock;
	sf::Texture splashTexture;
	if(!splashTexture.loadFromFile("splash.png")) {
		return EXIT_FAILURE;
	}
	sf::Sprite sprite;
	sprite.setTexture(splashTexture);
	splash.draw(sprite);
	splash.display();

	while (clock.getElapsedTime() < sf::seconds(2.f)) {
	}
	splash.close();

	sf::RenderWindow mainWindow(sf::VideoMode(800,600), "Jamp");
	
	return JampGame.OnExecute(&mainWindow);

	

}