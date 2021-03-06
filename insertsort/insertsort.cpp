// insertsort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void insertsort(int a[], int n)
{
	int key = 0, i = 1, j = 0;
	while (i < n)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && key < a[j])
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
		i++;
	}
}

int main()
{
	int data[10], i;
	cout << "please input 10 nums:" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> data[i];
	}
	cout << "the nums you input is:" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
	insertsort(data, 10);
	cout << "the sequence of nums is:" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << data[i] << " ";
	}
	return 0;
}