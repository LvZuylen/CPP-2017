// Provider.cpp.cpp : Defines the entry point for the console application.
//Lucas en Justin
#include "Provider.h"
#include "Mobiel.h"
#include "Sms.h"

Provider::~Provider() {

}

void Provider::setLijst(Mobiel *lst) {
	lijstVector.push_back(*lst);
	for (int i = 0; i < nummerLijst.size(); i) {
		if (nummerLijst.at(i) != lst->getTelnr()) {
			i++;
		}
		else {
			nummerLijst.push_back(lst->getTelnr());
			break;
		}
	}
	lijst = lst;
}

Mobiel* Provider::getMobiel(int nr) {
	int pa = 0;
	for (int i = 0; i < sizeof(lijst); i++) {
		if (lijst[i].getTelnr() == nr) {
			pa = i;
		}
	}
	return &lijst[pa];
}

void Provider::verwerkBericht(const Sms &sms) {
	for (unsigned int x = 0; x < lijstVector.size(); x++) {
		if (lijstVector.at(x).getTelnr() == sms.getVan()) {
			lijstVector.at(x).verzendNr(sms.getTekst(), sms.getNaar());
		}
	}
	for (unsigned int y = 0; y < lijstVector.size(); y++) {
		if (lijstVector.at(y).getTelnr() == sms.getNaar()) {
			lijstVector.at(y).ontvang(sms);
		}
	}
	//lijst->verzendNr(sms.tekst, sms.naar);
	//lijst->ontvang(sms);
}
