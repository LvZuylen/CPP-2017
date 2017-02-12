#pragma once
#include <string>

class Provider;
class Mobiel;

class Sms {
public:
	Sms(int van, int naar, std::string tekst);
	virtual int getNaar();
	virtual std::string smsInfo();
	int van;
	int naar;
	std::string tekst;
};

