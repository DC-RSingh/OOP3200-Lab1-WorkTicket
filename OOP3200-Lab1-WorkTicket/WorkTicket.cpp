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
			throw invalid_argument("Invalid number - Ticket number must be greater than zero.\n");
		}
	}
	catch (const invalid_argument& e)
	{
		cerr << "Invalid argument: " << e.what() << endl;
	}
}

// SetClientId method definition
void WorkTicket::SetClientId(string id)
{
	try
	{
		if (!id.empty())
			clientId = id;
		else
		{
			isValid = false;
			// Throw invalid_argument exception
			throw invalid_argument("Invalid Client ID - Client ID must be at least one character long.\n");
		}		
	}
	catch (const invalid_argument& e)
	{
		cerr << "Invalid argument: " << e.what() << endl;
	}
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

// SetDesc method definition
void WorkTicket::SetDesc(string desc)
{
	try
	{
		if (!desc.empty())
			issueDescription = desc;
		else
		{
			isValid = false;
			// Throw invalid_argument exception
			throw invalid_argument("Invalid Description - Description must be at least one character long.\n");
		}		
	}
	catch (const invalid_argument& e)
	{
		cerr << "Invalid argument: " << e.what() << endl;
	}
}

// SetWorkTicket method definition
bool WorkTicket::SetWorkTicket(int ticketNumber, string id, int day, int month, int year, string desc)
{
	isValid = true;
	SetTicketNumber(ticketNumber);
	SetClientId(id);
	SetDate(day, month, year);
	SetDesc(desc);

	return isValid;
}

// GetTicketNumber method definition
int WorkTicket::GetTicketNumber() const
{
	return workTicketNumber;
}

// GetClientId method definition
string WorkTicket::GetClientId() const
{
	return clientId;
}

// GetDay method definition
int WorkTicket::GetDay() const
{
	return workTicketDay;
}

// GetMonth method definition
int WorkTicket::GetMonth() const
{
	return workTicketMonth;
}

// GetYear method definition
int WorkTicket::GetYear() const
{
	return workTicketYear;
}


// GetDesc method definition
string WorkTicket::GetDesc() const
{
	return issueDescription;
}

// ShowWorkTicket method definition
string WorkTicket::ShowWorkTicket() const
{
	stringstream strOut;

	if (isValid)
	{
		strOut << "\n\nWork Ticket Number: " << GetTicketNumber() << "\nClient ID: " << GetClientId() << "\nDate: " << GetDay()
			<< "/" << GetMonth() << "/" << GetYear() << "\nDescription: " << GetDesc() << "\n\n";
	}
	
	return strOut.str();
}
