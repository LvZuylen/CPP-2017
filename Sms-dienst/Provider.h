#pragma once
#include<vector>
//jullie mam
class Mobiel;
class Sms;

class Provider {
private:
	Mobiel *lijst;
	std::vector<Mobiel> lijstVector;
	std::vector<int> nummerLijst;
public:
	~Provider();
	virtual void setLijst(Mobiel *lst);
	virtual Mobiel *getMobiel();
	virtual void verwerkBericht(const Sms &sms);
};