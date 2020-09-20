/** ConsoleInput.cpp
 *
 *  This file was created by a professor at Durham College and modified here.
 *  
 */

#include <iomanip>
#include "ConsoleInput.h"

// ReadDouble function
double ConsoleInput::ReadDouble()
{
	double number = 0.0;

	std::cin >> number;
	
	// Error checking
	while (!std::cin.good())
	{
			// Reporting to the user that there is a problem
			std::cerr << "ERROR: Invalid input! Please try again and enter a numeric value...\n";
			std::cout << "New Value: ";

			// Clear the stream
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			// Get the input again
			std::cin >> number;
	}

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	return number;
}

// ReadInteger function definition
int ConsoleInput::ReadInteger()
{
	double validNumber = 0.0;
		
	validNumber = ReadDouble();
	
	return static_cast<int>(validNumber);
}

//std::string ConsoleInput::ReadString()
//{
//	
//}

