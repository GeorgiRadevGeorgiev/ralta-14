// Ralta 14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void printerHPforArrays(int *arr, int size) {

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

}

void Swap(int *a, int *b) {

	int c;
	c = *a;
	*a = *b;
	*b = c;
}


int main()
{

/* 
	int dixOutForHarambe = 123;

	cout << &dixOutForHarambe << endl;
	int *a = &dixOutForHarambe;
	cout << *a << endl;

	dixOutForHarambe = 234;
	cout << *a << endl;

	*a = 345;
	cout << *a << endl;
*/ 


	/* int num1 = 5, num2 = 3;

	cout << num1 << ", " << num2 << endl;

	Swap(&num1, &num2);

	cout << num1 << ", " << num2 << endl; */


	/*int masif[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };

	printerHPforArrays(masif, 14);*/

	system("pause");
    return 0;
}

