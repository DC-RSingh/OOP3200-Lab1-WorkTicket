/** WorkTicket.cpp
 *
 *	@authors	Raje Singh & Angus Wai
 *	@studentIDs 100776793 & 100719558
 *	@date		September 19, 2020
*/
#include <sstream>
#include "WorkTicket.h"

// Parameterized constructor
WorkTicket::WorkTicket(int ticketNumber, string id, int day, int month, int year, string desc)
{
	SetWorkTicket(ticketNumber, id, day, month, year, desc);
}

// SetTicketNumber method definition
void WorkTicket::SetTicketNumber(int ticketNumber)
{
	try
	{
		if (ticketNumber > 0)
		{
			workTicketNumber = ticketNumber;
		}
		else
		{
			isValid = false;
			// Throw an invalid_argument exception
			throw invalid_argument("Invalid number - Ticket number must be greater than zero.\n\n");
		}
	}
	catch (const invalid_argument& e)
	{
		cerr << "Invalid argument: " << e.what() << endl;
	}
}

// The client ID should be at least 1 character long
// SetClientId method definition
void WorkTicket::SetClientId(string id)
{
	clientId = id;
}

// SetDate method definition
void WorkTicket::SetDate(int day, int month, int year)
{
	try
	{
		if (day > 0 && day < 32)
		{
			try
			{
				if (month > 0 && month < 13)
				{
					try
					{
						if (year > 1999 && year < 2100)
						{
							workTicketDay = day;
							workTicketMonth = month;
							workTicketYear = year;
						}
						else
						{
							isValid = false;
							// Throw invalid_argument exception
							throw invalid_argument("Invalid year - Year must be between 2000 and 2099.\n");
						}
					}
					catch (const invalid_argument& e)
					{
						cerr << "Invalid argument: " << e.what() << endl;
					}
					
				}
				else
				{
					isValid = false;
					// Throw invalid_argument exception
					throw invalid_argument("Invalid month - Month must be between 1 and 12.\n");
				}
			}
			catch (const invalid_argument& e)
			{
				cerr << "Invalid argument: " << e.what() << endl;
			}
		}
		else
		{
			isValid = false;
			// Throw invalid_argument exception
			throw invalid_argument("Invalid day - Day must be between 1 and 31.\n");
		}
	}
	catch (const invalid_argument& e)
	{
		cerr << "Invalid argument: " << e.what() << endl;
	}
}

// The description should be at least 1 character long
// SetDesc method definition
void WorkTicket::SetDesc(string desc)
{
	issueDescription = desc;
}

// This should actually return a bool
// SetWorkTicket method definition
void WorkTicket::SetWorkTicket(int ticketNumber, string id, int day, int month, int year, string desc)
{
	isValid = true;
	SetTicketNumber(ticketNumber);
	SetClientId(id);
	SetDate(day, month, year);
	SetDesc(desc);
}

// GetTicketNumber method definition
int WorkTicket::GetTicketNumber()
{
	return workTicketNumber;
}

// GetClientId method definition
string WorkTicket::GetClientId()
{
	return clientId;
}

// GetDate method definition
int WorkTicket::GetDate() // NOT DONE!!!!!!!!
{
	return 0;
}

// GetDesc method definition
string WorkTicket::GetDesc()
{
	return issueDescription;
}

// ShowWorkTicket method definition
string WorkTicket::ShowWorkTicket()
{
	stringstream strOut;

	if (isValid)
	{
		strOut << "\n\nWork Ticket Number: " << workTicketNumber << "\nClient ID: " << clientId << "\nDate: " << workTicketDay
			<< "/" << workTicketMonth << "/" << workTicketYear << "\nDescription: " << issueDescription << "\n\n";
	}
	else
	{
		strOut << "Something went wrong";
	}
	
	return strOut.str();
}

// isValid method definition
bool WorkTicket::IsValid()
{
	return isValid;
}