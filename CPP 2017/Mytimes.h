#pragma once
#include <iostream>

class Mytimes {
	
public:
	virtual void setTime(int hours, int mins, int secs);
	virtual int getHours();
	virtual int getMins();
	virtual int getSecs();
	virtual void tick(); //1 second
	virtual void add(int hours, int mins, int secs);
	virtual bool equals(Mytimes & time);
	//lucas houdt van mannen
	virtual void giveTime();
		
private:
	void normalise(); // vb: 61 min 61 sec. ==> 1 h 2 min 1 sec
	int hours, mins, secs;
};


