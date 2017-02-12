#include "stdafx.h"
#include "Mobiel.h"
#include <iostream>
#include <string>
#include "Sms.h"
#include "Provider.h"

Mobiel::Mobiel(Provider * provider, int tellnr) {
	this->provider = provider;
	telnr = tellnr;
}

void Mobiel::ontvang(const Sms & sms) {
	bericht.tekst = sms.tekst;
}

void Mobiel::verzend(std::string tekst, int naar) {
	bericht.naar = naar;
	bericht.tekst = tekst;
}

std::string Mobiel::mobielInfo() const {
	return "telnr: \"" + std::to_string(telnr) + "\" bericht van " + std::to_string(bericht.van) + " naar " + std::to_string(bericht.naar) + "\n";
}
