#include "STACK.H"


/**************** STACK 实现 **********************/
bool STACK::isEmpty()
{
	return (this->top == -1);
}

bool STACK::isFull()
{
	return (this->top == MAXN - 1);
}
/**************************************************/


/**************** STACK_INT 实现 **********************/
void STACK_INT::getTop(int &x)
{
	if (this->isEmpty()) return;
	x = this->S[top];
	return;
}

 bool STACK_INT::push(int x)
{
	 bool result = false;
	 if (this->isFull()) return result;
	 S[++top] = x;
	 result = true;
	 return result;
}

bool STACK_INT::pop(int& x)
{
	bool result = false;
	if (this->isEmpty()) return result;
	x = S[top--];
	result = true;
	return result;
}
/******************************************************/

/**************** STACK_CHAR 实现 **********************/
void STACK_CHAR::getTop(char& x)
{
	if (this->isEmpty()) return;
	x = this->S[top];
	return;
}

bool STACK_CHAR::push(char x)
{
	bool result = false;
	if (this->isFull()) return result;
	S[++top] = x;
	result = true;
	return result;
}

bool STACK_CHAR::pop(char& x)
{
	bool result = false;
	if (this->isEmpty()) return result;
	x = S[top--];
	result = true;
	return result;
}
/*******************************************************/

/****************** 输入后缀运算表达式 ******************/
extern int calculate()
{
	char* s = NULL;
	int a, b;
	int result;
	STACK_INT stack;
	while (scanf_s("%s", s) != EOF)
	{
		
		if (s[0] == '+')
		{
			stack.pop(a);
			stack.pop(b);
			stack.push(a + b);
		}
		else if (s[0] == '-')
		{
			stack.pop(a);
			stack.pop(b);
			stack.push(a - b);
		}
		else if (s[0] == '*')
		{
			stack.pop(a);
			stack.pop(b);
			stack.push(a * b);
		}
		else stack.push(atoi(s));
	}
	stack.getTop(result);
	return result;
}