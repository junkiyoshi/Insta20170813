#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofEnableDepthTest();

	ofNoFill();
	ofSetLineWidth(3);

	ofSetRectMode(ofRectMode::OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	ofRotateX(270);

	float radius = ofGetWidth() / 2;

	for (int i = -ofGetHeight() / 2; i < ofGetHeight() / 2; i += 10) {
		float radius = 250;
		float noise_value = ofNoise(ofGetFrameNum() * 0.05 + i * 0.005);
		ofSetColor(255);


		ofPushMatrix();
		ofTranslate(ofVec2f(0, i));
		ofRotateX(90);		
		ofRotateZ(ofMap(noise_value, 0, 1, 0, 240));

		ofColor c;
		c.setHsb(ofMap(noise_value, 0, 1, 0, 300), 255, 255);
		ofSetColor(c); 

		float x1 = radius * cos(0 * DEG_TO_RAD);
		float x2 = radius * cos(120 * DEG_TO_RAD);
		float x3 = radius * cos(240 * DEG_TO_RAD);

		float y1 = radius * sin(0 * DEG_TO_RAD);
		float y2 = radius * sin(120 * DEG_TO_RAD);
		float y3 = radius * sin(240 * DEG_TO_RAD);

		ofTriangle(x1, y1, x2, y2, x3, y3);

		ofPopMatrix();
	}

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
