#include "stdafx.h"
#include "Mobiel.h"
#include <iostream>
#include <string>
#include "Sms.h"
#include "Provider.h"

Mobiel::Mobiel(Provider * provider, int tellnr)
	: bericht(0,0,"") {
	this->provider = provider;
	telnr = tellnr;
}

Mobiel::~Mobiel() {

}

void Mobiel::ontvang(const Sms &sms) {
	bericht.van = sms.van;
	bericht.naar = sms.naar;
	bericht.tekst = sms.tekst;
}

void Mobiel::verzend(const std::string &tekst, int naar) {
	bericht.van = telnr;
	bericht.naar = naar;
	bericht.tekst = tekst; 
}

std::string Mobiel::mobielInfo() const {
	return "telnr: \"" + std::to_string(telnr) + "\" bericht: \"" + bericht.tekst + "\" van " + std::to_string(bericht.van) + " naar " + std::to_string(bericht.naar) + "\n";
}

void Mobiel::addContact(std::string naam, int nr) {
	contactLijst.insert(std::pair<std::string, int>(naam, nr));
}
