/** ConsoleInput.h
 * 
 *  This file was created by a professor at Durham College and modified here.
 *
 */

#ifndef CONSOLE_INPUT_H
#define CONSOLE_INPUT_H

#include <limits>
#include <cfloat>
#include <iostream>

class ConsoleInput
{
public:
	/**	ReadDouble function
	 * Reads a valid double value from the console
	 *
	 * @return A validated double input by the user.
	*/
	static double ReadDouble();

	/**	ReadInteger function
	 * Reads a valid int value from the console
	 *
	 * @return A validated int input by the user.
	*/
	static int ReadInteger();

	/*static std::string ReadString();*/
	
};

#endif
