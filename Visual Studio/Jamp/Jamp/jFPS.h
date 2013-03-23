#ifndef _JFPS_H_
#define _JFPS_H_

#include <SFML\System.hpp>

class jFPS {
private:
	sf::Time OldTime;
	sf::Time LastTime;
	float SpeedFactor;
	int NumFrames;
	int Frames;
	sf::Clock Clock;


public:
	static jFPS FPSControl;
	jFPS();

	void OnLoop();
	int GetFPS();
	float GetSpeedFactor();

};
#endif