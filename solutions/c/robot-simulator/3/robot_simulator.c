#include "robot_simulator.h"
#
robot_status_t robot_create(robot_direction_t direction, int x, int y)
{
  robot_status_t robot;
  robot.direction = direction;
  robot.position.x = x;
  robot.position.y = y;
  return robot;
}

void robot_move(robot_status_t *robot, const char *commands)
{
  //
  // if direction is North:
  //	A (Ahead) is north (y++)
  //	R (Right) is east
  //	L (Left)  is west
  //  d = 0;
  //
  // if direction is East:
  //	A (Ahead) is east (x++)
  //	R (Right) is south
  //	L (Left)  is north
  //  d = 1
  //
  // if direction is South:
  //	A (Ahead) is south (y--)
  //	R (Right) is west
  //	L (Left)  is east
  //  d = 2
  //
  // if direction is West:
  //	A (Ahead) is west (x--)
  //	R (Right) is north
  //	L (Left)  is south
  //  d = 3
  //

    for (int i = 0; i < (int)strlen(commands); i++)
    {
      if (commands[i] == 'R')
      {
        robot->direction = ((robot->direction) + 1) % 4;
      }
      else if (commands[i] == 'L')
      {
        robot->direction = ((robot->direction) - 1) % 4;
      }
      if (commands[i] == 'A')
      {
        if (robot->direction == 0) robot->position.y = robot->position.y + 1;
        else if (robot->direction == 1) robot->position.x = robot->position.x + 1;
        else if (robot->direction == 2) robot->position.y = robot->position.y - 1;
        else (robot->position.x = robot->position.x - 1);
      }
    }

}
