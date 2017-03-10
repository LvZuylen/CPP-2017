#include "VensterTitel.h"
#include "Rechthoek.h"
#include <string>

Venster_met_titel::Venster_met_titel(int h, int b, string t) {
	if (h >= 2 && b >= 2 && t.length() >= 1) {
		hoogte = h;
		breedte = b;
		titel = t;
	}
	else {
		hoogte = 4;
		breedte = 8;
		titel = "window";
	}
}

void Venster_met_titel::print() {
	//print 1x rij als breedte
	//print hoogte x *, breedte-1 x " " + *+endl;
	//print 1x rij als breedte
	int a;
	for (int i = 1; i <= hoogte; i++) {
		if (i <= 1) {
			if (titel.length() < breedte - 2) {
				if ((breedte % 2) >= 1 ^ (titel.length() % 2) >= 1) { //als titel lengte of breedte oneven is, creëer een bias zodat het aantal sterretjes even blijft
					a = 1;
				}
				else { a = 0; }
				for (int j = 0; j < (breedte - titel.length()) / 2; j++) {
					cout << "*";
				}
				std::cout << titel;
				for (int m = 0; m < (breedte - titel.length()) / 2 + a; m++) {
					cout << "*";
				}
			}
			else {
				cout << "*";
				cout << (titel.substr(0, breedte - 2));
				cout << "*";
			}

		}
		else if (i < hoogte) {
			cout << endl;
			for (int k = 1; k <= breedte; k++) {
				if (k == 1 || k == breedte) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		else {
			cout << endl;
			for (int l = 1; l <= breedte; l++) {
				cout << "*";
			}
		}
	}
}