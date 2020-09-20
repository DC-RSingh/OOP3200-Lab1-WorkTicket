/** WorkTicket.h
 *
 *	@authors	Raje Singh & Angus Wai
 *	@studentIDs 100776793 & 100719558
 *	@date		September 19, 2020
*/

#ifndef WORK_TICKET_H
#define WORK_TICKET_H

#include <iostream>

using namespace std;

class WorkTicket
{
public:

	/** WorkTicket constructor:
	 * Initializes the objects of the WorkTicket class. Acts as a default constructor when no params are passed.
	 * Initializes all attributes of a WorkTicket object when params are passed.
	 *
	 * @param ticketNumber	the ticket number of the work ticket; defaults to 1; must be a whole, positive number.
	 * @param id	the id of the client issuing the work ticket; defaults to a space.
	 * @param day	the day the ticket was issued; defaults to 1.
	 * @param month	the month the ticket was issued; defaults to 1.
	 * @param year	the year the ticket was issued; defaults to 2000.
	 * @param desc	the description of the issue the client is having; defaults to a space.
	 */
	WorkTicket(int ticketNumber = 1, string id = " ", int day = 1, int month = 1, int year = 2000, string desc = " ");

	// Mutators
	
	/** SetTicketNumber method:
	 * Sets the value of the workTicketNumber attribute.
	 * 
	 * @param ticketNumber	the ticket number of the work ticket; must be a whole, positive number.
	 */
	void SetTicketNumber(int ticketNumber);

	/** SetClientId method:
	 * Sets the value of the clientId attribute.
	 *
	 * @param id the id of the client issuing the work ticket.
	 */
	void SetClientId(string id);

	/** SetDate method:
	 *  Sets the workTicketDay, workTicketMonth and workTicketYear attributes.
	 *
	 *  @param day the day the ticket was issued.
	 *  @param month the month the ticket was issued.
	 *  @param year the year the ticket was issued.
	 */
	void SetDate(int day, int month, int year);

	/** SetDesc method:
	 *  Sets the issueDescription attribute.
	 *
	 *  @param desc the description of the issue the client is having.
	 */
	void SetDesc(string desc);

	/** SetWorkTicket method:
	 * Sets all attributes of the object.
	 * 
	 * @param ticketNumber	the ticket number of the work ticket.
	 * @param id	the id of the client issuing the work ticket.
	 * @param day	the day the ticket was issued.
	 * @param month	the month the ticket was issued.
	 * @param year	the year the ticket was issued.
	 * @param desc	the description of the issue the client is having.
	 *
	 * @return a boolean representing whether the ticket is valid or not.
	 */
	bool SetWorkTicket(int ticketNumber, string id, int day, int month, int year, string desc);

	// Accessors

	/** GetTicketNumber method
	 *
	 * @return the value stored in the workTicketNumber attribute.
	 */
	int GetTicketNumber() const;

	/** GetClientId method
	 *
	 * @return the value stored in the clientId attribute.
	 */
	string GetClientId() const;

	/** GetDay method
	 *
	 * @return the value stored in the workTicketDay attribute
	 */
	int GetDay() const;

	/** GetMonth method
	 *
	 * @return the value stored in the workTicketMonth attribute
	 */
	int GetMonth() const;

	/** GetYear method
	 *
	 * @return the value stored in the workTicketYear attribute
	 */
	int GetYear() const;

	/** GetDesc method
	 *
	 * @return the value stored in the issueDescription attribute.
	 */
	string GetDesc() const;

	/** ShowWorkTicket method
	 *
	 * @return a string containing the details of the work ticket.
	 */
	string ShowWorkTicket() const;
	
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