#include "GLOBALS.H"
#include "SORT.H"

extern void print(int a[], int len)
{
	for (int i = 0; i < len - 1; i++)
		cout << a[i] << ' ';
	cout << a[len - 1] << endl;
	return;
}

void SORT::insertion(int a[], int len)
{
	for (int i = 1; i < len; i++)
	{
		int j = i - 1, v = a[i];
		while (j > 0 && a[j] > v)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
	}
	return;
}

void SORT::bubble(int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = len - 1; j >= i + 1; j--)
			if (a[j] < a[j - 1]) swap(a[j], a[j - 1]);
	}
	return;
}

void SORT::select(int a[], int len)
{
	int minv_index = 0;
	for (int i = 0; i < len - 1; i++)
	{
		minv_index = i;
		for (int j = i + 1; j < len; j++)
			if (a[j] < a[minv_index]) minv_index = j;
		swap(a[i], a[minv_index]);
	}
}