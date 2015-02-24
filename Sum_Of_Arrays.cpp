#include<iostream>
using namespace std;

void FindSum(int *arr1, int *arr2, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + arr1[i] * arr2[i];
	}
	cout<< sum<<endl;
}
int main() {
	int arr1[5] = { 10, 5, 1, 3, 666 };
	int size = 5;
	int arr2[5] = { 7, 2, 3, 5, 777 };
	FindSum(arr1, arr2, size);
	return 0;
}