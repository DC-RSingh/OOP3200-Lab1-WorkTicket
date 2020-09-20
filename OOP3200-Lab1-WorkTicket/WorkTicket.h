#ifndef WORK_TICKET_H
#define WORK_TICKET_H

#include <iostream>

using namespace std;

class WorkTicket
{
public:
	// Parameterized constructor
	WorkTicket(int ticketNumber = 0, string id = "", int day = 1, int month = 1, int year = 2000, string desc = "");

	// Mutators
	void SetTicketNumber(int ticketNumber);
	void SetClientId(string id);
	void SetDate(int day, int month, int year);
	void SetDesc(string desc);
	void SetWorkTicket(int ticketNumber, string id, int day, int month, int year, string desc);

	// Accessors
	int GetTicketNumber();
	string GetClientId();
	int GetDate();
	string GetDesc();
	string ShowWorkTicket();
	
private:
	int workTicketNumber;
	string clientId;
	int workTicketDay;
	int workTicketMonth;
	int workTicketYear;
	string issueDescription;

	bool isValid = true;
};

#endif