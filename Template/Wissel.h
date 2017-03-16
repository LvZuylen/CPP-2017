#pragma once
#include <iostream>

template <class A_Type> class Wissel {
public:
	void wissel(A_Type a, A_Type b);
	//Wissel();
private:
	A_Type z;
};

//template <class A_Type> A_Type Wissel<A_Type>::Wissel() {
//	z = 0;
//}

template <class A_Type> void Wissel<A_Type>::wissel(A_Type a, A_Type b) {
	std::cout << a << " " << b << std::endl;
	z = a;
	a = b;
	b = z;
	std::cout << a << " " << b << std::endl;
}