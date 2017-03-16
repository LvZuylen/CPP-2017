#include "Stack.h"
#include "Stack_OK.h"
#include <iostream>

int main(int argc, char *argv[]) {
	Stack *stack = new Stack_ok();
	stack->push(5);
	stack->push(3);
	stack->print();
	std::cout << "removed index " << stack->pop() << std::endl;
	stack->print();
	std::cin.get();
	return 0;
}