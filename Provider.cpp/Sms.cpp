#include "stdafx.h"
#include "Sms.h"
#include "Provider.h"
#include "Mobiel.h"
//ayylmao
//wtf

Sms::Sms(int van, int naar, std::string tekst) {
	this->van = van;
	this->naar = naar;
	this->tekst = tekst;
}

int Sms::getNaar() const {
	return naar;
}

std::string Sms::smsInfo() const {
	return ("Bericht: \"" + tekst + "\" van: \"" + std::to_string(van) + "\" naar: \"" + std::to_string(naar) + "\"");
}

int Sms::getVan() const
{
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

std::string Sms::getTekst() const
{
	return tekst;
}

Sms::~Sms() {
}
