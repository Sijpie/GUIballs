#include "Balls.h"

Balls::Balls()
{

}

void Balls::newball(float nxspeed, float nyspeed, ofColor ncolor, float nradius)
{

	color.set(ncolor);
	radius = nradius;

	xpos = ofRandom(0, ofGetWidth());
	ypos = ofRandom(0, ofGetHeight());
	//startpunt

	xspeed = nxspeed; // ofRandom(-2, 2);
	yspeed = nyspeed;  //ofRandom(-2, 2);

					   //beweeg


}






void Balls::updateball()
{

	if (xpos < 0 + radius || xpos > ofGetWidth() - radius)
	{
		xspeed = -xspeed;
	}

	if (ypos < 0 + radius || ypos > ofGetHeight() - radius)
	{
		yspeed = -yspeed;
	}


	//|| or


	xpos = xpos + xspeed;
	ypos = ypos + yspeed;


}


void Balls::drawball()
{
	ofFill();
	ofSetColor(color);
	ofDrawCircle(xpos, ypos, radius);

}