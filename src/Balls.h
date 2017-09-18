#pragma once
#include "ofMain.h"


class Balls
{
public:
	Balls();

	void newball(float nxspeed, float nyspeed, ofColor ncolor, float nradius);


	void updateball();
	void drawball();


private:
	float xpos;
	float ypos;
	float xspeed;
	float yspeed;

	ofColor color;
	//float color?
	float radius;

};

