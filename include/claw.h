#pragma once
#include "vex.h"

class claw {

    private:
        //declare attributes here!
        bool clawIsOpen;
        bool rotationalPosition;
        bool onRedAlliance;

        //There may be more attributes needed than the ones above, add them below

    public:
        claw( ); //fill in with the necessary parameters for a constructor
    
        //Add the vex components used for the claw
        motor clawOpen;
        motor clawRotate;
        optical opticalSensor;

        //Getters for the claw state
        bool getClawOpen();
        bool getClawRotation();
        double getColor();

        //Add movement methods (add parameters as necessary)
        void openClaw( );
        void toggleClawRotation( );
        void autoOrientation( );
        void allienceOrient( );

        //color selector
        void colorSelect( );
        void colorConfirm( );


};