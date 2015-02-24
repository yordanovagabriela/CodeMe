#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	unsigned long long int fact = 1;
	cin >> n;
	for (int a = 1; a <= n; a++){
		fact = fact*a;}
	cout << fact << endl;
	return 0;
}