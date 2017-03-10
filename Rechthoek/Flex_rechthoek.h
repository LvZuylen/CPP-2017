#pragma once

#include "Rechthoek.h"
#include <string>

class Rechthoek;
class Flex_rechthoek : public Rechthoek
{
public:
	Flex_rechthoek(int h, int b);
	virtual void breder();
	virtual void hoger();
	virtual void print();	//  opletten !!!
private:
	int hoogte;
	int breedte;
};
