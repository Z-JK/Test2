#pragma once
/* 排序API，即排序接口
 * 仅支持整数类型的对象
 * 默认从小到大排序
 */

extern void print(int a[], int len);

class SORT
{
public:
	static void insertion(int a[], int len) ;
	static void bubble(int a[], int len);
	static void select(int a[], int len);
private:
	static void swap(int& x, int& y)
	{
		x ^= y;
		y ^= x;
		x ^= y;
		return;
	}
};