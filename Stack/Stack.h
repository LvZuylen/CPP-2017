#pragma once
#define MAX 256

class Stack {
public:
	Stack();
	virtual void push(int a);
	virtual int pop();
	virtual void print(); //print inhoud van de stack op het scherm
private:
	int stack_array[MAX];
	int SP;

};