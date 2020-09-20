/** main.cpp
 *
 *	@authors	Raje Singh & Angus Wai
 *	@studentIDs 100776793 & 100719558
 *	@date		September 19, 2020
*/

#include <iostream>
#include <string>
#include "WorkTicket.h"
#include "ConsoleInput.h"

int main()
{
	const int NUM_OF_TICKETS = 3;
	WorkTicket tickets[NUM_OF_TICKETS];
	int number;
	string clientId;
	int day;
	int month;
	int year;
	string desc;

	cout << "Please enter the details for the work ticket.\n";

	for (int i = 0; i < NUM_OF_TICKETS; i ++)
	{
		do
		{
			cout << "\nCurrently inputting details for work ticket: " << i + 1 << endl;
			
			cout << "\nTicket Number: ";
			number = ConsoleInput::ReadInteger();
			
			cout << "Client ID: ";
			getline(cin, clientId);
			
			cout << "Day of the ticket: ";
			day = ConsoleInput::ReadInteger();
			
			cout << "Month of the ticket: ";
			month = ConsoleInput::ReadInteger();
			
			cout << "Year of the ticket: ";
			year = ConsoleInput::ReadInteger();
			
			cout << "Description: ";
			getline(cin, desc);

		} while (!tickets[i].SetWorkTicket(number, clientId, day, month, year, desc));
	}

	for (int i = 0; i < NUM_OF_TICKETS; i++) cout << "\n\n--------------------\n   " << "WORK TICKET #" << i + 1
		<< "\n--------------------" << tickets[i].ShowWorkTicket();

	return 0;
}
