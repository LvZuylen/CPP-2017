#pragma once
#include "Venster.h"

class venster;
class Venster_met_titel : public Venster {
public:
	virtual void print();
	Venster_met_titel(int h, int b, string t);
private:
	int breedte;
	int hoogte;
	string titel;
};




	