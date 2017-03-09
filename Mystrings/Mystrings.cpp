#include "stdafx.h"
#include "Mystrings.h"

int main(int argc, char* argv[]) {
	char voertuigen[][80] = {
		"1990 motor         BMW" ,
		"2000 auto          Audi",
		"1984 vrachtwagen   Volvo" };
	Voertuig voertuig("Suzuki", "boot", 2000);
	Voertuig vt;
	voertuig.geefWeer();
	vt.leesData(voertuigen[0]);
	vt.geefWeer();
	vt.leesData(voertuigen[1]);
	vt.geefWeer();
	vt.leesData(voertuigen[2]);
	vt.geefWeer();

	//string jemoder = "blazeit";
	//int snoopdogg = 420; 

	//cout << (jemoder + snoopdogg);

	////nee, in cpp kun je Strings en integers niet zomaar optellen.
	cin.get();
	return 0;
}

Voertuig::Voertuig() {/*merk="leeg"; soort="leeg"; jaar=0;*/

};

Voertuig::Voertuig(string merk, string soort, int jaar) {
	this->merk = merk;
	this->soort = soort;
	this->jaar = jaar;
}

//"1990 motor bmw" ,"2000 auto Opel", "1984 vrachtwagen Daf"
void Voertuig::leesData(char data[]) {
	jaartal.clear();
	soort.clear();
	merk.clear();
	// jaartal toevoegen
	jaartal.append(data, 0, 4);
	soort.append(data, 5, 11); //methode append van string gebruiken
							   //
							   // merk toevoegen
	merk.append(data, 17, 19);
	naarJaar(); //volgende opdracht


}

void Voertuig::naarJaar() {
	char hetJaar[5];
	strncpy(hetJaar, jaartal.c_str(), 4);
	jaar = zetJaarOm(hetJaar);
}

void Voertuig::geefWeer() { //zet data op het scherm
	cout << soort << " merk: " << merk << " gekocht: " << jaar << endl;
}

int zetJaarOm(char jaar[6]) {
	int aantalJaar = 0;
	for (int i = 0; i<4; i++) {
		aantalJaar *= 10;
		aantalJaar += jaar[i] - 48;
	}
	if (aantalJaar > 1900 && aantalJaar < 2100) return aantalJaar;
	return 0;
}