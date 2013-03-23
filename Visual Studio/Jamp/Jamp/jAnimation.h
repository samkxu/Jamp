#ifndef _JANIMATION_H_
#define _JANIMATION_H_

class jAnimation {
protected:
	int FrameInc;
	
public:
	int FrameRate; //Milliseconds?

	long OldTime;

	int CurrentFrame;

	int MaxFrames;

	bool Oscillate;

	jAnimation();

	void OnAnimate();

	void SetFrameRate(int Rate);

	void SetCurrentFrame(int Frame);

	int GetCurrentFrame();

};

#endif