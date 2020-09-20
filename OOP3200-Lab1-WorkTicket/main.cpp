/** main.cpp
 *
 *	This program includes a WorkTicket class that:
 *		- 
 *
 *	@authors	Raje Singh & Angus Wai
 *	@studentIDs 100776793 & 100719558
 *	@date		September 19, 2020
*/

#include <iostream>
//#include <vector>
#include "WorkTicket.h"

int main()
{
	const int NUM_OF_TICKETS = 3;
	//std::vector<WorkTicket> tickets;
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
			cin >> number;
			cout << "Client ID: ";
			cin >> clientId;
			cout << "Day of the ticket: ";
			cin >> day;
			cout << "Month of the ticket: ";
			cin >> month;
			cout << "Year of the ticket: ";
			cin >> year;
			cout << "Description: ";
			cin >> desc;

			tickets[i].SetWorkTicket(number, clientId, day, month, year, desc);
		} while (!tickets[i].IsValid());
	}

	for (int i = 0; i < NUM_OF_TICKETS; i++) cout << "\n\n--------------------\n       OUTPUT\n--------------------" << tickets[i].ShowWorkTicket();

	/*WorkTicket test(-1, "44lsa", 19, 9, 2020, "This is a test ticket.");
	cout << test.ShowWorkTicket();*/

	return 0;
}
