// search.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include<conio.h>
using namespace std;

int a[5];
void sort()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i] > a[j])
			{
				int temp;
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}
void input()
{
	cout << "Enter the elements" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		cout << endl;
	}
}
void linear()
{
	int j, found = 0;
	cout << "Enter the element you want to search" << endl;
	cin >> j;
	for (int i = 0; i < 5; i++)
	{
		if (j == a[i])
		{
			found++;
		}
	}
	if (found != 0)
	{
		cout << "Element found and Its frquency is "<<found<<endl;
	}
}
void binary()
{
	void sort();
	int down = 0, up = 4, mid, found = 4, num;

	cout << "Enter the number you want to search" << endl;
	cin >> num;
	cout << endl;
	while (found != 1 && found != 0)
	{
		mid = (up + down) / 2;
		if (a[mid] == num||a[up]==num||a[down]==num)
		{
			cout << "Element found";
			found = 1;
		}
		else if (a[mid] > num)
		{
			up = mid;
			mid = (up + down) / 2;
		}
		else if (a[mid] < num)
		{
			down = mid;
			mid = (up + down) / 2;		
		}
		if (up == mid  || down == mid )
		{
			cout << "Element not found" << endl;
			found = 0;
		}
		
	}
}
int main()
{
	int ch=0;
	while (ch != 4)
	{
		_getch();
		system("cls");
		cout<<"\n1 input\n2 linear search\n3 binary search \n4 exit"<<endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			input();
			break;
		case 2:
			linear();
			break;
		case 3:
			binary();
			break;
		default:
			break;
		}
	}
	return 0;
}
