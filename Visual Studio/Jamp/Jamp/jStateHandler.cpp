#include "jStateHandler.h"

//Jamp States
#include "jStateGame.h"
#include "jStateMenu.h"

jState* jStateHandler::ActiveState = 0;

void jStateHandler::OnEvent(sf::Event* Event, sf::RenderWindow* Window) {
	if(ActiveState) ActiveState->OnEvent(Event, Window);
}

void jStateHandler::OnLoop() {
	if(ActiveState) ActiveState->OnLoop();
}

void jStateHandler::OnRender(sf::RenderWindow* Window) {
	if(ActiveState) ActiveState->OnRender(Window);
}

void jStateHandler::SetActiveState(int StateID) {
	if(ActiveState) ActiveState->OnDeactivate();

	//Jamp States here
	switch(StateID) {
		case JSTATE_NONE:
			ActiveState = 0;
			break;
		case JSTATE_GAME:
			ActiveState = jStateGame::GetInstance();
			break;
		case JSTATE_MENU:
			ActiveState = jStateMenu::GetInstance();
			break;
		default:
			ActiveState = 0;
			break;
	}
	if (ActiveState) ActiveState->OnActivate();
}

jState* jStateHandler::GetActiveState() {
	return ActiveState;
}
