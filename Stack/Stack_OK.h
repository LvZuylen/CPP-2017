#pragma once
#include "Stack.h"

class Stack_ok : public Stack {
public:
	virtual void push(int b);
	virtual int pop();
private:
	int SP;
	int stack_array[MAX];
};
