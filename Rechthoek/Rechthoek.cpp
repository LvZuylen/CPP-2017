#include "Rechthoek.h"

Rechthoek::Rechthoek(int h, int b) {
	hoogte = h;
	breedte = b;
}

void Rechthoek::print() {
	for (int r = 0; r<hoogte; r++) {
		for (int k = 0; k<breedte; k++) cout <<"*";
		cout << endl;
	}
}
