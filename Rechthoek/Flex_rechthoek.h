#pragma once

#include "Rechthoek.h"
#include "Venster.h"
#include <string>

class Venster;
class Flex_rechthoek : public virtual Venster
{
public:
	Flex_rechthoek(int h, int b);
	virtual void breder();
	virtual void hoger();
private:
	int hoogte;
	int breedte;
};
