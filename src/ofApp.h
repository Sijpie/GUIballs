#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Balls.h"

class ofApp : public ofBaseApp

{

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	ofxPanel gui;
	// een GUI panel aanmaken
	//object/interface waar objecten op komen
	//bv buttons



	ofParameter<int> radius;
	ofParameter<float> xspeed;
	ofParameter<float> yspeed;
	ofParameter<ofColor> color;

	//sliders
	//of parameter maakt het streepje in de slider - geeft de positie in slider een waarde

	//bool guivisibility;
	//true or false

	vector<Balls> balllist;

	Balls balls;

};
