#pragma once
#include "vex.h"

class claw {

    private:
        //declare attributes here!
        bool clawIsOpen;
        double rotationalPosition;
        bool onRedAlliance;

    public:
        claw( ); //fill in with the necessary parameters for a constructor
    
        //Add the vex components used for the claw
        motor clawOpen;
        motor clawRotate;
        optical opticalSensor;

        //Getters for the claw state
        bool getClawOpen();
        double getClawRotation();
        double getColor();

        //Add movement methods (add parameters as necessary)
        void openClaw( );
        void rotateClaw( );
        void autoOrientation( );
        void resetOrientation( );
        void allienceOrient( );

        //color selector
        void colorSelect( );
        void colorConfirm( );


};