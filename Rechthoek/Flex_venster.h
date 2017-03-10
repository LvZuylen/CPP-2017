#pragma once

#include "VensterTitel.h"
#include "Flex_rechthoek.h"
#include "Rechthoek.h"

class Flex_rechthoek;
class Venster_met_titel;

class Flex_venster : public Flex_rechthoek, public Venster_met_titel {
public:
	Flex_venster(int h, int b, string t) : Venster_met_titel(h, b, t), Flex_rechthoek(h, b) {
		hoogte = h;
		breedte = b;
		titel = t;
	};
private:
	int hoogte;
	int breedte;
	string titel;
};
