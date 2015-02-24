#include<string>
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	char arr[] = "war is peace.freedom is slavery.ignorance is strength.";
	int size = strlen(arr);
	int sum = 0;
	for (int i = 0; i < size; i++) {
		int var;
		var = int(arr[i]);
		sum = sum + var;
	}
	cout << sum;
	int num;
	for (num = 2; num < sum; num++) {
		if (sum%num != 0) {
			cout << " " << 1 << endl; break;
		}
		else {
			cout << " " << 0 << endl;
		}
	}
	return 0;
}