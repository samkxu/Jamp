#ifndef _JCAMERA_H_
#define _JCAMERA_H_

#include "Define.h"

enum {
	TARGET_MODE_NORMAL = 0,
	TARGET_MODE_CENTER = 1
};

class jCamera {
private:
	int X;
	int Y;
	float* TargetX;
	float* TargetY;


public:
	static jCamera CameraControl;
	int TargetMode;
	jCamera();
	void OnMove(int MoveX, int MoveY);
	int GetX();
	int GetY();
	void SetPos(int X, int Y);
	void SetTarget(float* X, float* Y);
};
#endif