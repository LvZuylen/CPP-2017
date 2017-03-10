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
