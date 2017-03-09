#include "Mobiel.h"
#include "Provider.h"
#include "Sms.h"
#include <iostream>
//jullie mam

int main(int argc, char *argv[]) {
	Provider UPC;
	Mobiel *lgc = new LGCookie(&UPC, 3);
	Mobiel *n3310 = new Nokia3310(&UPC, 7);
	Whatsappbericht bericht1(3, 7, "hoi");

	UPC.setLijst(lgc);
	UPC.setLijst(n3310);

	n3310->verzendNr("hoi", lgc->getTelnr());
	lgc->ontvang(n3310->getBericht());

	std::cout << n3310->mobielInfo() << std::endl;
	std::cout << lgc->mobielInfo() << std::endl;
	std::cin.get();
}