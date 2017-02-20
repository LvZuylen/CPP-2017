// Provider.cpp.cpp : Defines the entry point for the console application.
//Lucas en Justin

#include "stdafx.h"
#include "Provider.h"
#include "Mobiel.h"
#include "Sms.h"

Provider::~Provider() {

}

void Provider::setLijst(Mobiel *lst) {
	lijstVector.push_back(*lst);
	lijst = lst;
}

Mobiel* Provider::getMobiel(int nr) {
	int pa = 0;
	for (int i = 0; i < sizeof(lijst); i++) {
		if (lijst[i].telnr == nr) {
			pa = i;
		}
	}
	return &lijst[pa];
}

void Provider::verwerkBericht(const Sms &sms) {
	for (unsigned int x = 0; x < lijstVector.size(); x++) {
		if (lijstVector.at(x).telnr == sms.van) {
			lijstVector.at(x).verzend(sms.tekst, sms.naar);
		}
	}
	for (unsigned int y = 0; y < lijstVector.size(); y++) {
		if (lijstVector.at(y).telnr == sms.naar) {
			lijstVector.at(y).ontvang(sms);
		}
	}
	//lijst->verzend(sms.tekst, sms.naar);
	//lijst->ontvang(sms);
}
