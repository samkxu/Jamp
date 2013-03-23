#include "jFPS.h"

jFPS jFPS::FPSControl;

jFPS::jFPS() {
	OldTime = sf::milliseconds(0);
	LastTime = sf::milliseconds(0);
	SpeedFactor = 0;
	Frames = 0;
	NumFrames = 0;
	Clock.restart();
}

void jFPS::OnLoop() {
	if(OldTime + sf::milliseconds(1000) < Clock.getElapsedTime()) {
		OldTime = Clock.getElapsedTime();
		NumFrames = Frames;
		Frames = 0;
	}
	SpeedFactor = (Clock.getElapsedTime - LastTime) / sf::milliseconds(1000.0f).asMilliseconds() * 32.0f;
	LastTime = Clock.getElapsedTime();
	Frames++;
}

int jFPS::GetFPS() {
	return NumFrames;
}

float jFPS::GetSpeedFactor() {
	return SpeedFactor;
}