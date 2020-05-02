//#pragma once

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum {MAX=10};
	Item items[MAX];
	int top;

public:
	Stack();
	bool isempty() const;
	bool isfull()const;
	//push() return false if stack already is full , ture otherwise

	bool push(const Item& item);
	//pop()returns false if stack already is empty, true otherwise
	bool pop(Item& item);

};
#endif // !STACK_H_

