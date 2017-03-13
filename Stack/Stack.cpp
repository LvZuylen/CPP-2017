#include "Stack.h"
#include <iostream>

Stack::Stack() {
	stack_array[MAX] = { 0 };
	SP = 0;
}

void Stack::push(int a) {
	stack_array[SP] = a;
	SP++;
}

int Stack::pop() {
	return SP--;
}

void Stack::print() {
	std::cout << "Stack: \n";
	for (int i = 0; i < SP; i++) {
		std::cout << stack_array[i] << std::endl;
	}
}

int Stack::getSP() {
	return SP;
}

void Stack::setSP(int a) {
	SP = a;
}

void Stack::setStack_array(int index, int a) {
	stack_array[index] = a;
}

int * Stack::getStack_array() {
	return stack_array;
}
