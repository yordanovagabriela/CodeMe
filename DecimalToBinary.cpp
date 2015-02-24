#include <iostream>
#include<math.h>
using namespace std;
int main() {
	int num;
	int arr[8];
	cin >> num;
	if (num > 255 || num < 0) {
		cout << "error"<<endl;
	}
	else {
		for (int i = 7; i >= 0; i--) {
			if (num % 2 == 0) {
				arr[i] = 0;
			}
			else {
				arr[i] = 1;
			}
			num = num / 2;
		}
		for (int j = 0; j <= 7; j++) {
			cout << arr[j];
		}
		cout << endl;
	}
	return 0;
}




