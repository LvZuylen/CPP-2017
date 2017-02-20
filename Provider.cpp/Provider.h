#pragma once

class Mobiel;
class Sms;

class Provider {
private:
	//Mobiel *lijst;
	std::vector<Mobiel> lijst;
public:
	~Provider();
	virtual void setLijst(Mobiel lst);
	virtual Mobiel *getMobiel(int nr);
	virtual void verwerkBericht(const Sms &sms);
};


