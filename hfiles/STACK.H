#pragma once
/* 栈数据结构的实现
 * 仅支持存储整数类型的对象
 */
extern int calculate();

#include "GLOBALS.H"
class STACK {
	
	int top;
protected:
	static const int MAXN = 100;
public:
	void getTop(int& x);
	bool isEmpty();
	bool isFull();
	void push(int x);
	void pop(int& x);
};

class STACK_INT : public STACK {
	int S[MAXN + 1];
	int top = -1;

public:
	void getTop(int& x);
	bool push(int x);
	bool pop(int& x);
};

class STACK_CHAR : public STACK {
	char S[MAXN + 1];
	int top = -1;

public:
	void getTop(char& x);
	bool push(char x);
	bool pop(char& x);
};