#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RobotHeader.h"

void robot_report(robot_s **MotherBoard, char *name)
{
    // Let's use a TempBot to let MotherBoard stay in place
    robot_s *TempBot;
    TempBot = *MotherBoard;

    // And an integer we can use as reference later
    int counter = 1;

    // While TempBot is not at the end of the line
    // We'll loop through to find the robot we're looking for
    // Start of While Loop
    while (TempBot != NULL)
    {

        // if we find our robot, let's say where they are in line
        // and print their catchphrase
        // using strcmp
        // If Statement
        if (strcmp((TempBot)->name, name) == 0)
        {
            printf("%s is %d robots t=from the front of the line\n", name, counter);
            printf("%s\n", TempBot->Catchphrase);

            // We found our bot, so let's return
            return;
        }
        //End If

        //Don't forget to iterate!
        //We need to iterate tempbot while we're here
        //I wasn't and I seg faulted because of it :(
        TempBot = TempBot->next;
        counter++;
    }

    //end of while loop
    // Finally let's have an error statement
    // In case something goes wrong
    printf("Unexpected error occured\n");
}
