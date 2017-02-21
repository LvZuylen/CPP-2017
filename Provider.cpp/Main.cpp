

#include "stdafx.h"
#include "Mobiel.h"
#include "Provider.h"
#include "Sms.h"
#include <iostream>

int main(int argc, char *argv[]) {
	Provider Ziggo;
	Mobiel op3t(&Ziggo, 3);
	Mobiel sgs7(&Ziggo, 7);
	Mobiel N3310(&Ziggo, 1);
	Mobiel LGC(&Ziggo, 2);
	Sms bericht1(3,7, "jr");
	
	Ziggo.setLijst(&op3t);
	Ziggo.setLijst(&sgs7);
	op3t.addContact("LGC", 2);
	op3t.addContact("N3310", 1);
	op3t.showContacts();
	op3t.removeContact("LGC");
	//op3t.verzend("hoi", sgs7.telnr);	
	//sgs7.ontvang(op3t.bericht);

	//N3310.verzend("je moder", LGC.telnr);
	//LGC.ontvang(N3310.bericht);
	Ziggo.verwerkBericht(bericht1);

	std::cout << bericht1.smsInfo() << std::endl;
//	std::cout << op3t.mobielInfo() << std::endl;
//	std::cout << sgs7.mobielInfo() << std::endl;
	std::cout << "end of program";
	std::cin.get();
	return 0;
}