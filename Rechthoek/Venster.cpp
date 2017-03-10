#include "Venster.h"
#include "Rechthoek.h"

Venster::Venster(int h, int b) {
	this->hoogte = h;
	this->breedte = b;
}

void Venster::print() {
	//print 1x rij als breedte
	//print hoogte x *, breedte-1 x " " + *+endl;
	//print 1x rij als breedte
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
/*
void Venster::print() {
	for (int k = 0; k<breedte; k++) cout << "*";
	for (int r = 1; r < hoogte - 1; r++) {
		cout << "*";
		cout << endl;
		for (int k = 0; k < breedte - 1; k++) cout << " ";
		cout << endl;
	}
	for (int k = 0; k < breedte; k++) cout << "*";
		cout << endl;
	}
}
*/