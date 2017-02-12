#pragma once

#include <string>
#include "Sms.h"

class Provider;
class Sms;

class Mobiel {
public:
	Mobiel(Provider *provider = nullptr, int tellnr = 0);
	virtual void ontvang(const Sms &sms);
	virtual void verzend(std::string tekst, int naar);
	virtual std::string mobielInfo() const;
	int telnr;
	Provider *provider;
	Sms bericht = bericht;
};

