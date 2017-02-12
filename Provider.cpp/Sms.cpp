#include "stdafx.h"
#include "Sms.h"
#include "Provider.h"
#include "Mobiel.h"

Sms::Sms(int van, int naar, std::string tekst) {
	this->van = van;
	this->naar = naar;
	this->tekst = tekst;
}

int Sms::getNaar() {
	return naar;
}

std::string Sms::smsInfo() {
	return ("Bericht: \"" + tekst + "\" van: \"" + std::to_string(van) + "\" naar: \"" + std::to_string(naar) + "\"");
}
