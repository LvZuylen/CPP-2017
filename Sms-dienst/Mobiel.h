#pragma once

#include <string>
#include <map>
#include <vector>
//jullie mam
class Provider;
//class Sms;
#include "Sms.h"

class Mobiel {
public:
	Mobiel(Provider *provider = nullptr, int tellnr = 0);
	virtual ~Mobiel();
	virtual void ontvang(const Sms &sms);
	virtual void verzendNr(const std::string &tekst, const int &naar);
	virtual void verzendNaam(const std::string &tekst, const std::string &contactNaam);
	virtual const std::string mobielInfo();
	virtual void addContact(std::string naam, int nr);
	virtual void showContacts();
	virtual void removeContact(std::string naam);
	virtual void editContact(std::string naam, int nr, std::string newNaam, int newNr);
	virtual int findContact(std::string naam);
	virtual void addBericht(Sms Bericht);
	virtual void setTelnr(int telnr);
	virtual int getTelnr();
	virtual void setBericht(const Sms &sms);
	virtual Sms getBericht();
protected:
	std::vector<Sms> berichten;
	std::map<std::string, int> contactLijst;
	int telnr;
	Provider *provider;
	Sms bericht;
	std::map<std::string, int>::iterator it = contactLijst.begin();
};

class LGCookie : public Mobiel {
public:
	LGCookie(Provider *provider = nullptr, int tellnr = 0);
	virtual ~LGCookie();
	virtual const std::string mobielInfo();
private:
	std::string OS;
	size_t diagonalSize;
};

class Nokia3310 : public Mobiel {
public:
	Nokia3310(Provider *provider = nullptr, int tellnr = 0);
	virtual ~Nokia3310();
	virtual const std::string mobielInfo();
private:
	std::string OS;
	size_t diagonalSize;
};