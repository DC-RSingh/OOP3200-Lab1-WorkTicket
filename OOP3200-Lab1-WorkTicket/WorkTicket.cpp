#include <sstream>
#include "WorkTicket.h"

// Parameterized constructor
WorkTicket::WorkTicket(int ticketNumber, string id, int day, int month, int year, string desc)
{
	SetWorkTicket(ticketNumber, id, day, month, year, desc);
}

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

void WorkTicket::SetClientId(string id)
{
	clientId = id;
}

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
						if (year > 2000 && year < 2100)
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

void WorkTicket::SetDesc(string desc)
{
	issueDescription = desc;
}

void WorkTicket::SetWorkTicket(int ticketNumber, string id, int day, int month, int year, string desc)
{
	SetTicketNumber(ticketNumber);
	SetClientId(id);
	SetDate(day, month, year);
	SetDesc(desc);
}

int WorkTicket::GetTicketNumber()
{
	return workTicketNumber;
}

string WorkTicket::GetClientId()
{
	return clientId;
}

int WorkTicket::GetDate() // NOT DONE!!!!!!!!
{
	return 0;
}

string WorkTicket::GetDesc()
{
	return issueDescription;
}

string WorkTicket::ShowWorkTicket()
{
	stringstream strOut;

	if (isValid)
	{
		strOut << "Work Ticket Number: " << workTicketNumber << "\nClient ID: " << clientId << "\nDate: " << workTicketDay
			<< "/" << workTicketMonth << "/" << workTicketYear << "\nDescription: " << issueDescription;
	}
	else
	{
		strOut << "Something went wrong";
	}
	
	return strOut.str();
}

bool WorkTicket::IsValid()
{
	return isValid;
}