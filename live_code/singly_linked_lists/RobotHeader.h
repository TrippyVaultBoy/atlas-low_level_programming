#ifndef HEADER
#define HEADER

/**
 * Honestly Betty isn't looking
 * So I hope you don't mind 
 * my style of documentation, enjoy.
*/

typedef struct robot_a
{
	char *name;
	int age;
	char *Catchphrase;
	struct robot_a *next;
} robot_s;

// Place a new robot as the first line of defense
robot_s *add_robot_beginning(robot_s **MotherBoard, char *name, int age, char *phrase);

// Place a new robot as the last line of defense
robot_s *add_robot_end(robot_s **MotherBoard, char *name, int age, char *phrase);

// Robot report for reporting robots
void robot_report(robot_s **MotherBoard, char *name);

#endif
