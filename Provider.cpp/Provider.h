#pragma once
class Provider {

public:
	Mobiel *lijst;

private:
	void setLijst(Mobiel *lst);
	Mobiel *getMobiel(int nr);
	void verwerkBericht(const Sms &sms);
	


};


