
#include "Mobiel.h"
#include <iostream>
#include <string>
#include "Sms.h"
#include "Provider.h"
#include <map>
//kek lmao


Mobiel::Mobiel(Provider * provider, int tellnr)
	: bericht(0,0,"") {
	this->provider = provider;
	telnr = tellnr;
}

Mobiel::~Mobiel() {

}

void Mobiel::ontvang(const Sms &sms) {
	bericht = sms;
	addBericht(bericht);
}

void Mobiel::verzendNr(const std::string &tekst, int naar) {
	bericht.setVan(telnr);
	bericht.setNaar(naar);
	bericht.setTekst(tekst); 
}

void Mobiel::verzendNaam(const std::string & tekst, std::string contactNaam) {
	bericht.setVan(telnr);
	if (findContact(contactNaam) != -1)
		bericht.setNaar(findContact(contactNaam));
	else exit(404);
	bericht.setTekst(tekst);
}



const std::string Mobiel::mobielInfo() {
	std::cout << "Messages: " << "\n";

	for (int i = 0; i < berichten.size(); i++) {
		std::cout << "telnr: \"" + std::to_string(telnr) + "\" bericht: \"" + berichten.at(i).getTekst() + "\" van " + std::to_string(berichten.at(i).getVan()) + " naar " + std::to_string(berichten.at(i).getNaar()) + "\n";
	}

	return "End of message list.";
}

void Mobiel::addContact(std::string naam, int nr) {
	it = contactLijst.find(naam);
	if (it != contactLijst.end()) {
		std::cout << "contact already exists!";
	}else contactLijst.insert(std::pair<std::string, int>(naam, nr));
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

int Mobiel::findContact(std::string naam) {
	it = contactLijst.find(naam);
	if(it != contactLijst.end())
		return it->second;
	else return -1;
}

void Mobiel::addBericht(Sms Bericht) {
	berichten.push_back(Bericht);
}

void Mobiel::setTelnr(int telnr) {
	this->telnr = telnr;
}

int Mobiel::getTelnr() {
	return this->telnr;
}

void Mobiel::setBericht(const Sms & sms) {
	bericht = sms;
}

Sms Mobiel::getBericht()
{
	return bericht;
}
