#pragma once
#define MAX 256

class Stack {
public:
	Stack();
	virtual void push(int a);
	virtual int pop();
	virtual void print(); //print inhoud van de stack op het scherm
	virtual int getSP();
	virtual void setSP(int a);
	virtual void setStack_array(int index, int a);
	virtual int* getStack_array();
private:
	int stack_array[MAX];
	int SP;

};