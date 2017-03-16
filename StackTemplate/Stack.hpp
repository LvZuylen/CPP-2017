#pragma once
#include <iostream>
#define MAX 256
template <class Type> class Stack {
public:
	Stack();
	virtual void push(Type a);
	virtual int pop();
	virtual void print(); //print inhoud van de stack op het scherm
	virtual int getSP();
	virtual void setSP(int a);
	virtual void setStack_array(int index, Type a);
	virtual Type* getStack_array();
private:
	Type stack_array[MAX];
	int SP;
};



template <class Type> Stack<Type>::Stack() {
	stack_array[MAX] = { 0 };
	SP = 0;
}

template <class Type> void Stack<Type>::push(Type a) {
	stack_array[SP] = a;
	SP++;
}

template <class Type> int Stack<Type>::pop() {
	return SP--;
}

template <class Type> void Stack<Type>::print() {
	std::cout << "Stack: \n";
	for (int i = 0; i < SP; i++) {
		std::cout << stack_array[i] << std::endl;
	}
}

template <class Type> int Stack<Type>::getSP() {
	return SP;
}

template <class Type> void Stack<Type>::setSP(int a) {
	SP = a;
}

template <class Type> void Stack<Type>::setStack_array(int index, Type a) {
	stack_array[index] = a;
}

template <class Type> Type * Stack<Type>::getStack_array() {
	return stack_array;
}
