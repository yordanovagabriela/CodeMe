#include <iostream>
using namespace std;
int main()
{
	unsigned int N;
	unsigned int s = 0;
	cin >> N;
	for (int n = 1; n <= N; n++) {
		if (n % 2 != 0) {
			s = s + n;} }
	cout << s << endl;
	return 0;
}