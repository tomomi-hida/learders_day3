#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  x=100;
  y=100;
  xx=20;
  yy=20;
  mode=0;
}

//--------------------------------------------------------------
void ofApp::update(){
  x =x+xx;
  y=y+yy;
  if(x<100 ||ofGetWidth()-100<x){
    xx*=-1;
    
  }
  if (y<100||ofGetHeight()-100<y) {
    yy*=-1;
    
  }

}

//--------------------------------------------------------------
void ofApp::draw(){
  
  
  if(mode%2==0){
    ofSetBackgroundColor(255, 255, 255);
  }

  if(mode%2==1){
    ofSetBackgroundColor(180, 0, 0);
  }

  for (int i=1;i<=5;i++) {
    ofSetColor(50, 50, 50);
    ofDrawLine(0, 128*i, 1024, 128*i);
    
  }
  
    for(int i=1;i<7;i++){
      ofDrawLine(1024/8*i, 0, 1024/8*i, 768);
    }
  ofPushMatrix();
  ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
  ofRotate(45);
  
  
  //  ofSetColor(120, 0, 120,100);
  //ofNoFill();
  //ofSetLineWidth(5);
    //ofDrawEllipse(128, 300, 200, 700);
  
  //ofSetColor(120, 120, 0);
  //ofFill();
  //ofDrawCircle(x, y, 100);
  
  
  ofSetColor(100, 100, 100,100);
    ofDrawRectangle(-128, -128, 128*2, 128*2);
  
  ofPopMatrix();
  
  ofDrawRectangle(0, 0, 300, 600);
  
  //ofSetColor(0, 120, 120,100);
   // ofDrawTriangle(250, 500, 250, 760, 500, 760);
  
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  if(key=='a'){
    xx*=2;//xx=xx*2;
    yy*=2;//yy=yy*2;
  }
  if(key=='c'){
    xx*=3;//xx=xx*3;
    yy*=3;//yy=yy*3;
  }
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
  mode++;//mode
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
