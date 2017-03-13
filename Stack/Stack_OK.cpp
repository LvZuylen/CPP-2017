#include "Stack_OK.h"

void Stack_ok::push(int b) {
	if (getSP() < MAX) {
		setStack_array(getSP(), b);
		setSP(getSP()+1);
	}
	else return;
}

int Stack_ok::pop() {
	if (getSP() > 0) {
		setSP(getSP() - 1);
		return getSP();
	}
	else return -1;
}
