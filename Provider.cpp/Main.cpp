

#include "stdafx.h"
#include "Mobiel.h"
#include "Provider.h"
#include "Sms.h"
#include <iostream>

int main()
{
	Provider Ziggo;
	Mobiel op3t(&Ziggo, 3);
	Mobiel sgs7(&Ziggo, 7);
	Sms bericht1 = bericht1;
	std::cout << bericht1.smsInfo() << std::endl;
	Ziggo.setLijst(&op3t);
	Ziggo.setLijst(&sgs7);

	op3t.verzend("hoi", sgs7.telnr);	
	sgs7.ontvang(bericht1);

	Ziggo.verwerkBericht(bericht1);

	std::cout << bericht1.smsInfo() << std::endl;
	std::cout << op3t.mobielInfo() << std::endl;
	std::cout << sgs7.mobielInfo() << std::endl;
	std::cout << "end of program";
	std::cin.get();
}