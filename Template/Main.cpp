#include "Wissel.h"

int main(int argc, char *argv[]) {
	double x = 1.5, y = 2.6;
	int i = 1, j = 2;
	char c1 = 'a', c2 = 'b';

	Wissel<double> a_wissel;
	Wissel<int> b_wissel;
	Wissel<char> c_wissel;

	a_wissel.wissel(x, y);
	b_wissel.wissel(i, j);
	c_wissel.wissel(c1, c2);
	std::cin.get();
	return 0;
}
