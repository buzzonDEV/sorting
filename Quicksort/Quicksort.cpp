// Quicksort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void quicksort(int A[], int lb, int hb);

int setPiv(int A[], int lb, int hb);

int main()
{
	const int n = 15;
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	system("pause");
	cout << endl;
	int lb = 0;
	int hb = n;
	quicksort(a, lb, hb);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	system("pause");
}

void quicksort(int A[], int lb, int hb) {
	if (lb < hb) {
		int piv = setPiv(A, lb, hb);
		quicksort(A, lb, piv);
		quicksort(A, hb, piv);
	}
}

//template <typename T>
int setPiv(int A[], int lb, int hb)
 {
	int pivot = A[lb];
	int i = lb - 1;
	int j = hb + 1;
	while (1)
	{
		do {
			i=i+1;
		} while (A[i] < pivot);

		do {
			j=j-1;
		} while (A[j] > pivot);

		if (i >= j)
			return j;

		int x = A[i];
		A[i] = A[j];
		A[j] = x;

	}
}


//aaaaaddd