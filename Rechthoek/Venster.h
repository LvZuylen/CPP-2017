#pragma once
//class Rechthoek;
#include "Rechthoek.h"

class Venster : public Rechthoek {
	public: virtual void print();
		Venster(int h = 1, int b = 1);
private:
	int hoogte;
	int breedte;



};
