#pragma once
#include "Stack.hpp"

template <class Type> class Stack_ok : public Stack<Type> {
public:
	virtual void push(Type b);
	virtual int pop();
};

template <class Type> void Stack_ok<Type>::push(Type b) {
	if (getSP() < MAX) {
		setStack_array(getSP(), b);
		setSP(getSP() + 1);
	}
	else return;
}

template <class Type> int Stack_ok<Type>::pop() {
	if (getSP() > 0) {
		setSP(getSP() - 1);
		return getSP();
	}
	else return -1;
}