#pragma once
#include <iostream>
#include <string>
using namespace std;
class Voertuig {
	string jaartal;
	string merk;
	string soort;
	int jaar;
public:
	Voertuig();
	Voertuig(string merk, string soort, int jaar);
	virtual void leesData(char data[]); //lees de voertuigen uit het array
	virtual void geefWeer(); //zet data op het scherm
	virtual void naarJaar(); //gebruik c_string en je eigen functie zetJaarOm()
};
int zetJaarOm(char jaar[6]);