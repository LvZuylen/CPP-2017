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
protected:
	int van;
	int naar;
	std::string tekst;
};

class Whatsappbericht : public Sms {
public:
	Whatsappbericht(int van1, int naar1, std::string tekst1);
	virtual std::string smsInfo() const;
	virtual ~Whatsappbericht();
};