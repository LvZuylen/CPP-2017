#pragma once
#include <iostream>
using namespace std;

class Rechthoek
{
public:
	Rechthoek(int h = 1, int b = 1);
	virtual void print();

private:	//  velden altijd private…
	int hoogte;
	int breedte;
};

