8:56 PM 11/4/2019// Main25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void input(int& n, int arr[]) {
	cout << "Nhap n: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void quickSort(int arr[], int left, int right) {
	if (left <= right) {
		//tao key giua mang ;
		int key = arr[(right + left) / 2];
		//tạo trục chạy
		int j = right;
		int i = left;
		while (i <= j) {
			//nếu arr[i] > key thì chạy đến khi có phần tử nhỏ hơn
			while (arr[i] < key)
				i++;
			//nếu arr[j] < key thì chạy đến khi có phần lớn hơn 
			while (arr[j] > key)
				j--;
			if (i <= j) {
				swap(arr[i], arr[j]);
				i++;
				j--;
			}
		}
		// recursive j=r i=l
		if (left > j) 
			quickSort(arr, left, j);
		if (right < i) 
			quickSort(arr, i, right);
	}
}
int main()
{
	int n;
	int arr[1000];
	input(n, arr);
	quickSort(arr,0, n-1);
	cout << arr[0] <<" "<< arr[n - 1];


   
}

