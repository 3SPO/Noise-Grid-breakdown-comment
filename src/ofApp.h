//This code is originally written by andreas muller and has been seperated and modified for better understanding by Alex Esposito

#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#include "Utils/ofEasyCamExt.h"

class ofApp : public ofBaseApp
{
    public:
    void setup() ;
    void update() ;
    void draw() ;
    void keyPressed(int key) ;
    
    ofEasyCamExt		camera;
    
    ofMesh				mesh;
    
    ofxPanel			gui;
    
    ofParameter<float>	frequency;
    ofParameter<float>	timeFrequency;
    
    ofParameter<float>	magnitude;
    
    ofParameter<float>	gridSize;
    ofParameter<int>	gridResolution;
    
    bool				drawGui;
    
    ofTrueTypeFont		fontSmall;
    
    
    
};

