//Lucas en Justin 5-2-2017

#include "stdafx.h"
#include "Mytimes.h"

class Mytimes;
int main() {
	Mytimes tijd;
	Mytimes theTime;
	theTime.setTime(17, 35, 25);
	tijd.setTime(12, 30, 20);
	tijd.giveTime();
	tijd.add(5, 5, 5);
	tijd.giveTime();
	tijd.equals(theTime);
	std::cin.get();
	return 0;

}

void Mytimes::giveTime() {
	normalise();
	std::cout << hours << " h " << mins << " min " << secs << " sec " << std::endl;
}
void Mytimes::setTime(int hours, int mins, int secs) {
	this->hours = hours; this->mins = mins; this->secs = secs;
}
int Mytimes::getHours() {
	return(hours);
}
int Mytimes::getMins() {
	return(mins);
}
int Mytimes::getSecs() {
	return(secs);
}
void Mytimes::tick() {
	secs++;
}
void Mytimes::add(int hours, int mins, int secs) {
	this->hours += hours;
	this->mins += mins;
	this->secs += secs;
}
bool Mytimes::equals(Mytimes & time) {
	
	bool a = (this->hours == time.getHours() && this->mins == time.getMins() && this->secs == time.getSecs());
	std::cout << a;
	return a;
}
void Mytimes::normalise() {
	if (secs > 59) {
		secs %= 60;
		mins++;
	}
	if (mins > 59) {
		mins %= 60;
		hours++;
	}
}
//bool Mytimes::compare(int hours, int mins, int secs) {
//	return(this->hours == hours&& this->mins == mins && this->secs == secs);
//}

