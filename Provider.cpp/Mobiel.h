#pragma once

#include <string>
#include <map>
#include "Sms.h"

class Provider;
class Sms;

class Mobiel {
public:
	Mobiel(Provider *provider = nullptr, int tellnr = 0, Sms *sms = nullptr);
	~Mobiel();
	virtual void ontvang(const Sms &sms);
	virtual void verzend(const std::string &tekst, int naar);
	virtual std::string mobielInfo() const;
//private:
	std::map<std::string, int> contactLijst;
	int telnr;
	Provider *provider;
	Sms *bericht;

};

