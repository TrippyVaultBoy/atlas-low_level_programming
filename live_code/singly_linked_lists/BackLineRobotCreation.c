#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RobotHeader.h"

/**
 * I just want to look at this code
 * Because it's good code
 * It's a shame I'm going to have to redo it
*/

robot_s *add_robot_end(robot_s **MotherBoard, char *name, int age, char *phrase)
{
    // Let's go ahead and check if MotherBoard exists
    if (MotherBoard == NULL)
    {
        return NULL;
    }

    // as before, we'll create a new robot and set it to NULL
    // but this time we'll also create a temporary robot
    // to help us keep track of where we're at in our army
    robot_s *new_robot = NULL;
    robot_s *temp_bot;

    // just like before, let's find some space for our robot
    new_robot = malloc(sizeof(robot_s));

    //Let's check to make sure we have space in our army
    //For our new robot
    if (new_robot == NULL)
    {
        return NULL;
    }

    // Let's get space for those robot attributes!
    new_robot->name = malloc(strlen(name) + 1);
    new_robot->Catchphrase = malloc(strlen(phrase) + 1);

    // Same as before, check if we have space and free if not
    if (new_robot->name == NULL || new_robot->Catchphrase == NULL)
    {
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

    // ***VERY IMPORTANT!!!***
    // Since this will be the last robot in our army,
    // We need to make sure it points to NULL,
    // Signifying we will have reached the end
    // When we go to add a new robot at the end again
    new_robot->next = NULL;

    // Even though we know we have more robots,
    // Let's check to see if the list is empty anyway
    if (*MotherBoard == NULL)
    {
        // If we have an empty list
        // We can go ahead and assign the robot to the top
        *MotherBoard = new_robot;
    }

    // Else, we need to traverse to the end of the line
    // We'll use temp_robot to help us with that
    else
    {
        // we'll assign temp_robot 
        // to the same robot MotherBoard is pointing to
        temp_bot = *MotherBoard;

        // Let's loop through the robots until
        // we find the one pointing to NULL
        // signifying the end of the line
        // loop start
        while ((temp_bot)->next != NULL)
        {
            // As temp_robot has the data for the next in line
            // We'll go ahead and just use that.
            temp_bot = temp_bot->next;
        }

        // Nice! We found the end of the line!
        // Since we've got a pointer to the last robot,
        // Let's assign its value to our new robot!
        temp_bot->next = new_robot;
    }

    // For posterities sake, 
    // let's go ahead and return our new robot
    return (new_robot);
 }
