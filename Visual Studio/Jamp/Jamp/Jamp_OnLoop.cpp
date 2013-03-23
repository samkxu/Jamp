#include "Jamp.h"

void Jamp::OnLoop() {
	jStateHandler::OnLoop();
	jFPS::FPSControl.OnLoop();
}
