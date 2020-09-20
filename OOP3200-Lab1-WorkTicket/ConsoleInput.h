/* ConsoleInput.h
 * 
 * This file was not made by either author of the WorkTicket or main.cpp files. The ConsoleInput class
 * was provided to us by our OOP3200 professor at Durham College.
 */
#ifndef CONSOLE_INPUT_H
#define CONSOLE_INPUT_H

#include <limits> 
#include <cfloat>  // for limits of a double DBL_MIN and DBL_MAX

class ConsoleInput
{
public:
	/**	ReadDouble function
	 * Reads a valid double value from the console with range checking
	 *
	 * @param  MIN the minimum value the user may enter; defaults to the maximum negative double.
	 * @param  MIN the minimum value the user may enter; defaults to the maximum double.
	 * @return A validated double input by the user.
	*/
	static double ReadDouble(const double MIN = -DBL_MAX, const double MAX = DBL_MAX);

	/**	ReadInteger function
	 * Reads a valid int value from the console with range checking
	 *
	 * @param  MIN the minimum value the user may enter; defaults to the minimum int.
	 * @param  MAX the maximum value the user may enter; defaults to the maximum int.
	 * @return A validated int input by the user.
	*/
	static int ReadInteger(const int MIN = INT_MIN, const int MAX = INT_MAX);

};
#endif // end of ifndef CONSOLE_INPUT_H
