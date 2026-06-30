#include "vex.h"
#include "claw.h"
#include <string>

/*
 *
 * Part 1
 * 
 */

//Implement the constructor here
claw::claw( ) : {

}

//Add other methods below. Remember to use :: syntax!
//Remeber, these methods are only meant for functionality when called. 
//Do not put controller button code in here!

/* Toggles whether the claw is open or closed. Check the attribute
 * clawIsOpen to determine whether the claw is currently open or closed.
 * Then, use a movement command on the clawOpen motor to switch between
 * open or closed. Make sure to update the value of the clawIsOpen 
 * attribute!
 */

void claw::toggleOpenClaw(){

    //basic structure for this method
    if(clawIsOpen) {
        //close the claw
    }
    else {
        //open the claw
    }

}

/* Toggles whether the claw is rightside up or upside down. Use
 * the rotationalPosition attribute, and switch the position of
 * the claw. This method should work similarly to openClaw().
 */

void claw::toggleClawRotation(){

}

//Returns if the claw is open
bool claw::getClawOpen() {

}

//Returns the rotation of the claw
bool claw::getClawRotation() {

}

/*
 *
 * Part 2
 * 
 */

/* If an object is detected, returns the hue of the bottom part of the 
 * pin grabbed by the claw.
 * If no object is detected, return -1 instead.
 */

double claw::getColor(){
    return 0;
}
/* If an object is detected, automatically rotate the claw so that a
 * yellow side will face down.
 * If neither end of the pin is yellow, stop rotating.
 */
void claw::autoOrientation(){

}

/*
 *
 * Part 3
 * 
 */

/* In each call of this method, check the onRedAlliance attribute
 * and switch it to the opposite value. Then, return the new alliance
 * you are on as a string.
 * 
 * If onRedAlliance becomes true after switching, return "red"
 * If onRedAlliance becomes false after switching, return "blue"
 */

std::string claw::colorSelect(){

}


//Return "red" if on red alliance, "blue" if on blue alliance
std::string claw::getAllianceColor(){

}

/* Automatically rotates the pin so that your selected alliance color 
 * is on the top. If there isn't your alliance color, on the pin, try
 * to rotate it so your opponent's color is on the bottom.
 */
void claw::allianceOrient(){

}