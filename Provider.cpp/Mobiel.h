#pragma once

#include <string>
#include <map>
#include "Sms.h"
#include <vector>

class Provider;
class Sms;

class Mobiel {
public:
	Mobiel(Provider *provider = nullptr, int tellnr = 0);
	~Mobiel();
	virtual void ontvang(const Sms &sms);
	virtual void verzend(const std::string &tekst, int naar);
	virtual const std::string mobielInfo();
	virtual void addContact(std::string naam, int nr);
	virtual void showContacts();
	virtual void removeContact(std::string naam);
	virtual void editContact(std::string naam, int nr, std::string newNaam, int newNr);
	virtual void addBericht(Sms Bericht);
	

//private:
	std::vector<Sms> berichten;
	std::map<std::string, int> contactLijst;
	int telnr;
	Provider *provider;
	Sms bericht;
	std::map<std::string, int>::iterator it = contactLijst.begin();
};

