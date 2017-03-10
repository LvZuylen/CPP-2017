#include "Flex_venster.h"

Flex_venster::Flex_venster(int h, int b, string t) : Flex_rechthoek(h, b), Venster_met_titel(h, b, t) {
	hoogte = h;
	breedte = b;
	titel = t;
}

void Flex_venster::print()
{
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
