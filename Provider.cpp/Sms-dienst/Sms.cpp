
#include "Sms.h"
#include "Provider.h"
#include "Mobiel.h"

Sms::Sms(int van, int naar, std::string tekst) {
	this->van = van;
	this->naar = naar;
	this->tekst = tekst;
}

Sms::~Sms() {

}

int Sms::getNaar() const {
	return naar;
}

std::string Sms::smsInfo() const {
	return ("Bericht: \"" + tekst + "\" van: \"" + std::to_string(van) + "\" naar: \"" + std::to_string(naar) + "\"");
}

int Sms::getVan() const {
	return this->van;
}

void Sms::setNaar(int naar) {
	this->naar = naar;
}

void Sms::setVan(int van) {
	this->van = van;
}

void Sms::setTekst(const std::string &tekst) {
	this->tekst = tekst;
}

std::string Sms::getTekst() const {
	return tekst;
}

Whatsappbericht::Whatsappbericht(int van1, int naar1, std::string tekst1) : Sms(0,0,"") {
	this->van = van1;
	this->naar = naar1;
	this->tekst = tekst1;
}

std::string Whatsappbericht::smsInfo() const {
	return ("WhatsappBericht: \"" + this->tekst + "\" van: \"" + std::to_string(this->van) + "\" naar: \"" + std::to_string(this->naar) + "\"");
}

Whatsappbericht::~Whatsappbericht() {

}
