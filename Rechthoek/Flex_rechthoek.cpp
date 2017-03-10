#include "Flex_rechthoek.h"

Flex_rechthoek::Flex_rechthoek(int h, int b) {
	hoogte = h;
	breedte = b;
}

void Flex_rechthoek::breder() {
	breedte++;
}

void Flex_rechthoek::hoger() {
	hoogte++;
}

void Flex_rechthoek::print() {
	for (int i = 1; i <= hoogte; i++) {
		if (i <= 1) {
			for (int j = 0; j < breedte; j++) {
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
