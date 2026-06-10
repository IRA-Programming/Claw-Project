#include "vex.h"
#include "claw.h"


//Implement the constructor here
claw::claw( ) : {

}

//Add other methods below. Remember to use :: syntax!
//Remeber, these methods are only meant for functionality when called. Do not put controller button code in here!

//Returns if the claw is open
bool claw::getClawOpen() {

}

//Returns the rotation of the claw
bool claw::getClawRotation() {

}

//Returns the color of the top part of the pin in the claw, including a case for no object detected
double claw::getColor(){

}

//Opens/closes the claw with a toggle
void claw::openClaw(){

}

//Toggles the rotation of the claw between facing up and facing down, with each button press rotating a held pin by 180 degrees
void claw::toggleClawRotation(){

}

//Automatically rotates the claw so that a yellow side is facing down, and if there isn't yellow, do anything
void claw::autoOrientation(){

}

//In each call of this method, cycle through red/blue and display it on the controller screen while there isn't a color selected (Hint: Use API)
void claw::colorSelect(){

}

//Assigns the currently displayed color on the controller screen to an attribute in the claw class, and clear the controller screen
void claw::colorConfirm(){

}

//Automatically rotates the pin so that your selected alliance color is on the bottom, and if there isn't your alliance color, do anything
void claw::allienceOrient(){

}