#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	gui.setup("Instellingen", "settings.xml");

	gui.add(radius.set("Radius", 20, 0, 170));

	gui.add(xspeed.set("X Speed", 5, -10, 10));

	gui.add(yspeed.set("Y Speed", 5, -10, 10));

	gui.add(color.set("Colour", ofColor::white, 0, 255));

	//(start waarde, minimum, maximum)

	//sliders

}

//--------------------------------------------------------------
void ofApp::update() {

	for (int i = 0; i < balllist.size(); i++)
	{
		balllist[i].updateball();
	}

}



//--------------------------------------------------------------
void ofApp::draw() {

	//	if (guivisibility) 
	//	{
	//		gui.draw();
	//	}
	gui.draw();

	for (int i = 0; i < balllist.size(); i++)
	{
		balllist[i].drawball();
	}


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

	//if (key == ' ') {
	//	ofLog() << "Er is op spatie gedrukt" << endl;
	//Stuur deze tekst naar dit opject toe

	//}
	//	else {
	//		ofLog() << "Er is op een toets gedrukt" << endl;

	//	}
	//	if (key == 'g' && guivisibility) {
	//		guivisibility = false;
	//	}
	//	else if (key == 'g' && !guivisibility) {
	//		guivisibility = true;
	//	}


	if (key == ' ') {
		balls.newball(xspeed, yspeed, color, radius);
		balllist.push_back(balls);
	}





}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	if (balllist.size() > 0) {
	balllist.pop_back();
	}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
