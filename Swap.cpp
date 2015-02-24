#include<iostream>
using namespace std;

int main() {
	int var1 = 15;
	int var2 = 8;
	int *pVar1 = &var1;
	int *pVar2 = &var2;
	//Swapping the values of var1 and var2
	int temp = *pVar1;
	*pVar1 = *pVar2;
	*pVar2 = temp;
	cout << pVar1 << " " << var1 << " " << pVar2 << " " << var2 << endl;
	return 0;
}