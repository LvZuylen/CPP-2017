// Provider.cpp.cpp : Defines the entry point for the console application.
//Lucas en Justin

#include "stdafx.h"
#include "Provider.h"
#include "Mobiel.h"
#include "Sms.h"


Provider::~Provider() {

}

void Provider::setLijst(Mobiel lst) {
	lijst.push_back(&lst);
}

Mobiel* Provider::getMobiel(int nr) {
	int pa = 0;
	for (int i = 0; i < sizeof(lijst); i++) {
		if (lijst.at(i)->telnr == nr) {
			pa = i;
		}
	}
	return lijst.at(pa);
}

void Provider::verwerkBericht(const Sms &sms) {
	lijst.back()->verzend(sms.tekst, sms.naar);
	lijst.back()->ontvang(sms);
}
