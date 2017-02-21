#include "stdafx.h"
#include "Mobiel.h"
#include <iostream>
#include <string>
#include "Sms.h"
#include "Provider.h"
#include <map>


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

const std::string Mobiel::mobielInfo() {
	return "telnr: \"" + std::to_string(telnr) + "\" bericht: \"" + bericht.tekst + "\" van " + std::to_string(bericht.van) + " naar " + std::to_string(bericht.naar) + "\n";
}

void Mobiel::addContact(std::string naam, int nr) {
	contactLijst.insert(std::pair<std::string, int>(naam, nr));
}

void Mobiel::showContacts(){
	// showing contents:
	std::cout << "contacts:\n";
	for (it = contactLijst.begin(); it != contactLijst.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';
}

void Mobiel::removeContact(std::string naam) {
	showContacts();
	it = contactLijst.find(naam);
	if (it != contactLijst.end()) {
		contactLijst.erase(it);
		showContacts();
	}
	else {
		std::cout << naam << " was not found." << '\n';
	}
}


void Mobiel::editContact(std::string naam, int nr, std::string newNaam, int newNr) {
	showContacts();
	it =contactLijst.find(naam);
	if (it != contactLijst.end()) {
	contactLijst.erase(it);
	contactLijst.insert(std::pair<std::string, int>(naam, nr));
	showContacts();
	} else {
		std::cout << naam << " was not found." << '\n';
	}
		
}
