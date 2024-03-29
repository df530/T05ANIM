/***************************************************************
* Copyright (C) 2018
*    Computer Graphics Support Group of 30 Phys-Math Lyceum
***************************************************************/

/* FILE NAME    : MAIN.CPP
 * PURPOSE      : Animation project
 *                Startup module.
 * PROGRAMMER   : CGSG'2018.
 *                Filippov Denis.
 * LAST UPDATE  : 21.08.2018.
 * NOTE         : None.
 *
 * No part of this file may be changed without agreement of
 * Computer Graphics Support Group of 30 Phys-Math Lyceum.
 */

#include "u_test.h"
#include "u_contrl.h"

/* The main program function.
* ARGUMENTS:
*   - handle of application instance:
*       HINSTANCE hInstance;
*   - dummy handle of previous application instance (not used):
*       HINSTANCE hPrevInstance;
*   - command line string:
*       CHAR *CmdLine;
*   - show window command parameter (see SW_***):
*       INT CmdShow;
* RETURNS:
*   (INT) Error level for operation system (0 for success).
*/
INT WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
  CHAR *CmdLine, INT ShowCmd )
{
  figl::anim & myanim = figl::anim::GetInstance();

  myanim << new figl::unit_control()  <<  new figl::unit_test();

  myanim.Run();
} /* End of 'WinMain' function */

/* END OF 'MAIN.CPP' FILE*/

