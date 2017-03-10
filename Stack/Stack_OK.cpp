#include "Stack_OK.h"

void Stack_ok::push(int b) {
	if (SP < MAX) {
		stack_array[SP] = b;
		SP++;
	}
	else return;
}

int Stack_ok::pop()
{
	if (SP > 0) {
		return SP--;
	}
	else return -1;
}
