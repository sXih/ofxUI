#ifndef TESTAPP
#define TESTAPP

#include "ofMain.h"
#include "ofxUI.h"

class testApp : public ofBaseApp 
{
	public:
	void setup();
	void update();
	void draw();
	void exit(); 

	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
    void setupGUI1();
    void setupGUI2();
    void setupGUI3();
    void setupGUI4();
    void setupGUI5();
    void setupGUI6();
    
    void saveGUISettings();
    void loadGUISettings(); 
    
    vector<ofxUICanvas *> guis;
	map<string, ofxUICanvas *> guihash; 
    void guiEvent(ofxUIEventArgs &e);
    bool drawFill; 
	float red, green, blue, alpha; 	
        
    ofColor backgroundColor; 
    float radius; 
    int resolution;
    ofPoint position;
    
    float noiseScale; 
    float *buffer;
    vector<float> xPos;
    vector<float> yPos;
    
    ofxUIMovingGraph *xGraph;
    ofxUIMovingGraph *yGraph;
    
    int bufferSize;
    
    ofImage *image; 
};

#endif