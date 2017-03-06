#pragma once
#include <string>

class Provider;
class Mobiel;

class Sms {
public:
	Sms(int van, int naar, std::string tekst);
	virtual int getNaar() const;
	virtual std::string smsInfo() const;
	virtual int getVan() const;
	virtual void setNaar(int naar);
	virtual void setVan(int van);
	virtual void setTekst(const std::string &tekst);
	virtual std::string getTekst() const;
	virtual ~Sms();
private:
	int van;
	int naar;
	std::string tekst;
};

