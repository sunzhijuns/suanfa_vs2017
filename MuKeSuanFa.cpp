// MuKeSuanFaKongZhiTai.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include"SortTestHelper.h"

#include<ctime>

using namespace std;

void selectionSort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}

		}
		swap(arr[i],arr[minIndex]);
	}

}



int main() {
	int n = 10;
	int *a = SortTestHelper::generateRandomArray(n,0,n);
	selectionSort(a, n);
	SortTestHelper::printArray(a, n);
	delete[] a;





	srand(time(NULL));
	
	cout << rand();
	system("pause");

	return 0;
}