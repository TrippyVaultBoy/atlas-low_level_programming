#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RobotHeader.h"

robot_s *add_robot_beginning(robot_s **MotherBoard, char *name, int age, char *phrase)
{
    // Let's first see if we have a MotherBoard in the first place
    // In my understanding, we need to make sure we have that initial pointer
    // Even if MotherBoard herself is pointing to NULL
    // Derek please correct me if I'm wrong
    if (MotherBoard == NULL)
    {
        return NULL;
    }

    // create a new robot and set it to NULL
    robot_s *new_robot = NULL;

    // find space for the new robot
    new_robot = malloc(sizeof(robot_s));

    // check to see if we have the space available
    if (new_robot == NULL)
    {
        return NULL;
    }

    // We have space for the robot
    // But let's make sure we have space for everything else
    // As well as the null terminator
    // Using StrLen

    new_robot->name = malloc(strlen(name) + 1);
    new_robot->Catchphrase = malloc(strlen(phrase) + 1);
    
    //if we don't have space, let's free the robot
    if (new_robot->name == NULL || new_robot->Catchphrase == NULL)
    {
        // Check the name and the catchphrase
        // Then free the name, catchphrase, and finally the robot
        free(new_robot->name);
        free(new_robot->Catchphrase);
        free(new_robot);
        return NULL;
    }


    // Assign all the fields for the new robot
    // Using strcpy or otherwise
    strcpy(new_robot->name, name);
    strcpy(new_robot->Catchphrase, phrase);
    new_robot->age = age;

    // take the node Motherboard was pointing to
    // and have our new robot point to it
    new_robot->next = *MotherBoard;

    // now that we have updated our list,
    // update MotherBoard on the situation
    *MotherBoard = new_robot;

    // return MotherBoard after her update
    return (*MotherBoard);
}
