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
	for (int i = 0; i < SP; i++) {
		std::cout << stack_array[SP] << std::endl;
	}
}
