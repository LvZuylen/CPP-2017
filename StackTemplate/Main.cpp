#include "Stack.hpp"
#include "Stack_OK.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
	Stack<int> *stack = new Stack_ok<int>();
	Stack<double> *stack2 = new Stack_ok<double>();
	stack->push(5);
	stack->push(3);
	stack->print();
	std::cout << "removed index " << stack->pop() << std::endl;
	stack->print();

	stack2->push(5.45);
	stack2->push(3.67);
	stack2->print();
	std::cout << "removed index " << stack2->pop() << std::endl;
	stack2->print();

	std::cin.get();
	return 0;
}