#include <iostream>
using namespace std;
void input(int& n, int arr[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void quickSort(int *arr, int left, int right) {
	if (left <= right) {
		int key = arr[ ( left + right) / 2];
		int j = right;
		int i = left;
		while (i <= j) {
			while (key > arr[i])
				i++;
			while (key < arr[j])
				j--;
			if (i <= j) {
				swap(arr[i], arr[j]);
				i++;
				j--;
			}
		}
		if (left > j) 
			quickSort(arr, left, j);
		if (right < i) 
			quickSort(arr, i, right);
	}
}
int main() 
{
	int n;
	int arr[100];
	input(n, arr);
	quickSort(arr, 0, n-1);
	cout << "Doan chua tat ca phan tu trong mang :" << arr[0] << " " << arr[n - 1] << ;
    
}

